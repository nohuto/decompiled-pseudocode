/*
 * XREFs of PspAssignPrimaryToken @ 0x140776B18
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     PspLockUnlockProcessExclusive @ 0x140441BB0 (PspLockUnlockProcessExclusive.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     ObClearProcessDeviceMap @ 0x140ADA628 (ObClearProcessDeviceMap.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  int IsTokenAssignableToProcess; // ebx
  __int64 v9; // r9
  signed __int32 *v10; // rdi
  signed __int64 v11; // rax
  _BYTE v12[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID v13; // [rsp+48h] [rbp-18h] BYREF
  PVOID v14; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+58h] [rbp-8h] BYREF

  v12[0] = 0;
  v14 = 0LL;
  v13 = 0LL;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v13, 0LL);
  if ( result >= 0 )
  {
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess(v13, v12);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v12[0]
        || (LOBYTE(v9) = a2, (unsigned __int8)SeCheckPrivilegedObject(PspSiloMonitorLock.StateSaveArea, a3, 512LL, v9)) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(a3, 0x65537350u, (__int64)&v14, 0LL, 0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = (signed __int32 *)v14;
          Object = 0LL;
          if ( _bittest((const signed __int32 *)v14 + 124, 0xFu) )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessShared((__int64)v14, a1);
            if ( _bittest(v10 + 124, 0xFu) )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v13, &Object);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v11 = _InterlockedIncrement64(&PsNextSecurityDomain);
                *((_QWORD *)v10 + 236) = v11;
                *((_QWORD *)v10 + 237) = v11;
                PspSynchronizeThreadIsolationDomains((__int64)v10);
              }
            }
            PspUnlockProcessShared((__int64)v10, a1);
            if ( IsTokenAssignableToProcess >= 0 )
            {
              PspLockUnlockProcessExclusive((__int64)v10, a1);
              ObfDereferenceObject(Object);
              ObClearProcessDeviceMap(v10);
            }
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v13);
    return IsTokenAssignableToProcess;
  }
  return result;
}

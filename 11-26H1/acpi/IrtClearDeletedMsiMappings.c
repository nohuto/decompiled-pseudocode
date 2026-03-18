/*
 * XREFs of IrtClearDeletedMsiMappings @ 0x1400C3CBC
 * Callers:
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall IrtClearDeletedMsiMappings(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  NTSTATUS result; // eax
  PVOID Owner; // rdi
  _DWORD *UserData; // rbx
  int v5; // esi
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[4]; // [rsp+68h] [rbp+7h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp+Bh] BYREF
  unsigned int v12; // [rsp+70h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+78h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+A0h] [rbp+3Fh] BYREF
  int v16; // [rsp+A8h] [rbp+47h]

  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v15 = 0LL;
  v16 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  Range = 0LL;
  v10[0] = 0;
  result = RtlGetFirstRange(v1, &Iterator, &Range);
  while ( Range )
  {
    Owner = Range->Owner;
    if ( Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          if ( (UserData[1] & 8) != 0 && UserData[2] == 3 )
          {
            v5 = *((unsigned __int8 *)UserData + 26);
            v11 = 0;
            v12 = 0;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
            if ( InterruptRouting )
            {
              v11 = -1;
              v12 = -1;
              v6 = (*((__int64 (__fastcall **)(PVOID, unsigned int *, unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _BYTE *, __int64 *))InterruptRouting
                    + 4))(
                     Owner,
                     &v11,
                     &v12,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     0LL,
                     v10,
                     &v15);
            }
            else
            {
              v6 = -1073741275;
              v12 = 0;
              v11 = 0;
            }
            ExReleaseResourceLite(&PciRouteInterfaceLock);
            KeLeaveCriticalRegion();
            if ( v6 < 0 )
            {
              LOBYTE(v7) = 0;
              v8 = 0LL;
              v9 = 0LL;
              v10[0] = 0;
              v15 = 0LL;
              v16 = 0;
            }
            else
            {
              v8 = v11;
              v9 = v12;
              LOBYTE(v7) = v10[0];
            }
            ((void (__fastcall *)(__int64, __int64, __int64 *, __int64, _DWORD *, int))HalPrivateDispatchTable[65])(
              v8,
              v9,
              &v15,
              v7,
              UserData + 8,
              v5);
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}

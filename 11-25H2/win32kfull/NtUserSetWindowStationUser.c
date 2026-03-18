/*
 * XREFs of NtUserSetWindowStationUser @ 0x1401F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _SetWindowStationUser @ 0x1401F9BE8 (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, __int64 *a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID Object; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF
  char v15; // [rsp+78h] [rbp+10h]

  v15 = (char)a2;
  v4 = a4;
  v8 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  LOBYTE(v9) = 1;
  if ( (int)ValidateHwinsta(a1, v9, 0LL, &Object) >= 0 )
  {
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *a2;
    if ( a3 )
    {
      if ( !(_DWORD)v4 )
      {
LABEL_8:
        ObfDereferenceObject(Object);
        goto LABEL_9;
      }
      ProbeForRead(a3, v4, 4u);
    }
    v8 = SetWindowStationUser(Object, &v13, a3, (unsigned int)v4);
    goto LABEL_8;
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}

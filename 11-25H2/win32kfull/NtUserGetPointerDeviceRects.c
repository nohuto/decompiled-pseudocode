/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x140090B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x140090CA4 (_GetPointerDeviceRects.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v13; // [rsp+58h] [rbp-30h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v6 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v11, &v13) )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    v8 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[15] = v8[15];
    *a2 = v11;
    *a3 = v13;
    v6 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}

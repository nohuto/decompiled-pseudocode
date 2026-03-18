/*
 * XREFs of DxgkEngGetDC @ 0x1401AD150
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EDB0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140175244 (--0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall DxgkEngGetDC(__int64 a1, _QWORD *a2)
{
  __int64 DC; // rax
  __int64 v4; // rdi
  __int64 *v6[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
    *a2 = 0LL;
  DC = NtUserGetDC();
  v4 = DC;
  if ( DC )
  {
    if ( !a2 )
      return v4;
    MDCOBJA::MDCOBJA((__int64)v6, DC);
    if ( v6[0] )
      *a2 = GreCreateDisplayDC(v6[0][6], 0LL, 0LL);
    XDCOBJ::vAltUnlockNoNullSet(v6);
    if ( *a2 )
      return v4;
    UserReleaseDC(v4);
  }
  return 0LL;
}

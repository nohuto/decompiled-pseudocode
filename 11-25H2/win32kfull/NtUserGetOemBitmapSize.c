/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1402984D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  int v4; // ebx
  ULONG64 v5; // rcx
  __int64 OemBitmapInfo; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v10; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( a1 < 0x5D )
  {
    OemBitmapInfo = GetOemBitmapInfo(a1);
    v7 = *(__int16 *)(OemBitmapInfo + 4);
    v8 = *(__int16 *)(OemBitmapInfo + 6);
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v10) = *(__int16 *)(OemBitmapInfo + 6);
    LODWORD(v10) = *(__int16 *)(OemBitmapInfo + 4);
    *a2 = v10;
    if ( v7 && v8 )
      v4 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}

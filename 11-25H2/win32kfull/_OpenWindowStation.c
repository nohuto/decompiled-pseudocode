/*
 * XREFs of _OpenWindowStation @ 0x1401CE8D8
 * Callers:
 *     NtUserOpenWindowStation @ 0x1401E4DE0 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktop @ 0x140244080 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x140289210 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  LOBYTE(a3) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, a3, 0LL, a2, 0LL, &v5);
  if ( v3 < 0 )
  {
    SetLastNtError(v3);
    return 0LL;
  }
  return v5;
}

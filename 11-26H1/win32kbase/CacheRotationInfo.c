/*
 * XREFs of CacheRotationInfo @ 0x14019CBCC
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall CacheRotationInfo(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2696LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

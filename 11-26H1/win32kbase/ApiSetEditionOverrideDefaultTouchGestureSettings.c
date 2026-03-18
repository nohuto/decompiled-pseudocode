/*
 * XREFs of ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1401C1CA0
 * Callers:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400EE59C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionOverrideDefaultTouchGestureSettings(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v3; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6912LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6920LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(a1);
    }
  }
  return result;
}

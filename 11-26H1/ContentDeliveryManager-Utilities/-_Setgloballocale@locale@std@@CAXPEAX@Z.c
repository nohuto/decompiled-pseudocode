/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005584
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800052FC (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x18000CFCC (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_18017F518 )
  {
    byte_18017F518 = 1;
    _Atexit(tidy_global);
  }
  qword_18017F4D8 = a1;
}

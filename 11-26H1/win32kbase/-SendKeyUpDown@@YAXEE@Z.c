/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x14021CA34
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x14007EC78 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x140088250 (InternalMapVirtualKeyEx.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     GetCurrentKbdTables @ 0x14021CB30 (GetCurrentKbdTables.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 CurrentKbdTables; // rax
  int v4; // r8d
  _OWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a1;
  memset(v5, 0, sizeof(v5));
  WORD1(v5[0]) = a1 | 0x4000;
  if ( a2 )
    WORD1(v5[0]) = a1 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v5[0]) = InternalMapVirtualKeyEx(v2, 0, CurrentKbdTables);
  LOBYTE(v4) = 1;
  xxxProcessKeyEvent((unsigned __int16 *)v5, 0LL, v4, 0, 0LL, 0LL);
}

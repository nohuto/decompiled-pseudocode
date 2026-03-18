/*
 * XREFs of UnregisterModernAppThreadForRawKeyboard @ 0x140275284
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1402679C8 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x14011CE00 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x140274598 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UnregisterModernAppThreadForRawKeyboard(__int64 a1)
{
  const struct tagPROCESSINFO *v2; // rcx
  __int64 v3; // rax
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( (unsigned int)HasHidTable(a1) )
  {
    v2 = *(const struct tagPROCESSINFO **)(a1 + 464);
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 103) + 100LL) & 0x1000) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 1360);
      if ( (v3 & 0x200000) != 0 )
      {
        *(_QWORD *)(a1 + 1360) = v3 & 0xFFFFFFFFFFDFFFFFuLL;
        if ( !(unsigned int)HasRawKeyboardPerThreadRegistration(v2) )
        {
          v6 = 0LL;
          v5[0] = 393217;
          v5[1] = 1;
          RegisterRawInputDevices((__int64)v5, 1u, 2u);
        }
      }
    }
  }
  return 1LL;
}

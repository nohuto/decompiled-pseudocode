/*
 * XREFs of ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000F0C4
 * Callers:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000EFF0 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000EC1C (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?copy@?$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z @ 0x14000EDE8 (-copy@-$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z.c)
 */

__int64 __fastcall std::wstring::copy(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  void *v5; // r9

  v3 = a3;
  if ( *(_QWORD *)(a1 + 16) < a3 )
    v3 = *(_QWORD *)(a1 + 16);
  if ( std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1) )
    v4 = (_QWORD *)*v4;
  std::_Char_traits<unsigned short,unsigned short>::copy(v5, v4, v3);
  return v3;
}

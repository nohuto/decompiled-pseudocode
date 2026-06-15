/*
 * XREFs of ?_Better_match@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NXZ @ 0x18013E8BC
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Better_match(
        __int64 a1)
{
  unsigned int v1; // r11d
  unsigned int v2; // r9d
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8

  v1 = *(_DWORD *)(a1 + 196);
  v2 = 0;
  if ( !v1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    v5 = (unsigned __int64)v2 >> 5;
    if ( ((1 << v2) & *(_DWORD *)(v4 + 4 * v5)) != 0 && ((1 << v2) & *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v5)) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v7 = *(_QWORD *)(a1 + 104);
      v8 = *(_QWORD *)(v6 + 16LL * v2);
      v9 = *(_QWORD *)(v7 + 16LL * v2);
      if ( v9 != v8 )
        break;
      v9 = *(_QWORD *)(v7 + 16LL * v2 + 8);
      v8 = *(_QWORD *)(v6 + 16LL * v2 + 8);
      if ( v9 != v8 )
        break;
    }
    if ( ++v2 >= v1 )
      return 0;
  }
  return (__int64)((v9 - *(_QWORD *)(a1 + 152)) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)((v8 - *(_QWORD *)(a1 + 152)) & 0xFFFFFFFFFFFFFFFEuLL);
}

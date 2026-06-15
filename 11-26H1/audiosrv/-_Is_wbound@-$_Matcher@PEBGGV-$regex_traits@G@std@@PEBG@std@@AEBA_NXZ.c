/*
 * XREFs of ?_Is_wbound@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEBA_NXZ @ 0x18013F724
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??$_Is_word@G@std@@YA_NG@Z @ 0x180133970 (--$_Is_word@G@std@@YA_NG@Z.c)
 */

char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Is_wbound(
        __int64 a1)
{
  int v1; // eax
  unsigned __int16 *v2; // rdx
  char v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 *v6; // r9
  unsigned __int16 *v7; // r9
  bool v8; // al
  char v9; // r8

  v1 = *(_DWORD *)(a1 + 188);
  if ( (v1 & 0x100) == 0 )
  {
    v2 = *(unsigned __int16 **)a1;
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 152) )
    {
      if ( v2 == *(unsigned __int16 **)(a1 + 160) )
        return (v1 & 0xC) == 0;
      v4 = 0;
      if ( (v1 & 4) != 0 )
        return v4;
      v5 = *v2;
      goto LABEL_10;
    }
  }
  v6 = *(unsigned __int16 **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 160) )
  {
    v4 = 0;
    if ( (v1 & 8) != 0 )
      return v4;
    v5 = *(v6 - 1);
LABEL_10:
    if ( std::_Is_word<unsigned short>(v5) )
      return 1;
    return v4;
  }
  std::_Is_word<unsigned short>(*(v6 - 1));
  v8 = std::_Is_word<unsigned short>(*v7);
  return v9 ^ v8;
}

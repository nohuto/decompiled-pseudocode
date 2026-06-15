/*
 * XREFs of ??$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU?$_Sequence@G@0@@Z @ 0x180133994
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013EEEC (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x18014DB58 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall std::_Lookup_coll<unsigned short const *,unsigned short>(
        __int16 *a1,
        __int16 *a2,
        unsigned int *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdi
  __int16 *v7; // r11
  _WORD *v8; // rcx
  __int16 v9; // ax

  while ( 1 )
  {
    if ( !a3 )
      return a1;
    v4 = 0LL;
    if ( a3[3] )
      break;
LABEL_10:
    a3 = (unsigned int *)*((_QWORD *)a3 + 3);
  }
  v5 = *a3;
  while ( 1 )
  {
    v6 = 0LL;
    v7 = a1;
    if ( *a3 )
    {
      v8 = (_WORD *)(*((_QWORD *)a3 + 2) + 2 * v4);
      do
      {
        v9 = *v7++;
        if ( v9 != *v8 )
          break;
        ++v6;
        ++v8;
      }
      while ( v6 < v5 );
    }
    if ( v7 == a2 )
      return a2;
    v4 = (unsigned int)(v5 + v4);
    if ( (unsigned int)v4 >= a3[3] )
      goto LABEL_10;
  }
}

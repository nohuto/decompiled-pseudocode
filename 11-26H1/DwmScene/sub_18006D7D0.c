/*
 * XREFs of sub_18006D7D0 @ 0x18006D7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_QWORD *__fastcall sub_18006D7D0(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingCamera>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}

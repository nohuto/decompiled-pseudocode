/*
 * XREFs of sub_18002AD40 @ 0x18002AD40
 * Callers:
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18002A2A4 @ 0x18002A2A4 (sub_18002A2A4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002AD40(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C514(504LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingManager>::`vftable';
    sub_18002A2A4();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}

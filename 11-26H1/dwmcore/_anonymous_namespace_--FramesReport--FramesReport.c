/*
 * XREFs of _anonymous_namespace_::FramesReport::FramesReport @ 0x180210034
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall anonymous_namespace_::FramesReport::FramesReport(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, a2);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *(_QWORD *)(a1 + 144) = v3;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x40uLL, v4);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)(a1 + 160) = v5;
  result = a1;
  *(_OWORD *)(a1 + 176) = 0LL;
  return result;
}

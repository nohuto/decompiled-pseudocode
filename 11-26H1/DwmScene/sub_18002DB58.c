/*
 * XREFs of sub_18002DB58 @ 0x18002DB58
 * Callers:
 *     sub_1800344BC @ 0x1800344BC (sub_1800344BC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

__int64 __fastcall sub_18002DB58(__int64 a1)
{
  __int64 result; // rax

  result = sub_18001C514(24LL);
  if ( result )
  {
    *(_DWORD *)(result + 8) = 1;
    *(_QWORD *)result = &std::_Ref_count_obj2<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    *(_QWORD *)(result + 16) = &Spectre::Utils::Tweening::HighPerfClock::`vftable';
    *(_DWORD *)(result + 12) = 1;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 2LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 128) = -1;
  *(_DWORD *)(a1 + 132) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( result )
    _InterlockedAdd((volatile signed __int32 *)(result + 8), 1u);
  *(_QWORD *)(a1 + 136) = result + 16;
  *(_QWORD *)(a1 + 144) = result;
  if ( result )
    return sub_180010EC8(result);
  return result;
}

/*
 * XREFs of _CAppAudioSessionId::Initialize_::_1_::dtor$5 @ 0x18016407F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~2u;
    return ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((_QWORD *)(a2 + 72));
  }
  return result;
}

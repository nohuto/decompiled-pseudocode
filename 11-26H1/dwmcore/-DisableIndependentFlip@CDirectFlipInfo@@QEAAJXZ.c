/*
 * XREFs of ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1802516BC
 * Callers:
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ @ 0x1800D5870 (-EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18023E170 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D595C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::DisableIndependentFlip(CDirectFlipInfo *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 result; // rax

  v2 = 0;
  if ( (unsigned __int8)CDirectFlipInfo::IsIndependentFlip(this) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 416LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x1C7u, 0LL);
  }
  result = v2;
  *((_DWORD *)this + 14) = 0;
  return result;
}

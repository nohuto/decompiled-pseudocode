/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker2@@AEAAXXZ @ 0x180274888
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker2@@AEAAXW4ScrollAxis@@M@Z @ 0x180271C30 (-ApplyPositionShift@CInteractionTracker2@@AEAAXW4ScrollAxis@@M@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessApplyPositionShift(
        CInteractionTracker2 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  int v7; // edx
  float v8; // xmm0_4
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 128);
  v6 = *((_QWORD *)this + 129);
  while ( v4 != v6 )
  {
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 == 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x311,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
        a4);
    if ( v7 )
      v8 = *((float *)this + 107);
    else
      v8 = *((float *)this + 106);
    if ( v8 >= *(float *)(v4 + 8) )
      CInteractionTracker2::ApplyPositionShift((__int64)this, v7, *(float *)(v4 + 4));
    v4 += 12LL;
  }
  v9 = *((_QWORD *)this + 128);
  if ( v9 != *((_QWORD *)this + 129) )
    *((_QWORD *)this + 129) = v9;
}

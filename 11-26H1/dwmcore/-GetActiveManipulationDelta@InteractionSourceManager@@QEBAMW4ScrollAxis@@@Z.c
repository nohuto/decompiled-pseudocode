/*
 * XREFs of ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18013A0F0
 * Callers:
 *     ?GetManipulationDelta@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801E3C30 (-GetManipulationDelta@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationDelta@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x1802736F0 (-GetManipulationDelta@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationDelta(InteractionSourceManager *a1)
{
  __m128 v1; // xmm6
  InteractionSourceManager *v2; // rcx
  int v3; // r10d
  struct CManipulation *ActiveManipulation; // rax
  int v5; // r10d
  __m128 v6; // xmm6
  int v8; // r10d
  struct CManipulation *v9; // rax
  int v10; // r10d
  struct CManipulation *v11; // rax
  int v12; // r10d
  unsigned int v13[16]; // [rsp+28h] [rbp-19h] BYREF
  int v14; // [rsp+68h] [rbp+27h]

  v1 = 0LL;
  if ( !InteractionSourceManager::HasActiveManipulation(a1) )
    return v1;
  if ( !v3 )
  {
    v14 = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v2);
    (*(void (__fastcall **)(struct CManipulation *, _QWORD, unsigned int *))(*(_QWORD *)ActiveManipulation + 136LL))(
      ActiveManipulation,
      (unsigned int)(v5 + 1),
      v13);
    v6 = (__m128)v13[0];
    goto LABEL_4;
  }
  v8 = v3 - 1;
  if ( !v8 )
  {
    v14 = 0;
    v9 = InteractionSourceManager::TryGetActiveManipulation(v2);
    (*(void (__fastcall **)(struct CManipulation *, _QWORD, unsigned int *))(*(_QWORD *)v9 + 136LL))(
      v9,
      (unsigned int)(v10 + 1),
      v13);
    v6 = (__m128)v13[1];
LABEL_4:
    v1 = _mm_xor_ps(v6, (__m128)_xmm);
    if ( v14 == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 16LL))(*(_QWORD *)v13);
    return v1;
  }
  if ( v8 == 1 )
  {
    v14 = 0;
    v11 = InteractionSourceManager::TryGetActiveManipulation(v2);
    (*(void (__fastcall **)(struct CManipulation *, _QWORD, unsigned int *))(*(_QWORD *)v11 + 136LL))(
      v11,
      (unsigned int)(v12 + 2),
      v13);
    v1 = (__m128)v13[0];
    CExpressionValue::DestroyCurrent((CExpressionValue *)v13);
  }
  return v1;
}

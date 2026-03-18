/*
 * XREFs of ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x18013CEE0
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x18013CE50 (--1CManipulation@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

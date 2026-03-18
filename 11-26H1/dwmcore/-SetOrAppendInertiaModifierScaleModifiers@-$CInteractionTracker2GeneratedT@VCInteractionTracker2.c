/*
 * XREFs of ?SetOrAppendInertiaModifierScaleModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DA54
 * Callers:
 *     ?SetInertiaModifierScaleModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021DA34 (-SetInertiaModifierScaleModifiers@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInte.c)
 *     ?AppendInertiaModifierScaleModifiers@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021DA44 (-AppendInertiaModifierScaleModifiers@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCI.c)
 * Callees:
 *     ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C (--$insert@PEBM$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetOrAppendInertiaModifierScaleModifiers(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  char v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = a1[44];
    if ( v4 != a1[45] )
      a1[45] = v4;
  }
  std::vector<float>::insert<float const *,0>((_DWORD)a1 + 352, (unsigned int)&v6, a1[45], a2[1], a2[1] + 4LL * *a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}

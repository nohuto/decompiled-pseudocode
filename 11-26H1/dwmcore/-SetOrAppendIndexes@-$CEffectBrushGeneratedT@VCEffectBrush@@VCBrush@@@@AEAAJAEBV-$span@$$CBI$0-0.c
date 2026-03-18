/*
 * XREFs of ?SetOrAppendIndexes@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801E1A54
 * Callers:
 *     ?AppendIndexes@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x1802471AC (-AppendIndexes@-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJAEBV-$span@$$CBI$0-0@gsl@.c)
 *     ?SetIndexes@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18024B2DC (-SetIndexes@-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJAEBV-$span@$$CBI$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C (--$insert@PEBM$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrushGeneratedT<CEffectBrush,CBrush>::SetOrAppendIndexes(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v4; // rax
  char v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = a1[16];
    if ( v4 != a1[17] )
      a1[17] = v4;
  }
  std::vector<float>::insert<float const *,0>((_DWORD)a1 + 128, (unsigned int)&v6, a1[17], a2[1], a2[1] + 4LL * *a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}

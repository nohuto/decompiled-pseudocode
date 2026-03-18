/*
 * XREFs of ?SetOrAppendInputConfigIds@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021DBF8
 * Callers:
 *     ?SetInputConfigIds@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021DBD8 (-SetInputConfigIds@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV-$span@$$CBI$0.c)
 *     ?AppendInputConfigIds@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021DBE8 (-AppendInputConfigIds@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV-$span@$$CB.c)
 * Callees:
 *     ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C (--$insert@PEBM$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetOrAppendInputConfigIds(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  char v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = a1[17];
    if ( v4 != a1[18] )
      a1[18] = v4;
  }
  std::vector<float>::insert<float const *,0>((_DWORD)a1 + 136, (unsigned int)&v6, a1[18], a2[1], a2[1] + 4LL * *a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}

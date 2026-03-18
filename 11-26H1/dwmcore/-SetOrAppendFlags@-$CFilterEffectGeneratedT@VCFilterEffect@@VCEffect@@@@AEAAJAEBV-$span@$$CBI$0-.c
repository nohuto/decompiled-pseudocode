/*
 * XREFs of ?SetOrAppendFlags@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@AEAAJAEBV?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18021D5E0
 * Callers:
 *     ?SetFlags@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021D5C0 (-SetFlags@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV-$span@$$CBI$0-0@gsl@@@.c)
 *     ?AppendFlags@?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV?$span@$$CBI$0?0@gsl@@@Z @ 0x18021D5D0 (-AppendFlags@-$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@QEAAJAEBV-$span@$$CBI$0-0@gsl.c)
 * Callees:
 *     ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C (--$insert@PEBM$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::SetOrAppendFlags(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v4; // rax
  char v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = a1[20];
    if ( v4 != a1[21] )
      a1[21] = v4;
  }
  std::vector<float>::insert<float const *,0>((_DWORD)a1 + 160, (unsigned int)&v6, a1[21], a2[1], a2[1] + 4LL * *a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}

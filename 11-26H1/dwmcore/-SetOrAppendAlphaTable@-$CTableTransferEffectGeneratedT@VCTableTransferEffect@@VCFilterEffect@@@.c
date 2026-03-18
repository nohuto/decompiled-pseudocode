/*
 * XREFs of ?SetOrAppendAlphaTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@AEAAJAEBV?$span@$$CBM$0?0@gsl@@_N@Z @ 0x18021D9C4
 * Callers:
 *     ?SetAlphaTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJAEBV?$span@$$CBM$0?0@gsl@@@Z @ 0x18021D9A4 (-SetAlphaTable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJAE.c)
 *     ?AppendAlphaTable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJAEBV?$span@$$CBM$0?0@gsl@@@Z @ 0x18021D9B4 (-AppendAlphaTable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAA.c)
 * Callees:
 *     ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C (--$insert@PEBM$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetOrAppendAlphaTable(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  char v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = a1[54];
    if ( v4 != a1[55] )
      a1[55] = v4;
  }
  std::vector<float>::insert<float const *,0>((_DWORD)a1 + 432, (unsigned int)&v6, a1[55], a2[1], a2[1] + 4LL * *a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}

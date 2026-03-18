/*
 * XREFs of ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x180218DCC
 * Callers:
 *     ?SetAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x180218DAC (-SetAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEA.c)
 *     ?AppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@@Z @ 0x180218DBC (-AppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 *     ?OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ @ 0x1801E180C (-OnAnimationsChanged@CAnimationTrigger@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetOrAppendAnimations(
        CResource *this,
        __int64 a2,
        char a3)
{
  struct CResource **v3; // rdi
  struct CResource **v7; // rbp

  v3 = *(struct CResource ***)(a2 + 8);
  v7 = &v3[*(_QWORD *)a2];
  while ( v3 != v7 )
    CResource::RegisterNotifier(this, *v3++);
  if ( !a3 )
    CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 13);
  std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
    (__int64)this + 104,
    *((char **)this + 14),
    *(const void **)(a2 + 8),
    (8LL * *(_QWORD *)a2) >> 3);
  CAnimationTrigger::OnAnimationsChanged(this);
  return 0LL;
}

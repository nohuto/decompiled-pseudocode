/*
 * XREFs of ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180208D58
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180208C28 (-Partition_SetExcludeFromDDA@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 *     ?Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180208CC0 (-Partition_SetMagnifier@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801A3454 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::RemoveVisual(CVisualGroup *this, const struct CVisual *a2)
{
  CExcludeVisualReference **v2; // rbx
  const struct CVisual *VisualNoRef; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference **)*((_QWORD *)this + 9);
  while ( v2 != *((CExcludeVisualReference ***)this + 10) )
  {
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(*v2);
    if ( !VisualNoRef || VisualNoRef == a2 )
      v2 = (CExcludeVisualReference **)*std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                          (__int64)this + 72,
                                          &v6,
                                          (__int64)v2);
    else
      ++v2;
  }
}

/*
 * XREFs of ??$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV?$CWeakReference@VCVisual@@@@PEAVCVisual@@@Z @ 0x18013EC60
 * Callers:
 *     ?SetVisual@?$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@QEAAJPEAVCVisual@@@Z @ 0x18013EBF4 (-SetVisual@-$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?Create@?$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z @ 0x18013EDCC (-Create@-$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x18013F068 (--$UnRegisterNotifier@VCVisual@@@CResource@@QEAAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CResource::ReplaceNotifier<CVisual>(struct CResource *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 trivial_8; // rax
  struct CResource **v8; // rdx
  struct CResource *v9; // [rsp+40h] [rbp+18h] BYREF

  CResource::UnRegisterNotifier<CVisual>(a1);
  if ( a3 )
  {
    CWeakReference<CBaseExpression>::Create(a3, a2);
    v6 = *a2;
    v9 = a1;
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
    trivial_8 = _std_find_trivial_8(*(_QWORD *)(v6 + 72), *(_QWORD *)(v6 + 80), a1);
    v8 = *(struct CResource ***)(v6 + 80);
    if ( (struct CResource **)trivial_8 == v8 )
    {
      if ( v8 == *(struct CResource ***)(v6 + 88) )
      {
        std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
          (_QWORD *)(v6 + 72),
          (__int64)v8,
          (__int64 *)&v9);
      }
      else
      {
        *v8 = a1;
        *(_QWORD *)(v6 + 80) += 8LL;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
  }
}

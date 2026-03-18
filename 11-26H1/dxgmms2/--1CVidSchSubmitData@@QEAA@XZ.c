/*
 * XREFs of ??1CVidSchSubmitData@@QEAA@XZ @ 0x14004C728
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x140054528 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CVidSchSubmitData::~CVidSchSubmitData(CVidSchSubmitData *this)
{
  __int64 v1; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v4; // r8
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *(_BYTE *)(v1 + 356) && (*(_DWORD *)(v1 + 336) || *(_DWORD *)(v1 + 616)) )
    {
      IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
      v4 = *(unsigned int *)(v1 + 336);
      if ( IsEnabledDeviceUsageNoInline )
      {
        WdLogSingleEntry5(0LL, 275LL, 57LL, v1, v4, *(unsigned int *)(v1 + 616));
        WdLogGlobalForLineNumber = 8482;
      }
      else
      {
        WdLogSingleEntry3(2LL, v1, v4, *(unsigned int *)(v1 + 616));
        v5 = *(unsigned int *)(v1 + 336);
        WdLogGlobalForLineNumber = 8490;
        DxgkLogInternalTriageEvent(v5, 0x40000LL);
      }
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL), *(PVOID *)this);
  }
}

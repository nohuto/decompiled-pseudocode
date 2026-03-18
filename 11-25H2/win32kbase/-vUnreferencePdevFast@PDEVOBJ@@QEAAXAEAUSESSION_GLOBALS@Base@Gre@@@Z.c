/*
 * XREFs of ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3FF0
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140155514 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1401770D0 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3CA0 (-DecrementClientReferenceCountFastOpt@PDEV@@QEAAKAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdevFast(HDEV *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  HDEV v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  HDEV v8; // rax
  HDEV v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]
  struct _ERESOURCE *v12; // [rsp+50h] [rbp+18h] BYREF

  SEMOBJ<19>::SEMOBJ<19>(&v12, (struct _ERESOURCE **)a2);
  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  v5 = *this;
  if ( IsEnabledDeviceUsageNoInline )
    v6 = PDEV::DecrementClientReferenceCountFastOpt((PDEV *)v5, a2);
  else
    v6 = PDEV::DecrementClientReferenceCount((PDEV *)v5);
  v7 = v6;
  if ( !v6 )
    RemoveHDEVFromList((HDEV *)a2 + 481, *this);
  if ( v12 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v12);
  if ( !v7 )
  {
    v8 = *this;
    v11 = 0;
    v9 = v8;
    v10 = 1;
    vUnreferencePdevWorker((__int64)&v9);
  }
}

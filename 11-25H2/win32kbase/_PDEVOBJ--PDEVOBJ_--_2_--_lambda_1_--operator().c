/*
 * XREFs of _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019D5BC
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C3C50 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x140092D10 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x140092E18 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z @ 0x140095020 (-GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x14014ED6C (PDEVOBJ_bDisableHalftoneWrap.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140155514 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x14015A764 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator()(struct _ERESOURCE *a1, struct _ERESOURCE *a2)
{
  HDEV *v2; // rdi
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rdx
  PETHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = (HDEV *)a2;
  if ( ((__int64)a2->SystemResourcesList.Flink[2].Blink & 0x8000) != 0 )
  {
    v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    SEMOBJ<19>::SEMOBJ<19>(&v7, (struct _ERESOURCE **)v3);
    RemoveHDEVFromList((HDEV *)(v3 + 3840), *v2);
    a2 = v7;
    if ( v7 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v7);
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)*v2 + 6);
  if ( v4 )
    GreDeleteSemaphore(v4);
  if ( *((_QWORD *)*v2 + 189) && (int)IsPDEVOBJ_bDisableHalftoneSupported((__int64)v4, (__int64)a2) >= 0 )
    PDEVOBJ_bDisableHalftoneWrap((__int64)v2, v5);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)v2);
  if ( *((_QWORD *)*v2 + 223) )
  {
    CurrentThread = (PETHREAD *)GreGetCurrentThread();
    if ( CurrentThread && !GreIsThreadTerminating(CurrentThread) )
      (*((void (__fastcall **)(_QWORD))*v2 + 337))(*((_QWORD *)*v2 + 223));
    *((_QWORD *)*v2 + 223) = 0LL;
  }
  PDEV::Free((struct PDEV *)*v2);
  *v2 = 0LL;
}

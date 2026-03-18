/*
 * XREFs of _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401ED020 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z @ 0x14000EBEC (-GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1400C61E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1400C6384 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     GreDeleteSemaphore @ 0x1400C6C70 (GreDeleteSemaphore.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x14018CEE0 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x14018FD00 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator()(struct _ERESOURCE *a1, HDEV *a2)
{
  __int64 v3; // rbx
  int v4; // r8d
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  void (__fastcall *v7)(HDEV *); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PETHREAD *CurrentThread; // rax
  struct _ERESOURCE *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  if ( ((_DWORD)(*a2)[10] & 0x8000) != 0 )
  {
    v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    SEMOBJ<19>::SEMOBJ<19>(&v11, (struct _ERESOURCE **)v3);
    RemoveHDEVFromList((HDEV *)(v3 + 3944), *a2);
    if ( v11 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v11,
        v4);
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)*a2 + 6);
  if ( v5 )
    GreDeleteSemaphore(v5);
  if ( *((_QWORD *)*a2 + 189) )
  {
    if ( (int)IsPDEVOBJ_bDisableHalftoneSupported((__int64)v5) >= 0 )
    {
      v7 = *(void (__fastcall **)(HDEV *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 1544LL);
      if ( v7 )
        v7(a2);
    }
  }
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)a2);
  if ( *((_QWORD *)*a2 + 223) )
  {
    CurrentThread = (PETHREAD *)GreGetCurrentThread(v9, v8);
    if ( CurrentThread && !GreIsThreadTerminating(CurrentThread) )
      (*((void (__fastcall **)(_QWORD))*a2 + 337))(*((_QWORD *)*a2 + 223));
    *((_QWORD *)*a2 + 223) = 0LL;
  }
  PDEV::Free((struct PDEV *)*a2);
  *a2 = 0LL;
}

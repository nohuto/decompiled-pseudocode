/*
 * XREFs of ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x14004CC94
 * Callers:
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004C8A0 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x14004D760 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004E1C8 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x140174ED0 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400489B0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x140142C4C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

struct CInputDest *__fastcall CTouchProcessor::GetPointerCaptureInt(
        CTouchProcessor *this,
        struct CPointerCaptureInfo *a2,
        int *a3)
{
  int v6; // edx
  int v8; // edx

  if ( !*((_DWORD *)a2 + 2) )
  {
LABEL_6:
    if ( a3 )
      *a3 = *((_DWORD *)a2 + 32);
    return (struct CInputDest *)(((unsigned __int64)a2 + 8) & -(__int64)(*((_DWORD *)a2 + 2) != 0));
  }
  v6 = *((_DWORD *)a2 + 25);
  if ( v6 == 1 )
  {
    if ( *(char *)(*((_QWORD *)a2 + 11) + 28LL) < 0 )
      goto LABEL_12;
    goto LABEL_18;
  }
  if ( v6 == 2 )
  {
    if ( *(char *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 20LL) < 0 )
      goto LABEL_12;
    goto LABEL_5;
  }
  v8 = v6 - 1;
  if ( !v8 )
  {
LABEL_18:
    if ( *(char *)(*((_QWORD *)a2 + 11) + 27LL) >= 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( v8 != 1 )
    goto LABEL_6;
LABEL_5:
  if ( *(char *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 19LL) >= 0 )
    goto LABEL_6;
LABEL_12:
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    CTouchProcessor::ReleasePointerCaptureInt(this, a2);
  if ( a3 )
    *a3 = 0;
  return 0LL;
}

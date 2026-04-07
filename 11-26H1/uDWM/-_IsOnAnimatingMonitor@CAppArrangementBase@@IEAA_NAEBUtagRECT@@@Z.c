/*
 * XREFs of ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x1800C4174
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?Contains@?$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z @ 0x180065B0C (-Contains@-$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z.c)
 */

char __fastcall CAppArrangementBase::_IsOnAnimatingMonitor(CAppArrangementBase *this, const struct tagRECT *a2)
{
  HMONITOR v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = MonitorFromRect(a2, 0);
  return DynArray<HMONITOR__ *,0>::Contains((__int64)this + 152, &v4);
}

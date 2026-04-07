/*
 * XREFs of ?SetAndSaveAnimationData@CAutoRestoreAnimationWindowData@@QEAAXPEBVCWindowData@@PEAV2@@Z @ 0x1800C29CC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::SetAndSaveAnimationData(
        CAutoRestoreAnimationWindowData *this,
        const struct CWindowData *a2,
        struct CWindowData *a3)
{
  *((_DWORD *)this + 186) = *((_DWORD *)a3 + 186);
  *(_OWORD *)((char *)this + 748) = *(_OWORD *)((char *)a3 + 748);
  *(_OWORD *)((char *)this + 764) = *(_OWORD *)((char *)a3 + 764);
  *(_OWORD *)((char *)this + 780) = *(_OWORD *)((char *)a3 + 780);
  *(_OWORD *)((char *)this + 796) = *(_OWORD *)((char *)a3 + 796);
  *((_DWORD *)a3 + 186) = *((_DWORD *)a2 + 186);
  *(_OWORD *)((char *)a3 + 748) = *(_OWORD *)((char *)a2 + 748);
  *(_OWORD *)((char *)a3 + 764) = *(_OWORD *)((char *)a2 + 764);
  *(_OWORD *)((char *)a3 + 780) = *(_OWORD *)((char *)a2 + 780);
  *(_OWORD *)((char *)a3 + 796) = *(_OWORD *)((char *)a2 + 796);
  *((_QWORD *)this + 116) = a3;
}

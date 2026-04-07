/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800C66F8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CAB00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     _CAppArrangementDelayed::_WindowEnumCallback_::_1_::dtor$0 @ 0x1800ED1FF (_CAppArrangementDelayed--_WindowEnumCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(
        CAutoRestoreAnimationWindowData *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 108);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 680) = *((_DWORD *)this + 170);
    *(_OWORD *)(*((_QWORD *)this + 108) + 684LL) = *(_OWORD *)((char *)this + 684);
    *(_OWORD *)(*((_QWORD *)this + 108) + 700LL) = *(_OWORD *)((char *)this + 700);
    *(_OWORD *)(*((_QWORD *)this + 108) + 716LL) = *(_OWORD *)((char *)this + 716);
    *(_OWORD *)(*((_QWORD *)this + 108) + 732LL) = *(_OWORD *)((char *)this + 732);
  }
  CWindowData::~CWindowData(this);
}

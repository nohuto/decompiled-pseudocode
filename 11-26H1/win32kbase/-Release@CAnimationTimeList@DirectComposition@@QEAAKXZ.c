/*
 * XREFs of ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1400AFBB8
 * Callers:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400ADCB4 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z @ 0x1400AFA3C (-SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1400B1540 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x14015E2E8 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?FindAndDequeueFromTimeList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationMarshaler@2@@Z @ 0x14016907C (-FindAndDequeueFromTimeList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationMarshaler@.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 __fastcall DirectComposition::CAnimationTimeList::Release(
        DirectComposition::CAnimationTimeList *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int32 v4; // ebx

  v4 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v4 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return v4;
}

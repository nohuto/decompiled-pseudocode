/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4
 * Callers:
 *     ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140128F40 (--_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140128F7C (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x140129018 (--1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140129050 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1401B56C0 (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401F80B0 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(
        char **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rcx

  v4 = *this;
  if ( v4 )
    GreDeleteFastMutex(v4, a2, a3, a4);
}

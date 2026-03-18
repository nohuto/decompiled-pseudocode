/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140058A00
 * Callers:
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140058298 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x140058308 (--1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x140058368 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140058EBC (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015FAE0 (--_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1401A08C0 (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(char **this)
{
  char *v1; // rcx

  v1 = *this;
  if ( v1 )
    GreDeleteFastMutex(v1);
}

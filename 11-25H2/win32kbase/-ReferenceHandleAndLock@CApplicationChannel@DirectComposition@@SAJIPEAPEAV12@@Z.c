/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x140054714 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x140054FB8 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x140055F10 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionReleaseAllResources @ 0x140055F90 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelConnectionId @ 0x140056030 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionWaitForChannel @ 0x1400560D0 (NtDCompositionWaitForChannel.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x14005806C (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtDCompositionCommitChannel @ 0x1400AF3A0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionSynchronize @ 0x1400EE890 (NtDCompositionSynchronize.c)
 *     NtDCompositionGetDeletedResources @ 0x140108890 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x14011DC40 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x14011E8A0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionGetFrameIdFromBatchId @ 0x140120880 (NtDCompositionGetFrameIdFromBatchId.c)
 *     NtDCompositionNotifySuperWetInkWork @ 0x140227090 (NtDCompositionNotifySuperWetInkWork.c)
 *     NtVisualCaptureBits @ 0x140227840 (NtVisualCaptureBits.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        int a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  struct DirectComposition::CApplicationChannel *v2; // rdi
  int v4; // ebp
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rsi
  struct _ERESOURCE *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  struct _ERESOURCE *v12; // rdi
  _DWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v4 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
  if ( !CurrentProcessWin32Process )
    return 3221225473LL;
  if ( !*CurrentProcessWin32Process )
    return 3221225473LL;
  v7 = CurrentProcessWin32Process[32];
  if ( !v7 )
    return 3221225473LL;
  v8 = *(struct _ERESOURCE **)(v7 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v8, 1u);
  v9 = *(struct _RTL_GENERIC_TABLE **)v7;
  Buffer[0] = a1;
  Buffer[1] = 0;
  v10 = 0LL;
  v15 = 0LL;
  v11 = RtlLookupElementGenericTable(v9, Buffer);
  if ( v11 && (v10 = v11[1]) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  else
    v4 = -1073741790;
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 8));
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    v12 = *(struct _ERESOURCE **)(v10 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v2 = (struct DirectComposition::CApplicationChannel *)v10;
  }
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CApplicationChannel *))(*(_QWORD *)v2 + 8LL))(v2) == 1 )
  {
    *a2 = v2;
    return (unsigned int)v4;
  }
  (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  return 3221225485LL;
}

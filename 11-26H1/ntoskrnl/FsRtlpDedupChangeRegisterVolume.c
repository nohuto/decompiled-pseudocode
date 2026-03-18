/*
 * XREFs of FsRtlpDedupChangeRegisterVolume @ 0x14078FCA0
 * Callers:
 *     FsRtlDedupChangeInit @ 0x14078F8C0 (FsRtlDedupChangeInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     McTemplateK0jjtq_EtwWriteTransfer @ 0x1405B7A20 (McTemplateK0jjtq_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpDedupChangeRegisterVolume(__int64 a1, __int128 *a2, char a3, const GUID *a4, unsigned int *a5)
{
  unsigned int *i; // r10
  __int64 v10; // rcx
  __int64 Pool2; // r8
  int v12; // ebx
  unsigned int *p_ReservedPreviousReadyTimeValue; // rax
  unsigned int v14; // edx
  __int128 v15; // xmm1
  __int64 *v16; // rcx
  __int64 v17; // rdx

  ExAcquireResourceExclusiveLite((PERESOURCE)&VslpReservedTransferLock.UserWaitTime, 1u);
  for ( i = *(unsigned int **)&VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
        i != &VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
        i = *(unsigned int **)i )
  {
    v10 = *((_QWORD *)i + 2) - *(_QWORD *)a1;
    if ( !v10 )
      v10 = *((_QWORD *)i + 3) - *(_QWORD *)(a1 + 8);
    if ( !v10 )
    {
      *a5 = i[12];
      *((_BYTE *)i + 52) = a3;
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_22;
  }
  p_ReservedPreviousReadyTimeValue = *(unsigned int **)&VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
  v14 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( p_ReservedPreviousReadyTimeValue != &VslpReservedTransferLock.ReservedPreviousReadyTimeValue )
  {
    if ( p_ReservedPreviousReadyTimeValue[12] == v14 )
    {
      if ( !++v14 )
        p_ReservedPreviousReadyTimeValue = &VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
    }
    else if ( p_ReservedPreviousReadyTimeValue[12] > v14 )
    {
      break;
    }
    p_ReservedPreviousReadyTimeValue = *(unsigned int **)p_ReservedPreviousReadyTimeValue;
  }
  *(_OWORD *)(Pool2 + 16) = *(_OWORD *)a1;
  v15 = *a2;
  *(_DWORD *)(Pool2 + 48) = v14;
  *(_BYTE *)(Pool2 + 52) = a3;
  *(_OWORD *)(Pool2 + 32) = v15;
  v16 = (__int64 *)*((_QWORD *)p_ReservedPreviousReadyTimeValue + 1);
  if ( (unsigned int *)*v16 != p_ReservedPreviousReadyTimeValue )
    __fastfail(3u);
  *(_QWORD *)Pool2 = p_ReservedPreviousReadyTimeValue;
  *(_QWORD *)(Pool2 + 8) = v16;
  *v16 = Pool2;
  *((_QWORD *)p_ReservedPreviousReadyTimeValue + 1) = Pool2;
  *a5 = v14;
  if ( !MS_Dedup_Change_Provider_Context[0] )
    EtwRegister(
      &MS_Dedup_Change_Provider,
      (PETWENABLECALLBACK)FsRtlpDedupChangeEventsControlCallbackV2,
      MS_Dedup_Change_Provider_Context,
      MS_Dedup_Change_Provider_Context);
LABEL_21:
  v12 = 0;
LABEL_22:
  ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.UserWaitTime);
  if ( v12 >= 0 )
  {
    if ( ((__int64)VslpReservedTransferLock.AbWaitObject & 1) != 0 )
      McTemplateK0jjtq_EtwWriteTransfer(MS_Dedup_Change_Provider_Context, v17, a4, a1, (__int64)a2, a3, *a5);
    ZwUpdateWnfStateData((__int64)&WNF_FSRL_REFSDEDUP_VOLUME_DETECTED, 0LL);
  }
  return (unsigned int)v12;
}

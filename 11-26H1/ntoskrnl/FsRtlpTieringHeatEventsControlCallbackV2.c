/*
 * XREFs of FsRtlpTieringHeatEventsControlCallbackV2 @ 0x1405BA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1405BA714 (McTemplateK0jq_EtwWriteTransfer.c)
 */

void __fastcall FsRtlpTieringHeatEventsControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _BYTE *CallbackContext)
{
  unsigned int v7; // r8d
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  bool v10; // r11
  int v11; // edx
  int *v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 i; // rbx

  if ( CallbackContext && ControlCode == 1 )
  {
    CallbackContext[40] = Level;
    v7 = 0;
    *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
    *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
    for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
    {
      v8 = CallbackContext[40];
      v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v7);
      v10 = (*(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8)
         && (!v9
          || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
          && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
      v11 = 1 << v7;
      v12 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v7 >> 5));
      v13 = *v12;
      if ( v10 )
        v14 = v11 | v13;
      else
        v14 = ~v11 & v13;
      *v12 = v14;
    }
    ExAcquireResourceSharedLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount, 1u);
    for ( i = VslpReservedTransferLock.WriteOperationCount;
          (__int64 *)i != &VslpReservedTransferLock.WriteOperationCount;
          i = *(_QWORD *)i )
    {
      if ( (VslpReservedTransferLock.ReadOperationCount & 1) != 0 )
        McTemplateK0jq_EtwWriteTransfer(&MS_StorageTiering_Provider_Context, v15, 0LL, i + 20, *(_DWORD *)(i + 36));
    }
    ExReleaseResourceLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount);
  }
}

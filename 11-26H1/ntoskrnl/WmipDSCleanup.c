/*
 * XREFs of WmipDSCleanup @ 0x140A0C620
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     WmipGenerateBinaryMofNotification @ 0x14082A070 (WmipGenerateBinaryMofNotification.c)
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140A0B824 (WmipUnlinkInstanceSetFromGuidEntry.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipDSCleanup(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rsi
  __int64 v7; // rdx
  void *v8; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 1) == 0 )
    KeBugCheckEx(0x14Au, 1uLL, BugCheckParameter2, 0LL, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)(BugCheckParameter2 + 40);
  while ( v2 != (_QWORD *)(BugCheckParameter2 + 40) )
  {
    v3 = v2 - 5;
    if ( *(v2 - 5) )
    {
      WmipUnlinkInstanceSetFromGuidEntry((__int64)(v2 - 5));
      v3[8] = 0LL;
    }
    v4 = v3[7];
    if ( v4 && (v3[2] & 8) == 0 )
    {
      v5 = *(_QWORD *)(v4 + 72) - WmipBinaryMofGuid;
      if ( !v5 )
        v5 = *(_QWORD *)(v4 + 80) - 0x102906C9A000F0B2LL;
      if ( !v5 )
      {
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipGenerateBinaryMofNotification((__int64)(v2 - 5), &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      }
      WmipUnreferenceEntry(&WmipGEChunkInfo, v3[7]);
    }
    v3[7] = 0LL;
    v2 = (_QWORD *)*v2;
    WmipUnreferenceEntry(&WmipISChunkInfo, v3);
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(BugCheckParameter2 + 64); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 72) + 8 * i);
    if ( v7 )
      WmipUnreferenceEntry(&WmipMRChunkInfo, v7);
  }
  v8 = *(void **)(BugCheckParameter2 + 72);
  if ( v8 != (void *)(BugCheckParameter2 + 80) )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  }
}

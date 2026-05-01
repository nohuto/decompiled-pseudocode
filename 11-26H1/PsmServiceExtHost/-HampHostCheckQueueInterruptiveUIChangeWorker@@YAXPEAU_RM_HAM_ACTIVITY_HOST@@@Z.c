/*
 * XREFs of ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BF60
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007CF18 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostCheckQueueInterruptiveUIChangeWorker(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  char *v5; // rdi
  int v6; // r14d
  __int64 v7; // rbp
  DWORD v8; // edi
  _QWORD *Value; // rbx
  unsigned int v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // rdx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
    v2 = (__int64)a1 + 560;
  else
    v2 = 616LL;
  if ( *(_DWORD *)v2 != 2 )
    return;
  v3 = 0LL;
  if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
    v3 = *((_QWORD *)a1 + 76) - 96LL;
  while ( v3 )
  {
    if ( *(_BYTE *)(v3 + 562) == 3 && (*(_BYTE *)(v3 + 552) & 0x48) == 0 )
    {
      BitMapHeader = 0LL;
      RtlInitializeBitMap(&BitMapHeader, (PULONG)(v3 + 496), 0x2Fu);
      if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
      {
        v5 = (char *)a1 + 792;
        v6 = 1;
        goto LABEL_16;
      }
    }
    v4 = *(_QWORD *)(v3 + 96);
    if ( v4 == *(_QWORD *)(v3 + 80) + 608LL )
      v3 = 0LL;
    else
      v3 = v4 - 96;
  }
  if ( (*((_QWORD *)a1 + 83) & 0x400000000000000LL) != 0 )
  {
    v5 = (char *)a1 + 792;
    BitMapHeader = 0LL;
    RtlInitializeBitMap(
      &BitMapHeader,
      (PULONG)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                      + 120)
                          + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
             + 544),
      0x2Fu);
    if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
    {
      v6 = 1;
      goto LABEL_16;
    }
  }
  else
  {
    v5 = (char *)a1 + 792;
  }
  v6 = 0;
LABEL_16:
  v7 = *(_QWORD *)v5;
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockExclusive(v7 + 584);
  *(_DWORD *)(v7 + 592) = GetCurrentThreadId();
  v10 = (v6 << 18) | *(_DWORD *)(v7 + 616) & 0xFFFBFFFF;
  *(_DWORD *)(v7 + 616) = v10;
  if ( v6 != ((v10 >> 17) & 1) && (v10 & 0x80000) == 0 )
  {
    *(_DWORD *)(v7 + 616) = v10 | 0x80000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(v7 + 560));
  }
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v11[6]-- == 1 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *(_DWORD *)(v7 + 592) = 0;
  RtlReleaseSRWLockExclusive(v7 + 584);
}

/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1409954E4
 * Callers:
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     CcUnmapVacb @ 0x140AFCD38 (CcUnmapVacb.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafeByProcess @ 0x14043FCD0 (PfpPartitionReferenceParentSafeByProcess.c)
 *     PfLockSharedTryAcquire @ 0x1404A4B70 (PfLockSharedTryAcquire.c)
 *     PfLockSharedRelease @ 0x1404AE4B4 (PfLockSharedRelease.c)
 *     PfpRpLogDeprioEvent @ 0x1404B4484 (PfpRpLogDeprioEvent.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  int v7; // r14d
  _QWORD *KernelShadowStackBase; // rcx
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rbx
  __int64 v16; // r10
  __int64 v17; // r8
  int v18; // r8d
  __int64 i; // rdx
  __int64 v20; // r8
  void **v21; // rax
  int v22[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h]

  v4 = 0;
  *(_QWORD *)v22 = 0LL;
  v5 = (int)a4;
  v7 = a2;
  if ( a3 && (unsigned int)PfLockSharedTryAcquire((struct _KTHREAD *)stru_140E66D40.Spare35, a2, a3, a4) )
  {
    KernelShadowStackBase = stru_140E66D40.KernelShadowStackBase;
    if ( a3 == *((_QWORD *)stru_140E66D40.KernelShadowStackBase + 1) )
    {
LABEL_4:
      v10 = (void *)KernelShadowStackBase[2];
      PfLockSharedRelease((struct _KTHREAD *)stru_140E66D40.Spare35);
      if ( stru_140E66D40.IptSaveArea != v10 )
      {
        if ( !(unsigned int)PfLockSharedTryAcquire((struct _KTHREAD *)&stru_140E66D40.ResourceIndex, v11, v12, v13) )
          return v4;
        if ( !stru_140E66D40.ModeHistory )
          goto LABEL_10;
        v18 = 442596621 * (unsigned __int8)v10
            + 37
            * (BYTE6(v10)
             + 37 * (BYTE5(v10) + 37 * (BYTE4(v10) + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * BYTE1(v10))))))
            + HIBYTE(v10)
            - 877075889;
        for ( i = 0LL; ; v18 = i + v20 )
        {
          v20 = (stru_140E66D40.ModeHistory - 1) & v18;
          v21 = (void **)(stru_140E66D40.Spare35[1] + (v20 << SLOBYTE(stru_140E66D40.Spare36)));
          if ( !*v21 || *v21 == v10 )
            break;
          if ( !i )
          {
            i = 2654435761LL * (_QWORD)v10 + 1;
            if ( ((-79 * (_BYTE)v10) & 1) != 0 )
              i = 2654435761LL * (_QWORD)v10;
          }
        }
        if ( *v21 )
        {
          stru_140E66D40.IptSaveArea = v10;
        }
        else
        {
LABEL_10:
          v4 = 1;
          stru_140E66D40.Padding[0] = MEMORY[0xFFFFF78000000320];
        }
        PfLockSharedRelease((struct _KTHREAD *)&stru_140E66D40.ResourceIndex);
      }
      v14 = PfpPartitionReferenceParentSafeByProcess(v22, a1);
      PfpRpLogDeprioEvent(*(__int64 *)v22, a3, v7, v4 != 0 ? v5 : 0);
      if ( v14 )
        PfpPartitionDereferenceParent(v14);
    }
    else
    {
      v16 = -1LL << (BYTE4(stru_140E66D40.KernelShadowStack) & 0x1F);
      v17 = a3 & v16;
      if ( HIDWORD(stru_140E66D40.KernelShadowStack) >> 5 )
      {
        v23 = a3 & v16;
        KernelShadowStackBase = (char *)stru_140E66D40.KernelShadowStackInitial
                              + 8
                              * (((HIDWORD(stru_140E66D40.KernelShadowStack) >> 5) - 1) & (HIBYTE(v23)
                                                                                         - 877075889
                                                                                         + 442596621
                                                                                         * (unsigned __int8)v17
                                                                                         + 37
                                                                                         * (BYTE6(v23)
                                                                                          + 37
                                                                                          * (BYTE5(v23)
                                                                                           + 37
                                                                                           * (BYTE4(v23)
                                                                                            + 37
                                                                                            * (BYTE3(v23)
                                                                                             + 37
                                                                                             * (BYTE2(v23)
                                                                                              + 37 * BYTE1(v23))))))));
        while ( 1 )
        {
          KernelShadowStackBase = (_QWORD *)*KernelShadowStackBase;
          if ( ((unsigned __int8)KernelShadowStackBase & 1) != 0 )
            break;
          if ( v17 == (v16 & KernelShadowStackBase[1]) )
          {
            if ( !KernelShadowStackBase )
              break;
            stru_140E66D40.KernelShadowStackBase = KernelShadowStackBase;
            goto LABEL_4;
          }
        }
      }
      PfLockSharedRelease((struct _KTHREAD *)stru_140E66D40.Spare35);
    }
  }
  return v4;
}

/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x140017DE4
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140005D20 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400359F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_HW_QUEUE *a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_GLOBAL *a6)
{
  __int64 v6; // rbx
  char v8; // r11
  char v11; // r13
  int v13; // r10d
  __int64 Pool2; // rdi
  struct _VIDSCH_GLOBAL *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 *v20; // rax
  unsigned int v21; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  v21 = *((_DWORD *)a4 + 29);
  v8 = -1;
  v11 = 0;
  if ( _BitScanForward((unsigned int *)&v13, *((_DWORD *)a4 + 150) & 0x3FF) )
    v8 = v13;
  if ( v8 != -1 )
    v11 = v8;
  Pool2 = ExAllocatePool2(
            64LL,
            (unsigned int)(*((_DWORD *)a6 + 40) * (72 * *((_DWORD *)a6 + 21) + 224) + 8 * (*((_DWORD *)a6 + 21) + 84)),
            811755862LL);
  WdLogSingleEntry1(8LL, *((_QWORD *)a4 + 13));
  WdLogGlobalForLineNumber = 13254;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), a4, *((unsigned int *)a4 + 139));
    *((_DWORD *)a4 + 84) = 0;
    *((_DWORD *)a4 + 154) = 0;
    VidSchiAcquirePrivateDataReference(a6, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Pool2 + 648));
    VidSchiReleasePrivateDataReference(v16, (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 600));
    v17 = *(_QWORD *)(Pool2 + 80);
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 12));
    *(union _ULARGE_INTEGER *)(Pool2 + 16) = a5;
    *(_QWORD *)(Pool2 + 24) = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 200);
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_QWORD *)(Pool2 + 40) = a3;
    if ( a3 )
      ++*((_DWORD *)a3 + 460);
    ++*((_DWORD *)a6 + 217);
    v18 = *(int *)(*((_QWORD *)a6 + v21 + 431) + 304LL * (unsigned int)v11 + 188);
    if ( (int)v18 > -1 )
      v6 = *((_QWORD *)a6 + 447) + 160 * v18;
    v19 = v6 + 120;
    v20 = *(__int64 **)(v19 + 8);
    if ( *v20 != v19 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v19;
    *(_QWORD *)(Pool2 + 8) = v20;
    *v20 = Pool2;
    *(_QWORD *)(v19 + 8) = Pool2;
  }
}

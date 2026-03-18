/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14001E054
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATION@@_K2@Z @ 0x140006B2C (-VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATIO.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036240 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  bool v8; // zf
  unsigned int v9; // r10d
  int v10; // r15d
  char v11; // dl
  char v12; // cl
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // r8d
  unsigned int v16; // r13d
  __int64 v17; // rsi
  unsigned __int64 v18; // r10
  __int16 v19; // r9
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 result; // rax
  __int64 v29; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v30; // [rsp+28h] [rbp-28h]
  unsigned int v31; // [rsp+30h] [rbp-20h]
  unsigned int v32; // [rsp+34h] [rbp-1Ch]
  int v33; // [rsp+38h] [rbp-18h]
  unsigned int v34; // [rsp+3Ch] [rbp-14h]
  unsigned int v35; // [rsp+40h] [rbp-10h]

  v30 = *(unsigned int **)(a4 + 1192);
  v29 = a2;
  v6 = *v30;
  v7 = *v30 & 0x3FF;
  v8 = *(_BYTE *)(a2 + 164) == 0;
  v31 = v7;
  if ( v8 )
    v9 = 0;
  else
    v9 = (v6 >> 10) & 0x3FF;
  v10 = 0;
  v32 = v9;
  v8 = !_BitScanForward(&v7, v7);
  v11 = -1;
  v12 = -1;
  v33 = 0;
  if ( !v8 )
    v12 = v7;
  v8 = !_BitScanForward((unsigned int *)&v13, v9);
  v14 = v12;
  v34 = v12;
  if ( !v8 )
    v11 = v13;
  v35 = v11;
  if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v29) )
  {
    while ( 1 )
    {
      if ( v14 < v15 )
      {
        v16 = 0;
        v17 = v14;
        if ( *(_DWORD *)(a4 + 1096) )
        {
          do
          {
            v18 = (((unsigned __int64)v14 << 6) + v16) << 6;
            *(_QWORD *)((char *)a3 + v18 + 3344) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(v10
                                                                                             + v16
                                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                                                                         + *(_QWORD *)(a4 + 1192)
                                                                         + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                                         * ((8
                                                                           * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL)
                                                                           + 231) & 0xFFFFFFF8)
                                                                         + 56)
                                                             + 96LL);
            *(_QWORD *)((char *)a3 + v18 + 3336) = *(_QWORD *)(((unsigned __int64)(v10
                                                                                 + v16
                                                                                 * *(_DWORD *)(*(_QWORD *)(a4 + 1192)
                                                                                             + 4LL)) << 6)
                                                             + *(_QWORD *)(a4 + 1192)
                                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                             + 32);
            v19 = a3[22150];
            if ( *(_QWORD *)(((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                           * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                           + *(_QWORD *)(a4 + 1192)
                           + ((v10 + v16 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL) + 1LL) << 6)) )
            {
              a3[22150] = v19 | (1 << v14);
              *(_QWORD *)((char *)a3 + v18 + 3352) = *(_QWORD *)(((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                               + *(_QWORD *)(a4 + 1192)
                                                               + ((v10
                                                                 + v16 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                                 + 1LL) << 6));
            }
            else
            {
              a3[22150] = v19 & ~(1 << v14);
            }
            *(_WORD *)((char *)a3 + v18 + 3368) = *(_WORD *)(((unsigned __int64)(v10
                                                                               + v16
                                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                                                           + *(_QWORD *)(a4 + 1192)
                                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                           + 40);
            *(_QWORD *)((char *)a3 + v18 + 3360) = *(_QWORD *)(((unsigned __int64)(v10
                                                                                 + v16
                                                                                 * *(_DWORD *)(*(_QWORD *)(a4 + 1192)
                                                                                             + 4LL)) << 6)
                                                             + *(_QWORD *)(a4 + 1192)
                                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                             + 48);
            v20 = *(_QWORD *)(a4 + 1192);
            v21 = *(_DWORD *)(v20 + 4);
            v22 = v10 + v16 * v21;
            v23 = v20 + v21 * ((8 * *(_DWORD *)(v20 + 8) + 231) & 0xFFFFFFF8);
            VidMmReferenceDisplayingAllocation(
              a1,
              (struct _VIDSCH_DISPLAYING_ALLOCATION *)((char *)a3 + v18 + 3336),
              *(_QWORD *)((v22 << 6) + v23 + 72),
              *(_QWORD *)((v22 << 6) + v23 + 80));
            ++v16;
          }
          while ( v16 < *(_DWORD *)(a4 + 1096) );
          v17 = v14;
        }
        v24 = *(_QWORD *)(a4 + 1192);
        v25 = (unsigned int)(8 * v10 * (*(_DWORD *)(v24 + 8) + 28));
        v26 = *(_QWORD *)(v25 + v24 + 232);
        if ( v26 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 36));
          v27 = v17 << 12;
          *(_QWORD *)((char *)a3 + v27 + 3384) = *(_QWORD *)(v25 + v24 + 232);
          *(_QWORD *)((char *)a3 + v27 + 3392) = *(_QWORD *)(v25 + v24 + 240);
        }
        a3[22148] |= 1 << v14;
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v29);
      if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v29) )
        break;
      v15 = v35;
      v14 = v34;
      v10 = v33;
    }
  }
  result = *(unsigned __int16 *)(a4 + 1096);
  a3[22149] = result;
  return result;
}

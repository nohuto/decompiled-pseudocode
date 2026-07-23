/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x14090A030
 * Callers:
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404011A4 (MmProbeAndLockPagesPrivate.c)
 *     sub_1404027F0 @ 0x1404027F0 (sub_1404027F0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFlushInstructionCache @ 0x14069CF60 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     sub_140907180 @ 0x140907180 (sub_140907180.c)
 *     sub_1409077D4 @ 0x1409077D4 (sub_1409077D4.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_1409E1544 @ 0x1409E1544 (sub_1409E1544.c)
 *     sub_1409E1F40 @ 0x1409E1F40 (sub_1409E1F40.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 Pool2; // rax
  void *v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  char v9; // r14
  int v10; // eax
  __int64 v12; // rdx
  void *v13; // rax
  int v14; // eax
  struct _MDL *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  char *v19; // rdx
  int v20; // eax
  struct _MDL *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  char *v25; // rdx
  void *v26; // rbx
  _QWORD *v27; // rcx
  _QWORD *v28; // r10
  _QWORD *v29; // rdx
  PVOID *v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  _KPROCESS *Process; // rax
  __int16 v35; // ax
  _BYTE v36[4]; // [rsp+44h] [rbp-224h] BYREF
  void *Src; // [rsp+48h] [rbp-220h]
  __int64 v38; // [rsp+50h] [rbp-218h]
  int v39; // [rsp+58h] [rbp-210h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-208h]
  int v41; // [rsp+68h] [rbp-200h]
  int v42; // [rsp+6Ch] [rbp-1FCh]
  PMDL Mdl; // [rsp+70h] [rbp-1F8h]
  PMDL v44; // [rsp+78h] [rbp-1F0h]
  __int64 v45; // [rsp+80h] [rbp-1E8h] BYREF
  void *v46; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v47; // [rsp+90h] [rbp-1D8h]
  int v48; // [rsp+98h] [rbp-1D0h]
  int v49; // [rsp+9Ch] [rbp-1CCh]
  __int64 v50; // [rsp+A8h] [rbp-1C0h]
  _QWORD *v51; // [rsp+B0h] [rbp-1B8h]
  _UNKNOWN **v52; // [rsp+D0h] [rbp-198h] BYREF
  __int128 v53; // [rsp+D8h] [rbp-190h]
  __int128 v54; // [rsp+E8h] [rbp-180h]
  __int128 v55; // [rsp+F8h] [rbp-170h]
  __int128 v56; // [rsp+108h] [rbp-160h]
  __int128 v57; // [rsp+118h] [rbp-150h]
  __int128 v58; // [rsp+128h] [rbp-140h]
  __int128 v59; // [rsp+138h] [rbp-130h]
  __int128 v60; // [rsp+148h] [rbp-120h]
  __int128 v61; // [rsp+158h] [rbp-110h]
  __int128 v62; // [rsp+168h] [rbp-100h]
  _UNKNOWN **v63; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v64; // [rsp+188h] [rbp-E0h]
  __int128 v65; // [rsp+198h] [rbp-D0h]
  __int128 v66; // [rsp+1A8h] [rbp-C0h]
  __int128 v67; // [rsp+1B8h] [rbp-B0h]
  __int128 v68; // [rsp+1C8h] [rbp-A0h]
  __int128 v69; // [rsp+1D8h] [rbp-90h]
  __int128 v70; // [rsp+1E8h] [rbp-80h]
  __int128 v71; // [rsp+1F8h] [rbp-70h]
  __int128 v72; // [rsp+208h] [rbp-60h]
  __int128 v73; // [rsp+218h] [rbp-50h]

  v51 = a3;
  v47 = a1;
  v38 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v36[0] = 0;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v44 = 0LL;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v50 = (unsigned int)dword_140E3E730;
  v4 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    v38 = Pool2;
    v7 = Pool2;
    v8 = Pool2;
  }
  else
  {
    v4 = -1073741801;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
  }
  SddlpFree(0LL);
  if ( v4 < 0 )
    goto LABEL_7;
  memset_0(v6, 0, 0x58uLL);
  *(_DWORD *)(v7 + 16) &= ~1u;
  v9 = 1;
  *(_QWORD *)(v8 + 80) = 1LL;
  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 == 1 )
  {
    v4 = sub_140907180((UCHAR *)(a2 + 16), 0xF8u);
    if ( v4 < 0 )
      goto LABEL_7;
    MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
    {
      v4 = -1073741801;
      goto LABEL_7;
    }
  }
  else
  {
    if ( v10 )
    {
      v4 = -1073741811;
      goto LABEL_7;
    }
    v4 = sub_140907180((UCHAR *)(a2 + 16), 0xF0u);
    if ( v4 < 0 )
      goto LABEL_7;
    MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
    {
      v4 = -1073741801;
      goto LABEL_7;
    }
  }
  MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList, v12);
  v39 = 1;
  v4 = sub_1409E1F40(*(PVOID *)(a2 + 328));
  if ( v4 >= 0 )
  {
    v4 = sub_1409E1544(v47, *(unsigned int *)(a2 + 320), &v46, &v45);
    if ( v4 >= 0 )
    {
      v13 = 0LL;
      v4 = 0;
      if ( *(_DWORD *)(a2 + 320) && (v13 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
        v4 = -1073741801;
      else
        Src = v13;
      SddlpFree(0LL);
      if ( v4 >= 0 )
      {
        memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), *(unsigned int *)(a2 + 284));
        v14 = *(_DWORD *)(a2 + 8);
        if ( v14 == 1 )
        {
          if ( *(_DWORD *)(a2 + 284) < 4u )
          {
            v4 = -1073741811;
            goto LABEL_7;
          }
          *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
        }
        else if ( v14 )
        {
          v4 = -1073741811;
          goto LABEL_7;
        }
        v15 = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
        Mdl = v15;
        if ( !v15 )
        {
          v4 = -1073741801;
          goto LABEL_7;
        }
        MmProbeAndLockPagesPrivate((__int64)v15, v16);
        v41 = 1;
        v17 = *(_DWORD *)(a2 + 280);
        v18 = *(_DWORD *)(a2 + 284);
        v19 = (char *)Src + *(unsigned int *)(a2 + 288);
        v52 = &off_140002EA0;
        v48 = 0;
        v53 = *(_OWORD *)(a2 + 96);
        v54 = *(_OWORD *)(a2 + 112);
        v55 = *(_OWORD *)(a2 + 128);
        v56 = *(_OWORD *)(a2 + 144);
        v57 = *(_OWORD *)(a2 + 160);
        v58 = *(_OWORD *)(a2 + 176);
        v59 = *(_OWORD *)(a2 + 192);
        v60 = *(_OWORD *)(a2 + 208);
        v61 = *(_OWORD *)(a2 + 224);
        v62 = *(_OWORD *)(a2 + 240);
        sub_1404027F0((__int64)&v52, v19, v19, v18, *(_QWORD *)(a2 + 88), v17, v36);
        v4 = sub_1409E1F40(*(PVOID *)(a2 + 272));
        if ( v4 >= 0 )
        {
          if ( !*(_QWORD *)(a2 + 296) )
            goto LABEL_48;
          memmove((char *)Src + *(unsigned int *)(a2 + 312), *(const void **)(a2 + 296), *(unsigned int *)(a2 + 308));
          v20 = *(_DWORD *)(a2 + 8);
          if ( v20 == 1 )
          {
            if ( *(_DWORD *)(a2 + 308) < 4u )
            {
              v4 = -1073741811;
              goto LABEL_7;
            }
            *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
          }
          else if ( v20 )
          {
            v4 = -1073741811;
            goto LABEL_7;
          }
          v21 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
          v44 = v21;
          if ( !v21 )
          {
            v4 = -1073741801;
            goto LABEL_7;
          }
          MmProbeAndLockPagesPrivate((__int64)v21, v22);
          v42 = 1;
          v23 = *(_DWORD *)(a2 + 304);
          v24 = *(_DWORD *)(a2 + 308);
          v25 = (char *)Src + *(unsigned int *)(a2 + 312);
          v63 = &off_140002EA0;
          v49 = 0;
          v64 = *(_OWORD *)(a2 + 96);
          v65 = *(_OWORD *)(a2 + 112);
          v66 = *(_OWORD *)(a2 + 128);
          v67 = *(_OWORD *)(a2 + 144);
          v68 = *(_OWORD *)(a2 + 160);
          v69 = *(_OWORD *)(a2 + 176);
          v70 = *(_OWORD *)(a2 + 192);
          v71 = *(_OWORD *)(a2 + 208);
          v72 = *(_OWORD *)(a2 + 224);
          v73 = *(_OWORD *)(a2 + 240);
          sub_1404027F0((__int64)&v63, v25, v25, v24, *(_QWORD *)(a2 + 88), v23, v36);
          v4 = sub_1409E1F40(*(PVOID *)(a2 + 296));
          if ( v4 >= 0 )
          {
LABEL_48:
            v26 = v46;
            memmove(v46, Src, *(unsigned int *)(a2 + 320));
            v27 = (_QWORD *)v38;
            v28 = (_QWORD *)(v38 + 64);
            *(_QWORD *)(v38 + 64) = *(_QWORD *)a2;
            v29 = v27 + 5;
            v27[5] = v26;
            v30 = (PVOID *)(v27 + 3);
            v27[3] = v45 + *(unsigned int *)(a2 + 288);
            v31 = *(unsigned int *)(a2 + 312);
            if ( (_DWORD)v31 )
              v27[4] = v45 + v31;
            else
              v27[4] = 0LL;
            v32 = v38;
            *(_DWORD *)(v38 + 72) = *(_DWORD *)(a2 + 320);
            *(_QWORD *)(v32 + 48) = *(_QWORD *)(a2 + 272);
            v33 = *(_QWORD *)(a2 + 272) - (_QWORD)*v30;
            *(_QWORD *)(v32 + 56) = v33;
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( !Process[1].ReadyTime )
              goto LABEL_51;
            v35 = WORD2(Process[3].PerProcessorCycleTimes);
            if ( v35 != 332 && v35 != 452 )
              v9 = 0;
            if ( v9 )
              *(_QWORD *)*v29 = *v28;
            else
LABEL_51:
              *(_QWORD *)*v29 = v33;
            *(_QWORD *)(*v29 + 8LL) = v50;
            v4 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v30, *(unsigned int *)(a2 + 284));
            if ( v4 >= 0 )
            {
              if ( !*(_QWORD *)(a2 + 296)
                || (v4 = ZwFlushInstructionCache(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           *(PVOID *)(v38 + 32),
                           *(unsigned int *)(a2 + 308)),
                    v4 >= 0) )
              {
                if ( v51 )
                {
                  *v51 = v38;
                  v38 = 0LL;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_7:
  if ( MemoryDescriptorList )
  {
    if ( v39 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v41 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v44 )
  {
    if ( v42 )
      MmUnlockPages(v44);
    IoFreeMdl(v44);
  }
  sub_1409077D4(v47, v38);
  SddlpFree(Src);
  return (unsigned int)v4;
}

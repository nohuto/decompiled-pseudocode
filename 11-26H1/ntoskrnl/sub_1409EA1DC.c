/*
 * XREFs of sub_1409EA1DC @ 0x1409EA1DC
 * Callers:
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 * Callees:
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404C61F8 (MmProbeAndLockPagesPrivate.c)
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ZwFlushInstructionCache @ 0x140729DE0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     sub_1409E99A0 @ 0x1409E99A0 (sub_1409E99A0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409EB1E8 @ 0x1409EB1E8 (sub_1409EB1E8.c)
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 *     sub_1409ED2C4 @ 0x1409ED2C4 (sub_1409ED2C4.c)
 *     sub_140A89B4C @ 0x140A89B4C (sub_140A89B4C.c)
 *     sub_140AAE6E4 @ 0x140AAE6E4 (sub_140AAE6E4.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EA1DC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r14
  char *v5; // r13
  struct _MDL *v6; // r15
  int v7; // ebx
  __int64 Pool2; // rax
  void *v9; // r12
  char v10; // r12
  int v11; // eax
  PMDL v12; // rax
  int v13; // eax
  struct _MDL *v14; // rax
  int v15; // eax
  struct _MDL *v16; // rax
  void *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  _KPROCESS *Process; // rax
  __int16 v21; // ax
  struct _MDL *v22; // rsi
  struct _MDL *v23; // rsi
  int v25; // [rsp+58h] [rbp-C0h]
  void *Src; // [rsp+60h] [rbp-B8h] BYREF
  int v27; // [rsp+68h] [rbp-B0h]
  int v28; // [rsp+6Ch] [rbp-ACh]
  PMDL v29; // [rsp+70h] [rbp-A8h]
  __int64 v30; // [rsp+78h] [rbp-A0h]
  __int64 v31; // [rsp+90h] [rbp-88h] BYREF
  __int64 v32; // [rsp+98h] [rbp-80h]
  __int64 v33; // [rsp+A0h] [rbp-78h]
  void *v34; // [rsp+A8h] [rbp-70h] BYREF
  PMDL MemoryDescriptorList; // [rsp+B0h] [rbp-68h]
  PMDL Mdl; // [rsp+B8h] [rbp-60h]
  __int64 Flink_low; // [rsp+C8h] [rbp-50h]

  v4 = 0LL;
  v30 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v5 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  Flink_low = LODWORD(stru_140E3EAA8.Header.WaitListHead.Flink);
  v7 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = (void *)Pool2;
  if ( Pool2 )
  {
    v4 = Pool2;
    v30 = Pool2;
    v32 = Pool2;
    v33 = Pool2;
  }
  else
  {
    v7 = -1073741801;
    v9 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
  }
  SddlpFree(0LL);
  if ( v7 >= 0 )
  {
    memset_0(v9, 0, 0x58uLL);
    *(_DWORD *)(v32 + 16) &= ~1u;
    v10 = 1;
    *(_QWORD *)(v33 + 80) = 1LL;
    v11 = *(_DWORD *)(a2 + 8);
    if ( v11 == 1 )
    {
      v7 = sub_1409EB1E8((void *)(a2 + 16));
      if ( v7 < 0 )
        goto LABEL_61;
      v12 = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
      v6 = v12;
      v29 = v12;
      if ( !v12 )
      {
        v7 = -1073741801;
        goto LABEL_61;
      }
    }
    else
    {
      if ( v11 )
      {
        v7 = -1073741811;
        goto LABEL_61;
      }
      v7 = sub_1409EB1E8((void *)(a2 + 16));
      if ( v7 < 0 )
        goto LABEL_61;
      v12 = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      v6 = v12;
      v29 = v12;
      if ( !v12 )
      {
        v7 = -1073741801;
        goto LABEL_61;
      }
    }
    MmProbeAndLockPagesPrivate((__int64)v12);
    v25 = 1;
    v7 = sub_1409ED2C4(*(PVOID *)(a2 + 328));
    if ( v7 >= 0 )
    {
      v7 = sub_1409EC6FC(a1, *(unsigned int *)(a2 + 320), &v34, &v31);
      if ( v7 >= 0 )
      {
        v7 = sub_140A89B4C(*(unsigned int *)(a2 + 320), &Src);
        if ( v7 < 0 )
        {
          v5 = (char *)Src;
        }
        else
        {
          if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
          {
            v5 = (char *)Src;
            RtlCopyFromUser(
              (char *)Src + *(unsigned int *)(a2 + 288),
              *(void **)(a2 + 272),
              *(unsigned int *)(a2 + 284));
          }
          else
          {
            ProbeForRead(*(volatile void **)(a2 + 272), *(unsigned int *)(a2 + 284), 1u);
            v5 = (char *)Src;
            memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), *(unsigned int *)(a2 + 284));
          }
          v13 = *(_DWORD *)(a2 + 8);
          if ( v13 == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v7 = -1073741811;
              goto LABEL_61;
            }
            *(_DWORD *)&v5[*(unsigned int *)(a2 + 288)] = *(_DWORD *)(a2 + 292);
          }
          else if ( v13 )
          {
            v7 = -1073741811;
            goto LABEL_61;
          }
          v14 = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
          MemoryDescriptorList = v14;
          if ( !v14 )
          {
            v7 = -1073741801;
            goto LABEL_61;
          }
          MmProbeAndLockPagesPrivate((__int64)v14);
          v27 = 1;
          v7 = sub_140AAE6E4(
                 0,
                 (int)v5 + *(_DWORD *)(a2 + 288),
                 (int)v5 + *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v7 >= 0 )
          {
            v7 = sub_1409ED2C4(*(PVOID *)(a2 + 272));
            if ( v7 >= 0 )
            {
              if ( !*(_QWORD *)(a2 + 296) )
                goto LABEL_44;
              if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
              {
                RtlCopyFromUser(&v5[*(unsigned int *)(a2 + 312)], *(void **)(a2 + 296), *(unsigned int *)(a2 + 308));
              }
              else
              {
                ProbeForRead(*(volatile void **)(a2 + 296), *(unsigned int *)(a2 + 308), 1u);
                memmove(&v5[*(unsigned int *)(a2 + 312)], *(const void **)(a2 + 296), *(unsigned int *)(a2 + 308));
              }
              v15 = *(_DWORD *)(a2 + 8);
              if ( v15 == 1 )
              {
                if ( *(_DWORD *)(a2 + 308) < 4u )
                {
                  v7 = -1073741811;
                  goto LABEL_61;
                }
                *(_DWORD *)&v5[*(unsigned int *)(a2 + 312)] = *(_DWORD *)(a2 + 316);
              }
              else if ( v15 )
              {
                v7 = -1073741811;
                goto LABEL_61;
              }
              v16 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              Mdl = v16;
              if ( !v16 )
              {
                v7 = -1073741801;
                goto LABEL_61;
              }
              MmProbeAndLockPagesPrivate((__int64)v16);
              v28 = 1;
              v7 = sub_140AAE6E4(
                     0,
                     (int)v5 + *(_DWORD *)(a2 + 312),
                     (int)v5 + *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v7 >= 0 )
              {
                v7 = sub_1409ED2C4(*(PVOID *)(a2 + 296));
                if ( v7 >= 0 )
                {
LABEL_44:
                  v17 = v34;
                  memmove(v34, v5, *(unsigned int *)(a2 + 320));
                  *(_QWORD *)(v4 + 64) = *(_QWORD *)a2;
                  *(_QWORD *)(v4 + 40) = v17;
                  *(_QWORD *)(v4 + 24) = v31 + *(unsigned int *)(a2 + 288);
                  v18 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v18 )
                    *(_QWORD *)(v4 + 32) = v31 + v18;
                  else
                    *(_QWORD *)(v4 + 32) = 0LL;
                  *(_DWORD *)(v4 + 72) = *(_DWORD *)(a2 + 320);
                  *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 272);
                  v19 = *(_QWORD *)(a2 + 272) - *(_QWORD *)(v4 + 24);
                  *(_QWORD *)(v4 + 56) = v19;
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( !Process[1].ReadyTime )
                    goto LABEL_53;
                  v21 = WORD2(Process[3].PerProcessorCycleTimes);
                  if ( v21 != 332 && v21 != 452 )
                    v10 = 0;
                  if ( v10 )
                    **(_QWORD **)(v4 + 40) = *(_QWORD *)(v4 + 64);
                  else
LABEL_53:
                    **(_QWORD **)(v4 + 40) = v19;
                  *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) = Flink_low;
                  v7 = ZwFlushInstructionCache(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         *(PVOID *)(v4 + 24),
                         *(unsigned int *)(a2 + 284));
                  if ( v7 >= 0 )
                  {
                    if ( !*(_QWORD *)(a2 + 296)
                      || (v7 = ZwFlushInstructionCache(
                                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                 *(PVOID *)(v4 + 32),
                                 *(unsigned int *)(a2 + 308)),
                          v7 >= 0) )
                    {
                      if ( a3 )
                      {
                        *a3 = v4;
                        v4 = 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_61:
  if ( v6 )
  {
    if ( v25 )
      MmUnlockPages(v6);
    IoFreeMdl(v6);
  }
  v22 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    if ( v27 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(v22);
  }
  v23 = Mdl;
  if ( Mdl )
  {
    if ( v28 )
      MmUnlockPages(Mdl);
    IoFreeMdl(v23);
  }
  sub_1409E99A0(a1, v4);
  SddlpFree(v5);
  return (unsigned int)v7;
}

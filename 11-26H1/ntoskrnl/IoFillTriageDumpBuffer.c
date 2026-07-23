/*
 * XREFs of IoFillTriageDumpBuffer @ 0x1405C9264
 * Callers:
 *     IopCollectTriageDumpData @ 0x1405CB244 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405CCAF4 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x14078F340 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopWriteDriverList @ 0x1404E55E0 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404E5730 (IoGetLoadedDriverInfo.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     DumpCtlCheckErrorLocation @ 0x1405C897C (DumpCtlCheckErrorLocation.c)
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1405CB11C (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405CBEE8 (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1405CC08C (IopGetMaxValidMemorySize.c)
 *     KdCopyDataBlock @ 0x1405E5F14 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x1406FB990 (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x1406FBA8C (MmWriteUnloadedDriverInformation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        __int16 a4,
        int *a5,
        __int64 a6,
        _KTHREAD *Src,
        int a8,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v13; // edi
  int v14; // esi
  __int16 v15; // r12
  char v16; // r14
  int v19; // r15d
  int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 DpcStack; // r13
  unsigned __int64 v25; // rcx
  unsigned int v26; // esi
  int v27; // ebp
  _BYTE *v28; // rdi
  _BYTE *StackLimit; // r12
  _BYTE *StackBase; // r14
  _BYTE *v31; // rax
  unsigned int v32; // r14d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v36; // rcx
  unsigned int v37; // edx
  char *v38; // rcx
  unsigned int LoadedDriverInfo; // eax
  int v40; // edx
  int v41; // edx
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // r8
  unsigned int v45; // r9d
  unsigned int v46; // eax
  int v47; // edx
  unsigned int v48; // r14d
  __int64 v49; // r12
  unsigned int v50; // r8d
  unsigned int v51; // edx
  _DWORD *i; // r10
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  size_t v60; // r8
  __int64 v61; // rax
  int v62; // esi
  __int64 v63; // rax
  unsigned int v64; // r8d
  int v66; // [rsp+30h] [rbp-48h]
  int v67[17]; // [rsp+34h] [rbp-44h] BYREF
  int v68; // [rsp+80h] [rbp+8h]

  v13 = a9;
  v14 = CmNtCSDVersion;
  v15 = a4;
  v67[0] = 0;
  v16 = a3;
  a8 = 0;
  v66 = 17104896;
  v19 = 0;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
  {
    v20 = 17104897;
    v21 = -1073741801;
    goto LABEL_113;
  }
  memset_0(a2, 0, 0x80uLL);
  v23 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  DpcStack = a1 - 4;
  v68 = DpcStack;
  *((_DWORD *)a2 + 2) = v23 - 4;
  v25 = (unsigned int)DpcStack;
  *(_DWORD *)((char *)a2 + DpcStack) = 0;
  *((_DWORD *)a2 + 16) = 0;
  *(_DWORD *)a2 = v14;
  v26 = 8320;
  *((_DWORD *)a2 + 3) = 840;
  *((_DWORD *)a2 + 4) = 3840;
  v27 = (a6 != 0) + 130;
  *((_DWORD *)a2 + 17) = v13;
  if ( (v15 & 0x100) != 0 )
  {
    if ( (unsigned int)DpcStack <= 0x20D0 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v27 |= 0x100u;
      v26 = 8400;
    }
  }
  if ( (v15 & 4) != 0 )
  {
    if ( v26 + 52992 >= (unsigned int)DpcStack )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v26;
      v27 |= 4u;
      v26 += 52992;
    }
  }
  if ( (v15 & 8) != 0 )
  {
    if ( v26 + 2112 >= (unsigned int)DpcStack )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v26;
      v27 |= 8u;
      v26 += 2112;
    }
  }
  if ( (v15 & 0x10) != 0 )
  {
    if ( v26 + 1944 >= (unsigned int)DpcStack )
    {
      *((_DWORD *)a2 + 17) = v13 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v26;
      v27 |= 0x10u;
      v26 += 1944;
    }
  }
  if ( (v15 & 0x20) != 0 )
  {
    if ( (*((_DWORD *)&Src->0 + 1) & 0x20000) != 0 )
    {
      v28 = *(_BYTE **)(a6 + 152);
      StackLimit = Src->StackLimit;
      StackBase = Src->StackBase;
      if ( StackLimit > v28 || v28 >= StackBase )
      {
        v28 = Src->StackLimit;
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && Src != KeGetCurrentPrcb()->IdleThread )
        {
          DpcStack = (__int64)KeGetPcr()->Prcb.DpcStack;
          if ( IopIsAddressRangeValid(DpcStack, 80LL) )
          {
            v31 = *(_BYTE **)(DpcStack + 64);
            LODWORD(DpcStack) = v68;
            if ( StackLimit <= v31 && v31 < StackBase )
              v28 = v31;
          }
          else
          {
            LODWORD(DpcStack) = v68;
          }
        }
      }
      if ( (unsigned __int64)(StackBase - v28) >= 0x7FFF )
        v32 = 0x7FFF;
      else
        v32 = (_DWORD)StackBase - (_DWORD)v28;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v28, v32, v22);
      v15 = a4;
      v16 = a3;
      if ( MaxValidMemorySize )
      {
        if ( v26 + MaxValidMemorySize >= (unsigned int)DpcStack )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 10) = v26;
          v26 = (v26 + MaxValidMemorySize + 7) & 0xFFFFFFF8;
          *((_DWORD *)a2 + 11) = MaxValidMemorySize;
          v27 |= 0x20u;
          a2[9] = (__int64)v28;
        }
      }
    }
    v25 = (unsigned int)DpcStack;
  }
  if ( (v15 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v26 + 936 >= v25 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v26;
      v26 = (v26 + 943) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 936;
      v27 |= 0x400u;
    }
  }
  v34 = a2 - 1024;
  if ( !v16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v36 = MmUnloadedDrivers != 0LL ? 0xAF0 : 0;
  v37 = v26 + v36 + 8;
  if ( v37 >= (unsigned int)DpcStack )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v27 |= 0x40u;
    *((_DWORD *)a2 + 6) = v26;
    v38 = (char *)v34 + v26;
    v26 = v37;
    MmWriteUnloadedDriverInformation(v38);
  }
  if ( (v15 & 0x40) == 0 )
    goto LABEL_55;
  LoadedDriverInfo = IoGetLoadedDriverInfo(v36, &a8, v67);
  v19 = DumpCtlCheckErrorLocation(LoadedDriverInfo, 17104898);
  if ( v19 < 0 )
  {
    v66 = v40;
LABEL_55:
    v41 = a8;
    goto LABEL_56;
  }
  v41 = a8;
  v43 = 144 * a8;
  if ( 144 * a8 )
  {
    if ( v26 + v43 >= (unsigned int)DpcStack )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 12) = v26;
      v27 |= 0x40u;
      v26 += v43;
      *((_DWORD *)a2 + 13) = v41;
    }
  }
LABEL_56:
  v42 = (v67[0] + 7 + 6 * v41) & 0xFFFFFFF8;
  if ( (_DWORD)v42 )
  {
    if ( v26 + (unsigned int)v42 >= (unsigned int)DpcStack )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v26;
      v26 = (v26 + v42 + 7) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 15) = v42;
    }
  }
  v44 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v44 )
  {
    v45 = *((_DWORD *)a2 + 14);
    if ( v45 )
    {
      v46 = IopWriteDriverList((__int64)(a2 - 1024), v42, v44, v45);
      v19 = DumpCtlCheckErrorLocation(v46, 17104899);
      if ( v19 < 0 )
      {
        v66 = v47;
        *((_DWORD *)a2 + 12) = 0;
      }
    }
  }
  if ( !v16 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  v48 = a10;
  if ( (v15 & 0x800) != 0 )
  {
    v49 = a11;
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v50 = 0;
    *((_DWORD *)a2 + 31) = 0;
LABEL_72:
    if ( v50 < v48 )
    {
      v51 = 0;
      for ( i = *(_DWORD **)(v49 + 16LL * v50 + 8); ; i += 4 )
      {
        if ( v51 >= *(_DWORD *)(v49 + 16LL * v50) )
        {
          ++v50;
          goto LABEL_72;
        }
        v53 = v26 + ((i[2] - *i + 7) & 0xFFFFFFF8) + 16;
        if ( v53 >= (unsigned int)DpcStack )
          break;
        if ( !v51 )
          *((_DWORD *)a2 + 30) = v26;
        ++*((_DWORD *)a2 + 31);
        ++v51;
        v26 = v53;
      }
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    v26 = (v26 + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v27 |= 0x800u;
  }
  v54 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v54 )
    MmWriteTriageInformation((char *)v34 + v54);
  v55 = *((unsigned int *)a2 + 7);
  v56 = (unsigned int)DpcStack;
  if ( (_DWORD)v55 && v55 + 52992 <= (unsigned __int64)(unsigned int)DpcStack )
  {
    memmove((char *)v34 + (unsigned int)v55, KeGetCurrentPrcb(), 0xCF00uLL);
    v56 = (unsigned int)DpcStack;
  }
  v57 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v57 && v57 + 2112 <= v56 )
    memmove((char *)v34 + (unsigned int)v57, Src->ApcState.Process, 0x840uLL);
  v58 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v58 && v58 + 1944 <= (unsigned __int64)(unsigned int)DpcStack )
    memmove((char *)v34 + (unsigned int)v58, Src, 0x798uLL);
  v59 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v59 )
  {
    v60 = *((unsigned int *)a2 + 11);
    if ( (int)v59 + (int)v60 <= (unsigned int)DpcStack )
      memmove((char *)v34 + v59, (const void *)a2[9], v60);
  }
  v61 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v61 && v61 + 936 <= (unsigned __int64)(unsigned int)DpcStack )
    KdCopyDataBlock((char *)v34 + (unsigned int)v61);
  if ( v48 )
    IopFillTriageDumpDataBlocks(a2, v48, a11, a2 - 1024);
  if ( (_DWORD)DpcStack != 253948 || a13 )
  {
    v62 = v26 + 4;
    if ( a13 )
      *a13 = v62 - 0x2000;
  }
  else
  {
    v62 = 0x40000;
  }
  if ( a5 )
    *a5 = v27;
  v63 = (unsigned int)(v62 - 4);
  *((_DWORD *)a2 + 1) = v62;
  *((_DWORD *)a2 + 2) = v63;
  if ( v63 - 0x2000 > (unsigned __int64)(unsigned int)DpcStack )
  {
    v20 = 17104900;
    v21 = -1073741670;
LABEL_113:
    v19 = DumpCtlCheckErrorLocation(v21, v20);
    if ( v19 < 0 )
      goto LABEL_114;
    return (unsigned int)v19;
  }
  *(_DWORD *)((char *)a2 + (unsigned int)(v62 - 4) - 0x2000) = 1145524820;
  if ( v19 < 0 )
  {
    v64 = v66;
LABEL_114:
    DumpCtlCheckExitStatus(v64, (unsigned int)v19);
  }
  return (unsigned int)v19;
}

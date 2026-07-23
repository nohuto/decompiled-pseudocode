/*
 * XREFs of MiApplyDriverHotPatch @ 0x140873E94
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     VslApplyHotPatch @ 0x1405C5260 (VslApplyHotPatch.c)
 *     MiLinkHotPatchToBase @ 0x140700F38 (MiLinkHotPatchToBase.c)
 *     MiUpdatePatchInProgress @ 0x140701B84 (MiUpdatePatchInProgress.c)
 *     RtlGetHotPatchSize @ 0x1407257D0 (RtlGetHotPatchSize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     strcmp @ 0x140742840 (strcmp.c)
 *     VslObtainHotPatchUndoTable @ 0x14079504C (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x14086A800 (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140874600 (MiApplyHotPatchToDriverDataPages.c)
 *     MiIdentifyImageDiscardablePages @ 0x140876784 (MiIdentifyImageDiscardablePages.c)
 *     MiIdentifyPatchImageDataPages @ 0x1408768A0 (MiIdentifyPatchImageDataPages.c)
 *     MiInvokePatchCallback @ 0x140876FD4 (MiInvokePatchCallback.c)
 *     MiPrepareDriverForHotPatch @ 0x140879848 (MiPrepareDriverForHotPatch.c)
 *     MiAddEntryToImportList @ 0x14087B2F0 (MiAddEntryToImportList.c)
 *     RtlFindHotPatchBaseMachine @ 0x1408B147C (RtlFindHotPatchBaseMachine.c)
 *     RtlFindHotPatchInformation @ 0x1408B14E4 (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x1408B17C8 (RtlValidateHotPatchBase.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC8E80 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiUnlockDriverPages @ 0x140AC8FF4 (MiUnlockDriverPages.c)
 *     MiFreeLoadedImportList @ 0x140B3F774 (MiFreeLoadedImportList.c)
 *     MiGetSectionStrongImageReference @ 0x140B4F550 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyDriverHotPatch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 HotPatchInformation; // rax
  _DWORD *v8; // r14
  __int64 HotPatchBaseMachine; // rax
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned int v13; // ebx
  int CurrentProcessorColor; // eax
  int v15; // ebx
  char *AnyMultiplexedVm; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r15
  _DWORD *v20; // r15
  unsigned __int64 v21; // r13
  int SectionStrongImageReference; // eax
  __int64 v23; // r9
  __int64 v24; // r12
  int HotPatchSize; // r8d
  int KernelCfgBitmapPageTables; // eax
  char *v27; // r15
  char *v28; // rax
  char *v29; // r14
  char *v30; // rbx
  char *v31; // rcx
  int v32; // r12d
  int v33; // r12d
  int v34; // eax
  int v35; // r13d
  int v36; // eax
  __int64 v37; // rax
  int v38; // r14d
  int v39; // eax
  __int64 v40; // rdx
  int v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  int v43; // [rsp+50h] [rbp-B0h]
  ULONG Size; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  char *v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+70h] [rbp-90h]
  __int64 BaseLoaderPortion; // [rsp+78h] [rbp-88h]
  _QWORD v50[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h]
  _DWORD *v52; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h]
  char *v54; // [rsp+B0h] [rbp-50h] BYREF
  int v55; // [rsp+B8h] [rbp-48h]
  char *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v60; // [rsp+F8h] [rbp-8h]
  __int64 v61[3]; // [rsp+150h] [rbp+50h] BYREF
  int v62; // [rsp+168h] [rbp+68h]
  char v63[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  unsigned int v65; // [rsp+1D0h] [rbp+D0h]

  v46 = 0LL;
  v41 = 0;
  v48 = 0;
  memset_0(v50, 0, 0x40uLL);
  BaseLoaderPortion = MiGetBaseLoaderPortion(a2);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) != 0 )
    return 3221225496LL;
  v42 = MiGetBaseLoaderPortion(a1);
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  v51 = HotPatchInformation;
  v8 = (_DWORD *)HotPatchInformation;
  if ( !HotPatchInformation )
    return 3221225595LL;
  HotPatchBaseMachine = RtlFindHotPatchBaseMachine(HotPatchInformation, 34404LL);
  v10 = *(_DWORD *)(a1 + 64);
  v11 = *(_DWORD *)(a2 + 64);
  v12 = HotPatchBaseMachine;
  if ( !(unsigned __int8)RtlValidateHotPatchBase((_DWORD)v8, HotPatchBaseMachine, v11, v10) )
    return 3221225595LL;
  memset_0(v59, 0, 0x68uLL);
  v59[0] = a2;
  v59[1] = v12;
  v60 = (v11 >> 12) + ((v11 & 0xFFF) != 0);
  memset_0(v61, 0, 0x68uLL);
  v61[0] = a1;
  v62 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
  if ( *(_QWORD *)(BaseLoaderPortion + 248) )
  {
    memset_0(v63, 0, 0x68uLL);
    v64 = *(_QWORD *)(a2 + 48);
    result = VslpEnterIumSecureMode(2u, 0x4Cu, 0, (__int64)v63);
    if ( (int)result < 0 )
      return result;
    v13 = v65;
    if ( v65 )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      P = (PVOID)ExAllocatePoolMm(256LL, v13, 1414877256, CurrentProcessorColor | 0x80000000);
      if ( !P )
        return 3221225626LL;
      v15 = VslObtainHotPatchUndoTable(*(PVOID *)(a2 + 48), (__int64)P, v13);
      if ( v15 < 0 )
        goto LABEL_67;
    }
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v17 = *(_QWORD *)(a2 + 136);
  v18 = (__int64)AnyMultiplexedVm;
  v58 = v17;
  if ( (*(_DWORD *)(v42 + 184) & 0x80u) == 0 && v17 != 1 )
  {
    v46 = MiAddEntryToImportList(v17, a1);
    if ( !v46 )
    {
      v15 = -1073741670;
      goto LABEL_67;
    }
  }
  v15 = MiPrepareDriverPatchState(v59, v18);
  if ( v15 < 0 )
    goto LABEL_67;
  v15 = MiPrepareDriverPatchState(v61, v18);
  if ( v15 < 0 )
    goto LABEL_67;
  v19 = *(unsigned int *)(v12 + 24);
  v50[0] = v59;
  v50[2] = a3;
  v20 = (_DWORD *)((char *)v8 + v19);
  v50[1] = v61;
  v52 = v20;
  v15 = MiIdentifyPatchImageDataPages(v50);
  if ( v15 < 0 )
    goto LABEL_67;
  v15 = MiIdentifyImageDiscardablePages(v59);
  if ( v15 < 0 )
    goto LABEL_67;
  v15 = MiPrepareDriverForHotPatch(v50);
  if ( v15 < 0 )
    goto LABEL_67;
  v21 = *(_QWORD *)(a3 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v45 = v21;
  SectionStrongImageReference = MiGetSectionStrongImageReference(v21);
  v23 = 0LL;
  v15 = SectionStrongImageReference;
  if ( SectionStrongImageReference < 0 )
    goto LABEL_67;
  v24 = v42;
  if ( (*(_DWORD *)(v42 + 184) & 0x80u) != 0 )
    goto LABEL_53;
  if ( (MiFlags & 0x100000) != 0 )
  {
    if ( (v8[8] & 2) != 0 )
    {
LABEL_28:
      KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                    *(_QWORD *)(a1 + 48),
                                    *(unsigned int *)(a1 + 64),
                                    0LL,
                                    v23);
      v23 = 0LL;
      v15 = KernelCfgBitmapPageTables;
      if ( KernelCfgBitmapPageTables < 0 )
        goto LABEL_67;
    }
    else
    {
      HotPatchSize = RtlGetHotPatchSize(v8);
      while ( *v20 )
      {
        if ( (*v20 & 0xFC000) == 0x44000 )
          goto LABEL_28;
        v20 += HotPatchSize * (*v20 & 0xFFFu) + 1;
      }
    }
  }
  v15 = VslApplyHotPatch(
          *(_QWORD *)(v21 + 64),
          *(_QWORD *)(a1 + 112),
          *(_QWORD *)(a2 + 48),
          a2,
          *(_QWORD *)(a1 + 48),
          a1,
          3,
          v23);
  if ( v15 < 0 )
  {
    if ( v15 == -1073740628 )
      KeBugCheckEx(0x1Au, 0x515C1uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
    goto LABEL_67;
  }
  v15 = MiApplyHotPatchToDriverDataPages(v50);
  if ( v15 < 0 )
    goto LABEL_67;
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 2) == 0 )
    goto LABEL_50;
  v27 = *(char **)(a1 + 48);
  Size = 0;
  v28 = (char *)RtlImageDirectoryEntryToData(v27, 1u, 0, &Size);
  v29 = v28;
  v30 = 0LL;
  if ( !v28 )
    goto LABEL_49;
  v31 = &v27[*((unsigned int *)v28 + 8)];
  v32 = *((_DWORD *)v28 + 6);
  v56 = &v27[*((unsigned int *)v28 + 9)];
  v33 = v32 - 1;
  v34 = 0;
  v47 = v31;
  v43 = 0;
  while ( 1 )
  {
    if ( v33 < v34 )
    {
LABEL_48:
      v21 = v45;
      v24 = v42;
      goto LABEL_49;
    }
    v35 = (v34 + v33) >> 1;
    v57 = v35;
    v36 = strcmp("__PatchMainCallout__", &v27[*(unsigned int *)&v31[4 * v35]]);
    if ( v36 >= 0 )
      break;
    if ( !v35 )
      goto LABEL_48;
    v34 = v43;
    v33 = v35 - 1;
LABEL_42:
    v31 = v47;
  }
  if ( v36 > 0 )
  {
    v34 = v35 + 1;
    v43 = v35 + 1;
    goto LABEL_42;
  }
  v21 = v45;
  v24 = v42;
  v37 = *(unsigned __int16 *)&v56[2 * v57];
  if ( (unsigned int)v37 < *((_DWORD *)v29 + 5) )
  {
    v30 = &v27[*(unsigned int *)&v27[4 * v37 + *((unsigned int *)v29 + 7)]];
    if ( v30 > v29 && v30 < &v29[Size] )
      v30 = 0LL;
  }
LABEL_49:
  v54 = v30;
LABEL_50:
  if ( v54 )
  {
    v55 = 0;
    v15 = MiInvokePatchCallback(a1, &v54);
    if ( v15 >= 0 )
    {
      v41 = 1;
      goto LABEL_53;
    }
  }
  else
  {
LABEL_53:
    if ( (*(_DWORD *)(v24 + 184) & 0x80u) != 0 )
    {
      v38 = v48;
    }
    else
    {
      MiUpdatePatchInProgress((struct _LIST_ENTRY *)a2, (struct _LIST_ENTRY *)a1, 0);
      v38 = 1;
    }
    v39 = VslApplyHotPatch(
            *(_QWORD *)(v21 + 64),
            *(_QWORD *)(a1 + 112),
            *(_QWORD *)(a2 + 48),
            a2,
            *(_QWORD *)(a1 + 48),
            a1,
            1,
            0LL);
    v15 = v39;
    if ( v39 >= 0 )
    {
      if ( v54 )
      {
        v55 = 1;
        MiInvokePatchCallback(a1, &v54);
        v41 = 0;
      }
      if ( v46 )
      {
        *(_QWORD *)(a2 + 136) = v46;
        MiFreeLoadedImportList(v58, 0LL);
        v46 = 0LL;
      }
      *(_QWORD *)(BaseLoaderPortion + 248) = a1;
      if ( (*(_DWORD *)(v24 + 184) & 0x80u) == 0 )
      {
        MiLinkHotPatchToBase(a2, a1, *(_DWORD *)(v51 + 8));
        goto LABEL_67;
      }
    }
    else if ( v39 == -1073740628 )
    {
      KeBugCheckEx(0x1Au, 0x515C2uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
    }
    if ( v38 )
      MiUpdatePatchInProgress((struct _LIST_ENTRY *)a2, (struct _LIST_ENTRY *)a1, 1);
  }
LABEL_67:
  MiUnlockDriverPages(v59);
  MiUnlockDriverPages(v61);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v46 )
    MiFreeLoadedImportList(v46, v40);
  if ( v41 )
  {
    v55 = 2;
    MiInvokePatchCallback(a1, &v54);
  }
  return (unsigned int)v15;
}

/*
 * XREFs of PspAllocateThread @ 0x140A7A6A8
 * Callers:
 *     PspCreateThread @ 0x140A7A214 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140A7C010 (PspCreatePicoThread.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     KeSelectInitialIdealProcessorForThread @ 0x140201100 (KeSelectInitialIdealProcessorForThread.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     RtlLocateExtendedFeature @ 0x1403D9FF0 (RtlLocateExtendedFeature.c)
 *     PsQueryThreadStartAddress @ 0x14040CC40 (PsQueryThreadStartAddress.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x140461B80 (KeGetProcessorNodeNumberByIndex.c)
 *     KeGetProcessorNodeNumber @ 0x140464DA0 (KeGetProcessorNodeNumber.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     PsInitializeThreadRngState @ 0x14048D204 (PsInitializeThreadRngState.c)
 *     PsAssignThreadId @ 0x14049C08C (PsAssignThreadId.c)
 *     KeQuerySystemTimeUnsafe @ 0x1404AC5F4 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x1404AF2D0 (KeInitializeSemaphore.c)
 *     KeQueryMaximumGroupCount @ 0x1404B4AE0 (KeQueryMaximumGroupCount.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404EDE04 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     KeSizeOfKThreadExtension @ 0x1405224C4 (KeSizeOfKThreadExtension.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     MmCreateTeb @ 0x140999CF8 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PspSetupUserShadowStack @ 0x1409EE454 (PspSetupUserShadowStack.c)
 *     PspDeleteUserStack @ 0x140A04714 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x140A048C4 (MmDeleteTeb.c)
 *     ObInitializeFastReference @ 0x140A7BD9C (ObInitializeFastReference.c)
 *     MmSecureVirtualMemory @ 0x140AADF70 (MmSecureVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x140AB9ACC (PspWow64SetupUserStack.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        unsigned int *Address,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned int *v13; // r9
  __int64 v15; // r10
  __int64 v16; // r13
  __int64 v17; // r11
  char v18; // r8
  _INITIAL_TEB *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int *v23; // r15
  signed int v24; // ebx
  int v25; // ebx
  USHORT MaximumGroupCount; // ax
  __int64 v27; // rcx
  unsigned int v28; // r15d
  unsigned int v29; // esi
  size_t v30; // r8
  char *v31; // rsi
  volatile signed __int32 *v32; // r12
  struct _KLOCK_ENTRIES *v33; // r9
  AutoBoost *v34; // rax
  void *v35; // rdx
  AutoBoost *v36; // rbx
  int inited; // r15d
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int ULongFromUser; // edx
  int v43; // r8d
  __int16 v44; // dx
  __int16 v45; // cx
  __int16 v46; // ax
  _BYTE *v47; // rcx
  __int64 v48; // r9
  _INITIAL_TEB *v49; // r12
  void *v50; // rcx
  unsigned __int16 v51; // ax
  unsigned __int16 ProcessorNodeNumber; // ax
  int v53; // edx
  int v54; // eax
  _WORD *v55; // rcx
  __int64 v56; // rax
  void **v57; // rcx
  __int64 Pool2; // rax
  _QWORD *ExtendedFeature; // rax
  SIZE_T v60; // rax
  __int16 UShortFromUser; // ax
  unsigned __int16 *v62; // rbx
  __int16 v63; // ax
  __int64 v64; // [rsp+20h] [rbp-208h]
  char v65; // [rsp+50h] [rbp-1D8h]
  char v66; // [rsp+52h] [rbp-1D6h]
  __int16 v67; // [rsp+52h] [rbp-1D6h]
  int v68; // [rsp+54h] [rbp-1D4h]
  _INITIAL_TEB *v69; // [rsp+58h] [rbp-1D0h]
  __int64 v70; // [rsp+60h] [rbp-1C8h]
  __int64 v72; // [rsp+70h] [rbp-1B8h] BYREF
  __int64 v73; // [rsp+78h] [rbp-1B0h]
  unsigned int v74; // [rsp+80h] [rbp-1A8h]
  int v75; // [rsp+84h] [rbp-1A4h]
  ULONG ContextLength; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v77; // [rsp+90h] [rbp-198h]
  _BYTE *v78; // [rsp+98h] [rbp-190h]
  _BYTE *v79; // [rsp+A0h] [rbp-188h]
  SIZE_T Size; // [rsp+A8h] [rbp-180h]
  __int64 v81; // [rsp+B0h] [rbp-178h]
  __int64 v82; // [rsp+B8h] [rbp-170h]
  PVOID Object[5]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-140h]
  unsigned __int64 v85; // [rsp+F0h] [rbp-138h]
  void **v86; // [rsp+F8h] [rbp-130h]
  __int64 v87; // [rsp+100h] [rbp-128h]
  char v88; // [rsp+108h] [rbp-120h] BYREF
  int v89; // [rsp+109h] [rbp-11Fh]
  __int16 v90; // [rsp+10Dh] [rbp-11Bh]
  char v91; // [rsp+10Fh] [rbp-119h]
  __int64 v92; // [rsp+110h] [rbp-118h]
  __int64 v93; // [rsp+118h] [rbp-110h]
  __int64 v94; // [rsp+120h] [rbp-108h]
  __int64 v95; // [rsp+130h] [rbp-F8h] BYREF
  void *v96; // [rsp+138h] [rbp-F0h]
  __int64 v97; // [rsp+140h] [rbp-E8h]
  __int64 v98; // [rsp+148h] [rbp-E0h]
  __int128 v99; // [rsp+150h] [rbp-D8h]
  ULONG_PTR v100; // [rsp+160h] [rbp-C8h]
  int v101; // [rsp+168h] [rbp-C0h]
  int v102; // [rsp+16Ch] [rbp-BCh]
  __int64 v103; // [rsp+170h] [rbp-B8h]
  char *v104; // [rsp+178h] [rbp-B0h]
  unsigned __int64 v105; // [rsp+180h] [rbp-A8h]
  __int64 v106; // [rsp+190h] [rbp-98h]
  unsigned int *v107; // [rsp+198h] [rbp-90h]
  void **v108; // [rsp+1A0h] [rbp-88h]
  _QWORD *v109; // [rsp+1B0h] [rbp-78h]
  _BYTE v110[48]; // [rsp+1B8h] [rbp-70h] BYREF

  v13 = Address;
  v79 = a11;
  v86 = a6;
  Object[4] = (PVOID)BugCheckParameter1;
  v107 = Address;
  v73 = a5;
  v85 = a5;
  v108 = a6;
  v77 = a7;
  v87 = a8;
  v109 = a10;
  v78 = a11;
  v15 = a12;
  v84 = a12;
  memset(v110, 0, sizeof(v110));
  v16 = 0LL;
  v72 = 0LL;
  Object[0] = 0LL;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v82 = 0LL;
  ContextLength = 0;
  Size = (SIZE_T)KeGetCurrentThread();
  v68 = 0;
  v17 = 0LL;
  v70 = 0LL;
  v81 = 0LL;
  v18 = *(_BYTE *)(BugCheckParameter1 + 368) & 1;
  v65 = v18;
  if ( a6 )
    v19 = (_INITIAL_TEB *)*a6;
  else
    v19 = 0LL;
  Object[1] = v19;
  v69 = v19;
  if ( a4 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = *(_QWORD *)(a4 + 8);
    if ( (v22 & 0x1000) != 0 )
      v20 = a4 + 320;
    if ( (v22 & 0x4000) != 0 )
      v21 = KiProcessorBlock[*(unsigned int *)(a4 + 20)];
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      v17 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(BugCheckParameter1 + 408) & 0x40000;
      v70 = v17;
      v81 = v17;
    }
    if ( (v22 & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 784) )
        return 3221225485LL;
      if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 0x1000) != 0 )
        return 3221225659LL;
      v70 = *(_QWORD *)(a4 + 480) | v17;
      v81 = v70;
    }
    if ( v21 )
    {
      if ( v20 )
      {
        if ( *(unsigned __int8 *)(v21 + 208) != *(_WORD *)(v20 + 8)
          || *(_QWORD *)v20 && (*(_QWORD *)v20 & *(_QWORD *)(v21 + 200)) == 0LL )
        {
          v24 = -1073741776;
          goto LABEL_48;
        }
      }
      else
      {
        *(_QWORD *)(a4 + 8) |= 0x1000uLL;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v21 + 208);
        *($C9C4F79064DE35237E3F199A7D1BD3E1 *)(a4 + 320) = *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140FC11F0.116
                                                                                                + 8
                                                                                                * *(unsigned __int8 *)(v21 + 208)
                                                                                                + 4);
      }
      ProcessorNodeNumber = KeGetProcessorNodeNumber(v21);
    }
    else
    {
      if ( !v20 || !*(_QWORD *)v20 )
        goto LABEL_13;
      v51 = KeSelectInitialIdealProcessorForThread(BugCheckParameter1, v20);
      *(_DWORD *)(a4 + 20) = v51;
      *(_QWORD *)(a4 + 8) |= 0x4000uLL;
      ProcessorNodeNumber = KeGetProcessorNodeNumberByIndex(v51);
      v15 = v84;
    }
    v68 = ProcessorNodeNumber + 1;
LABEL_13:
    v18 = v65;
    v13 = Address;
  }
  v23 = (int *)(v15 + 384);
  v84 = v15 + 384;
  *(_DWORD *)(v15 + 384) = 0;
  *(_BYTE *)(v15 + 388) = a3;
  v24 = 0;
  if ( !a5 )
    goto LABEL_15;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
  {
    v24 = -1073741811;
LABEL_48:
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)v24;
  }
  v24 = v18 != 0 ? 0xC000000D : 0;
  if ( v18 )
    goto LABEL_48;
LABEL_15:
  if ( v13 )
  {
    v74 = 0;
    if ( a3 == 1 )
    {
      v106 = 1LL;
      ProbeForRead(v13, 1uLL, 4u);
      ULongFromUser = RtlReadULongFromUser(Address + 6);
      v74 = ULongFromUser;
    }
    else
    {
      ULongFromUser = v13[6];
    }
    *v23 = ULongFromUser & (a3 != 0 ? 7666 : 73714);
    if ( v24 < 0 )
      goto LABEL_48;
  }
  v66 = PoEnergyEstimationEnabled();
  v25 = v66 != 0 ? 2144 : 1944;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v28 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v28 = (v66 != 0 ? 2151 : 1951) & 0xFFFFFFF8;
    v25 = v28 + 8 * MaximumGroupCount;
  }
  LOBYTE(v27) = v85 != 0;
  v85 = KeSizeOfKThreadExtension(v27);
  LODWORD(v82) = ~(v82 - 1) & (v25 + v82 - 1);
  v29 = v85 + v82;
  v24 = ObCreateObjectEx(
          a3,
          PsThreadType,
          (__int64)Address,
          a3,
          v64,
          (int)v85 + (int)v82,
          0,
          (int)v85 + (int)v82,
          Object,
          0LL);
  if ( v24 < 0 )
    goto LABEL_48;
  v30 = v29;
  v31 = (char *)Object[0];
  memset_0(Object[0], 0, v30);
  if ( v66 )
  {
    *((_QWORD *)v31 + 209) = v31 + 1944;
    _interlockedbittestandset((volatile signed __int32 *)v31, 0x15u);
  }
  if ( KiSchedulerAssistThreadFlagEnabled )
    _interlockedbittestandset((volatile signed __int32 *)v31, 0x16u);
  if ( v28 )
  {
    *((_DWORD *)v31 + 360) |= 0x20000u;
    *((_QWORD *)v31 + 210) = &v31[v28];
  }
  *((_QWORD *)v31 + 177) = 0LL;
  *((_QWORD *)v31 + 161) = *(_QWORD *)(BugCheckParameter1 + 464);
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v31 + 360) |= 4u;
  if ( (*a9 & 0x200) != 0 )
    *((_DWORD *)v31 + 29) |= 0x200000u;
  *((_DWORD *)v31 + 257) = 32;
  v32 = (volatile signed __int32 *)(v31 + 1424);
  *((_QWORD *)v31 + 178) = 0LL;
  *((_DWORD *)v31 + 358) = 15;
  v31[1831] = -1;
  KeInitializeSemaphore((PRKSEMAPHORE)(v31 + 1304), 0, 1);
  *((_QWORD *)v31 + 154) = v31 + 1224;
  *((_QWORD *)v31 + 153) = v31 + 1224;
  *((_QWORD *)v31 + 191) = v31 + 1520;
  *((_QWORD *)v31 + 190) = v31 + 1520;
  *((_QWORD *)v31 + 193) = v31 + 1536;
  *((_QWORD *)v31 + 192) = v31 + 1536;
  *((_QWORD *)v31 + 194) = 0LL;
  *((_QWORD *)v31 + 204) = v31 + 1624;
  *((_QWORD *)v31 + 203) = v31 + 1624;
  *((_QWORD *)v31 + 205) = 0LL;
  *((_QWORD *)v31 + 169) = v31 + 1344;
  *((_QWORD *)v31 + 168) = v31 + 1344;
  *((_QWORD *)v31 + 195) = 0LL;
  *((_QWORD *)v31 + 158) = 0LL;
  *((_QWORD *)v31 + 160) = v31 + 1272;
  *((_QWORD *)v31 + 159) = v31 + 1272;
  *((_QWORD *)v31 + 211) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((_QWORD *)v31 + 152);
  else
    *((_QWORD *)v31 + 152) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)v31 + 216) = v31 + 1720;
  *((_QWORD *)v31 + 215) = v31 + 1720;
  *((_QWORD *)v31 + 217) = 0LL;
  *((_QWORD *)v31 + 219) = v31 + 1744;
  *((_QWORD *)v31 + 218) = v31 + 1744;
  *((_QWORD *)v31 + 239) = 0LL;
  v34 = (AutoBoost *)KeAbPreAcquire((__int64)(v31 + 1424), 0LL, 0LL, v33);
  v36 = v34;
  if ( _interlockedbittestandset64(v32, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v31 + 178, v34, (__int64)(v31 + 1424));
  if ( v36 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v36, v35);
    else
      *((_BYTE *)v36 + 10) = 1;
  }
  inited = PsAssignThreadId((__int64)v31);
  if ( inited < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31 + 178);
    KeAbPostRelease((unsigned __int64)(v31 + 1424));
    goto LABEL_65;
  }
  v38 = v73;
  if ( !v73 )
  {
    v39 = v77;
    *((_QWORD *)v31 + 156) = v77;
    *((_QWORD *)v31 + 172) = v39;
    v95 = 0LL;
    v97 = v39;
    v98 = v87;
    v99 = 0LL;
    v100 = BugCheckParameter1;
    v101 = v68;
    v102 = 0;
    v96 = PspSystemThreadStartup;
    if ( (*a9 & 0x400) != 0 && v65 )
    {
      v96 = PspSecureThreadStartup;
      v102 = 16;
      *((_DWORD *)v31 + 361) |= 0x200u;
    }
    goto LABEL_39;
  }
  v43 = *a9;
  v44 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v44 = 16 * (v43 & 0x40);
  v45 = v44 | 0x2000;
  if ( (v43 & 0x80u) == 0 )
    v45 = v44;
  v46 = v45 | 0x4000;
  if ( (v43 & 0x100) == 0 )
    v46 = v45;
  v67 = v46;
  v47 = v78;
  if ( !v78 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1600) )
    {
      v56 = *(_QWORD *)(v73 + 248);
      *((_QWORD *)v31 + 156) = v56;
      *((_QWORD *)v31 + 172) = v56;
      v57 = v86;
      *((_QWORD *)v31 + 207) = v86[1];
      *((_QWORD *)v31 + 208) = v57[2];
      _interlockedbittestandset((volatile signed __int32 *)v31, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
      Pool2 = ExAllocatePool2(0x100uLL);
      *((_QWORD *)v31 + 213) = Pool2;
      if ( !Pool2 )
      {
        inited = -1073741670;
        goto LABEL_65;
      }
      goto LABEL_79;
    }
    v16 = *(_QWORD *)(Size + 240);
    v72 = v16;
    *((_QWORD *)v31 + 156) = PsQueryThreadStartAddress(Size, 1);
    *((_QWORD *)v31 + 172) = *(_QWORD *)(Size + 1376);
    *((_DWORD *)v31 + 361) |= 0x10u;
    if ( (*(_DWORD *)(BugCheckParameter1 + 1876) & 0x4000) != 0
      && (*(_DWORD *)(v38 + 48) & 0x100040) == 0x100040
      && (*(_DWORD *)(*(int *)(v38 + 1248) + v38 + 1232) & 0x800LL) != 0 )
    {
      ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(v38 + 1232), 0xBu, 0LL);
      if ( ExtendedFeature )
      {
        if ( (*(_BYTE *)ExtendedFeature & 1) != 0 && ExtendedFeature[1] )
          *((_DWORD *)v31 + 29) |= 0x100000u;
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 784) )
    {
      v60 = 14448LL;
      if ( *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
        v60 = 12336LL;
      Size = v60;
    }
    else
    {
      Size = 6256LL;
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v110);
    if ( MmSecureVirtualMemory((PVOID)v16, Size, 4u) )
    {
      RtlCopyToUser((void *)(v16 + 64), v31 + 1288, 0x10uLL);
      RtlCopyToUser((void *)(v16 + 2008), v31 + 1288, 0x10uLL);
      RtlWriteULongToUser((_DWORD *)(v16 + 6044), 0);
      RtlWriteULongToUser((_DWORD *)(v16 + 6120), 0);
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)(v16 + 6126));
      RtlWriteUShortToUser((_WORD *)(v16 + 6126), v67 | UShortFromUser & 0x62C | 0x40);
      RtlWriteULong64ToUser((_QWORD *)(v16 + 6224), 0LL);
      if ( *(_QWORD *)(BugCheckParameter1 + 784) )
      {
        if ( *(_WORD *)(BugCheckParameter1 + 1772) == 0x8664 )
        {
          RtlWriteULong64ToUser((_QWORD *)(v16 + 8256), *((_QWORD *)v31 + 161));
          RtlWriteULong64ToUser((_QWORD *)(v16 + 8264), *((_QWORD *)v31 + 162));
          RtlWriteULong64ToUser((_QWORD *)(v16 + 10200), *((_QWORD *)v31 + 161));
          RtlWriteULong64ToUser((_QWORD *)(v16 + 10208), *((_QWORD *)v31 + 162));
          RtlWriteULongToUser((_DWORD *)(v16 + 14236), 0);
          RtlWriteULongToUser((_DWORD *)(v16 + 14312), 0);
          RtlWriteULong64ToUser((_QWORD *)(v16 + 14416), 0LL);
          v62 = (unsigned __int16 *)(v16 + 14318);
        }
        else
        {
          RtlWriteULongToUser((_DWORD *)(v16 + 8224), *((_DWORD *)v31 + 322));
          RtlWriteULongToUser((_DWORD *)(v16 + 8228), *((_DWORD *)v31 + 324));
          RtlWriteULongToUser((_DWORD *)(v16 + 9908), *((_DWORD *)v31 + 322));
          RtlWriteULongToUser((_DWORD *)(v16 + 9912), *((_DWORD *)v31 + 324));
          RtlWriteULongToUser((_DWORD *)(v16 + 12188), 0);
          RtlWriteULongToUser((_DWORD *)(v16 + 12228), 0);
          RtlWriteULongToUser((_DWORD *)(v16 + 12312), 0);
          v62 = (unsigned __int16 *)(v16 + 12234);
        }
        v63 = RtlReadUShortFromUser(v62);
        RtlWriteUShortToUser(v62, v67 | v63 & 0x62C | 0x40);
      }
      v38 = v73;
    }
    else
    {
      inited = -1073741503;
    }
LABEL_142:
    KiUnstackDetachProcess((__int64)v110, 0);
    if ( inited < 0 )
      goto LABEL_65;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1876) & 0x4000) != 0 )
    *((_DWORD *)v31 + 29) |= 0x100000u;
  if ( !*(_QWORD *)(BugCheckParameter1 + 784) )
  {
    inited = PspSetupUserStack(BugCheckParameter1, v38, v69, (__int64)v47, v68);
    if ( inited < 0 || (*((_DWORD *)v31 + 29) & 0x100000) == 0 )
      goto LABEL_63;
    v49 = v69;
    v54 = PspSetupUserShadowStack((_KPROCESS *)BugCheckParameter1, v38, v69, v78, v68);
LABEL_113:
    inited = v54;
    goto LABEL_64;
  }
  v88 = 0;
  v93 = 0x8000LL;
  v94 = 0x40000LL;
  v92 = 0LL;
  inited = PspSetupUserStack(BugCheckParameter1, v38, v69, (__int64)&v88, v68);
  if ( inited >= 0 )
  {
    v53 = (int)v79;
    *v79 = *v79 & 0xFD | v88 & 2;
    v49 = v69;
    v54 = PspWow64SetupUserStack(BugCheckParameter1, v53, (_DWORD)v69, v53, v68);
    goto LABEL_113;
  }
LABEL_63:
  v49 = v69;
LABEL_64:
  if ( inited < 0 )
    goto LABEL_65;
  inited = MmCreateTeb(BugCheckParameter1, v49, (__int128 *)(v31 + 1288), v48, &v72);
  if ( inited < 0 )
    goto LABEL_65;
  *((_QWORD *)v31 + 156) = *(_QWORD *)(v38 + 248);
  *((_QWORD *)v31 + 172) = *(_QWORD *)(v38 + 128);
  v16 = v72;
  if ( *(_QWORD *)(BugCheckParameter1 + 784) )
  {
    inited = PspWow64InitThread((_KPROCESS *)BugCheckParameter1, (__int64)v49, (_QWORD *)v38, v72);
    if ( inited < 0 )
      goto LABEL_65;
  }
  if ( v67 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v110);
    RtlWriteUShortToUser((_WORD *)(v16 + 6126), v67);
    if ( *(_QWORD *)(BugCheckParameter1 + 784) )
    {
      v55 = (_WORD *)(v16 + 14318);
      if ( *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
        v55 = (_WORD *)(v16 + 12234);
      RtlWriteUShortToUser(v55, v67);
    }
    inited = 0;
    v75 = 0;
    goto LABEL_142;
  }
LABEL_79:
  v95 = 0LL;
  v96 = PspUserThreadStartup;
  v97 = v77;
  v98 = *((_QWORD *)v31 + 156);
  *(_QWORD *)&v99 = v38;
  *((_QWORD *)&v99 + 1) = v16;
  v100 = BugCheckParameter1;
  v101 = v68;
  v102 = 0;
LABEL_39:
  v103 = v70;
  v104 = &v31[(unsigned int)v82];
  v105 = v85;
  inited = KeInitThread(v31, &v95);
  if ( inited >= 0 )
  {
    PsInitializeThreadRngState((unsigned __int64)v31);
    if ( (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline() )
      ObInitializeFastReference(v31 + 1936, BugCheckParameter1);
    *v109 = v31;
    return 0LL;
  }
  if ( v16 && v78 )
    MmDeleteTeb((struct _KPROCESS *)BugCheckParameter1, v16);
LABEL_65:
  if ( v78 && *v78 )
    PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v40, (__int64)v69, v78);
  v50 = (void *)*((_QWORD *)v31 + 213);
  if ( v50 )
  {
    ExFreePoolWithTag(v50, 0x63537350u);
    *((_QWORD *)v31 + 213) = 0LL;
  }
  if ( *((_QWORD *)v31 + 162) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31 + 178);
    KeAbPostRelease((unsigned __int64)(v31 + 1424));
  }
  if ( !*((_QWORD *)v31 + 68) )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v31);
  return (unsigned int)inited;
}

/*
 * XREFs of VidSchInitializeAdapter @ 0x1400C2230
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003A398 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14004B08C (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0_VIDSCH_GLOBAL@@QEAA@XZ @ 0x14004C14C (--0_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z @ 0x14004C478 (-AllocateElements@-$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z @ 0x14004C4F4 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z.c)
 *     ??0VIDSCH_VSYNC_SMOOTHER@@QEAA@XZ @ 0x140055C98 (--0VIDSCH_VSYNC_SMOOTHER@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x140055CF0 (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEA.c)
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x14005618C (Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledDeviceUsageNoInline @ 0x1400561E4 (Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiReadGlobalConfiguration @ 0x1400C09BC (VidSchiReadGlobalConfiguration.c)
 *     VidSchiRequestSchedulerStatus @ 0x1400C1914 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCreateNode @ 0x1400C3B00 (VidSchiCreateNode.c)
 *     VidSchiInitializeNode @ 0x1400C3F84 (VidSchiInitializeNode.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 */

_VIDSCH_GLOBAL *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r15
  _VIDSCH_GLOBAL *Pool2; // rax
  _VIDSCH_GLOBAL *v9; // rsi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  int v20; // ecx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rbx
  __int64 v31; // rdi
  char *v32; // rbx
  __int64 v33; // rdi
  __int64 Timer; // rax
  NTSTATUS v35; // eax
  int v36; // ecx
  NTSTATUS v37; // eax
  __int64 v38; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v40; // edx
  unsigned int v41; // r12d
  _DWORD *v42; // rax
  VIDSCH_VSYNC_SMOOTHER *v43; // rax
  VIDSCH_VSYNC_SMOOTHER *v44; // rcx
  unsigned int v45; // edi
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // r13
  union _SLIST_HEADER *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // r13
  union _SLIST_HEADER *v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  bool v56; // cf
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // r13d
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned int v64; // edx
  __int64 *v65; // rbx
  __int64 v66; // rdx
  unsigned int i; // r8d
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  unsigned int v73; // eax
  unsigned int v74; // ebx
  unsigned int v75; // edi
  unsigned int v76; // eax
  __int64 Node; // rax
  __int64 *v78; // rcx
  unsigned int v79; // r8d
  _QWORD *v80; // rcx
  _QWORD *v81; // rax
  unsigned int v82; // edi
  __int64 v83; // rax
  __int64 *v84; // rcx
  unsigned int v85; // r8d
  _QWORD *v86; // rcx
  _QWORD *v87; // rax
  int v88; // eax
  int v89; // eax
  NTSTATUS v90; // eax
  _QWORD *v91; // rcx
  _QWORD *v92; // rax
  void *ThreadHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+90h] [rbp-70h] BYREF
  int v97; // [rsp+98h] [rbp-68h]
  const wchar_t *v98; // [rsp+A0h] [rbp-60h]
  unsigned int *v99; // [rsp+A8h] [rbp-58h]
  int v100; // [rsp+B0h] [rbp-50h]
  int *v101; // [rsp+B8h] [rbp-48h]
  int v102; // [rsp+C0h] [rbp-40h]
  __int64 v103; // [rsp+C8h] [rbp-38h]
  int v104; // [rsp+D0h] [rbp-30h]
  __int64 v105; // [rsp+D8h] [rbp-28h]
  __int128 v106; // [rsp+E0h] [rbp-20h]
  __int128 v107; // [rsp+F0h] [rbp-10h]
  _BYTE v108[80]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v109; // [rsp+160h] [rbp+60h] BYREF
  int v110; // [rsp+178h] [rbp+78h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 373;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 16);
  Pool2 = (_VIDSCH_GLOBAL *)ExAllocatePool2(64LL, 7104LL, 811690326LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 391;
    return 0LL;
  }
  v9 = _VIDSCH_GLOBAL::_VIDSCH_GLOBAL(Pool2);
  *(_DWORD *)v9 = 811690326;
  *((_DWORD *)v9 + 1) = *(_DWORD *)(v7 + 240);
  *((_QWORD *)v9 + 1) = a1;
  *((_QWORD *)v9 + 2) = v7;
  *((_QWORD *)v9 + 4) = a2;
  *((_DWORD *)v9 + 10) = *(_DWORD *)(v7 + 2476);
  *((_DWORD *)v9 + 11) = 7;
  *((_QWORD *)v9 + 857) = a3;
  KeQueryPerformanceCounter((PLARGE_INTEGER)v9 + 363);
  v10 = *(_DWORD *)(v7 + 1896);
  *((_DWORD *)v9 + 12) = v10;
  if ( !v10 )
  {
    *((_DWORD *)v9 + 12) = 1;
    *((_BYTE *)v9 + 58) = 1;
  }
  if ( *(_BYTE *)(v7 + 2983) )
    *((_BYTE *)v9 + 59) = 1;
  *((_BYTE *)v9 + 53) = (*(_DWORD *)(v7 + 2504) & 2) != 0;
  *((_BYTE *)v9 + 52) = *(_BYTE *)(v7 + 2978);
  *((_BYTE *)v9 + 54) = (*(_DWORD *)(v7 + 2504) & 0x10) != 0;
  *((_BYTE *)v9 + 55) = (*(_DWORD *)(v7 + 2500) & 0x10) != 0;
  *((_BYTE *)v9 + 56) = (*(_DWORD *)(v7 + 2504) & 0x20) == 0;
  *((_BYTE *)v9 + 57) = (*(_DWORD *)(v7 + 2504) & 0x40) != 0;
  *((_BYTE *)v9 + 61) = (**(_DWORD **)(v7 + 3048) & 0x40) != 0;
  *((_BYTE *)v9 + 7075) = *(_QWORD *)(v7 + 1728) != 0LL;
  *((_BYTE *)v9 + 7078) = (**(_DWORD **)(v7 + 3048) & 0x20000000) != 0;
  *((_BYTE *)v9 + 7076) = (**(_DWORD **)(v7 + 3048) & 0x40000000) != 0;
  *((_BYTE *)v9 + 7077) = (*(_DWORD *)(*(_QWORD *)(v7 + 3048) + 4LL) & 2) != 0;
  *((_BYTE *)v9 + 7079) = **(int **)(v7 + 3048) < 0;
  *((_BYTE *)v9 + 7085) = *(_BYTE *)(v7 + 5108) & 1;
  *((_BYTE *)v9 + 7083) = (unsigned int)Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledDeviceUsageNoInline() != 0;
  v11 = 14;
  if ( ((*(_DWORD *)(v7 + 2504) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v7 + 2504) >> 7) & 0xFu) < 0xE )
    v11 = (*(_DWORD *)(v7 + 2504) >> 7) & 0xF;
  *((_DWORD *)v9 + 63) = v11;
  *((_DWORD *)v9 + 40) = *(_DWORD *)(v7 + 2984);
  *((_BYTE *)v9 + 164) = *(_BYTE *)(v7 + 3089) != 0;
  *((_DWORD *)v9 + 42) = *(_DWORD *)(v7 + 3012);
  if ( (**(_DWORD **)(v7 + 3048) & 0x100000) != 0 )
  {
    v12 = *(_DWORD *)(v7 + 3020);
    *((_DWORD *)v9 + 17) = v12;
    if ( !v12 )
    {
      *((_DWORD *)v9 + 17) = 1;
      v12 = 1;
    }
    *((_DWORD *)v9 + 18) = *(_DWORD *)(v7 + 3024);
    *((_BYTE *)v9 + 67) = v12 > 1;
  }
  else
  {
    *((_DWORD *)v9 + 17) = 1;
  }
  v13 = 0;
  *((_BYTE *)v9 + 7072) = *(_BYTE *)(v7 + 3108) != 0;
  *((_BYTE *)v9 + 2500) = (*(_DWORD *)(v7 + 3016) & 0x10) != 0;
  *((_QWORD *)v9 + 337) = MEMORY[0xFFFFF78000000320];
  v14 = *(_DWORD *)(v7 + 296);
  *(_QWORD *)((char *)v9 + 84) = v14;
  if ( v14 )
  {
    v15 = 0LL;
    v16 = v14;
    do
    {
      v17 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 3032) + v15);
      v15 += 352LL;
      v13 += v17;
      *((_DWORD *)v9 + 22) = v13;
      --v16;
    }
    while ( v16 );
  }
  v18 = (unsigned int)(v13 + *((_DWORD *)v9 + 21));
  *((_DWORD *)v9 + 23) = v18;
  v19 = (unsigned __int64)(v18 + 63) >> 6;
  if ( (unsigned int)v18 <= 8 )
  {
    *((_QWORD *)v9 + 87) = (char *)v9 + 704;
    if ( (_DWORD)v18 )
      memset((char *)v9 + 704, 0, 8LL * (unsigned int)v18);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v18 < 8 )
    {
LABEL_129:
      WdLogSingleEntry1(1LL, v7);
      WdLogGlobalForLineNumber = 522;
      goto LABEL_130;
    }
    *((_QWORD *)v9 + 87) = ExAllocatePool2(64LL, 8 * v18, 811690326LL);
  }
  *((_DWORD *)v9 + 192) = v18;
  if ( !*((_QWORD *)v9 + 87)
    || !NonPagedPoolZeroedArray<unsigned long,8,811690326>::AllocateElements((__int64 *)v9 + 356, *((_DWORD *)v9 + 23))
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 65, v19)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 71, v19)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 77, v19)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 83, v19) )
  {
    goto LABEL_129;
  }
  RtlInitializeBitMapEx((char *)v9 + 504, *((_QWORD *)v9 + 65), *((unsigned int *)v9 + 23));
  RtlInitializeBitMapEx((char *)v9 + 552, *((_QWORD *)v9 + 71), *((unsigned int *)v9 + 23));
  RtlInitializeBitMapEx((char *)v9 + 600, *((_QWORD *)v9 + 77), *((unsigned int *)v9 + 23));
  RtlInitializeBitMapEx((char *)v9 + 648, *((_QWORD *)v9 + 83), *((unsigned int *)v9 + 23));
  v20 = 31;
  v21 = *((unsigned int *)v9 + 21);
  if ( *(_DWORD *)(v7 + 2496) < 0x1Fu )
    v20 = *(_DWORD *)(v7 + 2496);
  v22 = *((_DWORD *)v9 + 706);
  *((_DWORD *)v9 + 724) = v20;
  v23 = 8 * v21;
  *((_DWORD *)v9 + 706) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * *(_DWORD *)(v7 + 2500))) & 0x10;
  v24 = ExAllocatePool2(64LL, v23, 811690326LL);
  v25 = 0;
  *((_QWORD *)v9 + 41) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 550;
LABEL_130:
    v66 = 0x40000LL;
    goto LABEL_131;
  }
  v27 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 21), 811690326LL);
  *((_QWORD *)v9 + 42) = v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 558;
    goto LABEL_130;
  }
  v28 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 21), 811690326LL);
  *((_QWORD *)v9 + 43) = v28;
  if ( !v28 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 566;
    goto LABEL_130;
  }
  v29 = ExAllocatePool2(64LL, v23, 811690326LL);
  *((_QWORD *)v9 + 44) = v29;
  if ( !v29 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 576;
    goto LABEL_130;
  }
  *((_DWORD *)v9 + 94) = 0;
  VidSchiReadGlobalConfiguration((__int64)v9);
  *((_DWORD *)v9 + 707) = (*((_DWORD *)v9 + 706) & 0x10 | 8u) >> 3;
  *((_DWORD *)v9 + 708) = 5;
  if ( !*((_DWORD *)v9 + 709) && (*(_DWORD *)(v7 + 2500) & 0x40) == 0 )
    *((_DWORD *)v9 + 709) = 1;
  if ( !*((_DWORD *)v9 + 710) )
    *((_DWORD *)v9 + 710) = (*(_DWORD *)(*((_QWORD *)v9 + 2) + 3044LL) >= 2400) + 1;
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1256));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1048));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1152));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1360));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 384));
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 252);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 255);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 253);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 254);
  v30 = (char *)v9 + 1464;
  v31 = 4LL;
  do
  {
    *(_OWORD *)v30 = 0LL;
    *((_OWORD *)v30 + 1) = 0LL;
    *((_OWORD *)v30 + 2) = 0LL;
    *((_QWORD *)v30 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v30, SynchronizationEvent, 0);
    v30 += 56;
    --v31;
  }
  while ( v31 );
  v32 = (char *)v9 + 1688;
  v33 = 4LL;
  do
  {
    *(_OWORD *)v32 = 0LL;
    *((_OWORD *)v32 + 1) = 0LL;
    *((_OWORD *)v32 + 2) = 0LL;
    *((_QWORD *)v32 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v32, SynchronizationEvent, 0);
    v32 += 56;
    --v33;
  }
  while ( v33 );
  Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v9, 4LL);
  *((_QWORD *)v9 + 25) = Timer;
  if ( !Timer )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 702;
LABEL_132:
    VidSchTerminateAdapter(v9);
    return 0LL;
  }
  *((_QWORD *)v9 + 46) = (char *)v9 + 360;
  *((_QWORD *)v9 + 45) = (char *)v9 + 360;
  InitializeSListHead((PSLIST_HEADER)v9 + 129);
  *((_QWORD *)v9 + 261) = (char *)v9 + 2080;
  *((_QWORD *)v9 + 260) = (char *)v9 + 2080;
  *((_QWORD *)v9 + 240) = (char *)v9 + 1912;
  *((_QWORD *)v9 + 239) = (char *)v9 + 1912;
  *((_QWORD *)v9 + 242) = (char *)v9 + 1928;
  *((_QWORD *)v9 + 241) = (char *)v9 + 1928;
  *((_QWORD *)v9 + 244) = (char *)v9 + 1944;
  *((_QWORD *)v9 + 243) = (char *)v9 + 1944;
  *((_QWORD *)v9 + 246) = (char *)v9 + 1960;
  *((_QWORD *)v9 + 245) = (char *)v9 + 1960;
  *((_QWORD *)v9 + 248) = (char *)v9 + 1976;
  *((_QWORD *)v9 + 247) = (char *)v9 + 1976;
  *((_QWORD *)v9 + 427) = (char *)v9 + 3408;
  *((_QWORD *)v9 + 426) = (char *)v9 + 3408;
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 428);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 429);
  *((_QWORD *)v9 + 250) = (char *)v9 + 1992;
  *((_QWORD *)v9 + 249) = (char *)v9 + 1992;
  *((_QWORD *)v9 + 112) = (char *)v9 + 888;
  *((_QWORD *)v9 + 111) = (char *)v9 + 888;
  *((_QWORD *)v9 + 114) = (char *)v9 + 904;
  *((_QWORD *)v9 + 113) = (char *)v9 + 904;
  *((_QWORD *)v9 + 116) = (char *)v9 + 920;
  *((_QWORD *)v9 + 115) = (char *)v9 + 920;
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 344);
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 3128));
  KeInitializeEvent((PRKEVENT)((char *)v9 + 3232), SynchronizationEvent, 0);
  *((_QWORD *)v9 + 317) = VidSchiControlVSyncThread;
  *((_QWORD *)v9 + 341) = VidSchiDeferredVisibilityThread;
  *((_QWORD *)v9 + 318) = v9;
  *((_QWORD *)v9 + 315) = 0LL;
  *((_QWORD *)v9 + 342) = v7;
  *((_QWORD *)v9 + 339) = 0LL;
  v35 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v9 + 6944),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          0x28uLL,
          0x30616956u,
          0);
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v35);
    WdLogGlobalForLineNumber = 766;
    goto LABEL_130;
  }
  *((_QWORD *)v9 + 866) = (char *)v9 + 6920;
  *((_QWORD *)v9 + 865) = (char *)v9 + 6920;
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 860);
  *((_QWORD *)v9 + 864) = v9;
  *((_QWORD *)v9 + 863) = VidSchiProcessAsyncLiveDump;
  *((_QWORD *)v9 + 861) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)v9 + 7040), SynchronizationEvent, 0);
  *((_QWORD *)v9 + 472) = (char *)v9 + 3768;
  *((_QWORD *)v9 + 471) = (char *)v9 + 3768;
  *((_QWORD *)v9 + 474) = (char *)v9 + 3784;
  *((_QWORD *)v9 + 473) = (char *)v9 + 3784;
  v36 = *((_DWORD *)v9 + 21);
  *((_BYTE *)v9 + 7064) = 1;
  v37 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v9 + 944),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          (unsigned int)(*((_DWORD *)v9 + 40) * (72 * v36 + 224) + 8 * (v36 + 83)),
          0x38616956u,
          0);
  if ( v37 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v37);
    WdLogGlobalForLineNumber = 797;
    goto LABEL_130;
  }
  v38 = *((_QWORD *)v9 + 2);
  *((_BYTE *)v9 + 1040) = 1;
  *((_BYTE *)v9 + 7081) = (*(_DWORD *)(v38 + 2504) & 0x1000) != 0;
  *((_BYTE *)v9 + 7084) = (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() != 0;
  IsEnabledDeviceUsageNoInline = Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline();
  v40 = *((_DWORD *)v9 + 12);
  *((_BYTE *)v9 + 7074) = 1;
  v41 = 0;
  *((_BYTE *)v9 + 7086) = IsEnabledDeviceUsageNoInline != 0;
  if ( v40 )
  {
    while ( 1 )
    {
      v42 = (_DWORD *)ExAllocatePool2(64LL, 83120LL, 962685270LL);
      *((_QWORD *)v9 + v41 + 431) = v42;
      if ( !v42 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 828;
        goto LABEL_132;
      }
      *v42 = 962685270;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + 44488LL) = -1;
      *(_BYTE *)(*((_QWORD *)v9 + v41 + 431) + 78948LL) = 1;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + 83092LL) = 1;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + 24LL) = v41;
      if ( *((_BYTE *)v9 + 7074) )
      {
        v43 = (VIDSCH_VSYNC_SMOOTHER *)operator new(4200LL, 0x39616956u, 64LL);
        v44 = v43 ? VIDSCH_VSYNC_SMOOTHER::VIDSCH_VSYNC_SMOOTHER(v43) : 0LL;
        *(_QWORD *)(*((_QWORD *)v9 + v41 + 431) + 44408LL) = v44;
        if ( !*(_QWORD *)(*((_QWORD *)v9 + v41 + 431) + 44408LL) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 842;
          goto LABEL_130;
        }
      }
      v45 = 0;
      if ( *((_DWORD *)v9 + 40) )
        break;
LABEL_67:
      v47 = ExAllocatePool2(64LL, 12LL, 962685270LL);
      *((_QWORD *)v9 + v41 + 841) = v47;
      if ( !v47 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 875;
        goto LABEL_132;
      }
      InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v9 + v41 + 431) + 44848LL));
      v48 = 0LL;
      v49 = 64LL;
      do
      {
        *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + v48 * 16 + 44864) = 929130838;
        v50 = (union _SLIST_HEADER *)*((_QWORD *)v9 + v41 + 431);
        ExpInterlockedPushEntrySList(v50 + 2803, (PSLIST_ENTRY)&v50[v48 + 2805]);
        v48 += 33LL;
        --v49;
      }
      while ( v49 );
      v51 = 0LL;
      *(_QWORD *)(*((_QWORD *)v9 + v41 + 431) + 78960LL) = 0LL;
      *(_WORD *)(*((_QWORD *)v9 + v41 + 431) + 83088LL) = 0;
      InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v9 + v41 + 431) + 78976LL));
      v52 = 64LL;
      do
      {
        *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + v51 * 16 + 78992) = 1650551126;
        v53 = (union _SLIST_HEADER *)*((_QWORD *)v9 + v41 + 431);
        ExpInterlockedPushEntrySList(v53 + 4936, (PSLIST_ENTRY)&v53[v51 + 4938]);
        v51 += 4LL;
        --v52;
      }
      while ( v52 );
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + 128LL) = *((_DWORD *)v9 + 62);
      v54 = *(unsigned int *)(*((_QWORD *)v9 + v41 + 431) + 128LL);
      v55 = 112 * v54;
      if ( !is_mul_ok(v54, 0x70uLL) )
        v55 = -1LL;
      v56 = __CFADD__(v55, 8LL);
      v57 = v55 + 8;
      if ( v56 )
        v57 = -1LL;
      v58 = (_QWORD *)operator new[](v57, 0x61616956u, 64LL);
      if ( v58 )
      {
        *v58 = v54;
        v59 = v58 + 1;
      }
      else
      {
        v59 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)v9 + v41 + 431) + 136LL) = v59;
      v60 = *((_QWORD *)v9 + v41 + 431);
      if ( !*(_QWORD *)(v60 + 136) )
      {
        WdLogSingleEntry1(1LL, v41);
        WdLogGlobalForLineNumber = 910;
        goto LABEL_130;
      }
      v61 = 0;
      if ( *(_DWORD *)(v60 + 128) )
      {
        while ( 1 )
        {
          v62 = *(_QWORD *)(v60 + 136);
          v63 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 40), 962685270LL);
          *(_QWORD *)(112LL * v61 + v62 + 72) = v63;
          if ( !v63 )
            break;
          ++v61;
          v60 = *((_QWORD *)v9 + v41 + 431);
          if ( v61 >= *(_DWORD *)(v60 + 128) )
            goto LABEL_83;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2401;
        goto LABEL_130;
      }
LABEL_83:
      v40 = *((_DWORD *)v9 + 12);
      ++v41;
      v25 = 0;
      if ( v41 >= v40 )
        goto LABEL_84;
    }
    while ( 1 )
    {
      v46 = 304LL * v45;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 431) + v46 + 188) = -1;
      if ( !*((_BYTE *)v9 + 67) )
      {
        *(_QWORD *)(*((_QWORD *)v9 + v41 + 431) + v46 + 432) = ExAllocatePool2(64LL, 1024LL, 962685270LL);
        if ( !*(_QWORD *)(*((_QWORD *)v9 + v41 + 431) + v46 + 432) )
          break;
      }
      if ( ++v45 >= *((_DWORD *)v9 + 40) )
        goto LABEL_67;
    }
    WdLogSingleEntry0(1LL);
    v26 = 0LL;
    WdLogGlobalForLineNumber = 860;
    goto LABEL_130;
  }
LABEL_84:
  v64 = *((_DWORD *)v9 + 40) * v40;
  v65 = (__int64 *)((char *)v9 + 3576);
  if ( !v64 )
    v64 = 1;
  if ( !NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements((__int64 *)v9 + 447, v64) )
  {
    _InterlockedAdd(&gVidSchLowResourceAccumulated, 1u);
    WdLogSingleEntry1(6LL, 931LL);
    v66 = 262145LL;
    WdLogGlobalForLineNumber = 931;
LABEL_131:
    DxgkLogInternalTriageEvent(v26, v66);
    goto LABEL_132;
  }
  for ( i = 0; i < *((_DWORD *)v9 + 936); *v72 = v72 )
  {
    v68 = *v65;
    v69 = i++;
    v70 = 160 * v69;
    v71 = (_QWORD *)(160 * v69 + *v65 + 120);
    *(_QWORD *)(v70 + v68 + 128) = v71;
    *v71 = v71;
    v72 = (_QWORD *)(v70 + v68 + 136);
    *(_QWORD *)(v70 + v68 + 144) = v72;
  }
  v73 = *((_DWORD *)v9 + 21);
  v74 = 0;
  *((_QWORD *)v9 + 469) = 1LL;
  v75 = 0;
  *((_DWORD *)v9 + 940) = -1;
  if ( v73 )
  {
    while ( 1 )
    {
      v76 = *(unsigned __int16 *)(352LL * v75 + *(_QWORD *)(v7 + 3032));
      v109 = v76;
      *((_BYTE *)v9 + v75 + 96) = v74;
      if ( v76 )
        break;
LABEL_107:
      v73 = *((_DWORD *)v9 + 21);
      ++v75;
      v25 = 0;
      if ( v75 >= v73 )
        goto LABEL_108;
    }
    while ( 1 )
    {
      Node = VidSchiCreateNode(v9, v75, v25, v74);
      v78 = (__int64 *)*((_QWORD *)v9 + 87);
      if ( v74 < *((_DWORD *)v9 + 192) )
        v78 += v74;
      *v78 = Node;
      v79 = *((_DWORD *)v9 + 192);
      v80 = (_QWORD *)(*((_QWORD *)v9 + 87) + 8LL * v74);
      v81 = v80;
      if ( v74 >= v79 )
        v81 = (_QWORD *)*((_QWORD *)v9 + 87);
      if ( !*v81 )
        break;
      if ( v74 >= v79 )
        v80 = (_QWORD *)*((_QWORD *)v9 + 87);
      if ( (int)VidSchiInitializeNode(*v80) < 0 )
        goto LABEL_132;
      ++v74;
      if ( ++v25 >= v109 )
        goto LABEL_107;
    }
    WdLogSingleEntry2(1LL, v7, v74);
    WdLogGlobalForLineNumber = 958;
    goto LABEL_130;
  }
LABEL_108:
  v82 = 0;
  if ( v73 )
  {
    while ( 1 )
    {
      v83 = VidSchiCreateNode(v9, v82, 0x7FFFLL, v74);
      v84 = (__int64 *)*((_QWORD *)v9 + 87);
      if ( v74 < *((_DWORD *)v9 + 192) )
        v84 += v74;
      *v84 = v83;
      v85 = *((_DWORD *)v9 + 192);
      v86 = (_QWORD *)(*((_QWORD *)v9 + 87) + 8LL * v74);
      v87 = v86;
      if ( v74 >= v85 )
        v87 = (_QWORD *)*((_QWORD *)v9 + 87);
      if ( !*v87 )
        break;
      if ( v74 >= v85 )
        v86 = (_QWORD *)*((_QWORD *)v9 + 87);
      if ( (int)VidSchiInitializeNode(*v86) < 0 )
        goto LABEL_132;
      ++v74;
      if ( ++v82 >= *((_DWORD *)v9 + 21) )
        goto LABEL_118;
    }
    WdLogSingleEntry2(1LL, v7, v74);
    WdLogGlobalForLineNumber = 979;
    goto LABEL_130;
  }
LABEL_118:
  v110 = 1;
  v109 = 0;
  v98 = L"PageFaultDebugMode";
  v96 = 0LL;
  v99 = &v109;
  v97 = 288;
  v101 = &v110;
  v100 = 67108868;
  v102 = 4;
  v103 = 0LL;
  v104 = 0;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v88 = RtlQueryRegistryValuesEx(
          0LL,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
          &v96,
          0LL,
          0LL);
  if ( v88 < 0 )
  {
    v109 = 1;
    WdLogSingleEntry1(3LL, v88);
    WdLogGlobalForLineNumber = 1019;
  }
  v89 = v109;
  if ( v109 > 1 )
  {
    WdLogSingleEntry1(3LL, v109);
    v89 = 1;
    WdLogGlobalForLineNumber = 1024;
    v109 = 1;
  }
  g_PageFaultDebugMode = v89;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ThreadHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v90 = PsCreateSystemThread(
          &ThreadHandle,
          0x1FFFFFu,
          &ObjectAttributes,
          0LL,
          0LL,
          (PKSTART_ROUTINE)VidSchiWorkerThread,
          v9);
  if ( v90 < 0 )
  {
    WdLogSingleEntry2(1LL, v7, v90);
    WdLogGlobalForLineNumber = 1053;
    goto LABEL_130;
  }
  VidSchiRequestSchedulerStatus((__int64)v9, 1, 1);
  ObfReferenceObject(*((PVOID *)v9 + 22));
  ZwClose(ThreadHandle);
  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v108,
    (struct _EX_PUSH_LOCK *const)&gAdapterListLock);
  v91 = (_QWORD *)qword_14008A9B0;
  v92 = (_QWORD *)((char *)v9 + 3808);
  if ( *(PVOID **)qword_14008A9B0 != &gAdapterListHead )
    __fastfail(3u);
  *((_QWORD *)v9 + 477) = qword_14008A9B0;
  *v92 = &gAdapterListHead;
  *v91 = v92;
  qword_14008A9B0 = (__int64)v9 + 3808;
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v108);
  return v9;
}

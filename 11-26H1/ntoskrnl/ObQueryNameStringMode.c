/*
 * XREFs of ObQueryNameStringMode @ 0x1409FDA40
 * Callers:
 *     AlpcpGetPortNameInformation @ 0x140770BC0 (AlpcpGetPortNameInformation.c)
 *     IopGetRelatedFileName @ 0x140794A10 (IopGetRelatedFileName.c)
 *     ObGetObjectInformation @ 0x1407C37B0 (ObGetObjectInformation.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x1407F2BBC (PspQueryAndCheckCpuPartitionName.c)
 *     EtwpObjectHandleEnumCallback @ 0x14082F620 (EtwpObjectHandleEnumCallback.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     PspInitializeFullProcessImageName @ 0x140966D20 (PspInitializeFullProcessImageName.c)
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 *     MmGetFileNameForAddress @ 0x1409FBE08 (MmGetFileNameForAddress.c)
 *     SepQueryNameString @ 0x1409FBF48 (SepQueryNameString.c)
 *     IopQueryNameInternal @ 0x1409FC134 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x1409FC830 (NtQueryObject.c)
 *     EtwpEnumerateAddressSpace @ 0x1409FD0D0 (EtwpEnumerateAddressSpace.c)
 *     ObQueryNameString @ 0x1409FDA20 (ObQueryNameString.c)
 *     MiQueryMappedFileName @ 0x1409FE7DC (MiQueryMappedFileName.c)
 *     AstLogDeviceCreated @ 0x1409FF51C (AstLogDeviceCreated.c)
 *     CmpQueryNameString @ 0x140A77968 (CmpQueryNameString.c)
 *     EtwpTraceHandle @ 0x140A81CA4 (EtwpTraceHandle.c)
 *     PiControlGetDeviceStack @ 0x140A8ED78 (PiControlGetDeviceStack.c)
 *     IopErrorLogThread @ 0x140ADBA70 (IopErrorLogThread.c)
 *     PnpBuildCmResourceList @ 0x140AF8B10 (PnpBuildCmResourceList.c)
 *     IoRegisterDeviceInterface @ 0x140AFA280 (IoRegisterDeviceInterface.c)
 *     IopRaiseHardError @ 0x140B06A30 (IopRaiseHardError.c)
 *     MmGetFileNameForSection @ 0x140B261A4 (MmGetFileNameForSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x14041BC20 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlMoveToUserFromUser @ 0x14077F4A8 (RtlMoveToUserFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  int v7; // edi
  signed __int64 *v8; // rbx
  __int64 v9; // r15
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  struct _LIST_ENTRY *CurrentSilo; // rax
  char *v15; // rax
  struct _KLOCK_ENTRIES *v16; // r9
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v18; // rdx
  signed __int64 *v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r8
  char *v22; // r12
  unsigned int v23; // ecx
  char *v24; // r12
  struct _KTHREAD *v25; // rax
  LegacyAutoBoost *v26; // rdx
  signed __int64 *v27; // r10
  signed __int64 v28; // r8
  char *v29; // r12
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  char v35; // r12
  unsigned __int64 v36; // r8
  UCHAR *v37; // rcx
  char v38; // al
  UCHAR *v39; // rcx
  size_t v40; // r8
  void *v41; // rdx
  struct _KLOCK_ENTRIES *v42; // r9
  struct _KTHREAD *v43; // rax
  LegacyAutoBoost *v44; // rdx
  signed __int64 *v45; // r10
  char *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // r8
  struct _KLOCK_ENTRIES *v49; // r9
  UCHAR *p_Size; // r12
  struct _KLOCK_ENTRIES *v51; // r12
  char v52; // cl
  unsigned int v53; // edx
  char v54; // al
  UCHAR *v55; // rax
  struct _KTHREAD *v56; // rax
  LegacyAutoBoost *v57; // rdx
  signed __int64 *v58; // r10
  signed __int64 v59; // r8
  UCHAR *v60; // rax
  size_t v61; // r8
  void *v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  unsigned __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  char *v71; // rax
  struct _KTHREAD *v72; // rcx
  char v73; // [rsp+40h] [rbp-F8h]
  char v74; // [rsp+41h] [rbp-F7h]
  unsigned int v75; // [rsp+48h] [rbp-F0h]
  UCHAR *v76; // [rsp+48h] [rbp-F0h]
  UCHAR *v77; // [rsp+48h] [rbp-F0h]
  struct _KTHREAD *v78; // [rsp+48h] [rbp-F0h]
  signed __int64 *v79; // [rsp+50h] [rbp-E8h]
  signed __int64 *v80; // [rsp+50h] [rbp-E8h]
  struct _KTHREAD *v81; // [rsp+50h] [rbp-E8h]
  __int64 v82; // [rsp+58h] [rbp-E0h]
  char *v83; // [rsp+58h] [rbp-E0h]
  char *Object; // [rsp+60h] [rbp-D8h]
  LegacyAutoBoost *v85; // [rsp+70h] [rbp-C8h]
  char *v86; // [rsp+70h] [rbp-C8h]
  LegacyAutoBoost *v87; // [rsp+70h] [rbp-C8h]
  char *v88; // [rsp+70h] [rbp-C8h]
  LegacyAutoBoost *v89; // [rsp+70h] [rbp-C8h]
  char *v90; // [rsp+70h] [rbp-C8h]
  LegacyAutoBoost *v91; // [rsp+70h] [rbp-C8h]
  UCHAR *v92; // [rsp+70h] [rbp-C8h]
  unsigned int v93; // [rsp+84h] [rbp-B4h]
  unsigned int v94; // [rsp+8Ch] [rbp-ACh]
  char *v95; // [rsp+90h] [rbp-A8h]
  __m128i v96; // [rsp+A0h] [rbp-98h]
  char *v98; // [rsp+C0h] [rbp-78h]

  v74 = 1;
  v73 = 0;
  v93 = 0;
  Object = 0LL;
  v7 = -1073741823;
  v96.m128i_i32[1] = 0;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)];
  v98 = a1 - 22;
  if ( (*v98 & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  if ( !MmIsKernelAddress((unsigned __int64)a4) )
    return (unsigned int)-1073741582;
  if ( *(_QWORD *)(v9 + 160) )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v11) = 1;
    else
      v11 = 0LL;
    v12 = a2;
    v7 = guard_dispatch_icall_no_overrides((__int64)a1, v11);
LABEL_8:
    if ( v7 >= 0 )
    {
LABEL_9:
      if ( !a5 )
        *(_DWORD *)(v12 + 4) = 0;
    }
    return (unsigned int)v7;
  }
  CurrentSilo = PsGetCurrentSilo();
  v15 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v95 = v15;
  v12 = a2;
  while ( v10 )
  {
    if ( a1 == v15 || a1 == ObpRootDirectoryObject )
    {
      v23 = 2;
LABEL_48:
      v93 = v23 + 18;
      *a4 = v23 + 18;
      if ( a3 < v23 + 18 )
      {
        v7 = -1073741820;
        v35 = 0;
        v74 = 0;
      }
      else
      {
        v35 = v74;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v8 + 2), 0LL, 0LL, v16);
      v85 = v18;
      v19 = v8 + 2;
      if ( _InterlockedCompareExchange64(v8 + 2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v8 + 2, 0, v18, (struct _KTHREAD *)(v8 + 2));
        v19 = v8 + 2;
        v18 = v85;
      }
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v18);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      v86 = *(char **)v10;
      if ( *(_QWORD *)v10 )
      {
        PsReferenceSiloContext(*(void **)v10);
        Object = v86;
        v19 = v8 + 2;
      }
      v75 = *((unsigned __int16 *)v10 + 4) + 2;
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v19);
        v19 = v8 + 2;
      }
      KeAbPostRelease((unsigned __int64)v19);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21);
      v22 = v86;
      v23 = v75;
      while ( v22 != v95 && v22 != ObpRootDirectoryObject && v22 && (*((_DWORD *)v22 + 84) & 0x20) == 0 )
      {
        v24 = v22 - 48;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        v79 = (signed __int64 *)(v24 + 16);
        v26 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v24 + 16), 0LL, 0LL, v16);
        v87 = v26;
        v27 = (signed __int64 *)(v24 + 16);
        v28 = 17LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24 + 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v27, 0, v26, (struct _KTHREAD *)v27);
          v27 = (signed __int64 *)(v24 + 16);
          v26 = v87;
          v28 = 17LL;
        }
        if ( v26 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v26, v26);
          else
            *((_BYTE *)v26 + 10) = 1;
        }
        if ( (v24[26] & 2) != 0 )
          v29 = &v24[-ObpInfoMaskToOffset[v24[26] & 3]];
        else
          v29 = 0LL;
        v88 = v29;
        if ( !v29 || (v22 = *(char **)v29) == 0LL )
        {
          if ( v28 != _InterlockedCompareExchange64(v27, 0LL, v28) )
          {
            ExfReleasePushLockShared(v27);
            v27 = v79;
          }
          KeAbPostRelease((unsigned __int64)v27);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v33, v34);
          v23 = v75 + 8;
          break;
        }
        v75 += *((unsigned __int16 *)v88 + 4) + 2;
        PsReferenceSiloContext(v22);
        v30 = (unsigned __int64)v79;
        if ( _InterlockedCompareExchange64(v79, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v79);
          v30 = (unsigned __int64)v79;
        }
        KeAbPostRelease(v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32);
        ObfDereferenceObject(Object);
        Object = v22;
        v23 = v75;
        if ( v75 > 0xFFFF )
          goto LABEL_54;
      }
      if ( v23 <= 0xFFFF )
        goto LABEL_48;
LABEL_54:
      v7 = -1073741562;
      v35 = 0;
      v74 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v35 )
      goto LABEL_8;
    if ( (*v98 & 2) != 0 )
      v10 = (char *)v8 - ObpInfoMaskToOffset[*v98 & 3];
    else
      v10 = 0LL;
    if ( v10 )
    {
      v36 = a2 + 16;
      v37 = (UCHAR *)(a2 + v93 - 2);
      v76 = v37;
      v38 = a5;
      if ( a5 )
      {
        RtlWriteUShortToUser(v37, 0);
        v38 = a5;
        v37 = (UCHAR *)(a2 + v93 - 2);
        v36 = a2 + 16;
      }
      else
      {
        *(_WORD *)v37 = 0;
      }
      if ( a1 != v95 && a1 != ObpRootDirectoryObject )
      {
        v39 = &v37[-*((unsigned __int16 *)v10 + 4)];
        v76 = v39;
        if ( (unsigned __int64)v39 <= v36 )
        {
          v54 = 1;
          v73 = 1;
          v46 = Object;
          goto LABEL_134;
        }
        v40 = *((unsigned __int16 *)v10 + 4);
        v41 = (void *)*((_QWORD *)v10 + 2);
        if ( v38 )
          RtlCopyToUser(v39, v41, v40);
        else
          RtlCopyVolatileMemory(v39, v41, v40);
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        v44 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v8 + 2), 0LL, 0LL, v42);
        v89 = v44;
        v45 = v8 + 2;
        if ( _InterlockedCompareExchange64(v8 + 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v8 + 2, 0, v44, (struct _KTHREAD *)(v8 + 2));
          v45 = v8 + 2;
          v44 = v89;
        }
        if ( v44 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v44, v44);
          else
            *((_BYTE *)v44 + 10) = 1;
        }
        v46 = *(char **)v10;
        v90 = v46;
        if ( v46 )
        {
          PsReferenceSiloContext(v46);
          Object = v46;
          v45 = v8 + 2;
        }
        else
        {
          v46 = Object;
        }
        if ( _InterlockedCompareExchange64(v45, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v45);
          v45 = v8 + 2;
        }
        KeAbPostRelease((unsigned __int64)v45);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48);
        while ( v90 != v95 && v90 != ObpRootDirectoryObject && v90 && (*((_DWORD *)v90 + 84) & 0x20) == 0 )
        {
          v55 = v76 - 2;
          v77 = v76 - 2;
          if ( a5 )
            RtlWriteUShortToUser(v55, 92);
          else
            *(_WORD *)v55 = 92;
          if ( (*(v90 - 22) & 2) != 0 )
            v82 = (__int64)&v90[-ObpInfoMaskToOffset[*(v90 - 22) & 3] - 48];
          else
            v82 = 0LL;
          v56 = KeGetCurrentThread();
          --v56->KernelApcDisable;
          v80 = (signed __int64 *)(v90 - 32);
          v57 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v90 - 32), 0LL, 0LL, v49);
          v91 = v57;
          v58 = v80;
          v59 = 17LL;
          if ( _InterlockedCompareExchange64(v80, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v80, 0, v57, (struct _KTHREAD *)v80);
            v58 = v80;
            v57 = v91;
            v59 = 17LL;
          }
          if ( v57 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v57, v57);
            else
              *((_BYTE *)v57 + 10) = 1;
          }
          if ( !v82 || !*(_QWORD *)v82 )
          {
            if ( v59 != _InterlockedCompareExchange64(v58, 0LL, v59) )
            {
              ExfReleasePushLockShared(v58);
              v58 = v80;
            }
            KeAbPostRelease((unsigned __int64)v58);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v69, v70);
            p_Size = v77 - 6;
            v92 = p_Size;
            v83 = (char *)(v77 - 6);
            v81 = (struct _KTHREAD *)(v77 - 6);
            v78 = (struct _KTHREAD *)(v77 - 6);
            if ( (unsigned __int64)p_Size < a2 + 16 )
            {
              p_Size = (UCHAR *)(a2 + 16);
              v92 = (UCHAR *)(a2 + 16);
              v83 = (char *)(a2 + 16);
              v81 = (struct _KTHREAD *)(a2 + 16);
              v78 = (struct _KTHREAD *)(a2 + 16);
            }
            if ( a5 )
            {
              RtlCopyToUser(p_Size, L"...", 6uLL);
              v71 = (char *)v92;
              v72 = v81;
            }
            else
            {
              RtlCopyVolatileMemory(p_Size, L"...", 6uLL);
              v71 = v83;
              v72 = v78;
            }
            v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
            if ( v71 == (char *)(a2 + 16) )
              p_Size = &v72->Header.Size;
            goto LABEL_81;
          }
          ObfDereferenceObject(v46);
          v46 = *(char **)v82;
          v90 = *(char **)v82;
          PsReferenceSiloContext(*(void **)v82);
          Object = v46;
          v60 = &v77[-*(unsigned __int16 *)(v82 + 8)];
          v76 = v60;
          if ( (unsigned __int64)v60 <= a2 + 16 )
          {
            v73 = 1;
            v66 = (unsigned __int64)v80;
            if ( _InterlockedCompareExchange64(v80, 0LL, 17LL) != 17 )
            {
              ExfReleasePushLockShared(v80);
              v66 = (unsigned __int64)v80;
            }
            KeAbPostRelease(v66);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v67, v68);
            v54 = 1;
            goto LABEL_134;
          }
          v61 = *(unsigned __int16 *)(v82 + 8);
          v62 = *(void **)(v82 + 16);
          if ( a5 )
            RtlCopyToUser(v60, v62, v61);
          else
            RtlCopyVolatileMemory(v60, v62, v61);
          v63 = (unsigned __int64)v80;
          if ( _InterlockedCompareExchange64(v80, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v80);
            v63 = (unsigned __int64)v80;
          }
          KeAbPostRelease(v63);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v64, v65);
        }
      }
      v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
      p_Size = v76;
LABEL_81:
      v51 = (struct _KLOCK_ENTRIES *)(p_Size - 2);
      v52 = a5;
      if ( a5 )
      {
        RtlWriteUShortToUser(v51, 92);
        v52 = a5;
        v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
      }
      else
      {
        LOWORD(v51->Thread) = 92;
      }
      v53 = (unsigned __int16)(v93 + a2 - (_WORD)v51);
      v94 = v53;
      v96.m128i_i16[1] = v93 + a2 - (_WORD)v51;
      v96.m128i_i16[0] = v53 - 2;
      v96.m128i_i64[1] = (__int64)v16;
      if ( v52 )
      {
        RtlWriteULongToUser((_DWORD *)a2, _mm_cvtsi128_si32(v96));
        RtlWriteULong64ToUser((_QWORD *)(a2 + 8), a2 + 16);
        v52 = a5;
        v53 = v94;
        v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
      }
      else
      {
        *(_DWORD *)a2 = v96.m128i_i32[0];
        *(_QWORD *)(a2 + 8) = v16;
      }
      if ( v16 != v51 )
      {
        if ( v52 )
          RtlMoveToUserFromUser(v16, v51, v53);
        else
          memmove(v16, v51, v53);
        *a4 = v94 + 16;
      }
      v54 = 0;
      v46 = Object;
LABEL_134:
      if ( v46 )
      {
        ObfDereferenceObject(v46);
        v54 = v73;
      }
      if ( !v54 )
        goto LABEL_137;
      if ( (*v98 & 2) == 0 )
      {
        v10 = 0LL;
        v73 = 0;
        goto LABEL_142;
      }
      v10 = (char *)v8 - ObpInfoMaskToOffset[*v98 & 3];
      v73 = 0;
      v15 = v95;
    }
    else
    {
LABEL_142:
      v15 = v95;
    }
  }
  *a4 = 16;
  if ( a3 >= 0x10 )
  {
    if ( a5 )
    {
      RtlWriteULongToUser((_DWORD *)a2, _mm_cvtsi128_si32((__m128i)0LL));
      RtlWriteULong64ToUser((_QWORD *)(a2 + 8), _mm_srli_si128((__m128i)0LL, 8).m128i_i64[0]);
    }
    else
    {
      *(_OWORD *)a2 = 0;
    }
LABEL_137:
    v7 = 0;
    goto LABEL_9;
  }
  return (unsigned int)-1073741820;
}

/*
 * XREFs of ObQueryNameStringMode @ 0x140922640
 * Callers:
 *     AlpcpGetPortNameInformation @ 0x140773BC0 (AlpcpGetPortNameInformation.c)
 *     IopGetRelatedFileName @ 0x140797540 (IopGetRelatedFileName.c)
 *     ObGetObjectInformation @ 0x1407C6810 (ObGetObjectInformation.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x1407F871C (PspQueryAndCheckCpuPartitionName.c)
 *     EtwpObjectHandleEnumCallback @ 0x140835860 (EtwpObjectHandleEnumCallback.c)
 *     AstLogDeviceCreated @ 0x14091C31C (AstLogDeviceCreated.c)
 *     MmGetFileNameForAddress @ 0x140920A08 (MmGetFileNameForAddress.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     IopQueryNameInternal @ 0x140920D34 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 *     EtwpEnumerateAddressSpace @ 0x140921CD0 (EtwpEnumerateAddressSpace.c)
 *     ObQueryNameString @ 0x140922620 (ObQueryNameString.c)
 *     MiQueryMappedFileName @ 0x1409233DC (MiQueryMappedFileName.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     IoRegisterDeviceInterface @ 0x1409AB500 (IoRegisterDeviceInterface.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 *     EtwpTraceHandle @ 0x140A87B14 (EtwpTraceHandle.c)
 *     PiControlGetDeviceStack @ 0x140A93A48 (PiControlGetDeviceStack.c)
 *     PspInitializeFullProcessImageName @ 0x140AA6F44 (PspInitializeFullProcessImageName.c)
 *     IopErrorLogThread @ 0x140AD8FC0 (IopErrorLogThread.c)
 *     PnpBuildCmResourceList @ 0x140AFB1F0 (PnpBuildCmResourceList.c)
 *     IopRaiseHardError @ 0x140B08B60 (IopRaiseHardError.c)
 *     MmGetFileNameForSection @ 0x140B28404 (MmGetFileNameForSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140413470 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlMoveToUserFromUser @ 0x140781FA8 (RtlMoveToUserFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall ObQueryNameStringMode(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int64 v15; // rax
  struct _KLOCK_ENTRIES *v16; // r9
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v18; // rdx
  signed __int64 *v19; // r10
  _DWORD *v20; // r12
  unsigned int v21; // ecx
  _DWORD *v22; // r12
  struct _KTHREAD *v23; // rax
  LegacyAutoBoost *v24; // rdx
  signed __int64 *v25; // r10
  signed __int64 v26; // r8
  _DWORD **v27; // r12
  unsigned __int64 v28; // rcx
  char v29; // r12
  unsigned __int64 v30; // r8
  UCHAR *v31; // rcx
  char v32; // al
  UCHAR *v33; // rcx
  size_t v34; // r8
  void *v35; // rdx
  struct _KLOCK_ENTRIES *v36; // r9
  struct _KTHREAD *v37; // rax
  LegacyAutoBoost *v38; // rdx
  signed __int64 *v39; // r10
  _DWORD *v40; // r12
  struct _KLOCK_ENTRIES *v41; // r9
  UCHAR *p_Size; // r12
  struct _KLOCK_ENTRIES *v43; // r12
  char v44; // cl
  unsigned int v45; // edx
  char v46; // al
  UCHAR *v47; // rax
  struct _KTHREAD *v48; // rax
  LegacyAutoBoost *v49; // rdx
  signed __int64 *v50; // r10
  signed __int64 v51; // r8
  UCHAR *v52; // rax
  size_t v53; // r8
  void *v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  char *v57; // rax
  struct _KTHREAD *v58; // rcx
  char v59; // [rsp+40h] [rbp-F8h]
  char v60; // [rsp+41h] [rbp-F7h]
  unsigned int v61; // [rsp+48h] [rbp-F0h]
  UCHAR *v62; // [rsp+48h] [rbp-F0h]
  UCHAR *v63; // [rsp+48h] [rbp-F0h]
  struct _KTHREAD *v64; // [rsp+48h] [rbp-F0h]
  signed __int64 *v65; // [rsp+50h] [rbp-E8h]
  signed __int64 *v66; // [rsp+50h] [rbp-E8h]
  struct _KTHREAD *v67; // [rsp+50h] [rbp-E8h]
  __int64 v68; // [rsp+58h] [rbp-E0h]
  char *v69; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h]
  LegacyAutoBoost *v71; // [rsp+70h] [rbp-C8h]
  void *v72; // [rsp+70h] [rbp-C8h]
  LegacyAutoBoost *v73; // [rsp+70h] [rbp-C8h]
  _DWORD **v74; // [rsp+70h] [rbp-C8h]
  LegacyAutoBoost *v75; // [rsp+70h] [rbp-C8h]
  _DWORD *v76; // [rsp+70h] [rbp-C8h]
  LegacyAutoBoost *v77; // [rsp+70h] [rbp-C8h]
  UCHAR *v78; // [rsp+70h] [rbp-C8h]
  unsigned int v79; // [rsp+84h] [rbp-B4h]
  unsigned int v80; // [rsp+8Ch] [rbp-ACh]
  _DWORD *v81; // [rsp+90h] [rbp-A8h]
  __m128i v82; // [rsp+A0h] [rbp-98h]
  _BYTE *v84; // [rsp+C0h] [rbp-78h]

  v60 = 1;
  v59 = 0;
  v79 = 0;
  Object = 0LL;
  v7 = -1073741823;
  v82.m128i_i32[1] = 0;
  v8 = a1 - 48;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v84 = (_BYTE *)(a1 - 48 + 26);
  if ( (*v84 & 2) != 0 )
    v10 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
  else
    v10 = 0LL;
  if ( !MmIsKernelAddress((unsigned __int64)a4) )
    return (unsigned int)-1073741582;
  if ( *(_QWORD *)(v9 + 160) )
  {
    if ( v10 && *(_WORD *)(v10 + 8) )
      LOBYTE(v11) = 1;
    else
      v11 = 0LL;
    v12 = a2;
    v7 = guard_dispatch_icall_no_overrides(a1, v11);
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
  v15 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v81 = (_DWORD *)v15;
  v12 = a2;
  while ( v10 )
  {
    if ( a1 == v15 || a1 == *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24] )
    {
      v21 = 2;
LABEL_48:
      v79 = v21 + 18;
      *a4 = v21 + 18;
      if ( a3 < v21 + 18 )
      {
        v7 = -1073741820;
        v29 = 0;
        v60 = 0;
      }
      else
      {
        v29 = v60;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = (LegacyAutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, v16);
      v71 = v18;
      v19 = (signed __int64 *)(v8 + 16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 16), 0, v18, (struct _KTHREAD *)(v8 + 16));
        v19 = (signed __int64 *)(v8 + 16);
        v18 = v71;
      }
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v18);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      v72 = *(void **)v10;
      if ( *(_QWORD *)v10 )
      {
        PsReferenceSiloContext(*(void **)v10);
        Object = v72;
        v19 = (signed __int64 *)(v8 + 16);
      }
      v61 = *(unsigned __int16 *)(v10 + 8) + 2;
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v19);
        v19 = (signed __int64 *)(v8 + 16);
      }
      KeAbPostRelease((unsigned __int64)v19);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v20 = v72;
      v21 = v61;
      while ( v20 != v81
           && v20 != *(_DWORD **)&ObpStackTraceLock.PriorityFloorCounts[24]
           && v20
           && (v20[84] & 0x20) == 0 )
      {
        v22 = v20 - 12;
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        v65 = (signed __int64 *)(v22 + 4);
        v24 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v22 + 4), 0LL, 0LL, v16);
        v73 = v24;
        v25 = (signed __int64 *)(v22 + 4);
        v26 = 17LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v25, 0, v24, (struct _KTHREAD *)v25);
          v25 = (signed __int64 *)(v22 + 4);
          v24 = v73;
          v26 = 17LL;
        }
        if ( v24 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v24, v24);
          else
            *((_BYTE *)v24 + 10) = 1;
        }
        if ( (*((_BYTE *)v22 + 26) & 2) != 0 )
          v27 = (_DWORD **)((char *)v22 - ObpInfoMaskToOffset[*((_BYTE *)v22 + 26) & 3]);
        else
          v27 = 0LL;
        v74 = v27;
        if ( !v27 || (v20 = *v27) == 0LL )
        {
          if ( v26 != _InterlockedCompareExchange64(v25, 0LL, v26) )
          {
            ExfReleasePushLockShared(v25);
            v25 = v65;
          }
          KeAbPostRelease((unsigned __int64)v25);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v21 = v61 + 8;
          break;
        }
        v61 += *((unsigned __int16 *)v74 + 4) + 2;
        PsReferenceSiloContext(v20);
        v28 = (unsigned __int64)v65;
        if ( _InterlockedCompareExchange64(v65, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v65);
          v28 = (unsigned __int64)v65;
        }
        KeAbPostRelease(v28);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        Object = v20;
        v21 = v61;
        if ( v61 > 0xFFFF )
          goto LABEL_54;
      }
      if ( v21 <= 0xFFFF )
        goto LABEL_48;
LABEL_54:
      v7 = -1073741562;
      v29 = 0;
      v60 = 0;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v29 )
      goto LABEL_8;
    if ( (*v84 & 2) != 0 )
      v10 = v8 - ObpInfoMaskToOffset[*v84 & 3];
    else
      v10 = 0LL;
    if ( v10 )
    {
      v30 = a2 + 16;
      v31 = (UCHAR *)(a2 + v79 - 2);
      v62 = v31;
      v32 = a5;
      if ( a5 )
      {
        RtlWriteUShortToUser(v31, 0);
        v32 = a5;
        v31 = (UCHAR *)(a2 + v79 - 2);
        v30 = a2 + 16;
      }
      else
      {
        *(_WORD *)v31 = 0;
      }
      if ( (_DWORD *)a1 != v81 && a1 != *(_QWORD *)&ObpStackTraceLock.PriorityFloorCounts[24] )
      {
        v33 = &v31[-*(unsigned __int16 *)(v10 + 8)];
        v62 = v33;
        if ( (unsigned __int64)v33 <= v30 )
        {
          v46 = 1;
          v59 = 1;
          v40 = Object;
          goto LABEL_134;
        }
        v34 = *(unsigned __int16 *)(v10 + 8);
        v35 = *(void **)(v10 + 16);
        if ( v32 )
          RtlCopyToUser(v33, v35, v34);
        else
          RtlCopyVolatileMemory(v33, v35, v34);
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        v38 = (LegacyAutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, v36);
        v75 = v38;
        v39 = (signed __int64 *)(v8 + 16);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 16), 0, v38, (struct _KTHREAD *)(v8 + 16));
          v39 = (signed __int64 *)(v8 + 16);
          v38 = v75;
        }
        if ( v38 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v38, v38);
          else
            *((_BYTE *)v38 + 10) = 1;
        }
        v40 = *(_DWORD **)v10;
        v76 = v40;
        if ( v40 )
        {
          PsReferenceSiloContext(v40);
          Object = v40;
          v39 = (signed __int64 *)(v8 + 16);
        }
        else
        {
          v40 = Object;
        }
        if ( _InterlockedCompareExchange64(v39, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v39);
          v39 = (signed __int64 *)(v8 + 16);
        }
        KeAbPostRelease((unsigned __int64)v39);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        while ( v76 != v81
             && v76 != *(_DWORD **)&ObpStackTraceLock.PriorityFloorCounts[24]
             && v76
             && (v76[84] & 0x20) == 0 )
        {
          v47 = v62 - 2;
          v63 = v62 - 2;
          if ( a5 )
            RtlWriteUShortToUser(v47, 92);
          else
            *(_WORD *)v47 = 92;
          if ( (*((_BYTE *)v76 - 22) & 2) != 0 )
            v68 = (__int64)v76 - ObpInfoMaskToOffset[*((_BYTE *)v76 - 22) & 3] - 48;
          else
            v68 = 0LL;
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          v66 = (signed __int64 *)(v76 - 8);
          v49 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v76 - 8), 0LL, 0LL, v41);
          v77 = v49;
          v50 = v66;
          v51 = 17LL;
          if ( _InterlockedCompareExchange64(v66, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v66, 0, v49, (struct _KTHREAD *)v66);
            v50 = v66;
            v49 = v77;
            v51 = 17LL;
          }
          if ( v49 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v49, v49);
            else
              *((_BYTE *)v49 + 10) = 1;
          }
          if ( !v68 || !*(_QWORD *)v68 )
          {
            if ( v51 != _InterlockedCompareExchange64(v50, 0LL, v51) )
            {
              ExfReleasePushLockShared(v50);
              v50 = v66;
            }
            KeAbPostRelease((unsigned __int64)v50);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            p_Size = v63 - 6;
            v78 = p_Size;
            v69 = (char *)(v63 - 6);
            v67 = (struct _KTHREAD *)(v63 - 6);
            v64 = (struct _KTHREAD *)(v63 - 6);
            if ( (unsigned __int64)p_Size < a2 + 16 )
            {
              p_Size = (UCHAR *)(a2 + 16);
              v78 = (UCHAR *)(a2 + 16);
              v69 = (char *)(a2 + 16);
              v67 = (struct _KTHREAD *)(a2 + 16);
              v64 = (struct _KTHREAD *)(a2 + 16);
            }
            if ( a5 )
            {
              RtlCopyToUser(p_Size, L"...", 6uLL);
              v57 = (char *)v78;
              v58 = v67;
            }
            else
            {
              RtlCopyVolatileMemory(p_Size, L"...", 6uLL);
              v57 = v69;
              v58 = v64;
            }
            v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
            if ( v57 == (char *)(a2 + 16) )
              p_Size = &v58->Header.Size;
            goto LABEL_81;
          }
          ObfDereferenceObject(v40);
          v40 = *(_DWORD **)v68;
          v76 = *(_DWORD **)v68;
          PsReferenceSiloContext(*(void **)v68);
          Object = v40;
          v52 = &v63[-*(unsigned __int16 *)(v68 + 8)];
          v62 = v52;
          if ( (unsigned __int64)v52 <= a2 + 16 )
          {
            v59 = 1;
            v56 = (unsigned __int64)v66;
            if ( _InterlockedCompareExchange64(v66, 0LL, 17LL) != 17 )
            {
              ExfReleasePushLockShared(v66);
              v56 = (unsigned __int64)v66;
            }
            KeAbPostRelease(v56);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v46 = 1;
            goto LABEL_134;
          }
          v53 = *(unsigned __int16 *)(v68 + 8);
          v54 = *(void **)(v68 + 16);
          if ( a5 )
            RtlCopyToUser(v52, v54, v53);
          else
            RtlCopyVolatileMemory(v52, v54, v53);
          v55 = (unsigned __int64)v66;
          if ( _InterlockedCompareExchange64(v66, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v66);
            v55 = (unsigned __int64)v66;
          }
          KeAbPostRelease(v55);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
      v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
      p_Size = v62;
LABEL_81:
      v43 = (struct _KLOCK_ENTRIES *)(p_Size - 2);
      v44 = a5;
      if ( a5 )
      {
        RtlWriteUShortToUser(v43, 92);
        v44 = a5;
        v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
      }
      else
      {
        LOWORD(v43->Thread) = 92;
      }
      v45 = (unsigned __int16)(v79 + a2 - (_WORD)v43);
      v80 = v45;
      v82.m128i_i16[1] = v79 + a2 - (_WORD)v43;
      v82.m128i_i16[0] = v45 - 2;
      v82.m128i_i64[1] = (__int64)v16;
      if ( v44 )
      {
        RtlWriteULongToUser((_DWORD *)a2, _mm_cvtsi128_si32(v82));
        RtlWriteULong64ToUser((_QWORD *)(a2 + 8), a2 + 16);
        v44 = a5;
        v45 = v80;
        v16 = (struct _KLOCK_ENTRIES *)(a2 + 16);
      }
      else
      {
        *(_DWORD *)a2 = v82.m128i_i32[0];
        *(_QWORD *)(a2 + 8) = v16;
      }
      if ( v16 != v43 )
      {
        if ( v44 )
          RtlMoveToUserFromUser(v16, v43, v45);
        else
          memmove(v16, v43, v45);
        *a4 = v80 + 16;
      }
      v46 = 0;
      v40 = Object;
LABEL_134:
      if ( v40 )
      {
        ObfDereferenceObject(v40);
        v46 = v59;
      }
      if ( !v46 )
        goto LABEL_137;
      if ( (*v84 & 2) == 0 )
      {
        v10 = 0LL;
        v59 = 0;
        goto LABEL_142;
      }
      v10 = v8 - ObpInfoMaskToOffset[*v84 & 3];
      v59 = 0;
      v15 = (unsigned __int64)v81;
    }
    else
    {
LABEL_142:
      v15 = (unsigned __int64)v81;
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

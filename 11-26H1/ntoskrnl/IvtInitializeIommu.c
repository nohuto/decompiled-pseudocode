/*
 * XREFs of IvtInitializeIommu @ 0x140BF5C90
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     IvtFlushTbInternal @ 0x14043417C (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404348A0 (IvtInvalidateRemappingTableEntries.c)
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     IvtGetBlockedDomain @ 0x1404F9C14 (IvtGetBlockedDomain.c)
 *     IvtBuildContextEntry @ 0x140510594 (IvtBuildContextEntry.c)
 *     IvtGetPasidGranularTranslationType @ 0x1405288AC (IvtGetPasidGranularTranslationType.c)
 *     IvtBuildScalableModeContextEntry @ 0x14052F914 (IvtBuildScalableModeContextEntry.c)
 *     IvtGetContextEntryType @ 0x140533AD0 (IvtGetContextEntryType.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     IvtDisableGlobalCommandRegisterField @ 0x1405A8808 (IvtDisableGlobalCommandRegisterField.c)
 *     IvtEnableGlobalCommandRegisterField @ 0x1405A8AA0 (IvtEnableGlobalCommandRegisterField.c)
 *     IvtGetIdentityMappedDomain @ 0x1405A8FE4 (IvtGetIdentityMappedDomain.c)
 *     IvtInitializeIdentityMappings @ 0x1405A9460 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeMTRR @ 0x1405A96F8 (IvtInitializeMTRR.c)
 *     IvtInvalidateAllContextEntries @ 0x1405A9A28 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateScalableModePasidCache @ 0x1405A9B78 (IvtInvalidateScalableModePasidCache.c)
 *     IvtSetScalableModeContextEntry @ 0x1405AA430 (IvtSetScalableModeContextEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IvtProcessDeviceExceptions @ 0x140BF6684 (IvtProcessDeviceExceptions.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140BF68FC (IvtSetupScalableModeDefaultPasidTables.c)
 */

__int64 __fastcall IvtInitializeIommu(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  int v4; // r15d
  int v5; // eax
  __int16 v7; // r12
  __int64 v8; // r13
  char v9; // dl
  __int64 result; // rax
  _DWORD *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  PVOID v19; // rax
  char v20; // r15
  __int16 IdentityMappedDomain; // ax
  int PasidGranularTranslationType; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  volatile signed __int64 *v25; // r8
  volatile signed __int64 *v26; // r9
  __int64 v27; // r8
  char ContextEntryType; // al
  unsigned __int64 v29; // r9
  __int128 v30; // kr00_16
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // r8
  __int64 v35; // rax
  char v36; // r9
  __int64 *v37; // rcx
  __int64 v38; // rax
  PVOID v39; // rax
  unsigned int i; // r15d
  __int64 v41; // r9
  __int64 v42; // r13
  unsigned int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rax
  PVOID v46; // rax
  __int64 v47; // rcx
  int v48; // r12d
  unsigned int v49; // r13d
  unsigned int v50; // r15d
  __int64 v51; // rax
  PVOID v52; // rax
  unsigned int v53; // ecx
  unsigned __int64 v54; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v56; // ecx
  signed __int32 v57[8]; // [rsp+8h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-69h]
  char v59; // [rsp+58h] [rbp-39h]
  int v60; // [rsp+5Ch] [rbp-35h]
  int v61; // [rsp+60h] [rbp-31h]
  __int64 v62; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-21h]
  __int128 v64; // [rsp+78h] [rbp-19h] BYREF
  __int128 v65; // [rsp+88h] [rbp-9h]
  _OWORD v66[2]; // [rsp+98h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 308);
  v61 = 0;
  v63 = v3;
  v5 = *(_DWORD *)(a1 + 312);
  v7 = 0;
  v61 = v5;
  v8 = 0LL;
  v59 = a3;
  v60 = v4;
  v62 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  memset(v66, 0, sizeof(v66));
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &qword_140F87880);
    if ( (int)result < 0 )
      return result;
    v11 = *(_DWORD **)(a1 + 8);
    if ( !v11 )
    {
      v11 = HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x220uLL, MmNonCached);
      *(_QWORD *)(a1 + 8) = v11;
      if ( !v11 )
        return 3221225473LL;
    }
    v11[14] = 0x80000000;
    _InterlockedOr(v57, 0);
    IvtDisableGlobalCommandRegisterField(a1, 26);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v12;
      _InterlockedOr(v57, 0);
    }
    if ( *(_BYTE *)(a1 + 320) && (*(_DWORD *)(a1 + 224) & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL) |= 0x80000000;
      _InterlockedOr(v57, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) |= 3u;
      _InterlockedOr(v57, 0);
    }
    IvtDisableGlobalCommandRegisterField(a1, 25);
    if ( *(_BYTE *)(a1 + 320) && *(int *)(*(_QWORD *)(a1 + 8) + 28LL) < 0 )
      IvtDisableGlobalCommandRegisterField(a1, 31);
    if ( !v4 )
      goto LABEL_67;
    if ( *(_BYTE *)(a1 + 319) && !*(_QWORD *)(a1 + 336) && (int)IvtInitializeIdentityMappings(a1) < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)(a1 + 40) )
    {
LABEL_50:
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v32 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
        *(_QWORD *)(a1 + 24) = v32;
        if ( !v32 )
          return 3221225473LL;
        v33 = (__int64 *)HalMapIoSpace((LARGE_INTEGER)v32, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 16) = v33;
        v34 = v33;
        if ( !v33 )
          return 3221225473LL;
        v13 = *(_QWORD *)(a1 + 48) % 4096LL;
        v35 = ((*(_QWORD *)(a1 + 48) / 4096LL) << 12) | 1;
        if ( v34 < v34 + 512 )
        {
          do
          {
            *v34 = v35;
            v36 = *(_BYTE *)(a1 + 320);
            v13 = 8LL;
            if ( !v36 )
              v34[1] = 0LL;
            v37 = v34 + 1;
            if ( v36 )
              v37 = v34;
            v34 = v37 + 1;
          }
          while ( (unsigned __int64)(v37 + 1) < *(_QWORD *)(a1 + 16) + 4096LL );
        }
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v38 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
        if ( !v38 )
          return 3221225473LL;
        v39 = HalMapIoSpace((LARGE_INTEGER)v38, 0x1000uLL, MmCached);
        *(_QWORD *)(a1 + 32) = v39;
        if ( !v39 )
          return 3221225473LL;
        memset_0(v39, 0, 0x1000uLL);
      }
      if ( v4 == 2 && !v59 && (int)IvtProcessDeviceExceptions(a1, v13) < 0 )
        return 3221225473LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_BYTE *)(a1 + 320) != 0 ? 0x400 : 0) | (unsigned __int64)((*(_QWORD *)(a1 + 24) / 4096LL) << 12);
      _InterlockedOr(v57, 0);
      IvtEnableGlobalCommandRegisterField(a1, 30);
LABEL_67:
      for ( i = 0; i < 2; ++i )
      {
        if ( i != 1 || v60 && *(_BYTE *)(a1 + 320) && *(_BYTE *)(a1 + 316) )
        {
          v41 = i;
          v42 = 0x8000LL;
          if ( i != 1 )
            v42 = 4096LL;
          _BitScanReverse(&v43, v42);
          LODWORD(v62) = v43;
          *(_QWORD *)(32 * (i + 4LL) + a1) = v42;
          *(_QWORD *)&v64 = 32LL * i;
          v44 = v64 + a1;
          if ( !*(_QWORD *)(v64 + a1 + 112) )
          {
            v45 = guard_dispatch_icall_no_overrides(-1LL, (unsigned int)v42 >> 12);
            *(_QWORD *)(v44 + 120) = v45;
            if ( !v45 )
              return 3221225473LL;
            v46 = HalMapIoSpace((LARGE_INTEGER)v45, (unsigned int)v42, MmCached);
            *(_QWORD *)(v64 + a1 + 112) = v46;
            if ( !v46 )
              return 3221225473LL;
            memset_0(v46, 0, (unsigned int)v42);
            v41 = i;
          }
          *((_QWORD *)&v66[-1] + v41) = ((_BYTE)v62 - 4) & 7 ^ (*((_DWORD *)&v66[-1] + 2 * v41) & 0xFF8 | (unsigned __int64)((*(_QWORD *)(v44 + 120) / 4096LL) << 12));
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
      _InterlockedOr(v57, 0);
      v47 = v65;
      if ( *(_BYTE *)(a1 + 320) )
        v47 = v65 | 0x800;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v47;
      _InterlockedOr(v57, 0);
      v48 = v61;
      if ( !v61 )
        goto LABEL_96;
      if ( v61 == 1 )
      {
        *(_QWORD *)(a1 + 288) = qword_140F87890;
        *(_QWORD *)(a1 + 296) = qword_140F87898;
      }
      v49 = v63;
      if ( *(_QWORD *)(a1 + 288) )
      {
LABEL_92:
        _BitScanReverse(&v53, v49);
        v54 = ((_BYTE)v53 - 1) & 0xF | (unsigned __int64)((*(_QWORD *)(a1 + 296) / 4096LL) << 12) | 0x800;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v54;
        _InterlockedOr(v57, 0);
        KeStallExecutionProcessor(0x64u);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v54 )
          KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
        IvtEnableGlobalCommandRegisterField(a1, 24);
LABEL_96:
        if ( v60 )
        {
          if ( *(_BYTE *)(a1 + 320) && *(_BYTE *)(a1 + 316) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
            _InterlockedOr(v57, 0);
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
            _InterlockedOr(v57, 0);
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v65 + 1);
            _InterlockedOr(v57, 0);
          }
          IvtInitializeMTRR(a1);
        }
        if ( !*(_QWORD *)(a1 + 184) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 176));
          v56 = *(_DWORD *)(a1 + 200);
          *(PHYSICAL_ADDRESS *)(a1 + 184) = PhysicalAddress;
          *(_QWORD *)(a1 + 200) = v56 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
        }
        v9 = 26;
        goto LABEL_104;
      }
      v50 = (16 * v63 + 4095) & 0xFFFFF000;
      v51 = guard_dispatch_icall_no_overrides(-1LL, v50 >> 12);
      *(_QWORD *)(a1 + 296) = v51;
      if ( v51 )
      {
        v52 = HalMapIoSpace((LARGE_INTEGER)v51, v50, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 288) = v52;
        if ( v52 )
        {
          memset_0(v52, 0, v50);
          *(_DWORD *)(a1 + 304) = v49;
          if ( v48 == 1 && !qword_140F87890 )
          {
            qword_140F87890 = *(_QWORD *)(a1 + 288);
            qword_140F87898 = *(_QWORD *)(a1 + 296);
          }
          goto LABEL_92;
        }
      }
      return 3221225473LL;
    }
    v14 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
    *(_QWORD *)(a1 + 48) = v14;
    if ( !v14 )
      return 3221225473LL;
    v15 = HalMapIoSpace((LARGE_INTEGER)v14, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
    *(_QWORD *)(a1 + 40) = v15;
    if ( !v15 )
      return 3221225473LL;
    memset_0(v15, 0, 0x1000uLL);
    if ( !IvtBlockedPageTable )
    {
      v18 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
      qword_140F87888 = v18;
      if ( !v18 )
        return 3221225473LL;
      v19 = HalMapIoSpace((LARGE_INTEGER)v18, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
      IvtBlockedPageTable = (__int64)v19;
      if ( !v19 )
        return 3221225473LL;
      memset_0(v19, 0, 0x1000uLL);
    }
    v20 = 0;
    if ( v60 == 1 )
    {
      if ( *(_BYTE *)(a1 + 319) )
      {
        v20 = 1;
        IdentityMappedDomain = IvtGetIdentityMappedDomain(a1, &v62);
LABEL_36:
        v8 = v62;
        v7 = IdentityMappedDomain;
      }
    }
    else if ( v60 == 2 )
    {
      v20 = 1;
      IdentityMappedDomain = IvtGetBlockedDomain(a1, 0LL, (unsigned __int64 *)&v62);
      goto LABEL_36;
    }
    if ( *(_BYTE *)(a1 + 320) )
    {
      PasidGranularTranslationType = IvtGetPasidGranularTranslationType(v17, 0, v20);
      result = IvtSetupScalableModeDefaultPasidTables(a1, PasidGranularTranslationType, v7, v8);
      if ( (int)result < 0 )
        return result;
      IvtBuildScalableModeContextEntry(v23, *(_QWORD *)(a1 + 104), 0, 0, BugCheckParameter4, (unsigned __int64 *)v66);
      v25 = *(volatile signed __int64 **)(a1 + 40);
      v26 = v25 + 512;
      while ( v25 < v26 )
      {
        IvtSetScalableModeContextEntry(v24, (signed __int64 *)v66, v25);
        v25 = (volatile signed __int64 *)(v27 + 32);
      }
    }
    else
    {
      ContextEntryType = IvtGetContextEntryType(v17, v16, v20);
      IvtBuildContextEntry(a1, ContextEntryType, v7, v8, (__int64 *)&v64);
      v13 = *(_QWORD *)(a1 + 40);
      v29 = v13 + 4096;
      if ( v13 < v13 + 4096 )
      {
        v30 = v64;
        v31 = v64 & 1;
        do
        {
          if ( v31 )
          {
            *(_OWORD *)v13 = v30;
          }
          else
          {
            *(_QWORD *)v13 = 0LL;
            *(_QWORD *)(v13 + 8) = 0LL;
          }
          v13 += 16LL;
        }
        while ( v13 < v29 );
      }
    }
    v4 = v60;
    goto LABEL_50;
  }
  if ( a2 != 3 )
    return 0LL;
  if ( v5 )
  {
    IvtInvalidateRemappingTableEntries(a1, 0LL);
    IvtEnableGlobalCommandRegisterField(a1, 25);
  }
  if ( !v4 )
    return 0LL;
  IvtInvalidateAllContextEntries(a1);
  if ( *(_BYTE *)(a1 + 320) )
    IvtInvalidateScalableModePasidCache(a1, 0xFFFFu, 0x10000LL, -1, 0, 0, 0);
  IvtFlushTbInternal(a1, 0LL, 0, 0LL, 1, 0LL, 0LL, 0, 0LL);
  v9 = 31;
LABEL_104:
  IvtEnableGlobalCommandRegisterField(a1, v9);
  return 0LL;
}

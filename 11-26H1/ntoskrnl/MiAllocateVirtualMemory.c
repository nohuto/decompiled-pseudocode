/*
 * XREFs of MiAllocateVirtualMemory @ 0x1409EFC34
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x140871154 (MmCommitDecommitSecuredMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 *     MmAllocateUserStack @ 0x1409EE7D8 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1409EF150 (NtAllocateVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiAllowProtectionChange @ 0x1402E8CA4 (MiAllowProtectionChange.c)
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiVadSupportsPrivateCommit @ 0x1403C5E14 (MiVadSupportsPrivateCommit.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiGetVadPageSize @ 0x1404479B0 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiCommitPagefileBackedSection @ 0x14099A540 (MiCommitPagefileBackedSection.c)
 *     MiValidateVadMetadataFlags @ 0x1409F04C0 (MiValidateVadMetadataFlags.c)
 *     EtwTiLogAllocExecVm @ 0x1409F0530 (EtwTiLogAllocExecVm.c)
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 *     PerfInfoLogVirtualAlloc @ 0x140ABF324 (PerfInfoLogVirtualAlloc.c)
 *     MiLogMemResetInfo @ 0x140B0C304 (MiLogMemResetInfo.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _QWORD *v5; // r11
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  _KPROCESS *v12; // rcx
  __int64 v13; // r11
  ULONG_PTR v14; // r14
  int v15; // edx
  int v16; // eax
  __int64 v17; // r11
  __int16 v18; // r13
  int v19; // eax
  int v20; // eax
  int v21; // edx
  unsigned __int64 v23; // r12
  unsigned int VadFlags; // ebx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r10
  int v27; // r9d
  int v28; // ecx
  __int64 v29; // r13
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  __int64 ProcessPartition; // rax
  _QWORD *v34; // r9
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  __int64 VadPageSize; // rax
  unsigned int v39; // edx
  int v40; // eax
  __int64 v41; // r8
  bool v42; // zf
  __int64 v43; // rbx
  __int64 v44; // rcx
  int v45; // [rsp+50h] [rbp-61h] BYREF
  _WORD v46[2]; // [rsp+54h] [rbp-5Dh] BYREF
  unsigned int ProtectionMask; // [rsp+58h] [rbp-59h] BYREF
  __int64 v48; // [rsp+60h] [rbp-51h] BYREF
  __int64 v49; // [rsp+68h] [rbp-49h]
  int v50; // [rsp+70h] [rbp-41h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v52; // [rsp+80h] [rbp-31h]
  __int64 v53[2]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v54[3]; // [rsp+98h] [rbp-19h] BYREF

  LODWORD(v5) = 0;
  v52 = a5;
  v49 = a4;
  v51 = (_QWORD *)a2;
  *a5 = 0LL;
  LOBYTE(v7) = 0;
  v50 = 0;
  v48 = 0LL;
  memset(v54, 0, sizeof(v54));
  v8 = 0LL;
  v9 = a3 & -(__int64)(a3 != 0);
  if ( a2 >= 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4LL) & 0x20) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      v45 = -1073741811;
      goto LABEL_24;
    }
    ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    if ( *v34 == ProcessPartition )
      v34 = v5;
    v51 = v34;
  }
  v7 = 2;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v7 = (unsigned int)v5;
  ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
  LOBYTE(v11) = ProtectionMask;
  if ( ProtectionMask == -1 )
  {
    v45 = -1073741755;
LABEL_24:
    v14 = v9;
    goto LABEL_25;
  }
  v12 = *(_KPROCESS **)(a1 + 88);
  if ( *(_KPROCESS **)(a1 + 96) != v12 )
  {
    KiStackAttachProcess(v12, 0, (__int64)v54);
    v7 |= 1u;
  }
  v45 = MiValidateVadMetadataFlags(a1, v10);
  v14 = v9;
  if ( v45 < 0 )
  {
LABEL_25:
    if ( !v14 )
      goto LABEL_26;
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(a1 + 60) & 0x4000000) != 0 && v7 < 2 )
    goto LABEL_73;
  v15 = *(_DWORD *)(a1 + 40);
  if ( (v15 & 0x40000000) != 0 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1600LL) == v13 )
    goto LABEL_73;
  v16 = *(_DWORD *)(a1 + 112);
  if ( (v16 & 0x1A) != 0 )
  {
    if ( (v16 & 2) != 0 )
    {
      v36 = 0xFFFFLL;
    }
    else if ( (v16 & 8) != 0 )
    {
      v36 = 0x1FFFFFLL;
    }
    else
    {
      v36 = (v16 & 0x10) != 0 ? 0x3FFFFFFFLL : -1LL;
    }
    if ( ((*(_QWORD *)a1 | (*(_QWORD *)(a1 + 8) + 1LL)) & v36) != 0 )
      goto LABEL_73;
    if ( (v15 & 0x20400000) != 0x400000 )
      goto LABEL_12;
  }
  else if ( (v15 & 0x20400000) == 0x20000000 )
  {
LABEL_12:
    v7 |= 0x10u;
  }
  if ( v7 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 53)) )
  {
    v45 = -1073741727;
    goto LABEL_25;
  }
  v18 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
  v19 = *(_DWORD *)(a1 + 40);
  v46[0] = v18;
  if ( (v19 & 0x2000) != 0 )
  {
    v20 = MiReserveUserMemory(a1, (_DWORD)v51, ProtectionMask, (unsigned int)&v48, (__int64)v46);
    v8 = v48;
    v45 = v20;
    if ( v20 < 0 )
      goto LABEL_25;
    goto LABEL_16;
  }
  if ( (v19 & 0x40000000) != 0 || *(_QWORD *)(a1 + 72) != v17 )
  {
LABEL_73:
    v45 = -1073741811;
    goto LABEL_25;
  }
  v8 = *(_QWORD *)a1;
  v23 = *(_QWORD *)(a1 + 8) >> 12;
  v48 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
    v14 = MiObtainReferencedVadEx(v8, 0LL, &v45);
  if ( !v14 )
  {
    if ( v45 == -1073741664 )
      v45 = -1073741800;
    goto LABEL_26;
  }
  if ( v23 > (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
    goto LABEL_54;
  VadFlags = MiReadVadFlags(v14);
  *v52 = v8;
  if ( (VadFlags & 0x880000) == 0x880000 )
  {
    if ( (VadFlags & 0x1C) == 0xC )
    {
      LOBYTE(v11) = ProtectionMask;
      v37 = MiCommitEnclavePages(8912896LL, v14, v8, v25, *(_DWORD *)(a1 + 40), ProtectionMask);
      goto LABEL_113;
    }
    if ( (*(_DWORD *)(a1 + 60) & 0x10000000) == 0 )
    {
      v45 = -1073741664;
      goto LABEL_55;
    }
  }
  if ( !(unsigned int)MiVadSupportsPrivateCommit(v14) )
  {
    if ( (VadFlags & 0x80000) == 0 || (VadFlags & 0x200000) == 0 )
      goto LABEL_54;
    VadPageSize = MiGetVadPageSize(VadFlags);
    if ( ((v26 + 1) & ((VadPageSize << 12) - 1)) != 0 || (((VadPageSize << 12) - 1) & v8) != 0 )
      goto LABEL_117;
  }
  if ( (*(unsigned int *)(v14 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 32)) >= 0x7FFFFFFFDLL )
  {
LABEL_54:
    v45 = -1073741800;
    goto LABEL_55;
  }
  v27 = 256;
  if ( (VadFlags & 0x1C) != 0x10 )
  {
    v11 = ProtectionMask;
    goto LABEL_41;
  }
  v39 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
  *(_DWORD *)(a1 + 44) = v39;
  if ( (VadFlags & 0xE0) != 0 && (VadFlags & 0x300) == 768 )
  {
    v39 |= 0x400u;
  }
  else
  {
    if ( (VadFlags & 0x300) != 0x100 )
      goto LABEL_121;
    v39 |= 0x200u;
  }
  *(_DWORD *)(a1 + 44) = v39;
LABEL_121:
  v11 = MiMakeProtectionMask(v39);
  if ( v11 == -1 )
    goto LABEL_90;
LABEL_41:
  if ( (*(_DWORD *)(a1 + 112) & v27) == 0 )
    goto LABEL_42;
  if ( (VadFlags & 0x8080000) != 0x8080000
    || (VadFlags & 0x1080000) == 0x1080000
    || (VadFlags & 0x80000) == 0
    || (VadFlags & 0x1C) != 0
    || (VadFlags & 0x4000000) != 0 )
  {
LABEL_117:
    v45 = -1073741811;
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(a1 + 44) & 0x600) != 0 )
    goto LABEL_90;
LABEL_42:
  v28 = *(_DWORD *)(a1 + 40);
  if ( (v28 & 0x1080000) == 0 )
  {
    if ( (v11 & 2) != 0 )
    {
      v45 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v14, v11, v8, v26);
      if ( v45 < 0 )
        goto LABEL_55;
      if ( (VadFlags & 0x40) != 0 )
      {
        v40 = *(_DWORD *)(a1 + 120);
        if ( (v40 & 2) == 0 )
        {
          v40 &= ~1u;
          *(_DWORD *)(a1 + 120) = v40;
        }
        if ( (v40 & 8) == 0 )
          *(_DWORD *)(a1 + 120) = v40 & 0xFFFFFFFB;
      }
      v29 = v49;
      if ( *(_DWORD *)(a1 + 120) )
      {
        if ( (VadFlags & 2) != 0 )
        {
          v45 = MiCheckSecuredVad(v14, v8, *(_QWORD *)(a1 + 24), v11, *(_BYTE *)(a1 + 53), v49);
          if ( v45 < 0 )
            goto LABEL_55;
          LOBYTE(v7) = v7 | 4;
        }
        v35 = *(_DWORD *)(a1 + 120);
        v53[1] = v48;
        v53[0] = v8;
        v45 = MiCommitVadMetadataBits(v14, v53, v35);
        if ( v45 < 0 )
        {
LABEL_55:
          MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
          goto LABEL_26;
        }
        LOBYTE(v7) = v7 | 0x20;
      }
    }
    else
    {
      v29 = v49;
    }
    v30 = *(_DWORD *)(a1 + 44);
    if ( (VadFlags & 0x80000) != 0 )
    {
      if ( (v30 & 0x88) == 0 && ((VadFlags & 0x1C) != 0x10 || (v30 & 0xFFFFF9F9) == 0) )
      {
        if ( (VadFlags & 2) == 0 )
        {
LABEL_49:
          v45 = MiCommitExistingVad(
                  v14,
                  v8,
                  *(_QWORD *)(a1 + 24),
                  *(_DWORD *)(a1 + 44),
                  *(_QWORD *)(a1 + 112),
                  *(_DWORD *)(a1 + 48),
                  *(_BYTE *)(a1 + 52),
                  (__int64)v51,
                  (__int64)&v50,
                  v46);
          if ( v45 >= 0 )
          {
            MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
            if ( v50 )
            {
              v31 = *(_DWORD *)(a1 + 44);
              v51 = *(_QWORD **)(a1 + 24);
              v32 = v31 | 0x40000000;
              ProtectionMask = 0;
              v48 = v8;
              if ( (v7 & 0x20) == 0 )
                v32 = v31;
              MmProtectVirtualMemory(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(a1 + 88),
                (unsigned int)&v48,
                (unsigned int)&v51,
                v32,
                (__int64)&ProtectionMask);
            }
LABEL_16:
            v18 = v46[0];
            goto LABEL_17;
          }
          goto LABEL_55;
        }
        if ( !MiLocateLockedVadEvent(v14, 0x40u) )
        {
          v45 = MiCheckSecuredVad(v14, v8, *(_QWORD *)(a1 + 24), v11, *(_BYTE *)(a1 + 53), v29);
          if ( v45 < 0 )
            goto LABEL_55;
          goto LABEL_49;
        }
      }
LABEL_90:
      v45 = -1073741755;
      goto LABEL_55;
    }
    if ( (v30 & 0x600) != 0 )
      goto LABEL_90;
    v42 = (VadFlags & 2) == 0;
    v43 = v49;
    if ( (v7 & 4) == 0 && !v42 )
    {
      v45 = MiCheckSecuredVad(v14, v8, *(_QWORD *)(a1 + 24), v11, *(_BYTE *)(a1 + 53), v49);
      if ( v45 < 0 )
        goto LABEL_55;
    }
    v18 = *(_WORD *)MiGetControlAreaPartition(**(_QWORD **)(v14 + 80));
    if ( *(_QWORD *)(v44 + 64) )
      v37 = MiCommitFileBackedSection(a1, v14, v43);
    else
      v37 = MiCommitPagefileBackedSection(a1, v14);
LABEL_113:
    v45 = v37;
    if ( v37 >= 0 )
    {
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
      goto LABEL_17;
    }
    goto LABEL_55;
  }
  v45 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v8, v26, v14, v28, *(_BYTE *)(a1 + 53));
  if ( v45 < 0 )
  {
LABEL_26:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v45 == -1073740748 )
      MiLogMemResetInfo(v8, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v7 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v54, 0);
    return (unsigned int)v45;
  }
LABEL_17:
  if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v41 = *(unsigned int *)(a1 + 40);
    if ( (v41 & 0x3000) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
        LODWORD(v41) = 0x2000;
      PerfInfoLogVirtualAlloc(v8, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 88), v41, v18, v18);
    }
    else if ( (v41 & 0x1080000) != 0 )
    {
      MiLogMemResetInfo(v8, *(_QWORD *)(a1 + 24), v41);
    }
  }
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v54, 0);
  if ( (v11 & 2) != 0 )
  {
    LOBYTE(v21) = *(_BYTE *)(a1 + 53);
    EtwTiLogAllocExecVm(*(_QWORD *)(a1 + 88), v21, v8, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 44));
  }
  *v52 = v8;
  return (unsigned int)v45;
}

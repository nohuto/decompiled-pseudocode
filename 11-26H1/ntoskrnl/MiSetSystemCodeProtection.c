/*
 * XREFs of MiSetSystemCodeProtection @ 0x14038D734
 * Callers:
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MiProtectSystemImage @ 0x1409E4B80 (MiProtectSystemImage.c)
 *     MiProtectKernelCfgData @ 0x140CF88F0 (MiProtectKernelCfgData.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiRestrictSystemCodeProtection @ 0x14052C130 (MiRestrictSystemCodeProtection.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 *ProcessorFlushList; // r13
  unsigned int v6; // r14d
  unsigned __int64 v8; // rsi
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbp
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // ebx
  ULONG_PTR v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  signed __int64 ValidPte; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  _DWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r8
  int v35; // [rsp+30h] [rbp-88h]
  unsigned __int64 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+40h] [rbp-78h]
  __int64 v38; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-60h]
  unsigned __int64 v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+68h] [rbp-50h]
  unsigned int v44; // [rsp+C8h] [rbp+10h]
  char v46; // [rsp+D8h] [rbp+20h]

  ProcessorFlushList = 0LL;
  v6 = a4;
  v39 = 0LL;
  v8 = a2;
  v10 = 1;
  if ( a4 == 24 || (a4 & 0x10) == 0 )
  {
    v35 = 0;
  }
  else
  {
    v6 = a4 & 0xFFFFFFEF;
    v35 = 1;
  }
  v11 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v11) )
    return v10;
  v12 = v6;
  if ( v6 == 256 )
  {
    v41 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v37 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v40 = a3;
    v41 = 0LL;
    v12 = v6 & 0xFFFFFFFE;
    v37 = 0LL;
    if ( (v6 & 5) != 5 )
      v12 = v6;
    if ( (int)MiMakeDriverPagesPrivate(a1, v8, a3, (v12 >> 1) & 2) < 0 )
      return 0LL;
  }
  v15 = 0LL;
  v36 = 0LL;
  v46 = MiLockWorkingSetShared((__int64)&unk_140E36F80, v13, v14);
  while ( v8 <= a3 )
  {
    if ( !v15 )
      goto LABEL_53;
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v15);
LABEL_53:
      v15 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36 = v15;
      MiLockPageTableInternal((signed __int64)&unk_140E36F80, v15, 0);
    }
    if ( v8 > v40 )
    {
      v25 = v11 - *(_QWORD *)(a1 + 48);
      if ( v37 )
      {
        v27 = *(_DWORD **)(v37 + 16);
        v16 = 0LL;
        v37 = (__int64)v27;
        v39 = 0LL;
      }
      else
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal((__int64)&unk_140E36F80, v15);
        LOBYTE(v26) = v46;
        MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v26);
        v37 = MiOffsetToProtos(v41, v25, &v39);
        v27 = (_DWORD *)v37;
        MiLockWorkingSetShared((__int64)&unk_140E36F80, v28, v29);
        MiLockPageTableInternal((signed __int64)&unk_140E36F80, v15, 0);
        v16 = v39;
      }
      v30 = (unsigned int)v27[11] - (unsigned __int64)(unsigned int)v27[13] - v16;
      v12 = (v27[8] >> 1) & 0x1F;
      v40 = v8 + 8 * (v30 - 1);
      if ( (v12 & 5) == 5 )
        v12 &= ~1u;
    }
    v17 = *(_QWORD *)v8;
    if ( a5 )
    {
      v18 = MiRestrictSystemCodeProtection(*(_QWORD *)v8, v12);
      v44 = v18;
    }
    else
    {
      v18 = v12;
      v44 = v12;
    }
    if ( (v17 & 1) != 0 )
    {
      v42 = ((unsigned __int64)v17 >> 12) & 0xFFFFFFFFFFLL;
      v19 = 48 * v42 - 0x220000000000LL;
      if ( *(__int64 *)(v19 + 40) >= 0 )
      {
        if ( (MiGetPagePrivilege((_QWORD *)(48 * v42 - 0x220000000000LL), 2LL, 0LL) & 0x40) != 0 )
        {
          if ( (v44 & 6) != 0 )
            goto LABEL_41;
        }
        else if ( (MiFlags & 0x20000) != 0 && (v44 & 4) != 0 && ((*(_QWORD *)(v19 + 40) >> 60) & 7) == 3 )
        {
LABEL_41:
          v15 = v36;
          v10 = 0;
          break;
        }
        LODWORD(v38) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v38);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        *(_QWORD *)(v19 + 16) = (32LL * v44) ^ (*(_QWORD *)(v19 + 16) ^ (32LL * v44)) & 0xFFFFFFFFFFFFFC1FuLL;
        if ( v35 )
          MiMarkPfnVerified(v19, 4LL, v20, v21);
        v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v38 = v17 & 0x42;
        if ( (v17 & 0x42) != 0 )
          v22 = MiCaptureDirtyBitToPfn(v19);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v22 )
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL)),
            v22,
            1LL);
        ValidPte = MiMakeValidPte(v8, v42, v44);
        if ( (v44 & 5) == 4 && v38 )
          ValidPte |= 0x42uLL;
        MiWriteValidPteNewProtection((__int64 *)v8, ValidPte);
        if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0
          || (v17 & 0x40) != 0 && (ValidPte & 0x40) == 0
          || (v17 & 2) != 0 && (ValidPte & 2) == 0
          || ValidPte < 0 && v17 >= 0 )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)&unk_140E36F80,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v11, 1LL, 0);
        }
      }
LABEL_38:
      v15 = v36;
      v8 += 8LL;
      v11 += 4096LL;
    }
    else
    {
      if ( (v17 & 0x400) != 0 )
        goto LABEL_38;
      if ( (v17 & 0x800) == 0 )
      {
        if ( v17 && v6 != 256 )
          *(_QWORD *)v8 = (32LL * v18) ^ (v17 ^ (32LL * v18)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_38;
      }
      v15 = v36;
      if ( MiLockTransitionLeafPageEx(v8, 0LL, 0) )
      {
        v31 = *(_QWORD *)v8;
        v32 = *(_QWORD *)v8;
        if ( qword_140E2D8C0 )
        {
          if ( (v31 & 0x10) != 0 )
            v32 &= ~0x10uLL;
          else
            v32 &= qword_140E2D8C8;
        }
        v33 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL);
        v34 = 32LL * v18;
        v16 = v34 ^ (*(_QWORD *)(v33 - 0x220000000000LL + 16) ^ v34) & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)(v33 - 0x220000000000LL + 16) = v16;
        *(_QWORD *)v8 = v34 ^ (v31 ^ v34) & 0xFFFFFFFFFFFFFC1FuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v33 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_38;
      }
    }
  }
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v15 )
    MiUnlockPageTableInternal((__int64)&unk_140E36F80, v15);
  LOBYTE(v16) = v46;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v16);
  return v10;
}

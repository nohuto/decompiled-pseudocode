/*
 * XREFs of MiProtectPagedPool @ 0x1404B84A4
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 * Callees:
 *     MiAddVaToProtectFlushList @ 0x14024F3A4 (MiAddVaToProtectFlushList.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MiLockTransitionLeafPageEx @ 0x14033E050 (MiLockTransitionLeafPageEx.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiProtectPagedPool(ULONG_PTR a1, unsigned int a2, __int64 *a3)
{
  signed __int64 v3; // rbx
  __int64 v5; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  ULONG_PTR v9; // rsi
  unsigned int v10; // ebp
  signed __int64 ValidPte; // rcx
  signed __int64 v12; // rax
  struct _KEVENT *v14; // rdi
  unsigned __int64 v15; // rax
  ULONG *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 *ProcessorFlushList; // rax
  int v20; // edi
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  v5 = a2;
  if ( (*(_QWORD *)a1 & 1) == 0 )
  {
    if ( (v3 & 0x400) != 0 )
      return 4LL;
    if ( (v3 & 0x800) != 0 )
    {
      v17 = MiLockTransitionLeafPageEx(a1, 0LL, 0);
      v18 = v17;
      if ( !v17 )
        return 2LL;
      v25 = *(_QWORD *)(v17 + 16) ^ (32 * v5);
      v26 = (*(_QWORD *)a1 ^ (32 * v5)) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)(v18 + 16) = (32 * v5) ^ v25 & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)a1 = (32 * v5) ^ v26;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      *(_QWORD *)a1 = (32LL * a2) ^ (v3 ^ (32LL * a2)) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    return 0LL;
  }
  v7 = (__int64)(a1 << 25) >> 16;
  v8 = ((unsigned __int64)v3 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v8 - 0x220000000000LL;
  if ( *(__int64 *)(v9 + 40) < 0 )
    return 3LL;
  if ( (_DWORD)v5 != 24 )
  {
    v10 = v5 | 0x80000000;
    ValidPte = MiMakeValidPte(a1, v8, v10);
    while ( 1 )
    {
      ValidPte = v3 ^ (v3 ^ ValidPte) & 0x80FFFFFFFFFFFFFFuLL;
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, ValidPte, v3);
      if ( v3 == v12 )
        break;
      v3 = v12;
    }
    if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0
      || (ValidPte & 0x40) == 0 && (v3 & 0x40) != 0
      || (ValidPte & 2) == 0 && (v3 & 2) != 0
      || ValidPte < 0 && v3 >= 0 )
    {
      MiAddVaToProtectFlushList((int)&unk_140E37080, a1, a3);
    }
    v27 = 0;
    v14 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8LL * (unsigned __int16)word_140E3712E);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_QWORD *)(v9 + 16) = (32LL * v10) ^ (*(_QWORD *)(v9 + 16) ^ (32LL * v10)) & 0xFFFFFFFFFFFFFC1FuLL;
    if ( (v3 & 0x42) != 0 )
      v15 = MiCaptureDirtyBitToPfn(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 )
      MiReleasePageFileInfo(v14, v15, 1);
    return 0LL;
  }
  if ( (dword_140E37138 & 0xF) == 1 )
    v16 = &MiSystemPartition;
  else
    v16 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (unsigned __int16)word_140E3712E);
  if ( v16[4539] )
    MI_WSLE_LOG_ACCESS((__int64)&unk_140E37080, a1);
  ProcessorFlushList = (__int64 *)a3[1];
  if ( ProcessorFlushList )
  {
    v20 = 0;
  }
  else
  {
    v20 = 1;
    ProcessorFlushList = MiGetProcessorFlushList();
    a3[1] = (__int64)ProcessorFlushList;
  }
  v21 = (ULONG_PTR)(ProcessorFlushList + 517);
  MiInitializeTbFlushList(
    (__int64)(ProcessorFlushList + 517),
    (__int64)&unk_140E37080,
    *((_DWORD *)ProcessorFlushList + 1037),
    2,
    1);
  MiInsertTbFlushEntry(v22, v7, 1LL, 0);
  v24 = -(MiFreeWsleList((__int64)&unk_140E37080, v23, v21, 0) != 0);
  if ( v20 )
  {
    MiReleaseProcessorFlushList();
    a3[1] = 0LL;
  }
  return (unsigned int)(v24 + 2);
}

/*
 * XREFs of SmmMapMdl @ 0x14004F568
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x14004F204 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmMapMdl(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        MEMORY_CACHING_TYPE CacheType,
        _QWORD *a7,
        __int64 *a8,
        __int64 *a9)
{
  __int64 v9; // rax
  int v13; // r15d
  PVOID v14; // r12
  __int64 v15; // rbx

  v9 = a4;
  v13 = -1073741823;
  v14 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 327;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalObject->Flags.ExistingMemory == 0",
        327LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ExAcquirePushLockExclusiveEx(a1 + 32, 0LL);
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
        v14 = *(PVOID *)(a2 + 24);
      else
        v14 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( v14 )
        goto LABEL_8;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 343;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pBaseAddress != nullptr", 343LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v14 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, CacheType, 0LL, 0, 0x40000010u);
    }
    if ( !v14 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 353;
      v13 = -1073741801;
      goto LABEL_9;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 48);
    v13 = 0;
LABEL_9:
    ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
    v9 = a4;
    goto LABEL_10;
  }
  v14 = MmMapLockedPagesSpecifyCache((PMDL)a2, 1, CacheType, 0LL, 0, 0x40000010u);
  v13 = 0;
  v9 = a4;
LABEL_10:
  if ( v13 < 0 )
  {
    _InterlockedAdd(&dword_140169738, 1u);
    WdLogSingleEntry4(6LL, v9, a5, a3, CacheType);
    WdLogGlobalForLineNumber = 367;
    v15 = a4;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to map MDL. Offset=0x%.16I64x, Size=%I64u, AccessMode=%u, CacheType=%u",
      a4,
      a5,
      a3,
      CacheType,
      0LL);
  }
  else
  {
    v15 = a4;
  }
  *a7 = v14;
  *a8 = v15;
  *a9 = a5;
  return (unsigned int)v13;
}

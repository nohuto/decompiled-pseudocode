/*
 * XREFs of ?RestoreImmutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x140194040
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLiveMigrationImmutableDataSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z @ 0x1401942E0 (-GetLiveMigrationImmutableDataSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z.c)
 *     ?DdiRestoreImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x14021ABB8 (-DdiRestoreImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRA.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::RestoreImmutableMigrationData(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA *a2)
{
  unsigned int *v2; // rdi
  __int64 v4; // rax
  const wchar_t *v5; // r9
  unsigned int LiveMigrationImmutableDataSize; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int *v17; // rdi
  unsigned int i; // ecx
  ADAPTER_RENDER *v19; // r11
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+28h] [rbp-30h]
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h]

  v2 = (unsigned int *)*((_QWORD *)a2 + 2);
  if ( !v2 || *((_QWORD *)a2 + 1) < 8uLL )
  {
    WdLogSingleEntry0(2LL);
    v4 = 454LL;
    v5 = L"Invalid data or data size passed to RestoreImmutableMigrationData";
    WdLogGlobalForLineNumber = 454;
    goto LABEL_20;
  }
  if ( *v2 > 1 )
  {
    WdLogSingleEntry1(2LL);
    v4 = *v2;
    v5 = L"Invalid immutable data version %d";
    WdLogGlobalForLineNumber = 462;
LABEL_20:
    v24 = 0LL;
    goto LABEL_21;
  }
  LiveMigrationImmutableDataSize = DXGK_VIRTUAL_GPU_GPUP::GetLiveMigrationImmutableDataSize(
                                     (DXGK_VIRTUAL_GPU_GPUP *)this,
                                     *v2);
  v9 = v2[1];
  if ( v9 != LiveMigrationImmutableDataSize )
  {
    v10 = LiveMigrationImmutableDataSize;
    WdLogSingleEntry2(2LL, v9, LiveMigrationImmutableDataSize);
    v4 = v2[1];
    v5 = L"Invalid immutable data size %d, expected %d";
    v24 = v10;
    WdLogGlobalForLineNumber = 469;
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, v24, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v11 = *((_DWORD *)this[14] + 3);
  v12 = v2[2];
  if ( v12 != v11 )
  {
    WdLogSingleEntry2(2LL, v12, v11);
    v13 = v2[2];
    v25 = *((unsigned int *)this[14] + 3);
    WdLogGlobalForLineNumber = 477;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid current partition count %d, expected %d",
      v13,
      v25,
      0LL,
      0LL,
      0LL);
    return 3221225858LL;
  }
  v15 = *((_DWORD *)this + 42);
  v16 = v2[3];
  if ( v16 != v15 )
  {
    WdLogSingleEntry2(2LL, v16, v15);
    v26 = *((unsigned int *)this + 42);
    v22 = v2[3];
    WdLogGlobalForLineNumber = 483;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid number of segments %d, expected %d",
      v22,
      v26,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v17 = v2 + 4;
  for ( i = 0; i < v15; ++i )
  {
    v19 = this[23];
    v20 = 112LL * i;
    if ( v17[2] != *(_DWORD *)((char *)v19 + v20 + 24)
      || v17[3] != *(_DWORD *)((char *)v19 + v20 + 28)
      || *(_QWORD *)v17 != *(_QWORD *)((char *)v19 + v20 + 16) )
    {
      WdLogSingleEntry3(2LL, v17[2], v17[3], *(_QWORD *)v17);
      v28 = *(_QWORD *)v17;
      v27 = v17[3];
      v23 = v17[2];
      WdLogGlobalForLineNumber = 498;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation info. Alignment: %d DriverSegmentId %d Size 0x%I64x",
        v23,
        v27,
        v28,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v17 += 4;
  }
  v21 = v8 - (unsigned int)((_DWORD)v17 - *(_DWORD *)(v7 + 16));
  *(_QWORD *)(v7 + 16) = v17;
  *(_QWORD *)(v7 + 8) = v21;
  return ADAPTER_RENDER::DdiRestoreImmutableMigrationData(
           this[1],
           (struct _DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA *)v7);
}

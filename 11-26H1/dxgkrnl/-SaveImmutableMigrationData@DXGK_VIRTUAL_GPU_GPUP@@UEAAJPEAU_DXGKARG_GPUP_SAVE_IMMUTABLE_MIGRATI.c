/*
 * XREFs of ?SaveImmutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x1403F7B30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSaveImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x1403F7C80 (-DdiSaveImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_D.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SaveImmutableMigrationData(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA *a2)
{
  _DWORD *v3; // r9
  unsigned int v4; // esi
  _DWORD *v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi

  v3 = (_DWORD *)*((_QWORD *)a2 + 2);
  v4 = 16 * (*((_DWORD *)this + 42) + 1);
  if ( v3 )
  {
    *v3 = 1;
    v6 = v3 + 4;
    v7 = 0;
    v3[2] = *(_DWORD *)(*((_QWORD *)this + 14) + 12LL);
    for ( v3[3] = *((_DWORD *)this + 42); v7 < *((_DWORD *)this + 42); v6 += 4 )
    {
      v8 = v7++;
      v6[2] = *(_DWORD *)(112 * v8 + *((_QWORD *)this + 23) + 24);
      v6[3] = *(_DWORD *)(112 * v8 + *((_QWORD *)this + 23) + 28);
      *(_QWORD *)v6 = *(_QWORD *)(112 * v8 + *((_QWORD *)this + 23) + 16);
    }
    v9 = (unsigned int)((_DWORD)v6 - *((_DWORD *)a2 + 4));
    v3[1] = v9;
    **((_QWORD **)a2 + 1) -= v9;
    *((_QWORD *)a2 + 2) = v6;
  }
  v10 = ADAPTER_RENDER::DdiSaveImmutableMigrationData(*((ADAPTER_RENDER **)this + 1), a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !*((_QWORD *)a2 + 2) )
      **((_QWORD **)a2 + 1) += v4;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 424;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The driver failed SaveImmutableMigrationData DDI call. Status: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v11;
}

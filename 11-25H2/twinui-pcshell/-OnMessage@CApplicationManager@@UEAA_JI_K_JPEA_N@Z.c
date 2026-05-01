/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1801869C0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::OnMessage(CApplicationManager *this, int a2, __int64 a3, int a4, bool *a5)
{
  bool v5; // bp
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi

  v5 = 0;
  if ( a2 == 1025 )
  {
    v5 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = *((_QWORD *)this + 75);
    v10 = 0LL;
    v11 = *(_QWORD *)(v9 + 32);
    while ( v10 < v11 )
    {
      v12 = *(_QWORD *)(v9 + 24) + 8 * v10;
      v13 = *(_DWORD **)v12;
      if ( *(_DWORD *)(*(_QWORD *)v12 + 8LL) == a4 )
      {
        if ( v10 != v11 - 1 )
          memmove_0((void *)v12, (const void *)(v12 + 8), 8 * (v11 - v10) - 8);
        --*(_QWORD *)(v9 + 32);
        if ( v13[3] != 5 )
          --*(_DWORD *)(v9 + 56);
        if ( v13 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
          (**(void (__fastcall ***)(_DWORD *, __int64))v13)(v13, 1LL);
        }
        break;
      }
      ++v10;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else if ( a2 == 1026 )
  {
    v5 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v14 = *((_QWORD *)this + 75);
    v15 = 0LL;
    v16 = 0LL;
    v17 = *(_QWORD *)(v14 + 32);
    while ( v16 < v17 )
    {
      v18 = *(_QWORD *)(v14 + 24) + 8 * v16;
      v19 = *(_QWORD *)v18;
      if ( *(_DWORD *)(*(_QWORD *)v18 + 8LL) == a4 )
      {
        if ( v16 != v17 - 1 )
          memmove_0((void *)v18, (const void *)(v18 + 8), 8 * (v17 - v16) - 8);
        --*(_QWORD *)(v14 + 32);
        if ( *(_DWORD *)(v19 + 12) != 5 )
          --*(_DWORD *)(v14 + 56);
        v15 = v19;
        break;
      }
      ++v16;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
    }
  }
  *a5 = v5;
  return 0LL;
}

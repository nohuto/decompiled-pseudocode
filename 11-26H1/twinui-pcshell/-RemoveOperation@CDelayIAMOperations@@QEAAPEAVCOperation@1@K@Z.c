/*
 * XREFs of ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1801DB0F8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

struct CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::RemoveOperation(
        CDelayIAMOperations *this,
        int a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 i; // rcx
  __int64 v6; // r10
  __int64 v7; // rdi

  v2 = *((_QWORD *)this + 4);
  v3 = 0LL;
  for ( i = 0LL; i < v2; ++i )
  {
    v6 = *((_QWORD *)this + 3) + 8 * i;
    v7 = *(_QWORD *)v6;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 8LL) == a2 )
    {
      if ( i != v2 - 1 )
        memmove_0((void *)v6, (const void *)(v6 + 8), 8 * (v2 - i) - 8);
      --*((_QWORD *)this + 4);
      if ( *(_DWORD *)(v7 + 12) != 5 )
        --*((_DWORD *)this + 14);
      return (struct CDelayIAMOperations::COperation *)v7;
    }
  }
  return (struct CDelayIAMOperations::COperation *)v3;
}

/*
 * XREFs of AcpActivityCallback @ 0x18001BA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AcpActivityCallback(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  DWORD CurrentThreadId; // eax
  __int64 v7; // rdx

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = *(_QWORD *)(a5 + 24);
  *(_DWORD *)(a5 + 32) = CurrentThreadId;
  (*(void (__fastcall **)(_QWORD, __int64))(a5 + 16))(v5, v7);
  *(_DWORD *)(a5 + 32) = 0;
}

/*
 * XREFs of ?SetBehaviorFlagsInternal@CImmersiveApp@@UEAAJ_NW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@@Z @ 0x1802FFAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::SetBehaviorFlagsInternal(__int64 a1, char a2, int a3)
{
  int v3; // eax
  unsigned __int64 v4; // rdi
  int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 372);
  v4 = 0LL;
  if ( a2 )
    v6 = a3 | v3;
  else
    v6 = ~a3 & v3;
  *(_DWORD *)(a1 + 372) = v6;
  v7 = *(_QWORD *)(a1 + 344);
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8 * v4);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 184LL))(v8, *(unsigned int *)(a1 + 372));
      ++v4;
    }
    while ( v4 < v7 );
  }
  return 0LL;
}

/*
 * XREFs of ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x180203E80
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1805A0FD4 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1805A3340 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::OnMessage(CShellSnapComponent *this, __int64 a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  __int64 v7; // r8
  CShellSnapComponent *v8; // rbx

  v3 = a3 - 101;
  if ( !v3 )
  {
    CShellSnapComponent::ToggleSnapFlyout((CShellSnapComponent *)((char *)this - 152));
    return 0LL;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    v7 = 2424841LL;
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = 2555913LL;
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = 2490377LL;
    goto LABEL_10;
  }
  if ( v6 == 1 )
  {
    v7 = 2621449LL;
LABEL_10:
    v8 = (CShellSnapComponent *)((char *)this - 152);
    (*(void (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8, 0LL, v7);
    CShellSnapComponent::RegisterRawInput(v8);
  }
  return 0LL;
}

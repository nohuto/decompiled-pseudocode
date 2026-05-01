/*
 * XREFs of ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x1802117D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x18057D524 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18057F7A0 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::OnMessage(CShellSnapComponent *this, __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // r8

  v4 = a3 - 101;
  if ( !v4 )
  {
    CShellSnapComponent::ToggleSnapFlyout((CShellSnapComponent *)((char *)this - 152));
    return 0LL;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v8 = 2424841LL;
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = 2555913LL;
    goto LABEL_10;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 2490377LL;
    goto LABEL_10;
  }
  if ( v7 == 1 )
  {
    v8 = 2621449LL;
LABEL_10:
    (*(void (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8, 0LL, v8);
    CShellSnapComponent::RegisterRawInput((CShellSnapComponent *)((char *)this - 152));
  }
  return 0LL;
}

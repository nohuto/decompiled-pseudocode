/*
 * XREFs of ?ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z @ 0x1805A02A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ObservedKeyUp@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z @ 0x18059B6BC (--$ObservedKeyUp@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z.c)
 *     ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1805A3564 (-UnregisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::ObservedKeyUp(CShellSnapComponent *this, int a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  CSnapComponentTelemetry::ObservedKeyUp<unsigned int &>(&v5);
  if ( (unsigned int)(a2 - 91) <= 1 )
  {
    CShellSnapComponent::UnregisterRawInput((CShellSnapComponent *)((char *)this - 184));
    (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 5) + 32LL))((char *)this - 40, 2LL, 8LL);
  }
  return 0LL;
}

/*
 * XREFs of ?NotifyNewBinding@CPresentRate@@QEAAXXZ @ 0x1400A3340
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x14006D00C (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPresentRate::NotifyNewBinding(CPresentRate *this)
{
  CPresentRate *v1; // rax
  __int64 v2; // rdx

  v1 = this;
  v2 = 5LL;
  do
  {
    *(_QWORD *)v1 = 0LL;
    v1 = (CPresentRate *)((char *)v1 + 8);
    --v2;
  }
  while ( v2 );
  *((_DWORD *)this + 10) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}

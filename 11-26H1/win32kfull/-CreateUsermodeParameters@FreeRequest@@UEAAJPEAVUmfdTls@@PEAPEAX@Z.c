/*
 * XREFs of ?CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1402859A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall FreeRequest::CreateUsermodeParameters(FreeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  char *v5; // rax
  void *v6; // rdi

  v5 = (char *)UmfdTls::CommitUMBuffer(a2, 0x10u, 1);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  GreProbeAndWriteToUntrustedVa(v5 + 8, 8uLL, (char *)this + 48, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v6, 8uLL, (char *)this + 40, 8uLL, 1uLL);
  *a3 = v6;
  return 0LL;
}

/*
 * XREFs of ?CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140287080
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall UnloadFontFileRequest::CreateUsermodeParameters(
        UnloadFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  void *v5; // rbx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v5 = UmfdTls::CommitUMBuffer(a2, 0x10u, 1);
  if ( !v5 )
    return 3221225495LL;
  v7 = **((_QWORD **)this + 5);
  GreProbeAndWriteToUntrustedVa(v5, 8uLL, &v7, 8uLL, 1uLL);
  *a3 = v5;
  return 0LL;
}

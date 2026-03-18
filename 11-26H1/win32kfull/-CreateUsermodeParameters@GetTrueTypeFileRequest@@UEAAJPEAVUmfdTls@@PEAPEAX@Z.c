/*
 * XREFs of ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285A50
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x1401C0670 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 */

__int64 __fastcall GetTrueTypeFileRequest::CreateUsermodeParameters(
        GetTrueTypeFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  UmfdUMBuffer **v5; // r10
  __int64 v6; // rdi
  char *v7; // rax
  void *v8; // rbx
  unsigned int v10[6]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v11) = 0;
  v10[0] = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x18u, (unsigned int *)&v11, 4u, v10) )
    return 3221225495LL;
  v6 = (unsigned int)v11;
  if ( (int)v11 + v10[0] < (unsigned int)v11 )
    return 3221225495LL;
  v7 = (char *)UmfdTls::CommitUMBuffer(v5, (int)v11 + v10[0], 1);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)this + 8) = &v7[v6];
  GreProbeAndWriteToUntrustedVa(v7 + 8, 8uLL, (char *)this + 64, 8uLL, 1uLL);
  v11 = **((_QWORD **)this + 5);
  GreProbeAndWriteToUntrustedVa(v8, 8uLL, &v11, 8uLL, 1uLL);
  *a3 = v8;
  return 0LL;
}

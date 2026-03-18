/*
 * XREFs of ?CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286720
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x1401C0670 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 */

__int64 __fastcall QueryFontTreeRequest::CreateUsermodeParameters(
        QueryFontTreeRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  UmfdUMBuffer **v5; // r10
  __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  unsigned int v10[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v11) = 0;
  v10[0] = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x28u, (unsigned int *)&v11, 8u, v10) )
    return 3221225495LL;
  v6 = (unsigned int)v11;
  if ( (int)v11 + v10[0] < (unsigned int)v11 )
    return 3221225495LL;
  v7 = (char *)UmfdTls::CommitUMBuffer(v5, (int)v11 + v10[0], 1);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)this + 10) = &v7[v6];
  GreProbeAndWriteToUntrustedVa(v7 + 24, 8uLL, (char *)this + 80, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v8, 8uLL, (char *)this + 40, 8uLL, 1uLL);
  v11 = **((_QWORD **)this + 6);
  GreProbeAndWriteToUntrustedVa(v8 + 8, 8uLL, &v11, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v8 + 16, 4uLL, (char *)this + 56, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v8 + 20, 4uLL, (char *)this + 60, 4uLL, 1uLL);
  *a3 = v8;
  return 0LL;
}

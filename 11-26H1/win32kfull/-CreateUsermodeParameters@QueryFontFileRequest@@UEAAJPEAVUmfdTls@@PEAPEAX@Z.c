/*
 * XREFs of ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286490
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x1401C0670 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 */

__int64 __fastcall QueryFontFileRequest::CreateUsermodeParameters(
        QueryFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  char *v5; // r12
  UmfdUMBuffer **v6; // r10
  __int64 v7; // rdi
  char *v8; // rax
  char *v9; // rbx
  _QWORD *v10; // r14
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v12) = 0;
  v13 = 0;
  v5 = (char *)this + 52;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x20u, (unsigned int *)&v12, *((_DWORD *)this + 13), &v13) )
    return 3221225495LL;
  v7 = (unsigned int)v12;
  if ( (unsigned int)v12 + v13 < (unsigned int)v12 )
    return 3221225495LL;
  v8 = (char *)UmfdTls::CommitUMBuffer(v6, (unsigned int)v12 + v13, 1);
  v9 = v8;
  if ( !v8 )
    return 3221225495LL;
  v10 = (_QWORD *)((char *)this + 72);
  if ( *((_QWORD *)this + 7) )
    *v10 = &v8[v7];
  v12 = **((_QWORD **)this + 5);
  GreProbeAndWriteToUntrustedVa(v8, 8uLL, &v12, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v9 + 8, 4uLL, (char *)this + 48, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v9 + 12, 4uLL, v5, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v9 + 16, 8uLL, v10, 8uLL, 1uLL);
  *a3 = v9;
  return 0LL;
}

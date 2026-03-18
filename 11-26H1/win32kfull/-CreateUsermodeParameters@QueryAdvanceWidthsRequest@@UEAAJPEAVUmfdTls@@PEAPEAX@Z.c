/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285F40
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1401B868C (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r15
  char *v11; // rax
  char *v12; // rbx
  unsigned int v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  v15[0] = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x30u,
          v15,
          0x40u,
          &v14,
          4 * *((_DWORD *)this + 20),
          &v16,
          2 * *((_DWORD *)this + 20),
          &v17) )
    return 3221225495LL;
  v6 = v16;
  v7 = v16 + v17;
  if ( v16 + v17 < v16 )
    return 3221225495LL;
  v8 = v14;
  v9 = v7 + v14;
  if ( v7 + v14 < v14 )
    return 3221225495LL;
  v10 = v15[0];
  if ( v9 + v15[0] < v15[0] )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v9 + v15[0], 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = &v11[v10];
  *((_QWORD *)this + 12) = &v11[v10 + v8];
  *((_QWORD *)this + 13) = &v11[v8 + v10 + v6];
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 6),
    (struct _FONTOBJ *)&v11[v10]);
  GreProbeAndWriteToUntrustedVa(v12 + 8, 8uLL, (char *)this + 88, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12, 8uLL, (char *)this + 40, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 16, 4uLL, (char *)this + 56, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 40, 4uLL, (char *)this + 80, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 24, 8uLL, (char *)this + 96, 8uLL, 1uLL);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  GreProbeAndWriteToUntrustedVa(v12 + 32, 8uLL, (char *)this + 104, 8uLL, 1uLL);
  *a3 = v12;
  return 0LL;
}

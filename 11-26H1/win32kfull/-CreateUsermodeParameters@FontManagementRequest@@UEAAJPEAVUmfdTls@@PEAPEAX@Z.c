/*
 * XREFs of ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285720
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1401B868C (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall FontManagementRequest::CreateUsermodeParameters(
        FontManagementRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  unsigned int *v5; // r13
  __int64 v6; // rsi
  int v7; // ecx
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // r15
  char *v11; // rax
  char *v12; // rdi
  char *v13; // rcx
  const void *v14; // r8
  struct _FONTOBJ *v15; // rdx
  unsigned int v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v18[17]; // [rsp+44h] [rbp-44h] BYREF
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  void **v20; // [rsp+A0h] [rbp+18h]
  unsigned int v21; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a3;
  v18[0] = 0;
  v17 = 0;
  v21 = 0;
  LODWORD(v19) = 0;
  v5 = (unsigned int *)((char *)this + 60);
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v18,
          0x40u,
          &v17,
          *((_DWORD *)this + 15),
          &v21,
          *((_DWORD *)this + 18),
          (unsigned int *)&v19) )
    return 3221225495LL;
  v6 = v21;
  v7 = v21 + v19;
  if ( v21 + (unsigned int)v19 < v21 )
    return 3221225495LL;
  v8 = v17;
  v9 = v7 + v17;
  if ( v7 + v17 < v17 )
    return 3221225495LL;
  v10 = v18[0];
  if ( v9 + v18[0] < v18[0] )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v9 + v18[0], 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = &v11[v10];
  v13 = &v11[v10 + v8];
  *((_QWORD *)this + 13) = v13;
  *((_QWORD *)this + 14) = &v11[v8 + (unsigned int)v10 + v6];
  v14 = (const void *)*((_QWORD *)this + 8);
  if ( v14 )
    GreProbeAndWriteToUntrustedVa(v13, *v5, v14, *v5, 1uLL);
  else
    *((_QWORD *)this + 13) = 0LL;
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 14) = 0LL;
  v15 = (struct _FONTOBJ *)*((_QWORD *)this + 6);
  if ( v15 )
  {
    FontDriverDdiRequest::PrepareUsermodeFontObj((struct UmfdTls *)a2, v15, *((struct _FONTOBJ **)this + 12));
    GreProbeAndWriteToUntrustedVa(v12 + 8, 8uLL, (char *)this + 96, 8uLL, 1uLL);
  }
  v19 = 0LL;
  GreProbeAndWriteToUntrustedVa(v12, 8uLL, &v19, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 16, 4uLL, (char *)this + 56, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 20, 4uLL, v5, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 24, 8uLL, (char *)this + 104, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 32, 4uLL, (char *)this + 72, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 40, 8uLL, (char *)this + 112, 8uLL, 1uLL);
  *v20 = v12;
  return 0LL;
}

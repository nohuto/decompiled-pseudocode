/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1401B868C (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  UmfdUMBuffer **v5; // r11
  __int64 v6; // rsi
  int v7; // ecx
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  unsigned int v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15[3]; // [rsp+44h] [rbp-34h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  v15[0] = 0;
  v14 = 0;
  LODWORD(v16) = 0;
  v17 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v15,
          *((_DWORD *)this + 15),
          &v14,
          8u,
          (unsigned int *)&v16,
          4u,
          &v17) )
    return 3221225495LL;
  v6 = (unsigned int)v16;
  v7 = v16 + v17;
  if ( (unsigned int)v16 + v17 < (unsigned int)v16 )
    return 3221225495LL;
  v8 = v14;
  v9 = v7 + v14;
  if ( v7 + v14 < v14 )
    return 3221225495LL;
  v10 = v15[0];
  if ( v9 + v15[0] < v15[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(v5, v9 + v15[0], 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = (char *)v11 + v10;
  *((_QWORD *)this + 13) = (char *)v11 + v10 + v8;
  *((_QWORD *)this + 14) = (char *)v11 + v8 + v10 + v6;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  v16 = **((_QWORD **)this + 5);
  GreProbeAndWriteToUntrustedVa(v11, 8uLL, &v16, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 1, 4uLL, (char *)this + 48, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((char *)v12 + 12, 4uLL, (char *)this + 52, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 2, 4uLL, (char *)this + 56, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 3, 8uLL, (char *)this + 96, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((char *)v12 + 20, 4uLL, (char *)this + 60, 4uLL, 1uLL);
  if ( *((_QWORD *)this + 9) )
    v12[4] = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    v12[5] = *((_QWORD *)this + 14);
  *a3 = v12;
  return 0LL;
}

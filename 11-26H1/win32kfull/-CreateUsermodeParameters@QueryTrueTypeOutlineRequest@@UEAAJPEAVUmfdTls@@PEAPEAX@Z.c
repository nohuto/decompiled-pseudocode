/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286B40
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1401B868C (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  char *v4; // r13
  UmfdUMBuffer **v5; // r11
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r15d
  char *v11; // rax
  char *v12; // rbx
  __int64 v13; // r8
  _QWORD *v14; // r14
  unsigned int v16; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v17[17]; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  struct UmfdTls *v19; // [rsp+98h] [rbp+10h]
  void **v20; // [rsp+A0h] [rbp+18h]
  unsigned int v21; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v17[0] = 0;
  v16 = 0;
  v18 = 0;
  v21 = 0;
  v4 = (char *)this + 40;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v17,
          0x40u,
          &v16,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          &v18,
          *((_DWORD *)this + 18),
          &v21) )
    return 3221225495LL;
  v6 = v18;
  v7 = v18 + v21;
  if ( v18 + v21 < v18 )
    return 3221225495LL;
  v8 = v16;
  v9 = v7 + v16;
  if ( v7 + v16 < v16 )
    return 3221225495LL;
  v10 = v17[0];
  if ( v9 + v17[0] < v17[0] )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(v5, v9 + v17[0], 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  v13 = (unsigned int)v8;
  *((_QWORD *)this + 12) = &v11[v10];
  *((_QWORD *)this + 13) = &v11[v10 + v8];
  v14 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 14) = &v11[v13 + v10 + v6];
  if ( !*((_QWORD *)this + 10) )
    *v14 = 0LL;
  GreProbeAndWriteToUntrustedVa(v11, 8uLL, (char *)this + 40, 8uLL, 1uLL);
  FontDriverDdiRequest::PrepareUsermodeFontObj(v19, *((struct _FONTOBJ **)this + 6), *((struct _FONTOBJ **)this + 12));
  GreProbeAndWriteToUntrustedVa(v12 + 8, 8uLL, (char *)this + 96, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 16, 4uLL, (char *)this + 56, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 20, 4uLL, (char *)this + 60, 4uLL, 1uLL);
  if ( *((_QWORD *)this + 8) )
    GreProbeAndWriteToUntrustedVa(v12 + 24, 8uLL, (char *)this + 104, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 40, 8uLL, v14, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 32, 4uLL, v4 + 32, 4uLL, 1uLL);
  *v20 = v12;
  return 0LL;
}

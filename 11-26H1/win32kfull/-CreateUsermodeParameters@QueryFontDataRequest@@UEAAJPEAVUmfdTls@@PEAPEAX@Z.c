/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286150
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1401AE2F4 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@III.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1401B868C (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v5; // r9
  int v6; // ecx
  int v7; // ecx
  unsigned int *v8; // r14
  __int64 v10; // rsi
  struct _FONTOBJ *v11; // r8
  char *v12; // rcx
  void **v13; // r15
  void *v14; // rcx
  void *v15; // rcx
  const void *v16; // r8
  unsigned int v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-44h] BYREF
  _QWORD v19[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  void **v21; // [rsp+A0h] [rbp+18h]
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a3;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 12) - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          *((_DWORD *)this + 20) = 124;
      }
      else
      {
        *((_QWORD *)a2 + 6) = v5;
        *((_DWORD *)this + 20) = 8;
      }
    }
    else if ( *((_DWORD *)this + 20) )
    {
      return 3221225659LL;
    }
    v8 = (unsigned int *)((char *)this + 80);
  }
  else
  {
    v8 = (unsigned int *)((char *)this + 80);
    *((_DWORD *)this + 20) = 0;
  }
  v20 = 0;
  LODWORD(v22) = 0;
  v17 = 0;
  v18 = 0;
  v19[0] = 0LL;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x30u,
          &v20,
          0x50u,
          (unsigned int *)&v22,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          &v17,
          *v8,
          &v18) )
    return 3221225495LL;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, v19, v20, v22, v17, v18);
  v10 = v19[0];
  if ( !v19[0] )
    return 3221225495LL;
  v11 = (struct _FONTOBJ *)(v19[0] + v20);
  *((_QWORD *)this + 11) = v11;
  v12 = (char *)v11 + (unsigned int)v22;
  *((_QWORD *)this + 12) = v12;
  v13 = (void **)((char *)this + 104);
  *((_QWORD *)this + 13) = &v12[v17];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 7), v11);
  v14 = (void *)(*((_QWORD *)this + 11) + 64LL);
  v20 = 0;
  GreProbeAndWriteToUntrustedVa(v14, 4uLL, &v20, 4uLL, 1uLL);
  v15 = (void *)(*((_QWORD *)this + 11) + 72LL);
  v22 = 0LL;
  GreProbeAndWriteToUntrustedVa(v15, 8uLL, &v22, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 16), 8uLL, (char *)this + 88, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)v10, 8uLL, (char *)this + 40, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 8), 4uLL, (char *)this + 48, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 12), 4uLL, (char *)this + 52, 4uLL, 1uLL);
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 24), 8uLL, (char *)this + 96, 8uLL, 1uLL);
  v16 = (const void *)*((_QWORD *)this + 9);
  if ( v16 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      GreProbeAndWriteToUntrustedVa(*v13, *v8, v16, *v8, 1uLL);
  }
  else
  {
    *v13 = 0LL;
  }
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 32), 8uLL, (char *)this + 104, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 40), 4uLL, v8, 4uLL, 1uLL);
  *v21 = (void *)v10;
  return 0LL;
}

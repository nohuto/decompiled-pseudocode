/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286890
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1401AE2F4 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@III.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1401B868C (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall QueryGlyphMetricsPlusBitsRequest::CreateUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v5; // r13
  int v6; // r11d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _FONTOBJ *v13; // r8
  void **v14; // r14
  unsigned int v16; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-44h] BYREF
  _QWORD v18[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  void **v20; // [rsp+A0h] [rbp+18h]
  size_t Size; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a3;
  v19 = 0;
  v17 = 0;
  v16 = 0;
  LODWORD(Size) = 0;
  v18[0] = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 72LL);
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x50u,
          &v19,
          0x40u,
          &v17,
          *((_DWORD *)this + 20),
          &v16,
          v5 != 0 ? 0x14 : 0,
          (unsigned int *)&Size) )
    return 3221225495LL;
  v7 = Size;
  v8 = v16;
  if ( (unsigned int)Size + v16 < v16 )
    return 3221225495LL;
  v9 = v17;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, v18, v6 + 48, v19, v17, Size + v16);
  v10 = v18[0];
  if ( !v18[0] )
    return 3221225495LL;
  v11 = (unsigned int)v9;
  v12 = v19;
  v13 = (struct _FONTOBJ *)(v18[0] + 48LL);
  *((_QWORD *)this + 13) = v18[0] + 48LL;
  *((_QWORD *)this + 14) = v10 + 48 + v12;
  *((_QWORD *)this + 15) = v9 + v10 + 48 + v12;
  v14 = (void **)((char *)this + 128);
  *((_QWORD *)this + 16) = v11 + v12 + v10 + 48 + v8;
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 7), v13);
  GreProbeAndWriteToUntrustedVa(
    (void *)(*((_QWORD *)this + 13) + 64LL),
    4uLL,
    (const void *)(*((_QWORD *)this + 7) + 64LL),
    4uLL,
    1uLL);
  if ( v5 )
    memmove(*v14, *(const void **)(*((_QWORD *)this + 7) + 72LL), v7);
  else
    *v14 = 0LL;
  GreProbeAndWriteToUntrustedVa((void *)(*((_QWORD *)this + 13) + 72LL), 8uLL, (char *)this + 128, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 16), 8uLL, (char *)this + 104, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)v10, 8uLL, (char *)this + 40, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 8), 4uLL, (char *)this + 48, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 12), 4uLL, (char *)this + 52, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 24), 8uLL, (char *)this + 112, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 32), 8uLL, (char *)this + 120, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa((void *)(v10 + 40), 4uLL, (char *)this + 80, 4uLL, 1uLL);
  *v20 = (void *)v10;
  return 0LL;
}

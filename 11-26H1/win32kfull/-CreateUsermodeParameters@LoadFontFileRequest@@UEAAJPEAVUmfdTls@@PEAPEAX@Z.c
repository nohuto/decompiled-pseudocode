/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285B50
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z @ 0x1401C0670 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0@Z.c)
 *     EngFntCacheLookUp @ 0x1401E7880 (EngFntCacheLookUp.c)
 *     ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x1401F8A34 (-IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  unsigned int v5; // eax
  ULONG v6; // edi
  unsigned int *v8; // r13
  ULONG v9; // esi
  unsigned int v10; // r8d
  __int64 v11; // rbx
  char *v12; // r14
  unsigned int i; // r12d
  __int64 v14; // rdx
  __int64 v15; // rax
  ULONG v16; // eax
  void *v17; // rcx
  unsigned int v18; // eax
  ULONG v19; // eax
  int v20; // [rsp+34h] [rbp-74h] BYREF
  char *v21; // [rsp+38h] [rbp-70h] BYREF
  char *v22; // [rsp+40h] [rbp-68h] BYREF
  char *v23; // [rsp+48h] [rbp-60h] BYREF
  char *v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+58h] [rbp-50h] BYREF
  ULONG pulSize[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+8h] BYREF
  void **v28; // [rsp+C0h] [rbp+18h]
  unsigned int v29; // [rsp+C8h] [rbp+20h] BYREF

  v28 = a3;
  v5 = *((_DWORD *)this + 10);
  if ( v5 > 3 )
    return 3221225495LL;
  v6 = 0;
  if ( !v5 )
    return 3221225495LL;
  if ( UmfdReliabilityManager::IsFontUnreliable(*((_DWORD *)this + 68), (__int64)a2) )
    return 3221225473LL;
  v8 = (unsigned int *)EngFntCacheLookUp(*((_DWORD *)this + 34), pulSize);
  v9 = v8 != 0LL ? pulSize[0] : 0;
  v27 = 0;
  v29 = 0;
  v10 = v9 - 16;
  if ( v9 <= 0x10 )
    v10 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(0xD0u, &v27, v10, &v29) )
    return 3221225495LL;
  v11 = v27;
  v12 = v27 + v29 < v27 ? 0LL : (char *)UmfdTls::CommitUMBuffer(a2, v27 + v29, 0);
  if ( !v12 )
    return 3221225495LL;
  memset_0(v12, 0, 0xD0uLL);
  v21 = &v12[v11];
  GreProbeAndWriteToUntrustedVa(v12 + 200, 8uLL, &v21, 8uLL, 1uLL);
  v22 = v12 + 16;
  GreProbeAndWriteToUntrustedVa(v12 + 8, 8uLL, &v22, 8uLL, 1uLL);
  v23 = v12 + 48;
  GreProbeAndWriteToUntrustedVa(v12 + 40, 8uLL, &v23, 8uLL, 1uLL);
  v24 = v12 + 80;
  GreProbeAndWriteToUntrustedVa(v12 + 72, 8uLL, &v24, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12, 4uLL, (char *)this + 40, 4uLL, 1uLL);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v14 = *((_QWORD *)v12 + 1);
    v25 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    GreProbeAndWriteToUntrustedVa((void *)(v14 + 8LL * i), 8uLL, &v25, 8uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa(
      (void *)(*((_QWORD *)v12 + 5) + 8LL * i),
      8uLL,
      (const void *)(*((_QWORD *)this + 10) + 8LL * i),
      8uLL,
      1uLL);
    GreProbeAndWriteToUntrustedVa(
      (void *)(*((_QWORD *)v12 + 9) + 4LL * i),
      4uLL,
      (const void *)(*((_QWORD *)this + 14) + 4LL * i),
      4uLL,
      1uLL);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v12 + 14) = v12 + 120;
    v15 = *((_QWORD *)this + 19);
    *(_OWORD *)(v12 + 120) = *(_OWORD *)v15;
    *(_OWORD *)(v12 + 136) = *(_OWORD *)(v15 + 16);
    *(_OWORD *)(v12 + 152) = *(_OWORD *)(v15 + 32);
    *(_OWORD *)(v12 + 168) = *(_OWORD *)(v15 + 48);
    *((_QWORD *)v12 + 23) = *(_QWORD *)(v15 + 64);
  }
  GreProbeAndWriteToUntrustedVa(v12 + 92, 4uLL, (char *)this + 132, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(v12 + 96, 4uLL, (char *)this + 136, 4uLL, 1uLL);
  v16 = v9 - 16;
  if ( v9 <= 0x10 )
    v16 = 0;
  v17 = v12 + 100;
  if ( v16 )
  {
    v27 = *v8;
    GreProbeAndWriteToUntrustedVa(v17, 4uLL, &v27, 4uLL, 1uLL);
    v18 = v9 - 16;
    if ( v9 <= 0x10 )
      v18 = 0;
    v29 = v18;
    GreProbeAndWriteToUntrustedVa(v12 + 192, 4uLL, &v29, 4uLL, 1uLL);
    v19 = v9 - 16;
    if ( v9 > 0x10 )
      v6 = v9 - 16;
    else
      v19 = 0;
    GreProbeAndWriteToUntrustedVa(*((void **)v12 + 25), v6, v8 + 4, v19, 1uLL);
  }
  else
  {
    v20 = -1;
    GreProbeAndWriteToUntrustedVa(v17, 4uLL, &v20, 4uLL, 1uLL);
  }
  *v28 = v12;
  return 0LL;
}

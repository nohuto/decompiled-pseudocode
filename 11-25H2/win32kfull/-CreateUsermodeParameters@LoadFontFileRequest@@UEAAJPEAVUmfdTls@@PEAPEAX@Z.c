/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140153400
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z @ 0x14015364C (-IsFontUnreliable@UmfdReliabilityManager@@YA_NUUMFD_RELIABILITY_KEY@@@Z.c)
 *     EngFntCacheLookUp @ 0x140153750 (EngFntCacheLookUp.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401541F4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  ULONG v6; // edi
  _DWORD *v7; // r15
  ULONG v8; // esi
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  _DWORD *v12; // rbx
  unsigned int i; // r9d
  ULONG v14; // eax
  ULONG v15; // eax
  __int64 v16; // rax
  ULONG pulSize[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 2 )
    return 3221225495LL;
  v6 = 0;
  if ( (unsigned __int8)UmfdReliabilityManager::IsFontUnreliable(*((unsigned int *)this + 68)) )
    return 3221225473LL;
  v7 = EngFntCacheLookUp(*((_DWORD *)this + 34), pulSize);
  v8 = v7 != 0LL ? pulSize[0] : 0;
  if ( v8 <= 0x10 )
    v9 = 0;
  else
    v9 = v8 - 16;
  v10 = -1;
  if ( v9 + 7 >= v9 )
    v10 = v9 + 7;
  v11 = v10 & 0xFFFFFFF8;
  if ( v9 + 7 < v9 )
    return 3221225495LL;
  v12 = v11 >= 0xFFFFFF30 ? 0LL : UmfdTls::CommitUMBuffer(a2, v11 + 208, 0);
  if ( !v12 )
    return 3221225495LL;
  memset_0(v12, 0, 0xD0uLL);
  *((_QWORD *)v12 + 25) = v12 + 52;
  *((_QWORD *)v12 + 1) = v12 + 4;
  *((_QWORD *)v12 + 5) = v12 + 12;
  *((_QWORD *)v12 + 9) = v12 + 20;
  *v12 = *((_DWORD *)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    *(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v12 + 5) + 8LL * i) = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * i);
    *(_DWORD *)(*((_QWORD *)v12 + 9) + 4LL * i) = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v12 + 14) = v12 + 30;
    v16 = *((_QWORD *)this + 19);
    *(_OWORD *)(v12 + 30) = *(_OWORD *)v16;
    *(_OWORD *)(v12 + 34) = *(_OWORD *)(v16 + 16);
    *(_OWORD *)(v12 + 38) = *(_OWORD *)(v16 + 32);
    *(_OWORD *)(v12 + 42) = *(_OWORD *)(v16 + 48);
    *((_QWORD *)v12 + 23) = *(_QWORD *)(v16 + 64);
  }
  v12[23] = *((_DWORD *)this + 33);
  v12[24] = *((_DWORD *)this + 34);
  if ( v8 <= 0x10 )
    v14 = 0;
  else
    v14 = v8 - 16;
  if ( v14 )
  {
    v12[25] = *v7;
    v15 = v8 - 16;
    if ( v8 <= 0x10 )
      v15 = 0;
    v12[48] = v15;
    if ( v8 > 0x10 )
      v6 = v8 - 16;
    memmove(*((void **)v12 + 25), v7 + 4, v6);
  }
  else
  {
    v12[25] = -1;
  }
  *a3 = v12;
  return 0LL;
}

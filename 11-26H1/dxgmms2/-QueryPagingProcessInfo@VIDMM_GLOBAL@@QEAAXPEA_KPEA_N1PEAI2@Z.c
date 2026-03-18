/*
 * XREFs of ?QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N1PEAI2@Z @ 0x1400AAC38
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?VidMmQueryPagingProcessInformation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEA_KPEA_N@Z @ 0x1400B4E08 (-VidMmQueryPagingProcessInformation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEA_KPEA_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::QueryPagingProcessInfo(
        VIDMM_GLOBAL *this,
        unsigned __int64 *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  unsigned int *v8; // r15
  unsigned int v9; // r13d
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  struct VIDMM_PHYSICAL_ADAPTER *v15; // rbp
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 *v21; // [rsp+88h] [rbp+10h]
  bool *v22; // [rsp+90h] [rbp+18h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v6 = a5;
  v8 = a6;
  v9 = *((_DWORD *)this + 1738);
  v10 = 0;
  *a4 = 0;
  *v6 = 0;
  *v8 = 0;
  if ( v9 )
  {
    v11 = 0;
    v12 = *((_QWORD *)this + 5040);
    v13 = 0;
    v14 = *a2;
    LOBYTE(a6) = *a3;
    v19 = v12;
    v23 = v14;
    do
    {
      v20 = 0LL;
      LOBYTE(a5) = 0;
      v15 = *(struct VIDMM_PHYSICAL_ADAPTER **)(v12 + 8LL * v10);
      VidMmQueryPagingProcessInformation(v15, &v20, (bool *)&a5);
      v16 = v20;
      if ( v23 > v20 )
        v16 = v23;
      v23 = v16;
      *v21 = v16;
      LOBYTE(a6) = (unsigned __int8)a5 | (unsigned __int8)a6;
      *v22 = (char)a6;
      if ( *((_DWORD *)v15 + 136) == 1 )
        *a4 = 1;
      v17 = *((_DWORD *)v15 + 10);
      if ( v17 > v11 )
      {
        *v6 = v17;
        v11 = v17;
      }
      v18 = *((_DWORD *)v15 + 430);
      if ( v18 > v13 )
      {
        *v8 = v18;
        v13 = v18;
      }
      ++v10;
      v12 = v19;
    }
    while ( v10 < v9 );
  }
}

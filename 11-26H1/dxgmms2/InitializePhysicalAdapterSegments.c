/*
 * XREFs of InitializePhysicalAdapterSegments @ 0x1400AFA68
 * Callers:
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_SEGMENT_PBMM@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_PBMM@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x140050A58 (--0VIDMM_SEGMENT_PBMM@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_PBMM@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z.c)
 *     ?VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z @ 0x140050B28 (-VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall InitializePhysicalAdapterSegments(
        struct VIDMM_PHYSICAL_ADAPTER_PBMM *a1,
        __int64 a2,
        unsigned __int16 a3)
{
  unsigned int v4; // r14d
  char v5; // r11
  __int64 v6; // rdx
  char v8; // r15
  char v9; // r12
  unsigned __int16 v10; // si
  int *v11; // rdi
  int v12; // eax
  VIDMM_SEGMENT_PBMM *v13; // rax
  VIDMM_SEGMENT_PBMM *v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r10
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  unsigned int v23; // ebp
  unsigned int v24; // r13d
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  char v29; // al
  char v30; // r12
  char v31; // al
  char v32; // [rsp+50h] [rbp-88h]
  char v33; // [rsp+51h] [rbp-87h]
  char v34; // [rsp+52h] [rbp-86h]
  char v35; // [rsp+53h] [rbp-85h]
  char v36; // [rsp+54h] [rbp-84h]
  __int64 v37; // [rsp+58h] [rbp-80h]
  __int64 v38; // [rsp+60h] [rbp-78h]
  _QWORD v39[2]; // [rsp+68h] [rbp-70h]
  __int128 v40; // [rsp+78h] [rbp-60h] BYREF
  __int64 v41; // [rsp+88h] [rbp-50h]

  v38 = *((_QWORD *)a1 + 7);
  v4 = a3;
  v32 = 0;
  v5 = 0;
  v33 = 0;
  v6 = 0LL;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v8 = 0;
  v37 = 0LL;
  v9 = 0;
  v41 = 0LL;
  v10 = 0;
  v40 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = (int *)(a2 + 104LL * v10);
      v12 = *v11;
      if ( (*v11 & 0x400) != 0 )
        v37 = *((_QWORD *)v11 + 2) + v6;
      if ( !v11[24] )
      {
        v34 = 1;
        if ( (v12 & 0x800) != 0 )
          v8 = 1;
        if ( (v12 & 0x10) != 0 )
          v32 = 1;
        else
          v33 = 1;
      }
      v13 = (VIDMM_SEGMENT_PBMM *)operator new(168LL, 0x36306956u, 64LL);
      if ( !v13 )
        break;
      v14 = VIDMM_SEGMENT_PBMM::VIDMM_SEGMENT_PBMM(
              v13,
              a1,
              v10,
              (const struct _DXGK_SEGMENTDESCRIPTOR5 *)(a2 + 104LL * v10));
      if ( !v14 )
        break;
      v15 = (_QWORD *)((char *)v14 + 40);
      if ( v11[24] )
        *((_QWORD *)&v40 + *((int *)v14 + 26)) += *v15;
      v6 = v37;
      *v15 = *((_QWORD *)v11 + 2);
      *(_QWORD *)(*((_QWORD *)a1 + 234) + 8LL * v10++) = v14;
      if ( v10 >= (unsigned __int16)v4 )
      {
        v5 = 0;
        goto LABEL_16;
      }
    }
    if ( v11[24] )
    {
      _InterlockedIncrement(&dword_14008A77C);
      WdLogSingleEntry2(6LL, *((unsigned __int16 *)a1 + 36), v10);
      WdLogGlobalForLineNumber = 527;
    }
    else
    {
      _InterlockedIncrement(dword_14008A7A8);
      WdLogSingleEntry2(6LL, *((unsigned __int16 *)a1 + 36), v10);
      WdLogGlobalForLineNumber = 520;
    }
    DxgkLogInternalTriageEvent(v21, 262145LL);
    return 3221225495LL;
  }
  else
  {
LABEL_16:
    v16 = 0LL;
    v17 = 2LL;
    do
    {
      v18 = (unsigned __int64 *)((char *)&v40 + v16 * 8);
      v19 = *(_QWORD *)((char *)&v40 + v16 * 8 + a1 - (struct VIDMM_PHYSICAL_ADAPTER_PBMM *)&v40 + 8);
      if ( v19 && *v18 <= v19 )
        v20 = v19 - *v18;
      else
        v20 = 0LL;
      v39[v16++] = v20;
      --v17;
    }
    while ( v17 );
    v23 = 0;
    v24 = v4;
    if ( v4 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        v26 = *(_QWORD *)(v25 + *((_QWORD *)a1 + 234));
        v27 = *(int *)(v26 + 104);
        if ( (_DWORD)v27 )
        {
          if ( (_DWORD)v27 == 1 )
            v5 = 1;
          v36 = v5;
        }
        else
        {
          if ( (*(_BYTE *)(v26 + 64) & 4) == 0 )
            v9 = 1;
          if ( *(_DWORD *)(v26 + 108) == 1 )
            v35 = 1;
        }
        result = VidMmInitializePbmmSegment((struct VIDMM_SEGMENT_PBMM *)v26);
        if ( (int)result < 0 )
          break;
        v28 = *(_QWORD *)(v26 + 40);
        if ( *(_DWORD *)(v26 + 108) == 1 )
        {
          if ( (*(_DWORD *)(v26 + 64) & 0x200000) != 0 )
            *((_QWORD *)a1 + 230) += v28;
          if ( (*(_DWORD *)(v26 + 64) & 0x40) != 0 )
            *((_QWORD *)a1 + 231) += v28;
          else
            *((_QWORD *)a1 + 229) += v28;
        }
        else
        {
          *((_BYTE *)a1 + 558) |= 4u;
          *((_BYTE *)a1 + 24 * v27 + 632) |= 1u;
          *((_QWORD *)a1 + 232) += v28;
          *((_QWORD *)a1 + 235) = v26;
        }
        if ( (_DWORD)v27 != 2 && *(_DWORD *)(v26 + 108) == 1 )
          *((_QWORD *)a1 + 3 * v27 + 78) += v28;
        v5 = v36;
        ++v23;
        v25 += 8LL;
        if ( v23 >= v24 )
          goto LABEL_48;
      }
    }
    else
    {
LABEL_48:
      *(_BYTE *)(v38 + 7042) |= v32;
      *(_BYTE *)(v38 + 7043) |= v33;
      v29 = *((_BYTE *)a1 + 557) & 0xBF ^ (*((_BYTE *)a1 + 557) | (v8 << 6)) & 0x40;
      *((_BYTE *)a1 + 557) = v29 & 0xFE ^ (v34 | v29) & 1;
      v30 = *((_BYTE *)a1 + 558) & 0xBF ^ (*((_BYTE *)a1 + 558) | (v9 << 6)) & 0x40;
      v31 = v30 & 0xFD ^ (v30 | (2 * v35)) & 2;
      *((_BYTE *)a1 + 558) = v31 & 0xFE ^ (v36 | v31) & 1;
      *(_QWORD *)(v38 + 7096) += v37;
      return 0LL;
    }
  }
  return result;
}

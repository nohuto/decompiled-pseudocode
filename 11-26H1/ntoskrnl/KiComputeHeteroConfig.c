/*
 * XREFs of KiComputeHeteroConfig @ 0x140452E08
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KiConfigureHeteroMultiCoreProcessors @ 0x140B3ACB0 (KiConfigureHeteroMultiCoreProcessors.c)
 */

__int64 __fastcall KiComputeHeteroConfig(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  struct _KAFFINITY_EX **v5; // rdi
  struct _KAFFINITY_EX *v6; // rbx
  struct _KAFFINITY_EX *v7; // rbx
  struct _KAFFINITY_EX *v8; // rbx
  struct _KAFFINITY_EX *v9; // rbx
  struct _KAFFINITY_EX *v10; // rbx
  struct _KAFFINITY_EX *v11; // rbx
  struct _KAFFINITY_EX **v12; // r15
  unsigned __int16 **v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  _WORD *v16; // rbx
  unsigned __int8 v17; // r14
  __int64 v18; // rsi
  unsigned int v19; // r8d
  unsigned __int8 *v20; // r9
  unsigned int v21; // r10d
  unsigned int v22; // r11d
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // cl
  __int64 v26; // rcx
  unsigned int i; // ebx
  __int64 v28; // r15
  unsigned __int16 *v29; // rcx
  unsigned __int8 v30; // al
  __int64 v31; // r15
  unsigned __int16 **v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r12
  unsigned __int16 *v35; // rbx
  _WORD *v36; // rbx
  unsigned __int16 *v37; // rbx
  __int64 v38; // r12
  unsigned int v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  unsigned int v42; // [rsp+90h] [rbp+8h]
  __int64 v44; // [rsp+A0h] [rbp+18h]
  unsigned int v45; // [rsp+A8h] [rbp+20h]

  result = *(unsigned int *)(a1 + 4);
  v4 = KiHeteroConfig;
  v41 = KiHeteroConfig;
  v45 = result;
  v42 = 0;
  *(_DWORD *)(KiHeteroConfig + 24) = result;
  *(_QWORD *)v4 = a1;
  *(_DWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 12) = 0LL;
  *(_DWORD *)(v4 + 20) = 0;
  if ( !(_DWORD)result )
    return result;
  v40 = 0LL;
  v5 = (struct _KAFFINITY_EX **)(v4 + 32);
  do
  {
    v39 = KeNumberProcessors_0;
    if ( PpmHeteroMultiCoreClassesEnabled )
    {
      v31 = 7LL;
      v32 = (unsigned __int16 **)(v5 + 20);
      do
      {
        v34 = 2LL;
        do
        {
          v35 = *(v32 - 14);
          memset_0(v35 + 4, 0, 8LL * *v35);
          *v35 = 1;
          v36 = *v32;
          memset_0(*v32 + 4, 0, 8LL * **v32);
          *v36 = 1;
          v37 = v32[14];
          memset_0(v37 + 4, 0, 8LL * *v37);
          ++v32;
          *v37 = 1;
          --v34;
        }
        while ( v34 );
        --v31;
      }
      while ( v31 );
    }
    else
    {
      v6 = *v5;
      memset_0(&(*v5)->8, 0, 8LL * (*v5)->Count);
      v6->Count = 1;
      v7 = v5[1];
      memset_0(&v7->8, 0, 8LL * v7->Count);
      v7->Count = 1;
      v8 = v5[2];
      memset_0(&v8->8, 0, 8LL * v8->Count);
      v8->Count = 1;
      v9 = v5[3];
      memset_0(&v9->8, 0, 8LL * v9->Count);
      v9->Count = 1;
      v10 = v5[4];
      memset_0(&v10->8, 0, 8LL * v10->Count);
      v10->Count = 1;
      v11 = v5[5];
      memset_0(&v11->8, 0, 8LL * v11->Count);
      v11->Count = 1;
    }
    v12 = v5 + 34;
    v13 = (unsigned __int16 **)(v5 + 48);
    v14 = 7LL;
    do
    {
      v15 = 2LL;
      do
      {
        v16 = *v13;
        memset_0(*v13 + 4, 0, 8LL * **v13);
        ++v13;
        *v16 = 1;
        --v15;
      }
      while ( v15 );
      --v14;
    }
    while ( v14 );
    v17 = 0;
    v18 = v41;
    v19 = 0;
    if ( !v39 )
      goto LABEL_42;
    v20 = *(unsigned __int8 **)(a1 + 16);
    v21 = v42;
    v22 = v45;
    do
    {
      v23 = *(_BYTE *)(a1 + 4LL * (v42 + v45 * v19) + 49);
      if ( v23 <= (unsigned __int8)v15 )
        v23 = v15;
      LOBYTE(v15) = v23;
      v24 = *(_BYTE *)(a1 + 4LL * (v42 + v45 * v19) + 48);
      if ( v24 <= (unsigned __int8)v14 )
        v24 = v14;
      LOBYTE(v14) = v24;
      v25 = *v20;
      if ( *v20 <= v17 )
        v25 = v17;
      ++v19;
      ++v20;
      v17 = v25;
    }
    while ( v19 < v39 );
    if ( !(_BYTE)v15 && !(_BYTE)v14 )
    {
LABEL_42:
      if ( PpmHeteroMultiCoreClassesEnabled )
      {
        v33 = 7LL;
        do
        {
          v38 = 2LL;
          do
          {
            RtlpCopyAffinityEx(*(v12 - 28), (*(v12 - 28))->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
            RtlpCopyAffinityEx(*v12, (*v12)->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
            RtlpCopyAffinityEx(*(v12 - 14), (*(v12 - 14))->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
            ++v12;
            --v38;
          }
          while ( v38 );
          --v33;
        }
        while ( v33 );
      }
      else
      {
        RtlpCopyAffinityEx(*v5, (*v5)->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        RtlpCopyAffinityEx(v5[1], v5[1]->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        RtlpCopyAffinityEx(v5[2], v5[2]->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        RtlpCopyAffinityEx(v5[3], v5[3]->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        RtlpCopyAffinityEx(v5[4], v5[4]->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
        RtlpCopyAffinityEx(v5[5], v5[5]->Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
      }
      *(_DWORD *)(v41 + 12) = a2;
      *(_DWORD *)(v41 + 16) = v17 != 0;
      goto LABEL_36;
    }
    *(_DWORD *)(v41 + 16) = 1;
    if ( PpmHeteroMultiCoreClassesEnabled )
    {
      LOBYTE(v20) = v25 != 0;
      KiConfigureHeteroMultiCoreProcessors(v5, a1, v42, v20);
      goto LABEL_34;
    }
    v26 = v40;
    for ( i = 0; i < v39; ++i )
    {
      v44 = *(_QWORD *)(a1 + 24);
      v28 = v21 + v22 * i;
      if ( *(_BYTE *)(a1 + 4 * v28 + 49) >= *(_BYTE *)(v26 + v44 + 1) )
      {
        KeAddProcessorAffinityEx(&(*v5)->Count, i);
        if ( *(_BYTE *)(a1 + 4 * v28 + 49) == (_BYTE)v15 )
          KeAddProcessorAffinityEx(&v5[1]->Count, i);
      }
      if ( !*(_BYTE *)(a1 + 4 * v28 + 51) )
        KeAddProcessorAffinityEx(&v5[5]->Count, i);
      if ( !*(_BYTE *)(a1 + 4 * v28 + 50) )
        KeAddProcessorAffinityEx(&v5[4]->Count, i);
      v26 = v40;
      if ( v17 )
      {
        if ( *(_BYTE *)(a1 + 4 * v28 + 48) < *(_BYTE *)(v40 + v44) )
          goto LABEL_32;
        KeAddProcessorAffinityEx(&v5[2]->Count, i);
        if ( *(_BYTE *)(a1 + 4 * v28 + 48) == (_BYTE)v14 )
        {
          v29 = (unsigned __int16 *)v5[3];
          goto LABEL_30;
        }
        goto LABEL_31;
      }
      v30 = *(_BYTE *)(v40 + v44 + 1);
      if ( !v30 || *(_BYTE *)(a1 + 4 * v28 + 49) < v30 )
      {
        KeAddProcessorAffinityEx(&v5[2]->Count, i);
        KeAddProcessorAffinityEx(&v5[3]->Count, i);
        KeAddProcessorAffinityEx(&v5[4]->Count, i);
        v29 = (unsigned __int16 *)v5[5];
LABEL_30:
        KeAddProcessorAffinityEx(v29, i);
LABEL_31:
        v26 = v40;
      }
LABEL_32:
      v21 = v42;
      v22 = v45;
    }
    v18 = v41;
LABEL_34:
    if ( v17 )
      *(_DWORD *)(v18 + 20) = 1;
LABEL_36:
    v5 += 62;
    v40 += 2LL;
    result = v42 + 1;
    v42 = result;
  }
  while ( (unsigned int)result < v45 );
  return result;
}

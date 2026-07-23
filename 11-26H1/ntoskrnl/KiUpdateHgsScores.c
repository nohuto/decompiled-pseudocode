/*
 * XREFs of KiUpdateHgsScores @ 0x140453970
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KiComputeHgsScore @ 0x140453BF4 (KiComputeHgsScore.c)
 */

__int64 __fastcall KiUpdateHgsScores(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v3; // r12
  char v4; // r15
  unsigned int i; // r8d
  unsigned __int8 v6; // di
  unsigned __int8 v7; // r14
  unsigned __int8 v8; // r10
  unsigned __int8 v9; // si
  unsigned int v10; // ebx
  __int64 v11; // r11
  unsigned __int8 v12; // r9
  unsigned __int8 v13; // al
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // r9
  char v22; // r10
  __int64 v23; // r11
  __int16 v24; // ax
  int v25; // r8d
  __int64 v26; // r11
  unsigned int v27; // r10d
  __int64 result; // rax
  unsigned int v29; // r9d
  __int64 j; // rbx
  __int64 v31; // rcx
  char v32; // si
  char v33; // di
  __int16 v34; // ax
  char v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r11
  __int64 v38; // rcx
  __int16 v39; // ax
  int v40; // r9d
  __int64 v41; // r11
  __int64 v42; // [rsp+50h] [rbp+8h]

  v2 = KiHeteroConfig;
  v42 = KiHeteroConfig;
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(v2 + 24); word_140FBF44C[v26] = v24 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v11 = *(_QWORD *)(KiProcessorBlock[v10] + 35424);
        if ( v11 )
        {
          v12 = i;
          v13 = *(_BYTE *)(v11 + 4LL * (unsigned __int8)i + 6);
          v14 = v13;
          if ( v13 && (!v6 || v6 > v13) )
          {
            v6 = *(_BYTE *)(v11 + 4LL * (unsigned __int8)i + 6);
            v14 = v6;
          }
        }
        else
        {
          v14 = 0;
          v12 = i;
        }
        v15 = v7;
        if ( v14 > v7 )
          v15 = v14;
        v7 = v15;
        if ( v11 )
        {
          v16 = *(_BYTE *)(v11 + 4LL * v12 + 7);
          v17 = v16;
          if ( v16 && (!v8 || v8 > v16) )
          {
            v8 = *(_BYTE *)(v11 + 4LL * v12 + 7);
            v17 = v8;
          }
        }
        else
        {
          v17 = 0;
        }
        a1 = v9;
        if ( v17 > v9 )
          a1 = v17;
        ++v10;
        v9 = a1;
      }
      while ( v10 < (unsigned int)KeNumberProcessors_0 );
      v2 = v42;
    }
    LOBYTE(a2) = v6;
    LOBYTE(a1) = v7;
    byte_140FBF42C[i] = v6;
    byte_140FBF42C[i + 8] = v8;
    v18 = KiComputeHgsScore(a1, a2);
    word_140FBF43C[v23] = v18;
    if ( v18 > v3 )
    {
      v3 = v18;
      v4 = v21;
    }
    LOBYTE(v19) = v22;
    LOBYTE(v20) = v9;
    v24 = KiComputeHgsScore(v20, v19);
    i = v25 + 1;
  }
  byte_140FBF45C = v4;
  v27 = 0;
  for ( result = (unsigned int)KeNumberProcessors_0; v27 < (unsigned int)KeNumberProcessors_0; ++v27 )
  {
    v29 = 0;
    for ( j = KiProcessorBlock[v27]; v29 < *(_DWORD *)(v2 + 24); *(_WORD *)(j + 2 * v41 + 34508) = v39 )
    {
      v31 = *(_QWORD *)(j + 35424);
      if ( v31 )
        v32 = *(_BYTE *)(v31 + 4LL * (unsigned __int8)v29 + 6);
      else
        v32 = 0;
      if ( v31 )
        v33 = *(_BYTE *)(v31 + 4LL * (unsigned __int8)v29 + 7);
      else
        v33 = 0;
      LOBYTE(v31) = v32;
      LOBYTE(a2) = byte_140FBF42C[v29];
      v34 = KiComputeHgsScore(v31, a2);
      LOBYTE(v36) = v35;
      *(_WORD *)(j + 2 * v37 + 34492) = v34;
      LOBYTE(v38) = v33;
      v39 = KiComputeHgsScore(v38, v36);
      v29 = v40 + 1;
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}

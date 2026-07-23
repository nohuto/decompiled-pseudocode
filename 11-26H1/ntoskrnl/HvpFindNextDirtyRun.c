/*
 * XREFs of HvpFindNextDirtyRun @ 0x140457080
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned int v13; // r10d
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r10d
  char result; // al
  unsigned int v26; // eax
  __int64 v27; // r10
  unsigned __int64 v28; // r11
  int v29; // r9d
  __int64 v30; // r8
  unsigned __int64 i; // rax
  unsigned int v32; // r9d
  __int64 v33; // rcx
  unsigned int v34; // r13d
  unsigned int v35; // ecx
  unsigned __int64 v36; // [rsp+30h] [rbp+8h]

  v4 = *a2;
  v6 = *a1;
  if ( *a2 < *a1 )
  {
    v10 = *((_QWORD *)a1 + 1);
    v11 = (unsigned __int64)(v6 - 1) >> 5;
    v12 = (unsigned __int64)v4 >> 5;
    v13 = 0;
    v36 = v11;
    v14 = *(_DWORD *)(v10 + 4 * v12) | ((1 << v4) - 1);
    v15 = v10 + 4 * v12;
    v16 = v15 + 4;
    v17 = v10 + 4 * v11;
    while ( 1 )
    {
      v18 = ~v14;
      if ( v18 )
        break;
      if ( v16 > v17 )
      {
        v20 = v6;
        LODWORD(v22) = 32;
        goto LABEL_16;
      }
      v14 = *(_DWORD *)(v15 + 4);
      v15 += 4LL;
      v16 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v19, v18);
    v20 = v19 + 32 * ((v15 - v10) >> 2);
    if ( v20 > v6 )
    {
      v20 = v6;
      LODWORD(v22) = 32;
    }
    else
    {
      v21 = ~(v18 | ((1 << v19) - 1));
      while ( 1 )
      {
        if ( v21 )
        {
          LODWORD(v22) = 32;
          _BitScanForward64((unsigned __int64 *)&v23, v21);
          goto LABEL_12;
        }
        if ( v15 + 4 > v17 )
          break;
        v21 = *(_DWORD *)(v15 + 4);
        v15 += 4LL;
      }
      LODWORD(v22) = 32;
      LODWORD(v23) = 32;
LABEL_12:
      v24 = 32 * ((v15 - v10) >> 2) + v23;
      if ( v24 > v6 )
        v24 = v6;
      v13 = v24 - v20;
    }
    v11 = v36;
LABEL_16:
    if ( !v13 )
    {
LABEL_17:
      v20 = v6;
LABEL_18:
      *a2 = v6;
      result = 1;
      *a3 = v4;
      *a4 = v20;
      return result;
    }
    if ( v20 != v4 )
    {
      v6 = v20 + v13;
      goto LABEL_18;
    }
    v26 = v4 + v13;
    v4 = v26;
    if ( v26 < v6 )
    {
      v27 = *((_QWORD *)a1 + 1);
      v28 = v27 + 4 * v11;
      v29 = *(_DWORD *)(v27 + 4 * ((unsigned __int64)v26 >> 5)) | ((1 << v26) - 1);
      v30 = v27 + 4 * ((unsigned __int64)v26 >> 5);
      for ( i = v30 + 4; ; i += 4LL )
      {
        v32 = ~v29;
        if ( v32 )
          break;
        if ( i > v28 )
          goto LABEL_17;
        v29 = *(_DWORD *)(v30 + 4);
        v30 += 4LL;
      }
      _BitScanForward64((unsigned __int64 *)&v33, v32);
      v20 = v33 + 32 * ((v30 - v27) >> 2);
      if ( v20 <= v6 )
      {
        v34 = ~(v32 | ((1 << v33) - 1));
        while ( !v34 )
        {
          if ( v30 + 4 > v28 )
            goto LABEL_36;
          v34 = *(_DWORD *)(v30 + 4);
          v30 += 4LL;
        }
        _BitScanForward64((unsigned __int64 *)&v22, v34);
LABEL_36:
        v35 = 32 * ((v30 - v27) >> 2) + v22;
        if ( v35 > v6 )
          v35 = v6;
        if ( v35 != v20 )
        {
          v6 = v35;
          goto LABEL_18;
        }
      }
      goto LABEL_17;
    }
  }
  return 0;
}

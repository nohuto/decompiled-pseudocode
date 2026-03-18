/*
 * XREFs of HvpFindNextDirtyRun @ 0x14045D0A0
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1408B8B70 (HvpFindNextDirtyBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 v10; // r12
  unsigned __int64 v11; // r9
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 i; // rcx
  unsigned int v18; // edx
  __int64 v19; // r9
  unsigned int v20; // ebx
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  char result; // al
  unsigned int v26; // eax
  __int64 v27; // r11
  int v28; // r12d
  unsigned __int64 v29; // r10
  _DWORD *v30; // r8
  _DWORD *v31; // rax
  int v32; // r9d
  unsigned int v33; // r9d
  __int64 v34; // rcx
  unsigned int v35; // r13d
  unsigned int v36; // ecx
  unsigned __int64 v37; // [rsp+30h] [rbp+8h]

  v4 = *a2;
  v6 = *a1;
  if ( *a2 < *a1 )
  {
    v10 = *((_QWORD *)a1 + 1);
    v11 = (unsigned __int64)(v6 - 1) >> 5;
    v12 = 0;
    v37 = v11;
    v13 = (unsigned __int64)v4 >> 5;
    v14 = v10 + 4 * v11;
    v15 = *(_DWORD *)(v10 + 4 * v13) | ((1 << v4) - 1);
    v16 = v10 + 4 * v13;
    for ( i = v16 + 4; ; i += 4LL )
    {
      v18 = ~v15;
      if ( v18 )
        break;
      if ( i > v14 )
      {
        v20 = v6;
        LODWORD(v22) = 32;
        goto LABEL_16;
      }
      v15 = *(_DWORD *)(v16 + 4);
      v16 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v19, v18);
    v20 = v19 + 32 * ((v16 - v10) >> 2);
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
        v12 += 32;
        if ( v16 + 4 > v14 )
          break;
        v21 = *(_DWORD *)(v16 + 4);
        v16 += 4LL;
      }
      LODWORD(v22) = 32;
      LODWORD(v23) = 32;
LABEL_12:
      v24 = 32 * ((v16 - v10) >> 2) + v23;
      if ( v24 > v6 )
        v24 = v6;
      v12 = v24 - v20;
    }
    v11 = v37;
LABEL_16:
    if ( !v12 )
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
      v6 = v20 + v12;
      goto LABEL_18;
    }
    v26 = v4 + v12;
    v4 = v26;
    if ( v26 < v6 )
    {
      v27 = *((_QWORD *)a1 + 1);
      v28 = 0;
      v29 = v27 + 4 * v11;
      v30 = (_DWORD *)(v27 + 4 * ((unsigned __int64)v26 >> 5));
      v31 = v30 + 1;
      v32 = *v30 | ((1 << v4) - 1);
      while ( 1 )
      {
        v33 = ~v32;
        if ( v33 )
          break;
        if ( (unsigned __int64)v31 > v29 )
          goto LABEL_17;
        v32 = v30[1];
        ++v30;
        ++v31;
      }
      _BitScanForward64((unsigned __int64 *)&v34, v33);
      v20 = v34 + 32 * (((__int64)v30 - v27) >> 2);
      if ( v20 <= v6 )
      {
        v35 = ~(v33 | ((1 << v34) - 1));
        while ( !v35 )
        {
          v28 += 32;
          if ( (unsigned __int64)(v30 + 1) > v29 )
            goto LABEL_36;
          v35 = v30[1];
          ++v30;
        }
        _BitScanForward64((unsigned __int64 *)&v22, v35);
LABEL_36:
        v36 = 32 * (((__int64)v30 - v27) >> 2) + v22;
        if ( v36 > v6 )
          v36 = v6;
        if ( v36 != v20 )
        {
          v6 = v36;
          goto LABEL_18;
        }
      }
      goto LABEL_17;
    }
  }
  return 0;
}

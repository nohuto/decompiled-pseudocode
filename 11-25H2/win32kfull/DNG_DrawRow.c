/*
 * XREFs of DNG_DrawRow @ 0x1400CD010
 * Callers:
 *     RenderNineGridInternal @ 0x1400CBFA0 (RenderNineGridInternal.c)
 *     DNG_StretchCol @ 0x1400CCE80 (DNG_StretchCol.c)
 * Callees:
 *     DNG_StretchRow @ 0x1400CD3B0 (DNG_StretchRow.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

unsigned __int64 __fastcall DNG_DrawRow(__int64 a1)
{
  int v1; // eax
  int *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  int v8; // edx
  _DWORD *v9; // r15
  __int64 v10; // r14
  int v11; // r9d
  int v12; // r8d
  __int64 v13; // rdi
  int v14; // esi
  unsigned int v15; // r10d
  _DWORD *v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r11
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // r8
  bool v22; // cf
  int v23; // ecx
  int v24; // r9d
  char *v25; // rdx
  char *v26; // rcx
  char *v27; // r8
  unsigned __int64 v28; // r11
  __int64 v29; // rax
  int v30; // ecx
  char *v31; // rdx
  char *v32; // r9
  size_t v33; // r8
  char *v34; // r10
  char *v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r11
  signed int v38; // ebx
  int v39; // edx
  _DWORD *v40; // r11
  int v41; // r10d
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rdx
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  __int64 v47; // rdx

  v1 = *(_DWORD *)(a1 + 168);
  v2 = (int *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = 0;
  if ( *(_DWORD *)a1 < v1 )
  {
    if ( *(_DWORD *)(a1 + 60) == v1 )
    {
      v29 = *(int *)(a1 + 64);
      v30 = 4 * (*(_DWORD *)(a1 + 68) - v29);
      v31 = (char *)(v5 + 4 * v29);
      v32 = (char *)(v4 + 4 * v29);
      if ( v30 > 0 )
      {
        v33 = v30;
        v34 = &v32[v30];
        if ( v34 > v32 )
        {
          v35 = &v31[v30];
          if ( v35 > v31 )
          {
            v36 = *(_QWORD *)(a1 + 216);
            if ( v36 <= (unsigned __int64)v32 )
            {
              v37 = *(_QWORD *)(a1 + 224);
              if ( (unsigned __int64)v34 <= v37
                && ((unsigned __int64)v35 <= v37 && v36 <= (unsigned __int64)v31
                 || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v31 && (unsigned __int64)v35 <= *(_QWORD *)(a1 + 240)) )
              {
                memmove(v32, v31, v33);
              }
            }
          }
        }
      }
      v2 = (int *)(a1 + 56);
    }
    else
    {
      DNG_StretchRow(a1, v4, v5, a1 + 104);
    }
  }
  v6 = *(int *)(a1 + 60);
  result = *(int *)(a1 + 168);
  v8 = v6 + *v2;
  *v2 = v8;
  v9 = (_DWORD *)(v5 + 4 * v6);
  v10 = v4 + 4 * result;
  if ( v8 >= (int)v6 )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      v11 = *(_DWORD *)(a1 + 92);
      v12 = *(_DWORD *)(a1 + 96);
      if ( v11 < v12 )
      {
        if ( *(_DWORD *)(a1 + 176) )
        {
          v38 = *(_DWORD *)(a1 + 84);
          v39 = (v11 - (int)v6) % v38;
          v40 = (_DWORD *)(v10 + 4LL * (v11 - (int)v6));
          v41 = v38 - v39;
          v42 = &v9[v39];
          v43 = v12 - v11;
          v44 = v42;
          if ( v12 - v11 <= v41 )
            v38 = v12 - v11;
          if ( v43 > v41 )
            v44 = v9;
          if ( v43 > 0 && (unsigned int)v43 < 0x3FFFFFFF && (unsigned int)v38 < 0x3FFFFFFF )
          {
            v45 = &v40[v43];
            if ( v40 < v45
              && *(_QWORD *)(a1 + 216) <= (unsigned __int64)v40
              && (unsigned __int64)v45 <= *(_QWORD *)(a1 + 224) )
            {
              v46 = &v44[v38];
              if ( v44 < v46
                && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v44
                && (unsigned __int64)v46 <= *(_QWORD *)(a1 + 240)
                && *(int *)(a1 + 84) >= 0 )
              {
                v47 = (unsigned int)(v12 - v11);
                do
                {
                  *v40 = *v42;
                  if ( !--v41 )
                  {
                    v41 = *(_DWORD *)(a1 + 84);
                    v42 -= v41;
                  }
                  ++v40;
                  ++v42;
                  --v47;
                }
                while ( v47 );
              }
            }
          }
        }
        else
        {
          v13 = *(unsigned int *)(a1 + 192);
          v14 = *(_DWORD *)(a1 + 188);
          v15 = *(_DWORD *)(a1 + 184);
          v16 = (_DWORD *)(v10 + 4LL * *(int *)(a1 + 204));
          v17 = v10 + 4LL * *(int *)(a1 + 208);
          v18 = (unsigned __int64)&v9[*(_DWORD *)(a1 + 52) - v8];
          v19 = &v9[*(unsigned int *)(a1 + 180)];
          if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v16
            && v17 <= *(_QWORD *)(a1 + 224)
            && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v19
            && v18 <= *(_QWORD *)(a1 + 240)
            && (unsigned __int64)v16 < v17 )
          {
            do
            {
              if ( (unsigned __int64)v19 >= v18 )
                break;
              v22 = v15 + v14 < v15;
              *v16 = *v19;
              v15 += v14;
              ++v16;
              v19 += v22 + v13;
            }
            while ( (unsigned __int64)v16 < v17 );
          }
        }
      }
      result = *(int *)(a1 + 88);
      v2 = (int *)(a1 + 56);
      v10 += 4 * result;
    }
    v20 = *(int *)(a1 + 84);
    *v2 += v20;
    v21 = &v9[v20];
    if ( *v2 >= (int)v20 )
    {
      v23 = *(_DWORD *)(a1 + 172);
      result = (unsigned int)(*(_DWORD *)(a1 + 20) - v23);
      if ( *(_DWORD *)(a1 + 4) > (int)result )
      {
        if ( *(_DWORD *)(a1 + 72) == v23 )
        {
          result = *(int *)(a1 + 76);
          v24 = 4 * (*(_DWORD *)(a1 + 80) - result);
          v25 = (char *)&v21[result];
          v26 = (char *)(v10 + 4 * result);
          if ( v24 > 0 )
          {
            result = v24;
            v27 = &v26[v24];
            if ( v27 > v26 && &v25[v24] > v25 )
            {
              result = *(_QWORD *)(a1 + 216);
              if ( result <= (unsigned __int64)v26 )
              {
                v28 = *(_QWORD *)(a1 + 224);
                if ( (unsigned __int64)v27 <= v28 )
                {
                  if ( (unsigned __int64)&v25[v24] <= v28 && result <= (unsigned __int64)v25 )
                    return (unsigned __int64)memmove(v26, v25, v24);
                  if ( *(_QWORD *)(a1 + 232) <= (unsigned __int64)v25 )
                  {
                    result = (unsigned __int64)&v25[v24];
                    if ( result <= *(_QWORD *)(a1 + 240) )
                      return (unsigned __int64)memmove(v26, v25, v24);
                  }
                }
              }
            }
          }
        }
        else
        {
          return DNG_StretchRow(a1, v10, v21, a1 + 136);
        }
      }
    }
  }
  return result;
}

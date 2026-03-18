/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1400B5A6C
 * Callers:
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 * Callees:
 *     ReadFileInfo @ 0x1400B5CE0 (ReadFileInfo.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        HDEV *a5,
        unsigned int *a6,
        int a7,
        int *a8,
        int *a9,
        struct FONTFILEVIEW **a10,
        unsigned int a11,
        struct tagDESIGNVECTOR *a12,
        unsigned int a13)
{
  unsigned int v13; // ebx
  unsigned __int16 *v16; // rbp
  unsigned int v17; // edi
  __int64 v18; // r14
  unsigned int v19; // r8d
  __int64 v20; // rcx
  int v21; // eax
  struct tagDESIGNVECTOR *v22; // rcx
  int v23; // r9d
  __int64 v25; // r10
  unsigned int i; // ecx
  __int64 v27; // rdi
  unsigned int j; // ecx
  struct FONTFILEVIEW *v29; // r8
  struct FONTFILEVIEW **v30; // rdx
  _QWORD *v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rcx
  __int64 v34; // rax

  v13 = 0;
  *a3 = 0;
  v16 = a2;
  *a5 = 0LL;
  *a9 = 0;
  *a8 = 0;
  v17 = a1;
  *a4 = 0;
  v18 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( !*(_QWORD *)(v18 + 19600) )
    return 0LL;
  if ( v17 )
  {
    v19 = 0;
    v20 = v17;
    do
    {
      v21 = *v16++;
      v19 = v21 + 257 * v19;
      --v20;
    }
    while ( v20 );
    v22 = a12;
    if ( a12 && a13 )
    {
      while ( v22 < (struct tagDESIGNVECTOR *)((char *)a12 + 4 * ((unsigned __int64)a13 >> 2)) )
      {
        v19 = *(_DWORD *)v22 + 257 * v19;
        v22 = (struct tagDESIGNVECTOR *)((char *)v22 + 4);
      }
    }
    *a3 = v19;
    v23 = *(_DWORD *)(v18 + 19592);
    if ( (v23 & 1) != 0 )
    {
      v25 = **(_QWORD **)(v18 + 19600);
      for ( i = *(_DWORD *)(v25 + 4LL * (v19 % 0x3D) + 72); i != -1; i = *(_DWORD *)(v27 + 8) )
      {
        v27 = v25 + 80 * (i + 4LL);
        if ( v19 == *(_DWORD *)v27 )
        {
          if ( (*(_DWORD *)(v27 + 24) & 1) == 0 )
          {
            if ( a7 || (v23 & 4) == 0 )
            {
              if ( (unsigned int)ReadFileInfo(a10, a11) )
              {
                for ( j = 0; j < a11; ++j )
                {
                  v29 = a10[j];
                  if ( *((_DWORD *)v29 + 6) != *(_DWORD *)(v27 + 16 * (j + 2LL))
                    || *(_QWORD *)v29 != *(_QWORD *)(v27 + 16LL * j + 40) )
                  {
                    *a3 = 0;
                    *(_DWORD *)(*(_QWORD *)(v18 + 19600) + 16LL) |= 2u;
                    return 0LL;
                  }
                }
              }
              else
              {
                *a9 = 1;
              }
            }
            else
            {
              *a8 = 1;
              if ( a11 )
              {
                v30 = a10;
                v31 = (_QWORD *)(v27 + 40);
                v32 = a11;
                do
                {
                  *((_DWORD *)*v30 + 6) = *((_DWORD *)v31 - 2);
                  v33 = *v30++;
                  v34 = *v31;
                  v31 += 2;
                  *v33 = v34;
                  --v32;
                }
                while ( v32 );
              }
            }
            v13 = 1;
            *a4 = *(_DWORD *)(v27 + 4);
            *a5 = *(HDEV *)(v18 + 8LL * *(unsigned __int16 *)(v27 + 12) + 19624);
            *a6 = *(unsigned __int16 *)(v27 + 14);
          }
          return v13;
        }
      }
      if ( (v23 & 4) != 0 )
        goto LABEL_8;
    }
    else if ( !(unsigned int)ReadFileInfo(a10, a11) )
    {
LABEL_8:
      *a9 = 1;
    }
  }
  return v13;
}

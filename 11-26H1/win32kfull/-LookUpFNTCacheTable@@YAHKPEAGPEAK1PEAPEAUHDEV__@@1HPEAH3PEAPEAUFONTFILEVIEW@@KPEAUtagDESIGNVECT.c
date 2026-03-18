/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAUHDEV__@@1HPEAH3PEAPEAUFONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x14031B248
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1401F8FF4 (SearchFNTCacheHlink.c)
 *     ReadFileInfo @ 0x140205790 (ReadFileInfo.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        unsigned int a1,
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
  int *v14; // r14
  unsigned __int16 *v16; // rbp
  struct FONTFILEVIEW **v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r15
  unsigned int v21; // ecx
  __int64 v22; // rdx
  int v23; // eax
  struct tagDESIGNVECTOR *v24; // rdx
  int v25; // ebp
  __int64 v26; // r8
  int *v27; // rdi
  __int64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  unsigned int i; // ecx
  struct FONTFILEVIEW *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax

  v13 = 0;
  v14 = a9;
  v16 = a2;
  v17 = a10;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  *v14 = 0;
  *a8 = 0;
  v18 = a1;
  v19 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( !*(_QWORD *)(v19 + 19592) )
    return 0LL;
  if ( (_DWORD)v18 )
  {
    v21 = 0;
    v22 = v18;
    do
    {
      v23 = *v16++;
      v21 = v23 + 257 * v21;
      --v22;
    }
    while ( v22 );
    v24 = a12;
    if ( a12 && a13 )
    {
      while ( v24 < (struct tagDESIGNVECTOR *)((char *)a12 + 4 * ((unsigned __int64)a13 >> 2)) )
      {
        v21 = *(_DWORD *)v24 + 257 * v21;
        v24 = (struct tagDESIGNVECTOR *)((char *)v24 + 4);
      }
    }
    *a3 = v21;
    v25 = *(_DWORD *)(v19 + 19584);
    if ( (v25 & 1) != 0 )
    {
      v26 = *(_QWORD *)(v19 + 19592);
      a9 = 0LL;
      SearchFNTCacheHlink(v21, &a9, *(_QWORD *)(v26 + 8));
      v27 = a9;
      if ( a9 )
      {
        if ( (a9[6] & 1) == 0 )
        {
          if ( a7 || (v25 & 4) == 0 )
          {
            if ( (unsigned int)ReadFileInfo((__int64)v17, a11) )
            {
              for ( i = 0; i < a11; ++i )
              {
                v33 = v17[i];
                if ( *((_DWORD *)v33 + 6) != v27[4 * i + 8] || *(_QWORD *)v33 != *(_QWORD *)&v27[4 * i + 10] )
                {
                  *a3 = 0;
                  *(_DWORD *)(*(_QWORD *)(v19 + 19592) + 24LL) |= 2u;
                  return 0LL;
                }
              }
            }
            else
            {
              *v14 = 1;
            }
          }
          else
          {
            *a8 = 1;
            if ( a11 )
            {
              v28 = a11;
              v29 = v27 + 10;
              do
              {
                *((_DWORD *)*v17 + 6) = *((_DWORD *)v29 - 2);
                v30 = *v17++;
                v31 = *v29;
                v29 += 2;
                *v30 = v31;
                --v28;
              }
              while ( v28 );
            }
          }
          *a4 = v27[1];
          v34 = *((unsigned __int16 *)v27 + 6);
          if ( (_DWORD)v34 == 5 )
            v35 = 19272LL;
          else
            v35 = 8 * v34 + 14752;
          v13 = 1;
          *a5 = *(HDEV *)(v35 + v19 + 4864);
          *a6 = *((unsigned __int16 *)v27 + 7);
        }
        return v13;
      }
      if ( (v25 & 4) != 0 )
        goto LABEL_35;
    }
    else if ( !(unsigned int)ReadFileInfo((__int64)v17, a11) )
    {
LABEL_35:
      *v14 = 1;
    }
  }
  return v13;
}

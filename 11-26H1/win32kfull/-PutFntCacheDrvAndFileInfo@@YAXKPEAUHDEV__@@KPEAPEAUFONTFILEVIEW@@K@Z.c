/*
 * XREFs of ?PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z @ 0x14031B4AC
 * Callers:
 *     UmfdLoadFontFileView @ 0x140326DD0 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFntCacheNewLink @ 0x14031B5E0 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFntCacheDrvAndFileInfo(
        unsigned int a1,
        HDEV a2,
        __int16 a3,
        struct FONTFILEVIEW **a4,
        unsigned int a5)
{
  __int64 v9; // rdi
  int v10; // r9d
  __int64 v11; // rdx
  __int16 v12; // bx
  unsigned int i; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax

  v9 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v10 = *(_DWORD *)(v9 + 19584);
  if ( (v10 & 3) != 0 )
  {
    v11 = *(_QWORD *)(v9 + 19592);
    if ( v11 )
    {
      if ( a1 )
      {
        v12 = 5;
        if ( a2 == *(HDEV *)(v9 + 24136) )
        {
LABEL_10:
          if ( (v10 & 2) != 0 )
          {
            v14 = SearchFntCacheNewLink(a1);
            if ( v14 )
            {
              if ( *(_WORD *)(v14 + 14) )
              {
                *(_DWORD *)(v14 + 24) |= 1u;
              }
              else
              {
                *(_WORD *)(v14 + 12) = v12;
                *(_WORD *)(v14 + 14) = a3;
                if ( a5 )
                {
                  v15 = (_QWORD *)(v14 + 40);
                  v16 = a5;
                  do
                  {
                    *((_DWORD *)v15 - 2) = *((_DWORD *)*a4 + 6);
                    v17 = *a4++;
                    *v15 = *v17;
                    v15 += 2;
                    --v16;
                  }
                  while ( v16 );
                }
              }
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v9 + 19592) + 24LL) |= 2u;
            }
            *(_DWORD *)(*(_QWORD *)(v9 + 19592) + 28LL) = 1;
          }
          else
          {
            *(_DWORD *)(v11 + 24) |= 2u;
          }
        }
        else
        {
          for ( i = 0; i < 5; ++i )
          {
            if ( a2 == *(HDEV *)(v9 + 8LL * i + 19616) )
            {
              v12 = i;
              if ( !i )
                return;
              goto LABEL_10;
            }
          }
        }
      }
    }
  }
}

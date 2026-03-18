/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x140157D00
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x140156758 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     SubtractRect @ 0x140157E1C (SubtractRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  _QWORD *v5; // rcx
  __int16 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *i; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // r8

  if ( a1 )
  {
    if ( !(unsigned int)IsVisible((__int64)a1) )
      return 0LL;
    v7 = (_QWORD *)*((_QWORD *)a3 + 1);
    if ( (*((_DWORD *)a3 + 12) & 2) != 0 && (v6 & 0x400) != 0 )
      return 0LL;
    v8 = (_QWORD *)v7[13];
    if ( v5 != v8 )
    {
      v9 = v5;
      while ( 1 )
      {
        v10 = (_QWORD *)v5[13];
        if ( v8 == v10 )
          break;
        v5 = (_QWORD *)v5[13];
        if ( !v10 )
          return 0LL;
      }
      if ( v5 == v7 )
      {
        if ( (*((_DWORD *)a3 + 12) & 2) != 0 )
        {
          if ( v9 != v7 )
          {
            for ( i = (_QWORD *)v9[13]; v7 != i; i = (_QWORD *)i[13] )
              v9 = i;
            v13 = (_QWORD *)v7[14];
LABEL_17:
            while ( v13 && v13 != v9 )
            {
              v14 = v13[5];
              if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0
                && !*(_QWORD *)(v14 + 168)
                && (*(_BYTE *)(v14 + 26) & 8) == 0
                && !(unsigned int)SubtractRect(a2, a2, v14 + 88) )
              {
                return 0LL;
              }
              v13 = (_QWORD *)v13[11];
            }
          }
          return IntersectRect(a2, &a2->left, (int *)a3 + 6);
        }
      }
      else
      {
        v9 = v5;
        while ( 1 )
        {
          if ( !v5 )
          {
            v13 = (_QWORD *)v7[11];
            goto LABEL_17;
          }
          if ( v5 == v7 )
            break;
          v5 = (_QWORD *)v5[11];
        }
      }
      return 0LL;
    }
  }
  return IntersectRect(a2, &a2->left, (int *)a3 + 6);
}

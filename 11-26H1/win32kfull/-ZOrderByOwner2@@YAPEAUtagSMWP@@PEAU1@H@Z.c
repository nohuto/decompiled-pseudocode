/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x140047FCC
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x140049730 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // r15
  struct tagSMWP *v3; // r14
  __int64 v5; // rsi
  struct tagWND *v6; // rbp
  __int64 v7; // rbx
  struct tagWND *v8; // r12
  struct tagWND *v9; // rdx
  struct tagWND *v10; // rcx
  struct tagWND *v11; // rax
  bool i; // zf
  struct tagWND *v13; // r10
  struct tagWND *v15; // rcx
  struct tagWND *j; // r11
  struct tagWND *v17; // r8
  struct tagWND *v18; // rax
  __int64 v19; // r9
  struct tagWND *v20; // rdi
  struct tagWND *v21; // r8
  struct tagWND *n; // rax
  struct tagWND *v23; // rax
  struct tagWND *jj; // rdx
  struct tagSMWP *v25; // rax
  struct tagWND *kk; // r8
  struct tagWND *mm; // rax
  struct tagWND *v28; // rax
  __int64 v29; // rcx
  struct tagWND *v30; // rdx
  struct tagWND *k; // r8
  struct tagWND *m; // rax
  struct tagWND *v33; // rax
  struct tagWND *ii; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v5 = 168LL * a2;
  if ( (*(_DWORD *)(v2 + v5 + 32) & 0x204) == 0 )
  {
    v6 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v2 + 168LL * a2));
    v7 = 0LL;
    v8 = (struct tagWND *)PWInsertAfter(*(_QWORD *)(v2 + v5 + 8));
    v9 = *(struct tagWND **)(*((_QWORD *)v6 + 13) + 112LL);
    if ( v9 )
    {
      do
      {
        v10 = (struct tagWND *)*((_QWORD *)v9 + 15);
        v11 = v9;
        for ( i = v9 == v10; !i; i = v10 == *((struct tagWND **)v9 + 13) )
        {
          v11 = v10;
          if ( !v10 )
            break;
          v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
        }
        if ( v6 == v11 )
          break;
        v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
      }
      while ( v9 );
    }
    else
    {
      v9 = 0LL;
    }
    v13 = (struct tagWND *)*((_QWORD *)v6 + 15);
    if ( v13 || v9 )
    {
      v15 = v6;
      for ( j = v6; ; j = v18 )
      {
        v17 = (struct tagWND *)*((_QWORD *)v15 + 15);
        v18 = v15;
        v19 = *((_QWORD *)v15 + 13);
        if ( v15 != v17 )
        {
          v18 = (struct tagWND *)*((_QWORD *)v15 + 15);
          if ( v17 )
          {
            do
            {
              v29 = *((_QWORD *)v18 + 13);
              if ( v29 == v19 )
                break;
              v18 = (struct tagWND *)*((_QWORD *)v18 + 13);
            }
            while ( v29 );
          }
        }
        v15 = v18;
        if ( !v18 )
          break;
      }
      v20 = v8;
      if ( v8 )
      {
        if ( v8 == (struct tagWND *)1 )
        {
          v30 = *(struct tagWND **)(*((_QWORD *)v6 + 13) + 112LL);
          if ( !v30 )
            goto LABEL_62;
          do
          {
            if ( (*(_BYTE *)(*((_QWORD *)v30 + 5) + 20LL) & 0x20) != 0 )
              break;
            for ( k = v30; k; k = v33 )
            {
              for ( m = k; m; m = (struct tagWND *)*((_QWORD *)m + 13) )
              {
                if ( m == j )
                  goto LABEL_60;
              }
              v33 = 0LL;
              if ( *((struct tagWND **)k + 15) != k )
                v33 = (struct tagWND *)*((_QWORD *)k + 15);
            }
            v20 = v30;
LABEL_60:
            v30 = (struct tagWND *)*((_QWORD *)v30 + 11);
          }
          while ( v30 );
          if ( v20 == (struct tagWND *)1 )
LABEL_62:
            *(_DWORD *)(v2 + v5 + 32) |= 4u;
        }
        else
        {
          v21 = v8;
LABEL_19:
          if ( v21 )
          {
            for ( n = v21; ; n = (struct tagWND *)*((_QWORD *)n + 13) )
            {
              if ( !n )
              {
                v23 = 0LL;
                if ( *((struct tagWND **)v21 + 15) != v21 )
                  v23 = (struct tagWND *)*((_QWORD *)v21 + 15);
                v21 = v23;
                goto LABEL_19;
              }
              if ( n == j )
                break;
            }
            if ( !v9 )
            {
              for ( ii = v8; ii; ii = (struct tagWND *)*((_QWORD *)ii + 11) )
              {
                if ( ii == v13 )
                  return v3;
              }
            }
            v20 = 0LL;
            for ( jj = *(struct tagWND **)(*((_QWORD *)v6 + 13) + 112LL); jj; jj = (struct tagWND *)*((_QWORD *)jj + 11) )
            {
              for ( kk = jj; kk; kk = v28 )
              {
                for ( mm = kk; mm; mm = (struct tagWND *)*((_QWORD *)mm + 13) )
                {
                  if ( mm == j )
                    goto LABEL_29;
                }
                v28 = 0LL;
                if ( *((struct tagWND **)kk + 15) != kk )
                  v28 = (struct tagWND *)*((_QWORD *)kk + 15);
              }
              v20 = jj;
            }
          }
        }
      }
LABEL_29:
      if ( (*(_DWORD *)(v2 + v5 + 32) & 4) == 0 )
      {
        --*((_DWORD *)v3 + 7);
        v25 = AddSelfAndOwnees(
                v3,
                j,
                v6,
                v8,
                a2,
                *(_DWORD *)(v2 + v5 + 32) & 0x40000 | (*(_DWORD *)(v2 + v5 + 32) >> 7) & 0x400u);
        v3 = v25;
        if ( v25 )
        {
          if ( v20 )
            v7 = *(_QWORD *)v20;
          *(_QWORD *)(*((_QWORD *)v25 + 5) + v5 + 8) = v7;
        }
      }
    }
  }
  return v3;
}

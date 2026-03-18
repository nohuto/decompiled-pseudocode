/*
 * XREFs of ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1400650CC
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1400659C0 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner2(struct tagSMWP *a1, int a2)
{
  __int64 v2; // r15
  struct tagSMWP *v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  struct tagWND *v8; // r9
  __int64 v9; // rbx
  struct tagWND *v10; // rbp
  __int64 v11; // rax
  struct tagWND *v12; // rdx
  struct tagWND *v13; // rcx
  struct tagWND *v14; // rax
  bool i; // zf
  struct tagWND *v16; // r11
  struct tagWND *v18; // rcx
  struct tagWND *j; // r12
  struct tagWND *v20; // r8
  struct tagWND *v21; // rax
  __int64 v22; // r10
  struct tagWND *v23; // rdi
  struct tagWND *v24; // r8
  struct tagWND *n; // rax
  struct tagWND *v26; // rax
  struct tagWND *jj; // rdx
  struct tagSMWP *v28; // rax
  struct tagWND *kk; // r8
  struct tagWND *mm; // rax
  struct tagWND *v31; // rax
  __int64 v32; // rcx
  struct tagWND *v33; // rdx
  struct tagWND *k; // r8
  struct tagWND *m; // rax
  struct tagWND *v36; // rax
  struct tagWND *ii; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v5 = 168LL * a2;
  if ( (*(_DWORD *)(v5 + v2 + 32) & 0x204) == 0 )
  {
    v6 = _HMObjectFromHandle(*(_QWORD *)(v5 + v2));
    v8 = *(struct tagWND **)(v5 + v2 + 8);
    v9 = 0LL;
    v10 = (struct tagWND *)v6;
    if ( v8 )
    {
      if ( v8 != (struct tagWND *)-2LL && v8 != (struct tagWND *)1 && v8 != (struct tagWND *)-1LL )
      {
        LOBYTE(v7) = 1;
        v11 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + v2 + 8), v7);
        v8 = (struct tagWND *)v11;
        if ( !v11 || *(char *)(*(_QWORD *)(v11 + 40) + 19LL) < 0 || !*(_QWORD *)(v11 + 104) )
          v8 = 0LL;
      }
    }
    v12 = *(struct tagWND **)(*((_QWORD *)v10 + 13) + 112LL);
    if ( v12 )
    {
      do
      {
        v13 = (struct tagWND *)*((_QWORD *)v12 + 15);
        v14 = v12;
        for ( i = v12 == v13; !i; i = v13 == *((struct tagWND **)v12 + 13) )
        {
          v14 = v13;
          if ( !v13 )
            break;
          v13 = (struct tagWND *)*((_QWORD *)v13 + 13);
        }
        if ( v10 == v14 )
          break;
        v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
      }
      while ( v12 );
    }
    else
    {
      v12 = 0LL;
    }
    v16 = (struct tagWND *)*((_QWORD *)v10 + 15);
    if ( v16 || v12 )
    {
      v18 = v10;
      for ( j = v10; ; j = v21 )
      {
        v20 = (struct tagWND *)*((_QWORD *)v18 + 15);
        v21 = v18;
        v22 = *((_QWORD *)v18 + 13);
        if ( v18 != v20 )
        {
          v21 = (struct tagWND *)*((_QWORD *)v18 + 15);
          if ( v20 )
          {
            do
            {
              v32 = *((_QWORD *)v21 + 13);
              if ( v32 == v22 )
                break;
              v21 = (struct tagWND *)*((_QWORD *)v21 + 13);
            }
            while ( v32 );
          }
        }
        v18 = v21;
        if ( !v21 )
          break;
      }
      v23 = v8;
      if ( v8 )
      {
        if ( v8 == (struct tagWND *)1 )
        {
          v33 = *(struct tagWND **)(*((_QWORD *)v10 + 13) + 112LL);
          if ( !v33 )
            goto LABEL_70;
          do
          {
            if ( (*(_BYTE *)(*((_QWORD *)v33 + 5) + 20LL) & 0x20) != 0 )
              break;
            for ( k = v33; k; k = v36 )
            {
              for ( m = k; m; m = (struct tagWND *)*((_QWORD *)m + 13) )
              {
                if ( m == j )
                  goto LABEL_68;
              }
              v36 = 0LL;
              if ( *((struct tagWND **)k + 15) != k )
                v36 = (struct tagWND *)*((_QWORD *)k + 15);
            }
            v23 = v33;
LABEL_68:
            v33 = (struct tagWND *)*((_QWORD *)v33 + 11);
          }
          while ( v33 );
          if ( v23 == (struct tagWND *)1 )
LABEL_70:
            *(_DWORD *)(v5 + v2 + 32) |= 4u;
        }
        else
        {
          v24 = v8;
LABEL_27:
          if ( v24 )
          {
            for ( n = v24; ; n = (struct tagWND *)*((_QWORD *)n + 13) )
            {
              if ( !n )
              {
                v26 = 0LL;
                if ( *((struct tagWND **)v24 + 15) != v24 )
                  v26 = (struct tagWND *)*((_QWORD *)v24 + 15);
                v24 = v26;
                goto LABEL_27;
              }
              if ( n == j )
                break;
            }
            if ( !v12 )
            {
              for ( ii = v8; ii; ii = (struct tagWND *)*((_QWORD *)ii + 11) )
              {
                if ( ii == v16 )
                  return v3;
              }
            }
            v23 = 0LL;
            for ( jj = *(struct tagWND **)(*((_QWORD *)v10 + 13) + 112LL); jj; jj = (struct tagWND *)*((_QWORD *)jj + 11) )
            {
              for ( kk = jj; kk; kk = v31 )
              {
                for ( mm = kk; mm; mm = (struct tagWND *)*((_QWORD *)mm + 13) )
                {
                  if ( mm == j )
                    goto LABEL_37;
                }
                v31 = 0LL;
                if ( *((struct tagWND **)kk + 15) != kk )
                  v31 = (struct tagWND *)*((_QWORD *)kk + 15);
              }
              v23 = jj;
            }
          }
        }
      }
LABEL_37:
      if ( (*(_DWORD *)(v5 + v2 + 32) & 4) == 0 )
      {
        --*((_DWORD *)v3 + 7);
        v28 = AddSelfAndOwnees(
                v3,
                j,
                v10,
                v8,
                a2,
                *(_DWORD *)(v5 + v2 + 32) & 0x40000 | (*(_DWORD *)(v5 + v2 + 32) >> 7) & 0x400u);
        v3 = v28;
        if ( v28 )
        {
          if ( v23 )
            v9 = *(_QWORD *)v23;
          *(_QWORD *)(*((_QWORD *)v28 + 5) + v5 + 8) = v9;
        }
      }
    }
  }
  return v3;
}

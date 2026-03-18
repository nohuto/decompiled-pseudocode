/*
 * XREFs of ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x140049730
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x140047FCC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x140049730 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x140049730 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140049C70 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagSMWP *__fastcall AddSelfAndOwnees(
        struct tagSMWP *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        unsigned int a6)
{
  struct tagSMWP *v9; // r10
  struct tagWND *v10; // rbp
  int v11; // ecx
  struct tagWND *v12; // rbx
  struct tagWND *v13; // rcx
  struct tagWND *v14; // rax
  struct tagWND *v15; // rdx
  __int64 v16; // rcx
  struct tagSMWP *result; // rax
  __int64 v18; // rcx
  struct tagWND *v19; // rax
  struct tagWND *RealOwner; // rax
  int v21; // [rsp+90h] [rbp+18h]

  v9 = a1;
  v10 = a3;
  if ( a3 )
  {
    do
    {
      RealOwner = GetRealOwner(v10);
      if ( a2 == RealOwner )
        break;
      v10 = RealOwner;
    }
    while ( RealOwner );
  }
  v11 = 0;
  v12 = 0LL;
  v21 = 0;
  while ( v12 )
  {
    do
    {
      v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
      if ( !v12 )
        break;
LABEL_7:
      v13 = (struct tagWND *)*((_QWORD *)v12 + 15);
      v14 = v12;
      if ( v12 != v13 )
      {
        v14 = (struct tagWND *)*((_QWORD *)v12 + 15);
        if ( v13 )
        {
          do
          {
            v16 = *((_QWORD *)v14 + 13);
            if ( v16 == *((_QWORD *)v12 + 13) )
              break;
            v14 = (struct tagWND *)*((_QWORD *)v14 + 13);
          }
          while ( v16 );
        }
      }
    }
    while ( a2 != v14 );
    if ( !v12 )
    {
      v11 = v21;
      goto LABEL_20;
    }
    if ( !v10 )
    {
      v15 = v12;
LABEL_12:
      v9 = AddSelfAndOwnees(v9, v15, 0LL, 0LL, a5, a6);
      goto LABEL_13;
    }
    if ( !v21 )
    {
      v19 = v12;
      if ( a4 )
      {
        if ( a4 == (struct tagWND *)1 )
          goto LABEL_28;
        while ( v19 )
        {
          if ( v19 == a4 )
            goto LABEL_28;
          v19 = (struct tagWND *)*((_QWORD *)v19 + 11);
        }
      }
      v9 = AddSelfAndOwnees(v9, v10, a3, a4, a5, a6);
      if ( !v9 )
        return 0LL;
      v21 = 1;
    }
LABEL_28:
    if ( v12 != v10 )
    {
      v15 = v12;
      goto LABEL_12;
    }
LABEL_13:
    if ( !v9 )
      return 0LL;
    v11 = v21;
  }
  v12 = *(struct tagWND **)(*((_QWORD *)a2 + 13) + 112LL);
  if ( v12 )
    goto LABEL_7;
LABEL_20:
  if ( v10 )
  {
    if ( !v11 )
    {
      v9 = AddSelfAndOwnees(v9, v10, a3, a4, a5, a6);
      if ( !v9 )
        return 0LL;
    }
  }
  result = (struct tagSMWP *)_DeferWindowPos(v9, a2, 0LL, 0LL, 0, 0, 0, a6 | 0x13, 0);
  if ( !result )
    return 0LL;
  v18 = *((int *)result + 7);
  if ( a5 != (_DWORD)v18 - 1 )
    *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v18 - 160) = *(_QWORD *)(*((_QWORD *)result + 5) + 168 * v18 - 336);
  return result;
}

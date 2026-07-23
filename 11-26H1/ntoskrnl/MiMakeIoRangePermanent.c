/*
 * XREFs of MiMakeIoRangePermanent @ 0x1406F93D0
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x1406F9690 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(__int64 a1)
{
  int v2; // edi
  char v3; // r13
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  _QWORD *v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r14
  _WORD *v18; // r15
  unsigned __int64 v19; // rcx
  int v20; // edx
  char v21; // cl
  unsigned __int64 v22; // r8
  _QWORD **v23; // rcx
  _QWORD *v24; // rax
  _QWORD *i; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+50h] [rbp+8h]

  v28 = *(_DWORD *)(a1 + 40);
  v2 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  MiLockIoPfnTree(6);
  v6 = (_QWORD *)*((_QWORD *)&xmmword_140E36040 + 1);
  v7 = 0LL;
  if ( !*((_QWORD *)&xmmword_140E36040 + 1) )
    goto LABEL_8;
  v8 = *(_QWORD *)(a1 + 32);
  while ( 1 )
  {
    v9 = v6[3];
    if ( v8 < v9 )
    {
      v6 = (_QWORD *)*v6;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(a1 + 24) < v9 + 512 )
      break;
    v6 = (_QWORD *)v6[1];
LABEL_7:
    if ( !v6 )
      goto LABEL_8;
  }
  if ( v6 )
  {
    LOBYTE(v8) = 17;
    MiUnlockIoPfnTree(v8, 6LL, v5, 0LL);
    _InterlockedIncrement(&dword_140E36090);
    return 3221225496LL;
  }
LABEL_8:
  v10 = (_QWORD *)qword_140E36000;
  if ( !qword_140E36000 )
    goto LABEL_43;
  v11 = 0LL;
  while ( 2 )
  {
    v12 = v10[3];
    if ( *(_QWORD *)(a1 + 32) < v12 )
    {
LABEL_13:
      v10 = (_QWORD *)*v10;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 24) < v12 + 512 )
      {
        v11 = v10;
        goto LABEL_13;
      }
      v10 = (_QWORD *)v10[1];
    }
    if ( v10 )
      continue;
    break;
  }
  if ( v11 )
  {
    v5 = v28;
    do
    {
      v13 = v11[3];
      v2 = 0;
      v14 = *(_QWORD *)(a1 + 32);
      if ( v14 < v13 )
        break;
      v15 = v4 - v13;
      if ( v4 < v13 )
        v15 = 0LL;
      v16 = v14 + 1 > v13 + 512 ? 512LL : v14 - v13 + 1;
      v18 = (_WORD *)v11 + v15 + 88;
      v4 = v15 + v13;
      while ( v15 < v16 )
      {
        v19 = 2
            * (((unsigned int)v4 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1))
             - *((_DWORD *)v11 + 6));
        v20 = (*((_DWORD *)v11 + (v19 >> 5) + 11) >> (2
                                                    * ((v4 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1))
                                                     - *((_BYTE *)v11 + 24)))) & 3;
        if ( v20 != (_DWORD)v5 )
        {
          if ( *v18 )
          {
            ++dword_140E36080;
            goto LABEL_57;
          }
          if ( v20 != 3 && !v3 )
          {
            MiFlushEntireTbDueToAttributeChange();
            v7 = 0LL;
            v3 = 1;
          }
          v21 = (2 * ((v4 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *((_BYTE *)v11 + 24))) & 0x1F;
          v22 = (unsigned __int64)(2
                                 * (((unsigned int)v4 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878 - 12))
                                                       - 1))
                                  - *((_DWORD *)v11 + 6))) >> 5;
          *((_DWORD *)v11 + v22 + 11) = (v28 << v21) | *((_DWORD *)v11 + v22 + 11) & ~(3 << v21);
          v5 = v28;
        }
        ++v15;
        ++v18;
        ++v4;
      }
      v23 = (_QWORD **)v11[1];
      v24 = v11;
      v2 = 0;
      if ( v23 )
      {
        v11 = (_QWORD *)v11[1];
        for ( i = *v23; i; i = (_QWORD *)*i )
          v11 = i;
      }
      else
      {
        while ( 1 )
        {
          v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v11 )
            break;
          v2 = 0;
          if ( (_QWORD *)*v11 == v24 )
            break;
          v24 = v11;
        }
      }
    }
    while ( v11 );
  }
LABEL_43:
  v26 = (_QWORD *)xmmword_140E36040;
  LOBYTE(v5) = 0;
  if ( !(_QWORD)xmmword_140E36040 )
  {
LABEL_49:
    RtlAvlInsertNodeEx((unsigned __int64 *)&xmmword_140E36040, (unsigned __int64)v26, v5, (_QWORD *)a1);
    goto LABEL_50;
  }
  v19 = *(_QWORD *)(a1 + 32);
  while ( 2 )
  {
    if ( v19 < v26[3] )
    {
      v27 = (_QWORD *)*v26;
      if ( !*v26 )
        goto LABEL_49;
LABEL_55:
      v26 = v27;
      continue;
    }
    break;
  }
  if ( *(_QWORD *)(a1 + 24) > v26[4] )
  {
    v27 = (_QWORD *)v26[1];
    if ( !v27 )
    {
      LOBYTE(v5) = 1;
      goto LABEL_49;
    }
    goto LABEL_55;
  }
  ++dword_140E36084;
LABEL_57:
  v2 = -1073741800;
LABEL_50:
  LOBYTE(v19) = 17;
  MiUnlockIoPfnTree(v19, 6LL, v5, v7);
  if ( v2 < 0 )
    _InterlockedIncrement(&dword_140E36090);
  return (unsigned int)v2;
}

/*
 * XREFs of CmpGetNameControlBlock @ 0x1408CAFF0
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     CmpLockNameHashEntryExclusive @ 0x140A5C0D0 (CmpLockNameHashEntryExclusive.c)
 *     CmpUnlockNameHashEntry @ 0x140A66C80 (CmpUnlockNameHashEntry.c)
 */

char *__fastcall CmpGetNameControlBlock(unsigned __int16 *a1, unsigned int *a2)
{
  bool v2; // si
  char *p_Blink; // r15
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int v7; // edi
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // ax
  struct _LIST_ENTRY *i; // rdi
  unsigned __int16 *v11; // r13
  WCHAR *v12; // r12
  unsigned __int16 v13; // r15
  unsigned __int16 j; // si
  int v15; // ecx
  unsigned __int16 v16; // ax
  WCHAR v17; // cx
  __int64 v18; // r12
  __int64 Pool; // rax
  int v20; // eax
  _BYTE *v21; // rdi
  __int64 v22; // rsi
  WCHAR v23; // cx
  struct _LIST_ENTRY *v24; // r8
  unsigned int v26; // ecx
  __int64 v27; // rdi
  WCHAR v28; // ax
  unsigned int k; // esi
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned __int16 v32; // [rsp+70h] [rbp+8h]
  char v33; // [rsp+80h] [rbp+18h]

  v2 = 0;
  p_Blink = 0LL;
  if ( a2 )
    v5 = *a2;
  else
    v5 = CmpHashUnicodeComponent(a1);
  v6 = *a1;
  v7 = 0;
  v33 = 1;
  v8 = (unsigned __int16)v6 >> 1;
  if ( (v6 & 0xFFFFFFFE) != 0 )
  {
    do
    {
      a2 = (unsigned int *)*(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v7);
      if ( (unsigned __int16)a2 >= 0x61u )
      {
        if ( (unsigned __int16)a2 > 0x7Au )
        {
          a2 = (unsigned int *)RtlUpcaseUnicodeChar((WCHAR)a2);
          v9 = *a1;
        }
        else
        {
          LOWORD(a2) = (_WORD)a2 - 32;
          v9 = v6;
        }
        if ( (unsigned __int16)a2 > 0xFFu )
        {
          v8 = v9;
          v33 = 0;
        }
      }
      else
      {
        v9 = v6;
      }
      ++v7;
      v6 = v9;
    }
    while ( v7 < v9 >> 1 );
  }
  CmpLockNameHashEntryExclusive(v5, a2, v6);
  for ( i = CmpKeyLockTracker.WaitListEntry.Flink[((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((101027 * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF].Blink;
        ;
        i = i->Blink )
  {
    if ( !i )
      goto LABEL_30;
    p_Blink = (char *)&i[-1].Blink;
    if ( v5 == LODWORD(i->Flink) && v8 == *((_WORD *)p_Blink + 12) )
      break;
LABEL_20:
    ;
  }
  v11 = (unsigned __int16 *)(p_Blink + 26);
  v12 = (WCHAR *)*((_QWORD *)a1 + 1);
  if ( (*((_DWORD *)p_Blink + 3) & 1) != 0 )
  {
    v13 = v8;
    for ( j = *a1 >> 1; j && v13; --j )
    {
      v16 = *(unsigned __int8 *)v11;
      v11 = (unsigned __int16 *)((char *)v11 + 1);
      v17 = *v12++;
      v32 = v16;
      if ( v17 != v16 )
      {
        if ( v17 >= 0x61u )
        {
          if ( v17 > 0x7Au )
          {
            v17 = RtlUpcaseUnicodeChar(v17);
            v16 = v32;
          }
          else
          {
            v17 -= 32;
          }
        }
        v15 = v17 - v16;
        if ( v15 )
          goto LABEL_19;
      }
      --v13;
    }
    v15 = j - v13;
LABEL_19:
    p_Blink = (char *)&i[-1].Blink;
    v2 = v15 == 0;
    if ( !v15 )
      goto LABEL_28;
    goto LABEL_20;
  }
  for ( k = 0; k < *((unsigned __int16 *)p_Blink + 12) >> 1; ++k )
  {
    v30 = *v12;
    if ( v30 < 0x61 )
    {
      v31 = *v12;
    }
    else if ( v30 > 0x7A )
    {
      v31 = RtlUpcaseUnicodeChar(v30);
    }
    else
    {
      v31 = v30 - 32;
    }
    if ( v31 != *v11 )
    {
      v2 = 0;
      goto LABEL_20;
    }
    ++v12;
    ++v11;
  }
  v2 = 1;
LABEL_28:
  if ( *(_QWORD *)p_Blink != -1LL )
  {
    ++*(_QWORD *)p_Blink;
LABEL_30:
    v18 = 0LL;
    goto LABEL_31;
  }
  v18 = 0LL;
  p_Blink = 0LL;
LABEL_31:
  if ( v2 )
  {
LABEL_39:
    CmpUnlockNameHashEntry(v5);
    return p_Blink;
  }
  else
  {
    Pool = CmpAllocatePool(0x100uLL);
    p_Blink = (char *)Pool;
    if ( Pool )
    {
      v20 = *(_DWORD *)(Pool + 12);
      if ( v33 )
      {
        *((_DWORD *)p_Blink + 3) = v20 | 1;
        if ( v8 )
        {
          v21 = p_Blink + 26;
          v22 = v8;
          do
          {
            v23 = *(_WORD *)(v18 + *((_QWORD *)a1 + 1));
            if ( v23 >= 0x61u )
            {
              if ( v23 > 0x7Au )
                LOBYTE(v23) = RtlUpcaseUnicodeChar(v23);
              else
                LOBYTE(v23) = v23 - 32;
            }
            *v21 = v23;
            v18 += 2LL;
            ++v21;
            --v22;
          }
          while ( v22 );
        }
      }
      else
      {
        v26 = v8 >> 1;
        *((_DWORD *)p_Blink + 3) = v20 & 0xFFFFFFFE;
        if ( v26 )
        {
          v27 = v26;
          do
          {
            v28 = *(_WORD *)(v18 + *((_QWORD *)a1 + 1));
            if ( v28 >= 0x61u )
            {
              if ( v28 > 0x7Au )
                v28 = RtlUpcaseUnicodeChar(v28);
              else
                v28 -= 32;
            }
            *(_WORD *)&p_Blink[v18 + 26] = v28;
            v18 += 2LL;
            --v27;
          }
          while ( v27 );
        }
      }
      *((_DWORD *)p_Blink + 2) = v5;
      *(_QWORD *)p_Blink = 1LL;
      *((_WORD *)p_Blink + 12) = v8;
      v24 = &CmpKeyLockTracker.WaitListEntry.Flink[((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((101027 * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF];
      *((_QWORD *)p_Blink + 2) = v24->Blink;
      v24->Blink = (struct _LIST_ENTRY *)(p_Blink + 8);
      goto LABEL_39;
    }
    CmpUnlockNameHashEntry(v5);
    return 0LL;
  }
}

/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x1800375D0
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x180037510 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     NLS_UPCASE @ 0x180036DE0 (NLS_UPCASE.c)
 *     RtlpLockAtomTable @ 0x180037A80 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180037AB0 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpInsertStringAtom @ 0x180037B44 (RtlpInsertStringAtom.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, unsigned __int64 a2, _WORD *a3, int a4)
{
  __int64 *k; // rsi
  __int64 v8; // r12
  _WORD *v9; // r14
  __int64 i; // rdx
  __int64 v11; // r8
  const wchar_t *v12; // r9
  unsigned __int16 *v13; // rbx
  unsigned int j; // r10d
  unsigned __int16 v15; // ax
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // ebx
  __int16 v19; // cx
  const wchar_t *v20; // rax
  __int64 Atom; // rax
  __int64 v22; // rdi
  unsigned int Size; // [rsp+38h] [rbp-90h]
  __int128 v25; // [rsp+68h] [rbp-60h] BYREF
  const wchar_t *v26; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+80h] [rbp-48h]
  int v28; // [rsp+D0h] [rbp+8h] BYREF
  _WORD *v29; // [rsp+E0h] [rbp+18h]
  __int16 v30; // [rsp+E8h] [rbp+20h]
  __int16 v31; // [rsp+EAh] [rbp+22h]

  v31 = HIWORD(a4);
  v29 = a3;
  v27 = a1;
  k = 0LL;
  v8 = 0LL;
  Size = 0;
  v30 = 0;
  v9 = 0LL;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v26 = (const wchar_t *)a2;
    v25 = 0LL;
    v28 = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v19 = a2 + 2;
        v26 = (const wchar_t *)(a2 + 2);
        v20 = (const wchar_t *)(a2 + 2);
        v12 = (const wchar_t *)(a2 + 2);
        for ( i = (unsigned __int16)(a2 + 2); ; i = (unsigned __int16)v12 )
        {
          v11 = *v20;
          if ( !(_WORD)v11 )
            break;
          LOWORD(v11) = v11 - 48;
          if ( (unsigned __int16)v11 > 9u )
            goto LABEL_4;
          v20 = ++v12;
        }
        v28 = 0;
        *((_QWORD *)&v25 + 1) = a2 + 2;
        LOWORD(v25) = i - v19;
        WORD1(v25) = i - v19;
        if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)&v25, 0xAu, &v28) >= 0 )
        {
          if ( (unsigned int)(v28 - 1) > 0xBFFF )
            v30 = -16384;
          else
            v30 = v28;
          LOWORD(a2) = v30;
LABEL_37:
          if ( (unsigned __int16)a2 >= 0xC000u )
          {
            LOWORD(a2) = 0;
            v30 = 0;
            v18 = -1073741811;
          }
          else
          {
            v18 = 0;
          }
          if ( a3 )
            *a3 = a2;
          goto LABEL_65;
        }
      }
    }
    else if ( (unsigned __int16)a2 < 0xC000u )
    {
      if ( !(_WORD)a2 )
        LOWORD(a2) = -16384;
      v30 = a2;
      goto LABEL_37;
    }
LABEL_4:
    if ( !*(_WORD *)a2 )
    {
      v18 = -1073741773;
LABEL_65:
      RtlReleaseSRWLockExclusive(a1 + 8, i);
      return (unsigned int)v18;
    }
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v13 = (unsigned __int16 *)a2;
      for ( j = 0; ; j += v15 + (v15 >> 1) + 2 * v15 )
      {
        v15 = *v13;
        if ( !*v13 )
          break;
        ++v13;
        if ( v15 >= 0x61u )
        {
          if ( v15 > 0x7Au )
            v15 = NLS_UPCASE(qword_1801C6038, v15);
          else
            v15 -= 32;
        }
      }
      v16 = (__int64)((__int64)v13 - a2) >> 1;
      if ( (unsigned int)v16 > 0xFF )
      {
        v17 = 0LL;
      }
      else
      {
        for ( k = (__int64 *)(a1 + 72 + 8LL * (j % *(_DWORD *)(a1 + 64))); ; k = (__int64 *)v17 )
        {
          v17 = *k;
          if ( !*k
            || *(unsigned __int8 *)(v17 + 16) == (_DWORD)v16
            && !wcsicmp((const wchar_t *)(v17 + 18), (const wchar_t *)a2) )
          {
            break;
          }
        }
      }
      if ( !v17 )
        Size = 2 * v16;
    }
    else
    {
      v17 = 0LL;
      if ( (unsigned __int16)a2 >= 0xC000u )
        v17 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    }
    if ( v17 )
    {
      if ( v17 == -12 )
      {
        v18 = -1073741801;
        i = 0LL;
LABEL_24:
        if ( v18 >= 0 )
        {
          if ( v8 )
          {
            if ( *v9 == 0xFFFF )
              v9[1] |= 1u;
            else
              ++*v9;
            if ( v29 )
              *v29 = *(_WORD *)(v8 + 10);
            v18 = 0;
          }
          else if ( k )
          {
            v18 = -1073741801;
            Atom = RtlpAllocateAtom(Size + 20LL, 0LL, v11, v12);
            v22 = Atom;
            if ( Atom )
            {
              *(_QWORD *)Atom = 0LL;
              *(_WORD *)(Atom + 12) = 1;
              *(_WORD *)(Atom + 14) = 0;
              memmove((void *)(Atom + 18), (const void *)a2, Size);
              *(_BYTE *)(v22 + 16) = Size >> 1;
              *(_WORD *)(v22 + 2LL * (unsigned __int8)(Size >> 1) + 18) = 0;
              if ( (unsigned __int8)RtlpInsertStringAtom(a1, v22) )
              {
                *(_WORD *)(v22 + 10) = *(_WORD *)(v22 + 8) | 0xC000;
                *k = v22;
                if ( v29 )
                  *v29 = *(_WORD *)(v22 + 10);
                v18 = 0;
              }
              else
              {
                RtlpSysVolFree(v22);
              }
            }
          }
          else
          {
            v18 = -1073741811;
          }
        }
        goto LABEL_65;
      }
      v9 = (_WORD *)(v17 + 12);
    }
    v8 = v17;
    i = 0LL;
    v18 = 0;
    goto LABEL_24;
  }
  return 3221225485LL;
}

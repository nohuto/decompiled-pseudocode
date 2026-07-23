/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x1800012A0
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x1800011E0 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpLockAtomTable @ 0x180001750 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180001780 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpInsertStringAtom @ 0x180001814 (RtlpInsertStringAtom.c)
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, unsigned __int64 a2, _WORD *a3, int a4)
{
  __int64 *j; // rsi
  __int64 v8; // r12
  _WORD *v9; // r14
  unsigned __int16 *v10; // rbx
  unsigned int i; // r10d
  unsigned __int16 v12; // ax
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // ebx
  __int16 v16; // ax
  _WORD *v17; // rdx
  __int16 v18; // cx
  _WORD *v19; // r9
  __int64 Atom; // rax
  __int64 v21; // rdi
  unsigned int Size; // [rsp+38h] [rbp-90h]
  _UNICODE_STRING String; // [rsp+68h] [rbp-60h] BYREF
  _WORD *v25; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp-48h]
  ULONG Value; // [rsp+D0h] [rbp+8h] BYREF
  _WORD *v28; // [rsp+E0h] [rbp+18h]
  __int16 v29; // [rsp+E8h] [rbp+20h]
  __int16 v30; // [rsp+EAh] [rbp+22h]

  v30 = HIWORD(a4);
  v28 = a3;
  v26 = a1;
  j = 0LL;
  v8 = 0LL;
  Size = 0;
  v29 = 0;
  v9 = 0LL;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v25 = (_WORD *)a2;
    String = 0LL;
    Value = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v16 = a2 + 2;
        v25 = (_WORD *)(a2 + 2);
        v17 = (_WORD *)(a2 + 2);
        v18 = a2 + 2;
        v19 = (_WORD *)(a2 + 2);
        while ( *v17 )
        {
          if ( (unsigned __int16)(*v17 - 48) > 9u )
            goto LABEL_4;
          v17 = v19 + 1;
          v18 = (_WORD)v19++ + 2;
        }
        Value = 0;
        String.Buffer = (wchar_t *)(a2 + 2);
        String.Length = v18 - v16;
        String.MaximumLength = v18 - v16;
        if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
        {
          if ( Value - 1 > 0xBFFF )
            v29 = -16384;
          else
            v29 = Value;
          LOWORD(a2) = v29;
LABEL_37:
          if ( (unsigned __int16)a2 >= 0xC000u )
          {
            LOWORD(a2) = 0;
            v29 = 0;
            v15 = -1073741811;
          }
          else
          {
            v15 = 0;
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
      v29 = a2;
      goto LABEL_37;
    }
LABEL_4:
    if ( !*(_WORD *)a2 )
    {
      v15 = -1073741773;
LABEL_65:
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
      return (unsigned int)v15;
    }
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v10 = (unsigned __int16 *)a2;
      for ( i = 0; ; i += v12 + (v12 >> 1) + 2 * v12 )
      {
        v12 = *v10;
        if ( !*v10 )
          break;
        ++v10;
        if ( v12 >= 0x61u )
        {
          if ( v12 > 0x7Au )
            v12 = NLS_UPCASE(qword_1801C5038, v12);
          else
            v12 -= 32;
        }
      }
      v13 = (__int64)((__int64)v10 - a2) >> 1;
      if ( (unsigned int)v13 > 0xFF )
      {
        v14 = 0LL;
      }
      else
      {
        for ( j = (__int64 *)(a1 + 72 + 8LL * (i % *(_DWORD *)(a1 + 64))); ; j = (__int64 *)v14 )
        {
          v14 = *j;
          if ( !*j
            || *(unsigned __int8 *)(v14 + 16) == (_DWORD)v13
            && !wcsicmp((const wchar_t *)(v14 + 18), (const wchar_t *)a2) )
          {
            break;
          }
        }
      }
      if ( !v14 )
        Size = 2 * v13;
    }
    else
    {
      v14 = 0LL;
      if ( (unsigned __int16)a2 >= 0xC000u )
        v14 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    }
    if ( v14 )
    {
      if ( v14 == -12 )
      {
        v15 = -1073741801;
LABEL_24:
        if ( v15 >= 0 )
        {
          if ( v8 )
          {
            if ( *v9 == 0xFFFF )
              v9[1] |= 1u;
            else
              ++*v9;
            if ( v28 )
              *v28 = *(_WORD *)(v8 + 10);
            v15 = 0;
          }
          else if ( j )
          {
            v15 = -1073741801;
            Atom = RtlpAllocateAtom(Size + 20LL);
            v21 = Atom;
            if ( Atom )
            {
              *(_QWORD *)Atom = 0LL;
              *(_WORD *)(Atom + 12) = 1;
              *(_WORD *)(Atom + 14) = 0;
              memmove((void *)(Atom + 18), (const void *)a2, Size);
              *(_BYTE *)(v21 + 16) = Size >> 1;
              *(_WORD *)(v21 + 2LL * (unsigned __int8)(Size >> 1) + 18) = 0;
              if ( (unsigned __int8)RtlpInsertStringAtom(a1, v21) )
              {
                *(_WORD *)(v21 + 10) = *(_WORD *)(v21 + 8) | 0xC000;
                *j = v21;
                if ( v28 )
                  *v28 = *(_WORD *)(v21 + 10);
                v15 = 0;
              }
              else
              {
                RtlpSysVolFree((PVOID)v21);
              }
            }
          }
          else
          {
            v15 = -1073741811;
          }
        }
        goto LABEL_65;
      }
      v9 = (_WORD *)(v14 + 12);
    }
    v8 = v14;
    v15 = 0;
    goto LABEL_24;
  }
  return 3221225485LL;
}

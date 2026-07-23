/*
 * XREFs of RtlpFreeAllAtom @ 0x180001AF4
 * Callers:
 *     RtlpDereferenceAtom @ 0x1800017BC (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlpAtomMapAtomToHandleEntry @ 0x180001780 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpFreeHandleForAtom @ 0x180001C3C (RtlpFreeHandleForAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

int __fastcall RtlpFreeAllAtom(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // r15
  __int64 v4; // rax
  unsigned __int16 *v5; // rsi
  unsigned int v6; // r10d
  int v7; // ecx
  __int64 v8; // rsi
  void **v9; // r14
  wchar_t *i; // rbx

  v2 = (const wchar_t *)(a1 + 18);
  if ( ((a1 + 18) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    LODWORD(v4) = *v2;
    v5 = (unsigned __int16 *)(a1 + 18);
    v6 = 0;
    while ( (_WORD)v4 )
    {
      ++v5;
      if ( (unsigned __int16)v4 >= 0x61u )
      {
        if ( (unsigned __int16)v4 > 0x7Au )
          LOWORD(v4) = NLS_UPCASE(qword_1801C5038, (unsigned __int16)v4);
        else
          LOWORD(v4) = v4 - 32;
      }
      v7 = (unsigned __int16)v4 + ((unsigned __int16)v4 >> 1) + 2 * (unsigned __int16)v4;
      LODWORD(v4) = *v5;
      v6 += v7;
    }
    v8 = v5 - v2;
    if ( (unsigned int)v8 > 0xFF )
    {
      v9 = 0LL;
      i = 0LL;
    }
    else
    {
      LODWORD(v4) = v6 / *(_DWORD *)(a2 + 64);
      v9 = (void **)(a2 + 72 + 8LL * (v6 % *(_DWORD *)(a2 + 64)));
      for ( i = (wchar_t *)*v9; i; i = *(wchar_t **)i )
      {
        LODWORD(v4) = *((unsigned __int8 *)i + 16);
        if ( (_DWORD)v4 == (_DWORD)v8 )
        {
          LODWORD(v4) = wcsicmp(i + 9, v2);
          if ( !(_DWORD)v4 )
            break;
        }
        v9 = (void **)i;
      }
    }
  }
  else
  {
    LODWORD(v4) = 49152;
    i = 0LL;
    if ( (unsigned __int16)v2 >= 0xC000u )
    {
      v4 = RtlpAtomMapAtomToHandleEntry(a2, (unsigned __int16)v2 & 0x3FFF);
      i = (wchar_t *)v4;
    }
    v9 = 0LL;
  }
  if ( i )
  {
    LODWORD(v4) = (_DWORD)i + 12;
    if ( i != (wchar_t *)-12LL )
    {
      if ( v9 )
        *v9 = *(void **)i;
      RtlpFreeHandleForAtom(a2, i);
      LODWORD(v4) = RtlpSysVolFree(i);
    }
  }
  return v4;
}

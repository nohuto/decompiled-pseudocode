/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x18003C510
 * Callers:
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // ecx
  int v5; // edx
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned __int16 *v8; // rdx
  unsigned int v9; // ebp
  PVOID Atom; // rsi

  v3 = *a2;
  if ( !(_WORD)v3 )
    return 0LL;
  v5 = *a1;
  v6 = v5 + v3 + 2;
  if ( v6 > a1[1] )
  {
    if ( v6 > 0xFFFE )
      return 3221225734LL;
    v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v9 = (v6 + 63) & 0xFFFFFFC0;
    if ( v9 > 0xFFFE )
      v9 = 65534;
    if ( v8 == a1 + 8 )
    {
      Atom = RtlpAllocateAtom(v9);
      if ( !Atom )
        return 3221225495LL;
      if ( *a1 )
        memmove(Atom, *((const void **)a1 + 1), *a1);
    }
    else
    {
      Atom = (PVOID)NtdllpReallocateStringRoutine(v9, v8);
      if ( !Atom )
        return 3221225495LL;
    }
    LOWORD(v5) = *a1;
    *((_QWORD *)a1 + 1) = Atom;
    a1[1] = v9;
    LOWORD(v3) = *a2;
  }
  memmove((void *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v5), *((const void **)a2 + 1), (unsigned __int16)v3);
  result = 0LL;
  *a1 += *a2;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  return result;
}

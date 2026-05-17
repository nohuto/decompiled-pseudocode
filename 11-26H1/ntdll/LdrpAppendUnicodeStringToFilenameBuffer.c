/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180051F90
 * Callers:
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx
  int v7; // edx
  __int64 v8; // r8
  __int64 result; // rax
  unsigned __int16 *v10; // rdx
  unsigned int v11; // ebp
  void *Atom; // rsi

  v5 = *a2;
  if ( !(_WORD)v5 )
    return 0LL;
  v7 = *a1;
  v8 = (unsigned int)(v7 + v5 + 2);
  if ( (unsigned int)v8 > a1[1] )
  {
    if ( (unsigned int)v8 > 0xFFFE )
      return 3221225734LL;
    v10 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v11 = (v8 + 63) & 0xFFFFFFC0;
    if ( v11 > 0xFFFE )
      v11 = 65534;
    if ( v10 == a1 + 8 )
    {
      Atom = (void *)RtlpAllocateAtom(v11);
      if ( !Atom )
        return 3221225495LL;
      if ( *a1 )
        memmove(Atom, *((const void **)a1 + 1), *a1);
    }
    else
    {
      Atom = (void *)NtdllpReallocateStringRoutine(v11, v10, v8, a4);
      if ( !Atom )
        return 3221225495LL;
    }
    LOWORD(v7) = *a1;
    *((_QWORD *)a1 + 1) = Atom;
    a1[1] = v11;
    LOWORD(v5) = *a2;
  }
  memmove((void *)(*((_QWORD *)a1 + 1) + (unsigned __int16)v7), *((const void **)a2 + 1), (unsigned __int16)v5);
  result = 0LL;
  *a1 += *a2;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  return result;
}

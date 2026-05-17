/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x18014A4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180034960 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x180034D10 (CountUnicodeToUTF8.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int64 a1, unsigned int **a2, char a3)
{
  unsigned int v5; // edx
  char v7; // r14
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 Atom; // rax
  _WORD *v11; // rsi
  unsigned int v12; // ecx
  int v13; // ebx
  __int16 v14; // r8
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(unsigned __int16 *)a2;
  v15 = 0;
  v7 = 0;
  result = CountUnicodeToUTF8(a2[1], v5, &v15);
  if ( (int)result >= 0 )
  {
    v9 = v15 + 1;
    v15 = v9;
    if ( v9 > 0xFFFF )
      return 3221225712LL;
    if ( a3 )
    {
      Atom = RtlpAllocateAtom(v9);
      *(_QWORD *)(a1 + 8) = Atom;
      if ( !Atom )
        return 3221225495LL;
      v11 = (_WORD *)(a1 + 2);
      LOWORD(v12) = v9;
      *(_WORD *)(a1 + 2) = v9;
    }
    else
    {
      v11 = (_WORD *)(a1 + 2);
      v12 = *(unsigned __int16 *)(a1 + 2);
      if ( v9 > v12 )
      {
        if ( !(_WORD)v12 )
          return 2147483653LL;
        v7 = 1;
      }
    }
    v13 = RtlUnicodeToUTF8N(
            *(_BYTE **)(a1 + 8),
            (unsigned int)(unsigned __int16)v12 - 1,
            &v15,
            a2[1],
            *(unsigned __int16 *)a2);
    if ( v13 < 0 )
    {
      if ( a3 )
      {
        RtlpSysVolFree(*(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *v11 = 0;
      }
    }
    else
    {
      v14 = v15;
      *(_BYTE *)(v15 + *(_QWORD *)(a1 + 8)) = 0;
      *(_WORD *)a1 = v14;
      if ( v7 )
        return (unsigned int)-2147483643;
    }
    return (unsigned int)v13;
  }
  return result;
}

/*
 * XREFs of SdbpEscapeQuoteInMsg @ 0x180090C28
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 */

_WORD *__fastcall SdbpEscapeQuoteInMsg(__int16 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int16 v5; // dx
  __int16 *v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  _WORD *Heap; // rax
  _WORD *v10; // r8
  _WORD *v11; // rcx
  __int16 v12; // dx
  char *v13; // r9
  __int16 v14; // ax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 )
    return 0LL;
  v5 = *a1;
  v6 = a1;
  if ( !*a1 )
    goto LABEL_15;
  do
  {
    ++v3;
    v7 = v2 + 1;
    v8 = v5 == 34;
    v5 = *++v6;
    if ( !v8 )
      v7 = v2;
    v2 = v7;
  }
  while ( v5 );
  if ( v7 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * (v3 + v7) + 2);
    v10 = Heap;
    v11 = Heap;
    if ( Heap )
    {
      v12 = *a1;
      if ( *a1 )
      {
        v13 = (char *)Heap;
        do
        {
          if ( v12 == 34 )
          {
            *v11 = 92;
            v11 = Heap + 1;
            v13 = (char *)(Heap + 1);
          }
          v14 = *a1++;
          *v11 = v14;
          v11 = v13 + 2;
          Heap = v13 + 2;
          v13 += 2;
          v12 = *a1;
        }
        while ( *a1 );
      }
      *v11 = 0;
      return v10;
    }
  }
  else
  {
LABEL_15:
    AslStringDuplicate(&v15, a1);
    return (_WORD *)v15;
  }
  return v11;
}

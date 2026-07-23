/*
 * XREFs of CarCopyDriverName @ 0x14064C408
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x14064CB78 (CarGetDriverInfoFromViolationStack.c)
 *     CarLoadImageHandler @ 0x14064CDCC (CarLoadImageHandler.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CarCopyDriverName(_WORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // r9
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // rcx

  if ( a1 )
  {
    memset_0(a1, 0, 0x40uLL);
    if ( !a2 || (v4 = *((_QWORD *)a2 + 1)) == 0 )
    {
      *(_DWORD *)a1 = 4259918;
      return;
    }
    v5 = 0;
    v6 = *a2 >> 1;
    if ( v6 >= 0x20 )
    {
      v7 = 31;
    }
    else
    {
      v7 = *a2 >> 1;
      if ( !v6 )
      {
LABEL_11:
        if ( v6 >= 0x20 )
          a1[30] = 126;
        return;
      }
    }
    v8 = 0LL;
    do
    {
      a1[v8] = *(_WORD *)(v8 * 2 + v4);
      v4 = *((_QWORD *)a2 + 1);
      if ( !*(_WORD *)(v8 * 2 + v4) )
        break;
      ++v5;
      ++v8;
    }
    while ( v5 < v7 );
    goto LABEL_11;
  }
}

/*
 * XREFs of RtlpHpVaMgrFree @ 0x140350A00
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x14034FEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140350BAC (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCoalesce @ 0x140350A9C (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 v4; // r10
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax

  v3 = RtlpHpVaMgrRangeCoalesce();
  v4 = *(_WORD *)(v3 + 24);
  if ( v4 != *(_WORD *)(a1 + 40) )
  {
    v6 = a1 + 8;
    v7 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v7 )
      v7 ^= v6;
    LOBYTE(v2) = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v4 < *(_WORD *)(v7 + 24) )
        {
          v8 = *(_QWORD *)v7;
          if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 ^= v7;
          }
          if ( !v8 )
            break;
        }
        else
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_8;
            v8 ^= v7;
          }
          if ( !v8 )
          {
LABEL_8:
            LOBYTE(v2) = 1;
            break;
          }
        }
        v7 = v8;
      }
    }
    RtlRbInsertNodeEx(v6, v7, v2, v3);
    return 0LL;
  }
  return v3;
}

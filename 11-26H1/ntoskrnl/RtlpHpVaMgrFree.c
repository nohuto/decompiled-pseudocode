/*
 * XREFs of RtlpHpVaMgrFree @ 0x140352A80
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCoalesce @ 0x140352B1C (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int16 v3; // r10
  __int64 v5; // rbx
  __int64 v6; // rdx
  BOOLEAN v7; // r8
  __int64 v8; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v5 = a1 + 8;
    v6 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 && v6 )
      v6 ^= v5;
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v6 + 24) )
        {
          v8 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 ^= v6;
          }
          if ( !v8 )
            break;
        }
        else
        {
          v8 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_8;
            v8 ^= v6;
          }
          if ( !v8 )
          {
LABEL_8:
            v7 = 1;
            break;
          }
        }
        v6 = v8;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)v5, (PRTL_BALANCED_NODE)v6, v7, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}

/*
 * XREFs of KeAndAffinityEx2 @ 0x140253BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

__int64 __fastcall KeAndAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, __int64 a3)
{
  unsigned __int16 v4; // r9
  unsigned int v5; // r10d
  unsigned __int16 Count; // cx
  unsigned __int16 v7; // r9
  bool v8; // zf
  __int64 v9; // rax

  if ( a3 )
  {
    v4 = *(_WORD *)(a3 + 2);
    v5 = 0;
    *(_WORD *)(a3 + 2) = v4;
    Count = a1->Count;
    if ( Count >= a2->Count )
      Count = a2->Count;
    *(_WORD *)a3 = Count;
    if ( Count > v4 )
    {
      *(_WORD *)a3 = v4;
      Count = v4;
    }
    v7 = 0;
    if ( Count )
    {
      do
      {
        v8 = (a2->Bitmap[v7] & a1->Bitmap[v7]) == 0;
        *(_QWORD *)(a3 + 8LL * v7 + 8) = a2->Bitmap[v7] & a1->Bitmap[v7];
        if ( !v8 )
          v5 = 1;
        ++v7;
      }
      while ( v7 < *(_WORD *)a3 );
    }
    *(_DWORD *)(a3 + 4) = 0;
    while ( v7 < *(_WORD *)(a3 + 2) )
    {
      v9 = v7++;
      *(_QWORD *)(a3 + 8 * v9 + 8) = 0LL;
    }
  }
  else
  {
    return RtlpAndAffinityExNoResult(a1, a2);
  }
  return v5;
}

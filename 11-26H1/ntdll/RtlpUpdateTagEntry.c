/*
 * XREFs of RtlpUpdateTagEntry @ 0x18000DDC8
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpUpdateTagEntry(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  unsigned __int16 v7; // dx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int16 v12; // dx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  unsigned __int16 v19; // dx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8

  if ( !RtlpGlobalTagHeap )
    return 0LL;
  if ( a5 < 2 )
  {
    if ( !a2 )
      goto LABEL_25;
    if ( a2 < *(_WORD *)(a1 + 224) )
    {
      v22 = *(_QWORD *)(a1 + 232);
      if ( v22 )
      {
        v18 = v22 + 72LL * a2;
        goto LABEL_33;
      }
    }
    if ( (a2 & 0x800) != 0 )
    {
      v19 = a2 & 0xF7FF;
      if ( v19 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
        return 0LL;
      v20 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
      if ( !v20 )
        return 0LL;
      v21 = v19;
      a2 = v19 | 0x800;
      v18 = v20 + 72 * v21;
    }
    else
    {
LABEL_25:
      v16 = *(_QWORD *)(a1 + 328);
      if ( !v16 )
        return 0LL;
      v17 = 128;
      if ( a4 < 0x80 )
      {
        v17 = a4;
      }
      else if ( a5 != 1 )
      {
        v17 = 0;
      }
      v18 = v16 + 16LL * v17;
      a2 = v17 | 0x8000;
    }
LABEL_33:
    ++*(_DWORD *)v18;
    *(_QWORD *)(v18 + 8) += a4;
    return a2;
  }
  if ( a2 )
  {
    if ( (a2 & 0x8000u) != 0 )
    {
      v12 = a2 & 0x7FFF;
      if ( v12 < 0x81u )
      {
        v13 = *(_QWORD *)(a1 + 328);
        if ( v13 )
        {
          v10 = v13 + 16LL * v12;
          a2 = v12 | 0x8000;
LABEL_10:
          ++*(_DWORD *)(v10 + 4);
          *(_QWORD *)(v10 + 8) -= a3;
          if ( a5 >= 4 )
          {
            if ( (a2 & 0x8000u) != 0 )
            {
              v14 = 128;
              if ( a4 < 0x80 )
              {
                v14 = a4;
              }
              else if ( a5 != 5 )
              {
                v14 = 0;
              }
              v15 = v14;
              v10 = *(_QWORD *)(a1 + 328) + 16LL * v14;
              a2 = v15 | 0x8000;
            }
            ++*(_DWORD *)v10;
            *(_QWORD *)(v10 + 8) += a4;
          }
          return a2;
        }
      }
    }
    else if ( (a2 & 0x800) != 0 )
    {
      v7 = a2 & 0xF7FF;
      if ( v7 < *(_WORD *)(RtlpGlobalTagHeap + 224) )
      {
        v8 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
        if ( v8 )
        {
          v9 = v7;
          a2 = v7 | 0x800;
LABEL_9:
          v10 = v8 + 72 * v9;
          goto LABEL_10;
        }
      }
    }
    else if ( a2 < *(_WORD *)(a1 + 224) )
    {
      v8 = *(_QWORD *)(a1 + 232);
      if ( v8 )
      {
        v9 = a2;
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}

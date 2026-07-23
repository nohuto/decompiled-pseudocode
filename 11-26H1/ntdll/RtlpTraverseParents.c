/*
 * XREFs of RtlpTraverseParents @ 0x18004E7C0
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18004D550 (RtlpIsQualifiedLanguage.c)
 *     RtlpTraverseParents @ 0x18004E7C0 (RtlpTraverseParents.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x18004EB30 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpCompareConfigNodeWithSpec @ 0x18004DB44 (RtlpCompareConfigNodeWithSpec.c)
 *     RtlpTraverseParents @ 0x18004E7C0 (RtlpTraverseParents.c)
 */

char __fastcall RtlpTraverseParents(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  char v6; // r14
  int v11; // eax
  int v12; // ecx
  int v13; // r15d
  __int16 v14; // r12
  int v15; // r10d
  __int16 i; // dx
  __int16 v17; // r8
  __int16 v18; // dx
  int v20; // ecx
  __int16 v21; // ax
  int v22; // edx
  __int64 v23; // r10
  __int16 v24; // ax
  int v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-30h]
  __int16 v27; // [rsp+70h] [rbp+8h]
  int v28; // [rsp+70h] [rbp+8h]

  v6 = 0;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a5 > 4 )
    return 0;
  v11 = a6;
  if ( a6 <= 1 )
    return 0;
  v12 = *a1 & 7;
  if ( v12 != 2 )
  {
    v20 = v12 - 1;
    if ( !v20 )
    {
      *(_DWORD *)(a2 + 4) = 1;
      *(_WORD *)a2 = a1[2];
      *(_WORD *)(a2 + 2) = a1[3];
      return 1;
    }
    if ( v20 != 3 )
      return 0;
  }
  v13 = 0;
  if ( a4 )
  {
    v14 = a1[2];
    if ( v14 != 4096 && v14 != 5120 && v14 )
    {
      v15 = 1;
      goto LABEL_12;
    }
    v14 = a1[3];
    if ( v14 > 0 )
    {
      v15 = 3;
LABEL_12:
      v25 = v15;
      for ( i = 0; ; i = v27 + 1 )
      {
        v27 = i;
        if ( i >= (int)*(unsigned __int16 *)(a4 + 4) )
        {
          v17 = -1;
          goto LABEL_15;
        }
        if ( RtlpCompareConfigNodeWithSpec(a3, v15, v14, (__int16 *)(*(_QWORD *)(a4 + 8) + 12LL * i)) )
          break;
        v15 = v25;
      }
      v17 = v27;
LABEL_15:
      if ( v17 == -1 )
      {
        v11 = a6;
      }
      else
      {
        v22 = 0;
        v23 = *(_QWORD *)(a4 + 8) + 12LL * v17;
        v26 = v23;
        while ( 1 )
        {
          v28 = v22;
          if ( v22 >= 3 )
            break;
          v24 = (*(_WORD *)(v23 + 2) >> (2 * v22)) & 3;
          if ( v24 )
          {
            if ( v24 != 2 )
            {
              if ( v24 == 1 )
              {
                *(_WORD *)(a2 + 8) = *(_WORD *)(v23 + 2LL * v22 + 6);
                *(_WORD *)(a2 + 10) = -1;
              }
              else
              {
                *(_WORD *)(a2 + 8) = 0;
                *(_WORD *)(a2 + 10) = *(_WORD *)(v23 + 2LL * v22 + 6);
              }
              *(_DWORD *)(a2 + 12) = 1;
LABEL_34:
              v6 = 1;
              break;
            }
            if ( (unsigned __int8)RtlpTraverseParents(
                                    *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * *(__int16 *)(v23 + 2LL * v22 + 6),
                                    (int)a2 + 8,
                                    a3,
                                    a4,
                                    a5 + 1,
                                    a6 - 1) )
              goto LABEL_34;
            v22 = v28;
            v23 = v26;
          }
          ++v22;
        }
        v11 = a6;
      }
    }
  }
  if ( v6 )
    goto LABEL_21;
  while ( 1 )
  {
    if ( v13 >= 4 )
      return 0;
    v18 = (a1[4] >> (2 * v13)) & 3;
    if ( v18 != 2 )
      break;
    if ( (unsigned __int8)RtlpTraverseParents(
                            *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * (__int16)a1[v13 + 6],
                            (int)a2 + 8,
                            a3,
                            a4,
                            a5 + 1,
                            v11 - 1) )
      goto LABEL_21;
LABEL_44:
    v11 = a6;
    ++v13;
  }
  if ( ((v18 - 1) & 0xFFFD) != 0 )
    goto LABEL_44;
  v21 = a1[v13 + 6];
  if ( v18 == 1 )
    *(_WORD *)(a2 + 8) = v21;
  else
    *(_WORD *)(a2 + 10) = v21;
  *(_DWORD *)(a2 + 12) = 1;
LABEL_21:
  *(_DWORD *)(a2 + 4) = 1;
  *(_WORD *)a2 = a1[2];
  *(_WORD *)(a2 + 2) = a1[3];
  return 1;
}

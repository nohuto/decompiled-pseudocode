/*
 * XREFs of MiObtainProtoBaseFromNode @ 0x140443F40
 * Callers:
 *     MiGetPrototypePteRanges @ 0x140443C58 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteBoundaries @ 0x140714CA0 (MiGetPrototypePteBoundaries.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140714D44 (MiReplaceSystemProtoPtesNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainProtoBaseFromNode(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8

  v2 = a1[3];
  result = 0LL;
  *a2 = 0LL;
  v4 = v2 & 7;
  if ( !v4 )
  {
    v5 = *(a1 - 14);
    v6 = *((unsigned int *)a1 - 19);
LABEL_3:
    *a2 = v6;
    return v5;
  }
  v7 = v4 - 1LL;
  if ( !v7 )
  {
    v8 = *(a1 - 6);
    *a2 = *((unsigned int *)a1 - 3);
    return v8;
  }
  v9 = v7 - 1;
  if ( v9 )
  {
    v13 = v9 - 1;
    if ( !v13 )
    {
      v14 = a1[6];
      *a2 = a1[4];
      return v14;
    }
    if ( v13 == 1 )
    {
      v5 = a1[4];
      v6 = a1[5];
      goto LABEL_3;
    }
  }
  else
  {
    v10 = *(a1 - 7) + 128LL;
    v11 = *(_QWORD *)(*(a1 - 7) + 136LL);
    do
    {
      v12 = *(unsigned int *)(v10 + 44);
      v10 = *(_QWORD *)(v10 + 16);
      result += v12;
    }
    while ( v10 );
    *a2 = result;
    return v11;
  }
  return result;
}

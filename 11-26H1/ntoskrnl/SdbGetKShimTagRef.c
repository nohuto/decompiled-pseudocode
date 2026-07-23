/*
 * XREFs of SdbGetKShimTagRef @ 0x14088814C
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbTagIDToTagRef @ 0x14088BFF0 (SdbTagIDToTagRef.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1409D6D00 (SdbFindFirstStringIndexedTag.c)
 */

__int64 __fastcall SdbGetKShimTagRef(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  unsigned int FirstStringIndexedTag; // edi
  int v7; // eax
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( !v2
    || (v5 = SdbFindFirstStringIndexedTag(v2, 28709LL, 24577LL, a2, v9),
        FirstStringIndexedTag = v5,
        *(_QWORD *)(a1 + 16) == v2)
    && (unsigned int)SdbFindFirstTag(v2, v5, 4120LL)
    || !FirstStringIndexedTag )
  {
    v2 = *(_QWORD *)(a1 + 8);
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v2, 28709LL, 24577LL, a2, v9);
  }
  v7 = SdbTagIDToTagRef(a1, v2, FirstStringIndexedTag, &v11);
  return v11 & (unsigned int)-(v7 != 0);
}

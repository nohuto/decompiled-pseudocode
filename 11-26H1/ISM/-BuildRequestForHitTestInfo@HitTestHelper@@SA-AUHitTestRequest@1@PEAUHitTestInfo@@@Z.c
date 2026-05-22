/*
 * XREFs of ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x1801A1E14
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801A1F30 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

_DWORD *__fastcall HitTestHelper::BuildRequestForHitTestInfo(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax

  memset_0(a1, 0, 0x88uLL);
  v6 = HitTestHelper::ConvertInputTypeToPointerType(*a2, v4, v5);
  *a1 = v6;
  if ( v6 == 4 )
  {
    v7 = a2[8];
    v8 = 0;
    if ( (v7 & 0x180000) != 0 )
    {
      v9 = (((*((__int16 *)a2 + 18) >> 31) & 0xFFFFFFFE) + 3) | 4;
      if ( (v7 & 0x100000) == 0 )
        v9 = ((*((__int16 *)a2 + 18) >> 31) & 0xFFFFFFFE) + 3;
      v8 = v9 | 0x100;
      if ( !*((_BYTE *)a2 + 56) )
        v8 = v9;
    }
    v10 = v8 | 8;
    if ( (v7 & 0x10000) == 0 )
      v10 = v8;
    v11 = v10 | 0x20;
    if ( !*((_BYTE *)a2 + 57) )
      v11 = v10;
    a1[26] = v11;
  }
  *(_QWORD *)(a1 + 1) = *(_QWORD *)(a2 + 11);
  a1[27] = a2[6];
  return a1;
}

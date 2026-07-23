/*
 * XREFs of RtlpCompareConfigNodeWithSpec @ 0x18004DB44
 * Callers:
 *     RtlpTraverseParents @ 0x18004E7C0 (RtlpTraverseParents.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpCompareConfigNodeWithSpec(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  char v4; // r10
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // r8
  int v14; // ecx

  v4 = 0;
  if ( !a1 || !a4 )
    return 0;
  v7 = *a4;
  v8 = (unsigned __int16)a4[1] >> 14;
  if ( v8 == 2 )
  {
    if ( (v7 & 0x8000u) != 0LL )
      return 0;
    v10 = *(_QWORD *)(a1 + 24);
    if ( (int)v7 >= *(unsigned __int16 *)(v10 + 6) )
      return 0;
    v11 = *(_QWORD *)(v10 + 16);
    v12 = 28 * v7 + v11 == 0;
    v13 = 28 * v7 + v11;
    v14 = 0;
    if ( v12 )
      return 0;
    LOWORD(v7) = *(_WORD *)(v13 + 4);
    if ( (_WORD)v7 == 4096 || (_WORD)v7 == 5120 || !(_WORD)v7 )
    {
      LOWORD(v7) = *(_WORD *)(v13 + 6);
      if ( (__int16)v7 <= 0 )
      {
        v8 = 0;
        LOWORD(v7) = 0;
        v14 = -1073741811;
      }
      else
      {
        v8 = 3;
      }
    }
    else
    {
      v8 = 1;
    }
    if ( v14 < 0 )
      return 0;
  }
  if ( a2 == v8 )
    return a3 == (__int16)v7;
  return v4;
}

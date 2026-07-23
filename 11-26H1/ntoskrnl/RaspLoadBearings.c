/*
 * XREFs of RaspLoadBearings @ 0x14071E024
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x1404A6FB0 (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140356A58 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x140356ED0 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall RaspLoadBearings(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  int v7; // edx
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int16 v13; // ax
  int v14; // esi
  __int16 v15; // bx
  int v16; // r14d
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // [rsp+60h] [rbp+8h] BYREF
  __int16 v24; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 68);
  v23 = 0;
  v24 = 0;
  v11 = *(_QWORD *)(v5 + 16);
  if ( a2 >= v4 )
  {
    v16 = v7 + 4 * v4;
    result = FioFwReadBytesAtOffset(v11, v16 - 4, 4u, &v23);
    if ( (int)result < 0 )
      return result;
    v14 = (unsigned __int16)__ROR2__(v23, 8);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v16 + 2 * (a2 - v4), &v24);
    if ( (int)result < 0 )
      return result;
    v15 = v24;
  }
  else
  {
    result = FioFwReadBytesAtOffset(v11, v7 + 4 * a2, 4u, &v23);
    if ( (int)result < 0 )
      return result;
    v13 = __ROR2__(v23, 8);
    v14 = v13;
    v15 = __ROR2__(HIWORD(v23), 8);
    if ( !v13 )
    {
      result = FioFwReadBytesAtOffset(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 *(_DWORD *)(a1 + 68) - 4 + 4 * v4,
                 4u,
                 &v23);
      if ( (int)result < 0 )
        return result;
      v14 = (unsigned __int16)__ROR2__(v23, 8);
    }
  }
  if ( v15 < 0 )
    v15 = 0;
  v17 = *(_DWORD *)(a3 + 18);
  v18 = *(unsigned __int16 *)(a3 + 24);
  v19 = *(_QWORD *)(a3 + 50);
  v20 = v15 + *(_DWORD *)(a3 + 10) - v17;
  if ( v14 >= v20 )
    v20 = v14;
  *(_DWORD *)(v19 + 4 * v18) = v17 - v15;
  *a4 = v20;
  *(_DWORD *)(v19 + 4 * v18 + 4) = *(_DWORD *)(a3 + 18) + v20 - v15;
  v21 = *(unsigned __int16 *)(a3 + 24);
  v22 = *(_QWORD *)(a3 + 58);
  *(_DWORD *)(v22 + 4 * v21) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  result = 0LL;
  *(_DWORD *)(v22 + 4 * v21 + 4) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  *(_WORD *)(a3 + 24) += 2;
  return result;
}

/*
 * XREFs of sub_14013BC70 @ 0x14013BC70
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 * Callees:
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 */

__int64 __fastcall sub_14013BC70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v5 + *(_QWORD *)a1) = -8;
  ++*(_DWORD *)(a1 + 12);
  v10 = a2;
  sub_1401352EC((char *)&v10, 8u);
  result = sub_14013BDC4(a1, &v10, v6);
  if ( (int)result >= 0 )
  {
    v10 = a3;
    sub_1401352EC((char *)&v10, 8u);
    result = sub_14013BDC4(a1, &v10, v8);
    if ( (int)result >= 0 )
    {
      v9 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a1 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v9 + *(_QWORD *)a1) = -16;
      ++*(_DWORD *)(a1 + 12);
      return 0LL;
    }
  }
  return result;
}

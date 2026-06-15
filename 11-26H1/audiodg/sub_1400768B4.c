/*
 * XREFs of sub_1400768B4 @ 0x1400768B4
 * Callers:
 *     sub_14007A4F0 @ 0x14007A4F0 (sub_14007A4F0.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_140076248 @ 0x140076248 (sub_140076248.c)
 *     sub_1400782D4 @ 0x1400782D4 (sub_1400782D4.c)
 *     sub_140078348 @ 0x140078348 (sub_140078348.c)
 */

__int64 __fastcall sub_1400768B4(unsigned int *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = a3[4];
    v14[0] = &v15;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v10 = a3[3];
    v15 = v8;
    v11 = *(_BYTE *)(v8 + 56) == 0;
    v14[3] = v10;
    if ( v11 )
      v12 = sub_140076248((volatile signed __int32 *)(v8 + 40), (__int64)v14, v9);
    else
      v12 = sub_1400782D4(v14, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = v12;
    sub_140075EC0(&v15, a2);
    if ( a1[1] != (_DWORD)v15 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        sub_140078348(a4);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}

/*
 * XREFs of sub_140076AE4 @ 0x140076AE4
 * Callers:
 *     sub_14007BB80 @ 0x14007BB80 (sub_14007BB80.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_1400762BC @ 0x1400762BC (sub_1400762BC.c)
 *     sub_140078384 @ 0x140078384 (sub_140078384.c)
 */

__int64 __fastcall sub_140076AE4(unsigned int *a1, __int64 a2, __int64 *a3, _BYTE ***a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  _BYTE ***v9; // rdx
  bool v10; // zf
  unsigned int v11; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = (_BYTE ***)a3[2];
    v13[0] = a3[1];
    v14 = v8;
    v10 = *(_BYTE *)(v8 + 56) == 0;
    v13[1] = &v14;
    if ( v10 )
      v11 = sub_1400762BC((volatile signed __int32 *)(v8 + 40), (__int64)v13, v9);
    else
      v11 = sub_140078384(v13, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = v11;
    sub_140075EC0(&v14, a2);
    if ( a1[1] != (_DWORD)v14 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
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

/*
 * XREFs of sub_14006455C @ 0x14006455C
 * Callers:
 *     sub_1400644A8 @ 0x1400644A8 (sub_1400644A8.c)
 * Callees:
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 */

__int64 __fastcall sub_14006455C(_QWORD *a1, int *a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (unsigned int)*a2;
  v3 = 0;
  v10 = 16777217;
  if ( (unsigned int)v2 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( (unsigned int)sub_140038A9C((void *)(v2 + *a1), (unsigned int)(4096 - v2), &v10, 4uLL) )
    return (unsigned int)-2147024774;
  v6 = *a2 + 4;
  *a2 = v6;
  if ( (unsigned int)(4096 - v6) < 4 )
    return (unsigned int)-2147024774;
  v7 = v6 + 4;
  *a2 = v7;
  if ( (unsigned int)(4096 - v7) < 4 )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    v8 = v7 + 4;
    *a2 = v8;
    *(_DWORD *)(*a1 + v2 + 8) = v8 - v2;
  }
  return v3;
}

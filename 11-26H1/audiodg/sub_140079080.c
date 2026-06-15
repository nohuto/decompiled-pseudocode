/*
 * XREFs of sub_140079080 @ 0x140079080
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007EEE4 @ 0x14007EEE4 (sub_14007EEE4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140079080(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  __int64 v3; // r10
  signed __int32 v4; // ecx
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (unsigned __int8)sub_14007EEE4(a1, 4LL) )
  {
    sub_1400B6010(v3);
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 56);
    v6 = -2;
    _InterlockedCompareExchange(&v6, v4, -2);
    if ( v6 != v2 )
    {
      v1 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v1;
}

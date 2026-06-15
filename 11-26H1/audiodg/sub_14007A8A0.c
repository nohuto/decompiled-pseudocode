/*
 * XREFs of sub_14007A8A0 @ 0x14007A8A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400792AC @ 0x1400792AC (sub_1400792AC.c)
 *     sub_14007F810 @ 0x14007F810 (sub_14007F810.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007A8A0(__int64 a1, _QWORD *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  signed __int32 v8; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 72);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v2, -2);
  if ( v8 == 3 )
  {
    v9 = 0;
    sub_1400792AC(a1 + 16, &v9);
    v5 = v9;
    if ( v9 < 0 )
      return v5;
  }
  else if ( v8 != 1 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return v5;
  }
  v8 = 0;
  v5 = sub_14007F810(a1 + 16, &v8);
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v8 == 1 && (v6 = *(_QWORD *)(a1 + 176)) != 0 )
    {
      *a2 = v6;
      sub_1400B6010(v6);
    }
    else if ( v8 )
    {
      if ( v8 == 2 )
        return (unsigned int)-2147467260;
      else
        return (unsigned int)-2147467259;
    }
    else
    {
      return (unsigned int)-2147483638;
    }
  }
  return v5;
}

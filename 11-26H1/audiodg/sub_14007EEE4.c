/*
 * XREFs of sub_14007EEE4 @ 0x14007EEE4
 * Callers:
 *     sub_140078D40 @ 0x140078D40 (sub_140078D40.c)
 *     sub_140079080 @ 0x140079080 (sub_140079080.c)
 *     sub_140079AA0 @ 0x140079AA0 (sub_140079AA0.c)
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_14007E7A0 @ 0x14007E7A0 (sub_14007E7A0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14007EEE4(__int64 a1, signed __int32 a2)
{
  signed __int32 v2; // r8d
  signed __int32 v4; // ecx
  signed __int32 v6; // [rsp+10h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v6 = -2;
  _InterlockedCompareExchange(&v6, v2, -2);
  switch ( a2 )
  {
    case 0:
      v4 = v6;
      if ( v6 != -1 )
        return 0;
      return v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), a2, v4);
    case 1:
    case 2:
    case 3:
      v4 = v6;
      if ( v6 )
        return 0;
      return v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), a2, v4);
    case 4:
      v4 = v6;
      if ( (unsigned int)(v6 - 1) <= 3 )
        return v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), a2, v4);
      break;
  }
  return 0;
}

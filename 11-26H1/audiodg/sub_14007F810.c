/*
 * XREFs of sub_14007F810 @ 0x14007F810
 * Callers:
 *     sub_14007A8A0 @ 0x14007A8A0 (sub_14007A8A0.c)
 * Callees:
 *     sub_140078EFC @ 0x140078EFC (sub_140078EFC.c)
 */

__int64 __fastcall sub_14007F810(__int64 a1, _DWORD *a2)
{
  signed __int32 v2; // r8d
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v4 = -2;
  _InterlockedCompareExchange(&v4, v2, -2);
  *a2 = v4;
  return sub_140078EFC(a1);
}

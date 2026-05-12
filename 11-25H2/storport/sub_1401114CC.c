/*
 * XREFs of sub_1401114CC @ 0x1401114CC
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 *     sub_14010362C @ 0x14010362C (sub_14010362C.c)
 *     sub_1401085A8 @ 0x1401085A8 (sub_1401085A8.c)
 *     sub_140108958 @ 0x140108958 (sub_140108958.c)
 *     sub_1401A6E7C @ 0x1401A6E7C (sub_1401A6E7C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1401114CC(__int64 a1)
{
  __int64 v1; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 464) )
  {
    v1 = *(_QWORD *)(a1 + 112);
    if ( (v1 & 0x20) == 0 )
    {
      *(_QWORD *)(a1 + 112) = v1 | 0x20;
      _InterlockedOr(v2, 0);
      KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    }
  }
}

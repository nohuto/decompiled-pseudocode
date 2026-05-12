/*
 * XREFs of sub_14012CFC0 @ 0x14012CFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_14012D03C @ 0x14012D03C (sub_14012D03C.c)
 */

void __fastcall sub_14012CFC0(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 8LL);
  if ( sub_1400F7308((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~4u;
    *(_DWORD *)(Context[16] + 64LL) = 0;
    if ( *((_DWORD *)Context + 67) )
    {
      if ( (*(_DWORD *)(Context[16] + 136LL) & 0x10) != 0 )
        *((_BYTE *)Context + 276) = 0;
    }
    sub_14012D03C(Context);
    sub_1400F7368((__int64)Context);
  }
}

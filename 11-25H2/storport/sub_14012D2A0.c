/*
 * XREFs of sub_14012D2A0 @ 0x14012D2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     sub_14012D318 @ 0x14012D318 (sub_14012D318.c)
 */

void __fastcall sub_14012D2A0(_QWORD *Context)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax

  ++**(_QWORD **)(Context[16] + 32LL);
  if ( sub_1400F7308((__int64)Context) )
  {
    sub_1400F8C38((__int64)Context, 0LL);
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) |= 4u;
    v2 = Context[16];
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 8) != 0 )
      *(_DWORD *)(v3 + 32) = v4 & 0xFFFFFFF7;
    else
      *(_DWORD *)(v2 + 64) = 1;
    sub_14012D318(Context);
    sub_1400F7368((__int64)Context);
  }
}

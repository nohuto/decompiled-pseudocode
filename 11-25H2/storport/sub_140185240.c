/*
 * XREFs of sub_140185240 @ 0x140185240
 * Callers:
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     sub_1400A1DE8 @ 0x1400A1DE8 (sub_1400A1DE8.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140185240(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  size_t v6; // r8

  result = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(result + 6000);
  if ( v5 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 168) = 1699567182;
    *(_OWORD *)(a1 + 177) = *(_OWORD *)(v5 + 24);
    *(_OWORD *)(a1 + 193) = *(_OWORD *)(v5 + 40);
    *(_QWORD *)(a1 + 209) = *(_QWORD *)(v5 + 56);
    sub_1400A1DE8(v5, a1 + 498, 4u);
    if ( *(_WORD *)(a2 + 10) )
    {
      v6 = 20LL;
      if ( *(_WORD *)(a2 + 8) < 0x14u )
        v6 = *(unsigned __int16 *)(a2 + 8);
      memmove((void *)(a1 + 242), *(const void **)(a2 + 16), v6);
    }
    result = 0LL;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  return result;
}

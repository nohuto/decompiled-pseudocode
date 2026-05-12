/*
 * XREFs of sub_1400DF424 @ 0x1400DF424
 * Callers:
 *     sub_1400DCAF8 @ 0x1400DCAF8 (sub_1400DCAF8.c)
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400F16A4 @ 0x1400F16A4 (sub_1400F16A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400DF424(__int64 a1)
{
  __int64 v1; // r8
  __int64 *v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 168);
  v2 = (__int64 *)(a1 + 184);
  *(_QWORD *)(v1 + 96) = 0LL;
  if ( (*(_BYTE *)(a1 + 17) & 0x40) != 0 )
  {
    result = *v2;
    *(_QWORD *)(v1 + 64) = *v2;
    *(_BYTE *)(a1 + 17) &= ~0x40u;
  }
  *(_BYTE *)(a1 + 16) &= 0xE3u;
  *(_DWORD *)(a1 + 780) = -1;
  *v2 = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  return result;
}

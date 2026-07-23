/*
 * XREFs of MiInitializeProcessPageTableCommitmentBitMaps @ 0x1404C37E0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInitializeProcessPageTableCommitmentBitMaps(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 *v2; // r10
  __int64 v3; // r8
  __int64 v4; // r11
  _QWORD *result; // rax
  _QWORD *v6; // r9
  __int64 v7; // rdx

  v1 = *(_QWORD **)(a1 + 1040);
  v2 = qword_140E2DFE8;
  v3 = 256LL;
  v4 = 2LL;
  result = v1 + 181;
  v1[189] = 256LL;
  v1[190] = v1 + 181;
  v6 = v1 + 192;
  do
  {
    v7 = *v2++;
    v3 <<= 9;
    *v6 = qword_140E2DFC8 + v7;
    *(v6 - 1) = v3;
    v6 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}

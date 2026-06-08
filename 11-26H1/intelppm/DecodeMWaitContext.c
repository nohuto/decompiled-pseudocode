/*
 * XREFs of DecodeMWaitContext @ 0x140007D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DecodeMWaitContext(__int64 a1, int a2, __int64 a3)
{
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 16);
  *(_DWORD *)a3 = a2;
}

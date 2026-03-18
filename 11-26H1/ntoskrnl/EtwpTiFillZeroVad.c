/*
 * XREFs of EtwpTiFillZeroVad @ 0x140492140
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140258ACC (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillVadEventWrite @ 0x140492078 (EtwpTiFillVadEventWrite.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillZeroVad(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = &qword_14001F660;
  result = 7LL;
  a1[2] = &qword_14001F660;
  a1[3] = 8LL;
  a1[4] = &qword_14001F660;
  a1[5] = 4LL;
  a1[6] = &qword_14001F660;
  a1[7] = 4LL;
  a1[8] = &qword_14001F660;
  a1[9] = 8LL;
  a1[10] = &qword_14001F660;
  a1[11] = 8LL;
  a1[12] = &qword_14001F660;
  a1[13] = 2LL;
  return result;
}

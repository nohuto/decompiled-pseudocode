/*
 * XREFs of PopInitializeIRTimer @ 0x140603270
 * Callers:
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     PopNetInitialize @ 0x140CDB1D8 (PopNetInitialize.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 */

__int64 __fastcall PopInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int16 a6, int a7)
{
  unsigned __int16 v10; // [rsp+50h] [rbp+18h] BYREF
  __int16 v11; // [rsp+52h] [rbp+1Ah]
  int v12; // [rsp+54h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v10 = 8;
  v11 = a6;
  KeInitializeIRTimer(a1, a2, 0LL, &v10, a7);
  return PopInitializeWorkItem(a1 + 136, a4, 0LL);
}

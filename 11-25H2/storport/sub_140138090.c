/*
 * XREFs of sub_140138090 @ 0x140138090
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_1401360E4 @ 0x1401360E4 (sub_1401360E4.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_1400860EC @ 0x1400860EC (sub_1400860EC.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 */

__int64 __fastcall sub_140138090(_DWORD *a1, ULONG_PTR a2, __int64 a3, char a4)
{
  int v7; // esi
  unsigned int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  union _LARGE_INTEGER v11; // rbx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = a3;
  v15 = 0;
  v7 = 10000;
  v8 = 1;
  while ( 1 )
  {
    v9 = sub_14008562C((__int64)a1, a2, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( !a4 || v9 != -2147483631 )
        return v10;
      goto LABEL_15;
    }
    if ( !a4 )
      return v10;
    Interval.QuadPart = 0LL;
    sub_1400859B4(a1, a2, &Interval, &v15);
    if ( v15 < 0x14 )
      break;
    v11 = Interval;
    v14 = *(_DWORD *)(Interval.QuadPart + 16);
    sub_1401352EC((char *)&v14, 4u);
    Interval.LowPart = *(_DWORD *)(v11.QuadPart + 8);
    sub_1401352EC((char *)&Interval, 4u);
    if ( v14 )
      return v10;
    if ( !Interval.LowPart )
      break;
    if ( Interval.LowPart > 1 )
      return (unsigned int)-2147483643;
    v10 = -2147483631;
    if ( --v7 )
    {
      sub_1400860EC(a1, a2);
      Interval.QuadPart = 0LL;
      if ( KeGetCurrentIrql() < 2u )
      {
        Interval.QuadPart = -10000LL * v8;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      else
      {
        KeStallExecutionProcessor(1000 * v8);
      }
      v8 = 5;
    }
    else
    {
LABEL_15:
      if ( !v7 )
        return v10;
    }
  }
  return (unsigned int)-1073741435;
}

/*
 * XREFs of PepIdleExecute @ 0x14000B950
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateIdleExecute @ 0x140001F00 (AcpiCStateIdleExecute.c)
 */

__int64 __fastcall PepIdleExecute(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  int v7; // ecx
  __int64 v8; // rcx
  _DWORD v10[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( LOBYTE(a1[11 * a3 + 17]) )
  {
    return (unsigned int)AcpiCStateIdleExecute((__int64)a1, a2, a3, a4, a5);
  }
  else
  {
    v8 = *a1;
    v10[1] = a3;
    v11 = a7;
    v10[3] = a6;
    v10[0] = 0;
    v10[2] = a4;
    v7 = PoFxProcessorNotification(v8, 5LL, v10);
    if ( v7 >= 0 && v10[0] < 0 )
      return (unsigned int)v10[0];
  }
  return (unsigned int)v7;
}

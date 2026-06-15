/*
 * XREFs of sub_1400AD490 @ 0x1400AD490
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003AC54 @ 0x14003AC54 (sub_14003AC54.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 *     sub_1400AD2E8 @ 0x1400AD2E8 (sub_1400AD2E8.c)
 */

char __fastcall sub_1400AD490(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r9
  _DWORD *v7; // rax

  if ( *(_BYTE *)(a1 - 1400) )
  {
    v4 = a1 - 1496;
    v6 = (unsigned int)sub_14003AC54(a1 - 1496 + 616);
    v7 = dword_1400C7120;
    if ( dword_1400C7120[v6] )
    {
      LOBYTE(v7) = sub_1400AD2E8(v4, v5);
      *(_BYTE *)(v4 + 1400) = (_BYTE)v7;
    }
  }
  else
  {
    LOBYTE(v7) = sub_1400AC500(
                   "CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticControlData_V1,struct SpatialVolatileCont"
                   "rolData_V0,struct SpatialControlData_V1>::PulseEndpoint",
                   36,
                   2289827859LL,
                   a4);
  }
  return (char)v7;
}

/*
 * XREFs of ACPIAllocateBuffer @ 0x1400CC4F4
 * Callers:
 *     ACPIBusIrpQueryInstanceId @ 0x1400CADD4 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400CAFC0 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400CB6B0 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400CC08C (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAllocateBuffer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = a3;
  *a1 = a3;
  v5 = -1LL;
  if ( (v3 & 0x200000000000LL) != 0 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 608) + v7) );
    v4 += 10 * v7;
    *a1 = v4;
  }
  if ( (v3 & 0x400000000000LL) != 0 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 616) + v8) );
    v4 += 10 * v8;
    *a1 = v4;
  }
  if ( (*(_BYTE *)(a2 + 1008) & 0x10) != 0 )
  {
    do
      ++v5;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 624) + v5) );
    v4 += 10 * v5;
    *a1 = v4;
  }
  return ExAllocatePool2(256LL, v4, 1114661697LL);
}

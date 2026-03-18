/*
 * XREFs of AcpiFunctionLevelDeviceReset @ 0x1400A92EC
 * Callers:
 *     AcpiDeviceBusSpecificReset @ 0x1400AE970 (AcpiDeviceBusSpecificReset.c)
 *     AcpiDeviceReset @ 0x1400D4160 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AcpiFunctionLevelDeviceResetComplete @ 0x1400AEA20 (AcpiFunctionLevelDeviceResetComplete.c)
 */

__int64 __fastcall AcpiFunctionLevelDeviceReset(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  if ( !*(_QWORD *)(v2 + 768) )
  {
    v5 = -1073741810;
LABEL_12:
    AcpiFunctionLevelDeviceResetComplete(0LL, 0LL, 0LL, v3);
    return v5;
  }
  if ( !*(_QWORD *)(v2 + 496) )
  {
    v5 = -1073741637;
    goto LABEL_12;
  }
  if ( a2 )
  {
    if ( *(_DWORD *)a2 < 0x18u )
    {
      v5 = -1073741811;
      goto LABEL_12;
    }
    Pool2 = ExAllocatePool2(256LL, 24LL, 1366319937LL);
    v3 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_12;
    }
    *(_OWORD *)Pool2 = *(_OWORD *)a2;
    *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a2 + 16);
  }
  v5 = AMLIAsyncEvalObject(*(__int64 **)(v2 + 496), 0LL, 0, 0LL, AcpiFunctionLevelDeviceResetComplete, v3);
  if ( v5 != 259 )
    goto LABEL_12;
  return v5;
}

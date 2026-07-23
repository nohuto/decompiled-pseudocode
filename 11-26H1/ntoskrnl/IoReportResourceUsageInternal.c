/*
 * XREFs of IoReportResourceUsageInternal @ 0x1407A4E78
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportResourceForDetection @ 0x1407A4AA0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1407A4C90 (IoReportResourceUsage.c)
 * Callees:
 *     IopChangeInterfaceType @ 0x1407A4FA0 (IopChangeInterfaceType.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     PnpCmResourcesToIoResources @ 0x140AA0FBC (PnpCmResourcesToIoResources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoReportResourceUsageInternal(
        __int64 a1,
        void *a2,
        int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        _BYTE *a10)
{
  _DWORD *v10; // rdi
  unsigned int v11; // ebx
  int v13; // r13d
  void *v14; // rsi
  _BYTE *v16; // r15
  unsigned int v17; // ebp
  char v18; // r14
  int v19; // edi
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  P = a2;
  v10 = a7;
  v11 = 0;
  v13 = a1;
  if ( !a7 )
  {
    if ( !a4 )
    {
      v14 = 0LL;
LABEL_9:
      v10 = 0LL;
      goto LABEL_10;
    }
    v10 = a4;
  }
  v14 = 0LL;
  if ( !*v10 || !v10[4] )
    goto LABEL_9;
  v14 = (void *)PnpCmResourcesToIoResources(a1, v10, 12288LL);
  if ( !v14 )
    return 3221225473LL;
LABEL_10:
  v16 = a10;
  v17 = 0;
  P = v10;
  v18 = 0;
  *a10 = 1;
  while ( 1 )
  {
    v19 = IopLegacyResourceAllocation(v13, a3, a6, (_DWORD)v14, (__int64)&P);
    if ( v19 >= 0 )
      break;
    if ( (unsigned __int8)IopChangeInterfaceType(v14, &P) )
    {
      ++v17;
      v18 = 1;
      if ( v17 < 2 )
        continue;
    }
    goto LABEL_16;
  }
  *v16 = 0;
LABEL_16:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v18 )
    ExFreePoolWithTag(P, 0);
  if ( v19 < 0 )
  {
    if ( v19 != -1073741670 )
      return (unsigned int)-1073741800;
    return (unsigned int)v19;
  }
  return v11;
}

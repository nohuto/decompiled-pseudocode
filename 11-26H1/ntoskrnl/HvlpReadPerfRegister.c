/*
 * XREFs of HvlpReadPerfRegister @ 0x1405BCEB8
 * Callers:
 *     HvlReadPerfIoPort @ 0x1405BBFF0 (HvlReadPerfIoPort.c)
 *     HvlReadPerfMsr @ 0x1405BC070 (HvlReadPerfMsr.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpReadPerfRegister(int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v5; // ax
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  v7[0] = a1;
  v8 = a2;
  v7[1] = 0;
  v5 = HvcallFastExtended(65564LL, (unsigned __int64)v7, 0x10u, (__int64)v9, 0x10u);
  if ( v5 )
    return (unsigned int)HvlpHvToNtStatus(v5);
  else
    *a3 = v9[0];
  return v3;
}

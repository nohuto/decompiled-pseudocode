/*
 * XREFs of ACPIInitializeDDB @ 0x1400DB558
 * Callers:
 *     ACPIInitializeDDBs @ 0x1400D7B14 (ACPIInitializeDDBs.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1400DD30C (ACPILoadTableCheckSum.c)
 */

__int64 __fastcall ACPIInitializeDDB(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v3; // eax
  int v4; // edx
  int v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  if ( !(unsigned __int8)ACPILoadTableCheckSum(v1, *(unsigned int *)(v1 + 4)) )
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, v1, *(unsigned int *)(v1 + 32));
  v3 = AMLILoadDDB(v1, &v7);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v3;
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        37,
        (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
        v6);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, v1, *(unsigned int *)(v1 + 32));
  }
  *(_QWORD *)(a1 + 16) = v7;
  return 0LL;
}

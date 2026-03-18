/*
 * XREFs of RIMFillDeviceHealthInfo @ 0x1401DACC0
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1401DBAD8 (RIMLogDeviceHealthTelemetry.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMFillDeviceHealthInfo(void *a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // rax
  _DWORD Src[7]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+3Ch] [rbp-2Ch]
  BOOL v9; // [rsp+40h] [rbp-28h]
  BOOL v10; // [rsp+44h] [rbp-24h]
  int v11; // [rsp+48h] [rbp-20h]

  v8 = 0;
  Src[0] = RimDeviceTypeToRimInputType(a2, *(_DWORD *)(a2 + 48));
  v4 = *(_DWORD *)(v3 + 168);
  Src[4] = (v4 >> 13) & 1;
  Src[5] = __CFSHR__(v4, 12);
  Src[6] = __CFSHR__(v4, 13);
  v9 = (v4 & 0x80u) != 0;
  v10 = !__CFSHR__(v4, 13) && !__CFSHR__(v4, 12) && (v4 & 0x100) == 0;
  Src[1] = *(_DWORD *)(v3 + 272);
  Src[2] = *(_DWORD *)(v3 + 256);
  Src[3] = *(_DWORD *)(v3 + 136);
  v11 = (v4 >> 27) & 1;
  if ( (*(_DWORD *)(v3 + 184) & 0x80u) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 456);
    if ( v5 )
      v8 = -__CFSHR__(*(_DWORD *)(v5 + 368), 13);
  }
  RIMLogDeviceHealthTelemetry(v3);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a1, Src, 0x2CuLL);
  return 1LL;
}

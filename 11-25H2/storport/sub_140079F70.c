/*
 * XREFs of sub_140079F70 @ 0x140079F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 *     sub_140077A5C @ 0x140077A5C (sub_140077A5C.c)
 */

void __fastcall sub_140079F70(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, char *Context)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 620);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      sub_140021110((__int64)Context, 0LL, 0LL);
    sub_140077A5C((__int64)Context);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 620));
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
  {
    v9 = 1;
    v8 = *((_DWORD *)Context + 14);
    sub_1400541AC(v6, &stru_14014AE78, v7, **((_QWORD **)Context + 620), v8, v9);
  }
  if ( *((char **)Context + 718) == Context + 5744 )
    Context[109] &= ~0x40u;
  else
    sub_14006C334(*((struct _DEVICE_OBJECT **)Context + 1));
}

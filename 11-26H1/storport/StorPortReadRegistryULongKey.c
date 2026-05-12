/*
 * XREFs of StorPortReadRegistryULongKey @ 0x140052F18
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorPortReadRegistryULongKey(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  PVOID SystemRoutineAddress; // rax
  int v8; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-19h] BYREF
  int v12; // [rsp+50h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-9h]
  __int64 v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+68h] [rbp+7h]
  int *v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+E0h] [rbp+7Fh] BYREF

  v18 = a4;
  memset_0(v11, 0, 0x70uLL);
  v18 = 0;
  v16 = &v18;
  v12 = 292;
  v13 = a2;
  DestinationString = 0LL;
  v15 = 67108868;
  v17 = 4;
  v14 = a3;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, _QWORD))SystemRoutineAddress)(
         0x80000000LL,
         a1,
         v11,
         0LL,
         0LL);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      18LL,
      &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids,
      (unsigned int)v8);
  }
  return (unsigned int)v8;
}

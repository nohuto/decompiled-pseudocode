/*
 * XREFs of HalpCmciLoadThresholdConfiguration @ 0x14050DE04
 * Callers:
 *     HalpCmciInit @ 0x140C0F0DC (HalpCmciInit.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmGetSystemRoutineAddress @ 0x140A8B460 (MmGetSystemRoutineAddress.c)
 */

__int64 HalpCmciLoadThresholdConfiguration()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+68h] [rbp-98h]
  const wchar_t *v13; // [rsp+70h] [rbp-90h]
  int *v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+80h] [rbp-80h]
  int *v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-60h]
  const wchar_t *v19; // [rsp+A8h] [rbp-58h]
  unsigned int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  int *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+D8h] [rbp-28h]
  const wchar_t *v25; // [rsp+E0h] [rbp-20h]
  unsigned int *v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+F0h] [rbp-10h]
  int *v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+100h] [rbp+0h]

  v3 = 0;
  v5 = 0;
  v4 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  result = (unsigned int)_InterlockedCompareExchange(&HalpCmciConfigurationLoaded, 1, 0);
  if ( !(_DWORD)result )
  {
    memset_0(v11, 0, 0xE0uLL);
    v7 = 60;
    v15 = 67108868;
    v21 = 67108868;
    v13 = L"CMCThresholdCount";
    v1 = 100;
    v27 = 67108868;
    v14 = &v3;
    v6 = 100;
    v16 = &v6;
    v17 = 4;
    v19 = L"CMCThresholdSeconds";
    v23 = 4;
    v20 = &v4;
    v22 = &v7;
    v25 = L"CMCPollingLimit";
    v26 = &v5;
    v29 = 4;
    v28 = &v8;
    v8 = -1;
    v12 = 304;
    v18 = 304;
    v24 = 304;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    MmGetSystemRoutineAddress(&DestinationString);
    if ( (int)guard_dispatch_icall_no_overrides(2147483650LL, L"Session Manager") >= 0 )
    {
      v1 = v3;
    }
    else
    {
      v3 = 100;
      v4 = 60;
      v5 = -1;
    }
    v2 = 2;
    if ( v1 > 2 )
      v2 = v1;
    HalpCmciThresholdCount = v2;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    HalpCmciThresholdTime = PerformanceFrequency.QuadPart * v4;
    result = v5;
    HalpCmcPollCount = v5;
  }
  return result;
}

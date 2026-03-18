/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1400F54FC
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  LONG x; // ebx
  int v6; // r14d
  int v7; // r15d
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-48h]
  LONG y; // [rsp+8Ch] [rbp+14h]
  struct tagPOINT v21; // [rsp+98h] [rbp+20h]

  y = a2.y;
  x = a2.x;
  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2070LL);
  v6 = *((_DWORD *)a1 + 33);
  v7 = _mm_cvtsi128_si32(*(__m128i *)((char *)a1 + 124));
  v18 = *(_OWORD *)((char *)a1 + 140);
  v19 = *(_OWORD *)((char *)a1 + 124);
  if ( v7 >= v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
  if ( (int)v18 >= SDWORD2(v18) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  v8 = v6 - v7;
  v9 = (DWORD2(v18) - (int)v18) * (__int64)(x - v7);
  v10 = 2 * v9;
  if ( v9 <= 0 )
    v11 = v10 - v8;
  else
    v11 = v8 + v10;
  v12 = (int)v18 + v11 / (2LL * v8);
  if ( v12 < (__int64)0xFFFFFFFF80000000uLL || v12 > 0x7FFFFFFF )
    goto LABEL_10;
  v21.x = v12;
  if ( (int)v12 >= SDWORD2(v18) )
    v21.x = DWORD2(v18) - 1;
  if ( SDWORD1(v19) >= SHIDWORD(v19) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
  if ( SDWORD1(v18) >= SHIDWORD(v18) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  v13 = HIDWORD(v19) - DWORD1(v19);
  v14 = (HIDWORD(v18) - DWORD1(v18)) * (__int64)(y - DWORD1(v19));
  v15 = 2 * v14;
  v16 = v14 <= 0 ? v15 - v13 : v13 + v15;
  v17 = SDWORD1(v18) + v16 / (2LL * v13);
  if ( v17 < (__int64)0xFFFFFFFF80000000uLL || v17 > 0x7FFFFFFF )
  {
LABEL_10:
    *a3 = 0LL;
  }
  else
  {
    v21.y = v17;
    if ( (int)v17 >= SHIDWORD(v18) )
      v21.y = HIDWORD(v18) - 1;
    *a3 = v21;
  }
}

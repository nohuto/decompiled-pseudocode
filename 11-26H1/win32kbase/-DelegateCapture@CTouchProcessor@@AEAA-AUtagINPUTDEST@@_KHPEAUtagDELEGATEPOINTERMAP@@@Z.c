/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x14015B950
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x14021482C (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x14004E250 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x14015BDFC (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        PERESOURCE *a1,
        _OWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  const struct tagINPUTDEST *v15; // rax
  int v16; // r8d
  __int128 v17; // xmm2
  __int128 v18; // xmm7
  __m128i v19; // xmm0
  __int128 v20; // xmm6
  __int128 v21; // xmm5
  __int128 v22; // xmm4
  __int128 v23; // xmm3
  __int128 v24; // xmm1
  int v25; // ecx
  int v27; // [rsp+28h] [rbp-E0h]
  _OWORD v28[7]; // [rsp+38h] [rbp-D0h] BYREF
  char v29; // [rsp+A8h] [rbp-60h]
  _BYTE v30[112]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v31[10]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v32; // [rsp+178h] [rbp+70h] BYREF
  int v33; // [rsp+184h] [rbp+7Ch]

  memset(v28, 0, sizeof(v28));
  v29 = 0;
  if ( !tagDomLock::IsLockedShared(a1 + 4) )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11118LL);
  }
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(a1, a3);
  if ( PointerCaptureData )
  {
    *(_WORD *)a5 = *((_WORD *)PointerCaptureData + 10);
    *(_DWORD *)(a5 + 4) = *((_DWORD *)PointerCaptureData + 6);
    v15 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v30, PointerCaptureData, 1LL, v27);
    CInputDest::CInputDest((CInputDest *)v31, v15);
    CInputDest::operator=(v28, v31, v16);
    if ( v33 )
      HMAssignmentUnlock(&v32);
    v17 = v28[5];
    v18 = v28[0];
    v19 = (__m128i)v28[5];
    v20 = v28[1];
    v21 = v28[2];
    v22 = v28[3];
    v23 = v28[4];
    v24 = v28[6];
    *(_OWORD *)(a5 + 8) = v28[0];
    *(_OWORD *)(a5 + 24) = v20;
    *(_OWORD *)(a5 + 40) = v21;
    *(_OWORD *)(a5 + 56) = v22;
    *(_OWORD *)(a5 + 72) = v23;
    *(__m128i *)(a5 + 88) = v19;
    *(_OWORD *)(a5 + 104) = v24;
    v25 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 12));
    *(_DWORD *)(a5 + 120) = v25 != 0;
    *a2 = v18;
    a2[1] = v20;
    a2[2] = v21;
    a2[3] = v22;
    a2[4] = v23;
    a2[5] = v17;
    a2[6] = v24;
    if ( v25 )
      HMAssignmentUnlock((__int64 *)&v28[5]);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11126LL);
    v9 = v28[1];
    *a2 = v28[0];
    v10 = v28[2];
    a2[1] = v9;
    v11 = v28[3];
    a2[2] = v10;
    v12 = v28[4];
    a2[3] = v11;
    v13 = v28[5];
    a2[4] = v12;
    v14 = v28[6];
    a2[5] = v13;
    a2[6] = v14;
    CInputDest::~CInputDest((CInputDest *)v28);
  }
  return a2;
}

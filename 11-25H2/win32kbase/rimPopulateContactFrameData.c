/*
 * XREFs of rimPopulateContactFrameData @ 0x140076D40
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimExtractTransducerUsages @ 0x140076540 (rimExtractTransducerUsages.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400770F8 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimExtractPointerDeviceUsages @ 0x140077F1C (rimExtractPointerDeviceUsages.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x140078680 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1400786B0 (EtwTracePointerDeviceTransformationStart.c)
 *     RIMApplyTransforms @ 0x1400786DC (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1400788BC (rimComputeHimetricGeometry.c)
 *     RIMApplyPTPTranslation @ 0x140078948 (RIMApplyPTPTranslation.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        USHORT a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v14; // rbp
  unsigned int *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rcx
  int PointerDeviceUsages; // r13d
  bool v23; // zf
  int v24; // ebx
  __int64 v26; // rdx
  bool v27; // bl
  bool v28; // di
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  __int16 v32; // [rsp+30h] [rbp-68h]
  _DWORD *v33; // [rsp+50h] [rbp-48h]
  __int64 v34; // [rsp+A0h] [rbp+8h]

  v14 = *(_QWORD *)(a2 + 456);
  v16 = (unsigned int *)(a7 + 2368);
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 440) + 16LL);
  v18 = *(_QWORD *)(v14 + 872);
  v19 = *(_DWORD *)(v14 + 844);
  *(_DWORD *)(a7 + 2364) |= 2u;
  v34 = v17;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(a7 + 36);
  *a12 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
  memset((void *)(a7 + 2372), 0, 0xECuLL);
  *(_DWORD *)(a7 + 2368) = *(_DWORD *)a7;
  *(_DWORD *)(a7 + 2416) = a6;
  *(_WORD *)(a7 + 2424) = *(_WORD *)(a7 + 4);
  *(_WORD *)(a7 + 2426) = a5;
  *(_DWORD *)(a7 + 2496) = v19;
  *(_QWORD *)(a7 + 2512) = v18;
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    v20 = *(_QWORD *)(a2 + 24);
  else
    v20 = *(_QWORD *)(a2 + 16);
  v33 = a11;
  *(_QWORD *)(a7 + 2448) = v20;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v14,
                          v34,
                          a3,
                          a4,
                          *(_QWORD *)(a1 + 832) == 0LL,
                          *(unsigned __int8 *)(a1 + 1041),
                          v16,
                          a8,
                          a9,
                          a10,
                          v33);
  if ( PointerDeviceUsages < 0 )
  {
    v27 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v21 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v21 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v27 = 1;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = *(_QWORD *)(W32GetUserSessionState(v21, WPP_GLOBAL_Control) + 19336);
      v32 = 58;
LABEL_27:
      LOBYTE(v30) = v28;
      LOBYTE(v29) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v30,
        v31,
        4,
        1,
        v32,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
  }
  else
  {
    v23 = *a8 == 0;
    a11 = *(_DWORD **)(a7 + 2372);
    if ( v23 )
    {
      v24 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
      *(_DWORD *)(a7 + 2364) = *(_DWORD *)(a7 + 2364) & 0xFFFFFFFB | ~(unsigned __int8)(*(_DWORD *)(a7 + 2444) >> 22) & 4;
      EtwTracePointerDeviceTransformationStart(*v16);
      if ( *(_DWORD *)(v14 + 24) == 7 )
      {
        RIMApplyPTPTranslation((struct tagHID_POINTER_DEVICE_INFO *)v14);
      }
      else
      {
        RIMApplyTransforms(v14, v24, (_DWORD)v16, (_DWORD)a13, (__int64)a12);
        rimComputeHimetricGeometry(v14, a7 + 2368, a7 + 2400);
      }
      EtwTracePointerDeviceTransformationStop(*v16);
    }
    if ( (unsigned int)(*(_DWORD *)(v14 + 24) - 5) > 1
      || (PointerDeviceUsages = rimExtractTransducerUsages(a2, a5, a3, a4, a7), PointerDeviceUsages >= 0) )
    {
      InputTraceLogging::RIM::PopulateContact(
        a2,
        *(unsigned int *)(v14 + 24),
        *(unsigned __int16 *)(a7 + 2424),
        &a11,
        a7 + 2424,
        0);
    }
    else
    {
      v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v26) + 19336);
        v32 = 59;
        goto LABEL_27;
      }
    }
  }
  return (unsigned int)PointerDeviceUsages;
}

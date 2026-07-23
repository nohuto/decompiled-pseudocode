/*
 * XREFs of PopDiagTraceFxDeviceAccounting @ 0x140422BBC
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x1404227BC (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDiagQueryDevicePropertyString @ 0x140B32CC8 (PopDiagQueryDevicePropertyString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 *a2, unsigned __int16 *a3, ...)
{
  size_t v5; // rax
  size_t v6; // rax
  struct _DEVICE_OBJECT *v7; // rbx
  unsigned int v8; // edi
  unsigned int DevicePropertyString; // eax
  PVOID v10; // r14
  PVOID v11; // rsi
  unsigned int v12; // ebx
  int v13; // edx
  __int64 v14; // rcx
  char v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v19; // [rsp+60h] [rbp-A0h]
  PVOID v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  va_list v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  _DWORD *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  __int64 v36; // [rsp+110h] [rbp+10h]
  _DWORD v37[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  _QWORD *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  _QWORD *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  __int64 *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  _DWORD *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  PVOID v48; // [rsp+170h] [rbp+70h]
  _DWORD v49[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  PVOID v52; // [rsp+190h] [rbp+90h]
  _DWORD v53[2]; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  __int64 v56; // [rsp+1B0h] [rbp+B0h]
  _DWORD v57[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  __int64 v60; // [rsp+238h] [rbp+138h] BYREF
  va_list va; // [rsp+238h] [rbp+138h]
  __int64 v62; // [rsp+240h] [rbp+140h]
  va_list va1; // [rsp+248h] [rbp+148h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v60 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, _QWORD);
  v16 = a1;
  P = (PVOID)&SourceString;
  v5 = 2 * wcslen(&SourceString);
  v20 = (PVOID)&SourceString;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  LOWORD(v17) = v5;
  v6 = 2 * wcslen(&SourceString);
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v19 = v6;
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_ACCOUNTING) )
    {
      v15 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v15;
      v25 = &v16;
      va_copy(v27, va);
      v29 = &PopWnfCsEnterScenarioId;
      v26 = 8LL;
      v28 = 8LL;
      v30 = 8LL;
      EtwWriteEx(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_ACCOUNTING, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      if ( (_BYTE)v62 )
      {
        if ( !PopDiagFxAccountingTelemetryDisabled )
        {
          v7 = *(struct _DEVICE_OBJECT **)(v16 + 32);
          v8 = (unsigned int)PopDiagQueryDevicePropertyString(v7, DevicePropertyClassName) >> 31;
          DevicePropertyString = PopDiagQueryDevicePropertyString(v7, DevicePropertyClassGuid);
          v10 = P;
          v11 = v20;
          v12 = DevicePropertyString >> 31;
          if ( (unsigned int)dword_140E075D0 > 5
            && (qword_140E075E0 & 0x400000000000LL) != 0
            && (qword_140E075E8 & 0x400000000000LL) == qword_140E075E8 )
          {
            v21 = PopWnfCsEnterScenarioId;
            v33 = 8LL;
            v32 = &v21;
            v13 = *(unsigned __int16 *)(v16 + 40);
            v14 = *(_QWORD *)(v16 + 48);
            v34 = v37;
            v22 = *a2;
            v38 = &v22;
            v40 = a2 + 2;
            v42 = a2 + 7;
            v23 = a2[1];
            v44 = &v23;
            v46 = v49;
            v49[0] = (unsigned __int16)v17;
            v50 = v53;
            v53[0] = v19;
            v54 = v57;
            v56 = *((_QWORD *)a3 + 1);
            v57[0] = *a3;
            v58 = &v17;
            v36 = v14;
            v37[0] = v13;
            v35 = 2LL;
            v37[1] = 0;
            v39 = 8LL;
            v41 = 40LL;
            v43 = 40LL;
            v45 = 8LL;
            v47 = 2LL;
            v48 = P;
            v49[1] = 0;
            v51 = 2LL;
            v52 = v20;
            v53[1] = 0;
            v55 = 2LL;
            v57[1] = 0;
            v17 = 0x1000000LL;
            v59 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E075D0,
              (unsigned __int8 *)byte_14004C623,
              0LL,
              0LL,
              0x10u,
              &v31);
          }
          if ( !(_BYTE)v8 )
            ExFreePoolWithTag(v10, 0x67696450u);
          if ( !(_BYTE)v12 )
            ExFreePoolWithTag(v11, 0x67696450u);
        }
      }
    }
  }
}

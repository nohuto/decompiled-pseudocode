/*
 * XREFs of PpmEventWpsContainmentMaskDetection @ 0x140611F30
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PpmHeteroWpsDetectContainmentFromMaskAmd @ 0x140C04230 (PpmHeteroWpsDetectContainmentFromMaskAmd.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventWpsContainmentMaskDetection(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  bool v5; // zf
  BOOL v7; // [rsp+40h] [rbp-39h] BYREF
  int v8; // [rsp+44h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  __int64 v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  int *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  v2 = &PPM_ETW_WPS_CONTAINMENT_MASK_DETECTION;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_MASK_DETECTION_RUNDOWN;
  if ( !a2 )
    v3 = &PPM_ETW_WPS_CONTAINMENT_MASK_DETECTION;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      v5 = *(_BYTE *)(a1 + 1) == 0;
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = 4LL;
      v7 = !v5;
      v8 = *(_DWORD *)(a1 + 24);
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = a1 + 4;
      v12 = a1 + 8;
      v14 = a1 + 12;
      v16 = a1 + 16;
      v18 = a1 + 20;
      v20 = &v8;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      LOBYTE(v2) = EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v2;
}

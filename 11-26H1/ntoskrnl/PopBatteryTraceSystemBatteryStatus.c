/*
 * XREFs of PopBatteryTraceSystemBatteryStatus @ 0x1404E9624
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEtwCallback @ 0x140B524E0 (PopBatteryEtwCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTraceSystemBatteryStatus(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  unsigned __int64 v3; // rax
  int v4; // ecx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // edi
  int v11; // eax
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh] BYREF
  int v18; // [rsp+60h] [rbp-A8h] BYREF
  int v19; // [rsp+64h] [rbp-A4h] BYREF
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v22; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  char *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]

  v1 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  v2 = (const EVENT_DESCRIPTOR *)BATTERY_EVT_SYSTEM_BATTERY_STATUS_CHANGE;
  if ( a1 )
    v2 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN;
  if ( PopBatteryEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopBatteryEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      if ( BYTE1(xmmword_140F10840) )
      {
        v14 = xmmword_140F10660;
        v13 = 1;
        if ( DWORD2(xmmword_140F10840) )
          v3 = 100000 * (unsigned __int64)HIDWORD(xmmword_140F10840) / DWORD2(xmmword_140F10840);
        else
          LODWORD(v3) = 0;
        v4 = DWORD1(xmmword_140F10870);
        v5 = xmmword_140F10870;
        v6 = HIDWORD(xmmword_140F10860);
        v7 = DWORD2(xmmword_140F10860);
        v8 = DWORD1(xmmword_140F10860);
        v9 = xmmword_140F10860;
        v10 = xmmword_140F10850;
        v15 = v3;
        v11 = DWORD2(xmmword_140F10870);
      }
      else
      {
        v11 = -1;
        v13 = 0;
        v4 = -1;
        v14 = 0LL;
        v5 = -1;
        v6 = -1;
        v15 = 0;
        v7 = -1;
        v8 = -1;
        v9 = -1;
        v10 = 0;
      }
      v23 = v11;
      UserData.Ptr = (ULONGLONG)&v13;
      v25 = &v14;
      v27 = (char *)&v14 + 4;
      v29 = &v15;
      v31 = &v16;
      v33 = &v17;
      v35 = &v18;
      v37 = &v19;
      v39 = &v20;
      v41 = &v21;
      v43 = &v22;
      v45 = &v23;
      v19 = v7;
      v20 = v6;
      v21 = v5;
      v22 = v4;
      v16 = v10;
      v17 = v9;
      v18 = v8;
      *(_QWORD *)&UserData.Size = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      LOBYTE(v1) = EtwWriteEx(PopBatteryEtwHandle, v2, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
    }
  }
  return (char)v1;
}

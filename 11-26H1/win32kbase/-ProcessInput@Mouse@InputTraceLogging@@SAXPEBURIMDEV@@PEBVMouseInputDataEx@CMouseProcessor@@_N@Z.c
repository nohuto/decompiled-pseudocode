/*
 * XREFs of ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1400D15E4
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessInput(
        const struct RIMDEV *a1,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        unsigned __int8 a3)
{
  __int16 v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v10[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  const struct RIMDEV *v12; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v15; // [rsp+90h] [rbp-70h]
  int v16; // [rsp+98h] [rbp-68h]
  int v17; // [rsp+9Ch] [rbp-64h]
  const struct RIMDEV **v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  _DWORD *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  __int64 *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int16 *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  int *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  int *v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    v4 = *((_DWORD *)a2 + 18);
    v5 = *((_DWORD *)a2 + 5);
    v6 = *((_DWORD *)a2 + 4);
    v7 = *((_DWORD *)a2 + 3);
    v3 = *((_WORD *)a2 + 3);
    v8 = *((unsigned __int16 *)a2 + 2);
    v9 = *((unsigned __int16 *)a2 + 1);
    v11 = *((_QWORD *)a2 + 7);
    v12 = a1;
    v10[0] = a3;
    v36 = &v4;
    v34 = &v5;
    v32 = &v6;
    v30 = &v7;
    v28 = &v3;
    v26 = &v8;
    v24 = &v9;
    v22 = &v11;
    v20 = v10;
    v18 = &v12;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v29 = 2LL;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    v27 = 4LL;
    v25 = 4LL;
    v23 = 8LL;
    v21 = 4LL;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v15 = &unk_14028CB52;
    UserData.Reserved = 2;
    v16 = 138;
    v17 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}

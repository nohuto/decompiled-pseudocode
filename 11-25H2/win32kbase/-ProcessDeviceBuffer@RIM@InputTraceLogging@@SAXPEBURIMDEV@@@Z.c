/*
 * XREFs of ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400CFD88
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400D0030 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::ProcessDeviceBuffer(const struct RIMDEV *a1)
{
  const char *v1; // rax
  ULONGLONG v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  __int64 *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  const char *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)dword_14029EE20 > 5
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v1 = InputTraceLogging::RimDevTypeToString(*((_DWORD *)a1 + 12));
    v6 = v3;
    if ( v1 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( v1[v4] );
      v5 = v4 + 1;
    }
    else
    {
      v1 = (const char *)&unk_14025EF20;
      v5 = 1;
    }
    v14 = v1;
    v12 = &v6;
    v15 = v5;
    UserData.Ptr = (ULONGLONG)off_14029EE28;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v16 = 0;
    EventDescriptor.Keyword = v2;
    v13 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029EE28;
    v9 = &unk_14027C659;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 42;
    EtwWriteTransfer(qword_14029EE40, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}

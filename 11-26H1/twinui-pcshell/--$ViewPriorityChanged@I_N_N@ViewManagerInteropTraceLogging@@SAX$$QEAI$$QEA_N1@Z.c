/*
 * XREFs of ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18006A914
 * Callers:
 *     _lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator() @ 0x18043A07C (_lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_--operator().c)
 *     _lambda_d64c769bce7fa56fe27855a63f35df80_::operator() @ 0x18043AA04 (_lambda_d64c769bce7fa56fe27855a63f35df80_--operator().c)
 *     _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x1804450D4 (_lambda_2a43ebb49f2e9221dd99f0faba3896bb_--operator().c)
 *     _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x1804459EC (_lambda_732b9d0d4e46444a8cf28034daf59b80_--operator().c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18006B7C4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(int *a1, char *a2, char *a3)
{
  const struct _tlgProvider_t *v6; // rax
  char v7; // dl
  int v8; // ecx
  char v9; // r8
  char v11; // [rsp+38h] [rbp-29h] BYREF
  char v12; // [rsp+39h] [rbp-28h] BYREF
  _DWORD v13[3]; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v16; // [rsp+68h] [rbp+7h]
  int v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+74h] [rbp+13h]
  _DWORD *v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  char *v21; // [rsp+88h] [rbp+27h]
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  char *v23; // [rsp+98h] [rbp+37h]
  __int64 v24; // [rsp+A0h] [rbp+3Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = *a1;
    v9 = *a3;
    v23 = &v11;
    v21 = &v12;
    v19 = v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v6 + 1);
    v13[0] = v8;
    v12 = v7;
    EventDescriptor.Keyword = 0LL;
    v11 = v9;
    v24 = 1LL;
    v22 = 1LL;
    v20 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_180803125;
    v18 = 1;
    UserData.Reserved = 2;
    v17 = 64;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return (int)v6;
}

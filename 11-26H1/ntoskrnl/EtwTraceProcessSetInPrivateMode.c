/*
 * XREFs of EtwTraceProcessSetInPrivateMode @ 0x140527460
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceProcessSetInPrivateMode(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // rax
  ULONG v2; // ecx
  int v4; // [rsp+40h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  __int64 v7; // [rsp+60h] [rbp-10h]

  UserData.Ptr = 0x20000LL;
  *(_QWORD *)&UserData.Size = &SourceString;
  v4 = *(_DWORD *)(a1 + 464);
  p_UserData = *(struct _EVENT_DATA_DESCRIPTOR **)(a1 + 848);
  if ( !p_UserData || !LOWORD(p_UserData->Ptr) )
    p_UserData = &UserData;
  v2 = WORD1(p_UserData->Ptr);
  UserData.Ptr = *(_QWORD *)&p_UserData->Size;
  v6 = &v4;
  UserData.Size = v2;
  UserData.Reserved = 0;
  v7 = 4LL;
  return EtwWriteEx((REGHANDLE)stru_140F03830.Affinity, &ProcessInPrivateSet, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}

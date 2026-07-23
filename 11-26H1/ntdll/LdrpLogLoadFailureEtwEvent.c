/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x1800CBB04
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x1800CBC20 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x1800CBC90 (EtwEventWriteNoRegistration.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        int a3,
        const EVENT_DESCRIPTOR *a4,
        char a5)
{
  char v8; // al
  int v9; // eax
  ULONG v10; // r8d
  int v11; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+54h] [rbp-1Ch]
  __int64 v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+A0h] [rbp+30h] BYREF

  v20 = a3;
  ProcessInformation = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5
      || (RtlGetThreadErrorMode() & 0x10) == 0
      && (NtQueryInformationProcess(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            ProcessDefaultHardErrorMode,
            &ProcessInformation,
            4u,
            0LL) >= 0
        ? (v8 = ProcessInformation)
        : (v8 = 5, ProcessInformation = 5),
          (v8 & 5) != 0) )
    {
      v9 = *a1;
      v10 = 2;
      v14 = *((_QWORD *)a1 + 1);
      UserData.Ptr = (unsigned __int64)&v20;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = v9 + 2;
      v16 = 0;
      if ( a2 )
      {
        v17 = *((_QWORD *)a2 + 1);
        v11 = *a2;
        v19 = 0;
        v18 = v11 + 2;
        v10 = 3;
      }
      EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v10, &UserData);
    }
  }
}

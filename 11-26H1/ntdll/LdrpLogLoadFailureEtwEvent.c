/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x1800CE394
 * Callers:
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x1800CE4B0 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x1800CE520 (EtwEventWriteNoRegistration.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, char a5)
{
  char v8; // al
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int64 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]
  int v19; // [rsp+A0h] [rbp+30h] BYREF

  v19 = a3;
  ProcessInformation = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5
      || (RtlGetThreadErrorMode() & 0x10) == 0
      && (NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)12, &ProcessInformation, 4u, 0LL) >= 0
        ? (v8 = ProcessInformation)
        : (v8 = 5, ProcessInformation = 5),
          (v8 & 5) != 0) )
    {
      v9 = *a1;
      v10 = 2LL;
      v13[2] = *((_QWORD *)a1 + 1);
      v13[0] = &v19;
      v13[1] = 4LL;
      v14 = v9 + 2;
      v15 = 0;
      if ( a2 )
      {
        v16 = *((_QWORD *)a2 + 1);
        v11 = *a2;
        v18 = 0;
        v17 = v11 + 2;
        v10 = 3LL;
      }
      EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v10, v13);
    }
  }
}

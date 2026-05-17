/*
 * XREFs of RtlpCreateExecutionRequiredRequest @ 0x1800CD310
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     NtPowerInformation @ 0x18015FB10 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpCreateExecutionRequiredRequest(void *a1, HANDLE *a2)
{
  NTSTATUS result; // eax
  size_t v5; // rax
  int v6; // esi
  HANDLE v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+38h] [rbp-31h]
  char v9; // [rsp+3Ch] [rbp-2Dh]
  __int16 v10; // [rsp+3Dh] [rbp-2Ch]
  char v11; // [rsp+3Fh] [rbp-2Ah]
  void *v12; // [rsp+40h] [rbp-29h]
  _DWORD v13[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  const wchar_t *v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  _QWORD ProcessInformation[2]; // [rsp+70h] [rbp+7h] BYREF
  __int128 v18; // [rsp+80h] [rbp+17h]
  __int128 v19; // [rsp+90h] [rbp+27h]
  __int128 v20; // [rsp+A0h] [rbp+37h]
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  ProcessInformation[0] = 64LL;
  HIDWORD(v14) = 0;
  Handle = 0LL;
  ProcessInformation[1] = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  result = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (BYTE8(v20) & 0x40) != 0 )
    {
      v13[0] = 0;
      v14 = 0LL;
      v15 = L"QueryDebugInformation request";
      v13[1] = 1;
      v5 = 2 * wcslen(L"QueryDebugInformation request");
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v14) = v5;
      WORD1(v14) = v5 + 2;
      v6 = NtPowerInformation(72LL, v13, 40LL, &Handle, 8);
      if ( v6 >= 0 )
      {
        v7 = Handle;
        v10 = 0;
        v11 = 0;
        v8 = 3;
        v9 = 1;
        v12 = a1;
        v6 = NtPowerInformation(44LL, &v7, 24LL, 0LL, 0);
        if ( v6 >= 0 )
          *a2 = Handle;
        else
          NtClose(Handle);
      }
      return v6;
    }
    else
    {
      *a2 = 0LL;
      return 0;
    }
  }
  return result;
}

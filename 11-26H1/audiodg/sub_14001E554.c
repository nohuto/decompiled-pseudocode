/*
 * XREFs of sub_14001E554 @ 0x14001E554
 * Callers:
 *     sub_1400A29A8 @ 0x1400A29A8 (sub_1400A29A8.c)
 * Callees:
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_14001F140 @ 0x14001F140 (sub_14001F140.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_14001E554(char *lpParameter, WCHAR **a2)
{
  WCHAR **v2; // rsi
  WCHAR *v4; // rax
  WCHAR *v5; // rdi
  ULONG v6; // eax
  ULONG v7; // r14d
  signed int v8; // ebx
  __int64 v9; // rcx
  int inited; // esi
  HLOCAL v11; // r15
  int v12; // r12d
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  ULONG v16; // eax
  char *Thread; // rax
  signed int v18; // eax
  signed int LastError; // eax
  LPDWORD lpThreadId; // [rsp+28h] [rbp-A1h]
  __int64 Seed; // [rsp+30h] [rbp-99h] BYREF
  WCHAR **v23; // [rsp+38h] [rbp-91h]
  HLOCAL hMem; // [rsp+40h] [rbp-89h] BYREF
  __int128 v25; // [rsp+48h] [rbp-81h] BYREF
  __int128 v26; // [rsp+58h] [rbp-71h]
  __int128 v27; // [rsp+68h] [rbp-61h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v29[10]; // [rsp+90h] [rbp-39h] BYREF

  v23 = a2;
  v2 = a2;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(v29, 0, 0x48uLL);
  hMem = 0LL;
  DestinationString = 0LL;
  HIDWORD(Seed) = 0;
  v4 = (WCHAR *)CoTaskMemAlloc(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0;
    LODWORD(Seed) = MEMORY[0x7FFE0320];
    do
    {
      v6 = RtlRandomEx((PULONG)&Seed);
      v7 = v6;
    }
    while ( !v6 );
    v8 = sub_14001EB30(v5, 64LL, L"%ws%ws%ld", L"\\BaseNamedObjects\\", L"AudioEngineDuplicateHandleApiPort", v6, Seed);
    if ( v8 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, v5);
      if ( inited < 0 )
        goto LABEL_32;
      v8 = sub_14001F140(v9, &hMem);
      if ( v8 >= 0 )
      {
        DWORD2(v26) = 64;
        v11 = hMem;
        *((_QWORD *)&v25 + 1) = 0LL;
        v12 = 3;
        v27 = (unsigned __int64)hMem;
        LODWORD(v25) = 48;
        *(_QWORD *)&v26 = &DestinationString;
        v29[2] = 48LL;
        while ( 1 )
        {
          --v12;
          v13 = NtAlpcCreatePort(lpParameter + 8, &v25, v29);
          inited = v13;
          if ( v13 != 0x40000000 && v13 != -1073741771 )
            break;
          v14 = HIDWORD(Seed) == -1;
          v15 = HIDWORD(Seed) + 1;
          LODWORD(Seed) = 0;
          ++HIDWORD(Seed);
          if ( v14 )
          {
            LODWORD(Seed) = MEMORY[0x7FFE0320];
            do
              v16 = RtlRandomEx((PULONG)&Seed);
            while ( !v16 );
            v7 = v16;
          }
          else
          {
            if ( !v7 )
            {
              v8 = -2147024809;
              break;
            }
            v16 = v7 + v15;
          }
          LODWORD(lpThreadId) = v16;
          v8 = sub_14001EB30(
                 v5,
                 64LL,
                 L"%ws%ws%ld",
                 L"\\BaseNamedObjects\\",
                 L"AudioEngineDuplicateHandleApiPort",
                 lpThreadId,
                 Seed);
          if ( v8 >= 0 && RtlInitUnicodeStringEx(&DestinationString, v5) >= 0 )
          {
            LODWORD(v25) = 48;
            *(_QWORD *)&v26 = &DestinationString;
            *((_QWORD *)&v25 + 1) = 0LL;
            DWORD2(v26) = 64;
            v27 = (unsigned __int64)v11;
            if ( v12 > 0 )
              continue;
          }
          break;
        }
        LocalFree(v11);
        if ( inited < 0 )
        {
LABEL_32:
          RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
          LastError = GetLastError();
          v8 = LastError;
          if ( LastError > 0 )
            v8 = (unsigned __int16)LastError | 0x80070000;
          CoTaskMemFree(v5);
          v5 = 0LL;
        }
      }
      v2 = v23;
    }
    if ( v8 < 0 )
      goto LABEL_13;
    Thread = (char *)CreateThread(0LL, 0LL, StartAddress, lpParameter, 0, 0LL);
    *((_QWORD *)lpParameter + 5) = Thread;
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *v2 = v5;
      return (unsigned int)v8;
    }
    v18 = GetLastError();
    v8 = v18;
    if ( v18 > 0 )
      v8 = (unsigned __int16)v18 | 0x80070000;
    if ( v8 < 0 )
    {
LABEL_13:
      if ( v5 )
        CoTaskMemFree(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}

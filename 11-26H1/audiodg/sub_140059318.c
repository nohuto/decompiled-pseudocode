/*
 * XREFs of sub_140059318 @ 0x140059318
 * Callers:
 *     sub_14001DD58 @ 0x14001DD58 (sub_14001DD58.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140012D6C @ 0x140012D6C (sub_140012D6C.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_14001D1F4 @ 0x14001D1F4 (sub_14001D1F4.c)
 *     sub_140034930 @ 0x140034930 (sub_140034930.c)
 *     sub_140036058 @ 0x140036058 (sub_140036058.c)
 *     sub_1400389AC @ 0x1400389AC (sub_1400389AC.c)
 *     sub_140039C30 @ 0x140039C30 (sub_140039C30.c)
 *     sub_14003EFE0 @ 0x14003EFE0 (sub_14003EFE0.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140059F90 @ 0x140059F90 (sub_140059F90.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140059318(__int64 *a1)
{
  int v2; // ebx
  int v3; // edx
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  SC_HANDLE v8; // rbx
  __int64 v9; // r9
  int v10; // edx
  int v11; // r9d
  int v12; // edx
  __int64 v13; // rbx
  HANDLE v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  SC_HANDLE v20; // [rsp+48h] [rbp-9h] BYREF
  SC_HANDLE v21; // [rsp+50h] [rbp-1h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp+7h] BYREF
  DWORD pcbBytesNeeded; // [rsp+60h] [rbp+Fh] BYREF
  DWORD pcbData; // [rsp+64h] [rbp+13h] BYREF
  int pvData; // [rsp+68h] [rbp+17h] BYREF
  LARGE_INTEGER Frequency; // [rsp+70h] [rbp+1Fh] BYREF
  BYTE Buffer[16]; // [rsp+78h] [rbp+27h] BYREF
  __int128 v28; // [rsp+88h] [rbp+37h]
  int v29; // [rsp+98h] [rbp+47h]
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 11LL, &unk_1400C8AF0);
  }
  Frequency.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  qword_1400B7000 = Frequency.QuadPart;
  v2 = CoInitializeEx(0LL, 4u);
  if ( v2 >= 0 )
  {
    v2 = sub_14001D1F4(*a1 + 128, 1);
    if ( v2 < 0 )
    {
      v3 = 329;
      goto LABEL_7;
    }
    v2 = sub_140012D6C();
    if ( v2 < 0 )
    {
      v3 = 335;
      goto LABEL_7;
    }
    SecurityDescriptor = 0LL;
    sub_1400389AC(&SecurityDescriptor, 0LL);
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054"
             "893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
            1u,
            &SecurityDescriptor,
            0LL) )
    {
      v5 = sub_1400470EC((int)retaddr, 341, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp", v4);
LABEL_17:
      v2 = v5;
LABEL_43:
      sub_140039C30(&SecurityDescriptor);
      return (unsigned int)v2;
    }
    v6 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
    if ( v6 )
    {
      v7 = 343LL;
LABEL_16:
      v5 = sub_140059F90(retaddr, v7, "avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp", v6);
      goto LABEL_17;
    }
    v6 = RpcServerRegisterIf3(&unk_1400C1860, 0LL, 0LL, 33LL, 1234, 0, sub_14003FB30, SecurityDescriptor);
    if ( v6 )
    {
      v7 = 344LL;
      goto LABEL_16;
    }
    dword_1400E8924 = 1;
    v21 = OpenSCManagerW(0LL, 0LL, 1u);
    v8 = OpenServiceW(v21, L"AUDIOSRV", 4u);
    v20 = v8;
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 12LL, &unk_1400C8AF0);
    }
    *(_OWORD *)Buffer = 0LL;
    v28 = 0LL;
    v29 = 0;
    pcbBytesNeeded = 36;
    if ( !QueryServiceStatusEx(v8, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pcbBytesNeeded) )
    {
      v10 = 354;
LABEL_41:
      v2 = sub_1400470EC((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp", v9);
      goto LABEL_42;
    }
    if ( ((*(_DWORD *)&Buffer[4] - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 13LL, &unk_1400C8AF0);
      }
      *(_DWORD *)(*a1 + 144) = HIDWORD(v28);
      v13 = *a1;
      v14 = OpenProcess(0x100000u, 0, *(_DWORD *)(*a1 + 144));
      sub_140016858((void **)(v13 + 136), v14);
      v15 = *(_QWORD *)(*a1 + 136);
      if ( !v15 || v15 == -1 )
      {
        v10 = 364;
        goto LABEL_41;
      }
      v16 = sub_140034930(v15);
      v2 = v16;
      if ( v16 >= 0 )
      {
        pvData = 0;
        pcbData = 4;
        RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"AudioDgWatchDogTimerInMs",
          0x18u,
          0LL,
          &pvData,
          &pcbData);
        v18 = sub_140036058(*a1, v17);
        v2 = v18;
        if ( v18 >= 0 )
        {
          sub_140015C58(*(void **)(*a1 + 152));
          sub_14003EFE0(&v20);
          sub_14003EFE0(&v21);
          v2 = 0;
          goto LABEL_43;
        }
        v11 = v18;
        v12 = 380;
      }
      else
      {
        v11 = v16;
        v12 = 369;
      }
    }
    else
    {
      v2 = -2147418113;
      v11 = -2147418113;
      v12 = 359;
    }
    sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp", v11);
LABEL_42:
    sub_14003EFE0(&v20);
    sub_14003EFE0(&v21);
    goto LABEL_43;
  }
  v3 = 324;
LABEL_7:
  sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodg.cpp", v2);
  return (unsigned int)v2;
}

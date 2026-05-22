/*
 * XREFs of ?SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z @ 0x1800DBCA0
 * Callers:
 *     ?OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z @ 0x1800DB8A0 (-OnDeviceRemoval@CallControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DB9B0 (-OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallControlDeviceCollection::SendMuteMicrophoneInputReport(
        CallControlDeviceCollection *this,
        int a2,
        char a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h]
  char v14; // [rsp+61h] [rbp-9Fh]
  int v15; // [rsp+70h] [rbp-90h]
  char v16; // [rsp+74h] [rbp-8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C18h] [rbp+B18h]

  memset_0(v11, 0, 0xBC0uLL);
  v13 = 3008;
  v11[1] = a2;
  v11[0] = 128;
  PerformanceCount.QuadPart = 0LL;
  v11[2] = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v6 = *((_QWORD *)this + 2);
  v12 = PerformanceCount;
  v15 = 304;
  v16 = a3;
  v14 = 1;
  v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 24LL))(v6, v11);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFA,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}

/*
 * XREFs of sub_140088A38 @ 0x140088A38
 * Callers:
 *     sub_140086D20 @ 0x140086D20 (sub_140086D20.c)
 * Callees:
 *     sub_1400165A4 @ 0x1400165A4 (sub_1400165A4.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_140088A38(__int64 a1, void *a2)
{
  void **v2; // rdi
  HANDLE FileW; // rax
  __int64 v6; // r9
  int v7; // edx
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  void *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  DWORD BytesReturned; // [rsp+60h] [rbp+8h] BYREF
  __int64 InBuffer; // [rsp+70h] [rbp+18h] BYREF

  v2 = (void **)(a1 + 24);
  FileW = CreateFileW(L"\\\\.\\audiodgdrvr", 0xC0000000, 0, 0LL, 3u, 0, 0LL);
  sub_140016858(v2, FileW);
  if ( sub_1400165A4(v2) )
  {
    v7 = 369;
    return sub_1400470EC(
             (int)retaddr,
             v7,
             (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
             v6);
  }
  sub_140016858((void **)(a1 + 16), 0LL);
  CurrentProcess = GetCurrentProcess();
  v10 = GetCurrentProcess();
  if ( !DuplicateHandle(v10, a2, CurrentProcess, (LPHANDLE)(a1 + 16), 0, 0, 2u) )
  {
    v7 = 378;
    return sub_1400470EC(
             (int)retaddr,
             v7,
             (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
             v6);
  }
  v11 = *v2;
  InBuffer = *(_QWORD *)(a1 + 16);
  BytesReturned = 0;
  if ( !DeviceIoControl(v11, 0x220004u, &InBuffer, 8u, 0LL, 0, &BytesReturned, 0LL) )
  {
    v7 = 385;
    return sub_1400470EC(
             (int)retaddr,
             v7,
             (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
             v6);
  }
  return 0LL;
}

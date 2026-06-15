/*
 * XREFs of sub_140087960 @ 0x140087960
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_140088288 @ 0x140088288 (sub_140088288.c)
 */

__int64 __fastcall sub_140087960(__int64 a1, int a2, int a3, HANDLE *a4, LPVOID lpOutBuffer)
{
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // edx
  __int64 v13; // r9
  _DWORD v15[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[40]; // [rsp+48h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h]
  HANDLE hDevice; // [rsp+80h] [rbp+10h] BYREF
  DWORD BytesReturned; // [rsp+88h] [rbp+18h] BYREF

  v15[1] = a2;
  hDevice = 0LL;
  v15[0] = a3;
  sub_140016858(&hDevice, 0LL);
  v7 = sub_140021954((__int64)v16, (__int64)L"CrossProcessAudioBuffer\\");
  v9 = sub_140088288(*(_QWORD *)(a1 + 24), v7, (unsigned int)v15, v8, (__int64)&hDevice);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = v9;
    v12 = 453;
LABEL_7:
    sub_14000C2A8(
      (int)retaddr,
      v12,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
      v11);
    goto LABEL_9;
  }
  BytesReturned = 0;
  if ( DeviceIoControl(hDevice, 0x220010u, 0LL, 0, lpOutBuffer, 0x1Cu, &BytesReturned, 0LL) )
  {
    if ( BytesReturned == 28 )
    {
      v10 = 0;
      *a4 = hDevice;
      hDevice = 0LL;
      goto LABEL_9;
    }
    v10 = -2147418113;
    v12 = 457;
    v11 = -2147418113;
    goto LABEL_7;
  }
  v10 = sub_1400470EC(
          (int)retaddr,
          456,
          (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
          v13);
LABEL_9:
  sub_140016F18(&hDevice);
  return v10;
}

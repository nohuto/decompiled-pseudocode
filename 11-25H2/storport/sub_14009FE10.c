/*
 * XREFs of sub_14009FE10 @ 0x14009FE10
 * Callers:
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_14003AD8C @ 0x14003AD8C (sub_14003AD8C.c)
 *     sub_140133C9C @ 0x140133C9C (sub_140133C9C.c)
 *     sub_140182A58 @ 0x140182A58 (sub_140182A58.c)
 *     sub_1401AD6C4 @ 0x1401AD6C4 (sub_1401AD6C4.c)
 */

__int64 __fastcall sub_14009FE10(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  __int64 result; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  ULONG v7; // r8d
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  _BYTE *v11; // rax
  struct _DEVICE_OBJECT *v12; // rcx
  struct _UNICODE_STRING *v13; // rsi
  const GUID *v14; // rdx
  void *v15; // [rsp+40h] [rbp-28h]
  unsigned __int8 v16; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 1952);
  Handle = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v13 = (struct _UNICODE_STRING *)(a1 + 3536);
    v12 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v14 = &stru_14014C548;
LABEL_12:
    v5 = IoRegisterDeviceInterface(v12, v14, 0LL, v13);
    if ( v5 >= 0 )
    {
      v5 = IoSetDeviceInterfaceState(v13, 1u);
      if ( v5 < 0 )
        RtlFreeUnicodeString(v13);
    }
    return (unsigned int)v5;
  }
  v3 = *(_DWORD *)(a1 + 104);
  v16 = BYTE2(v3);
  result = sub_14003AD8C(
             *(void **)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned __int8)v3 + 2080),
             1u,
             &Handle,
             L"Target Id %d",
             BYTE1(v3));
  v5 = result;
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(sub_1401AD6C4(**(_BYTE **)(a1 + 112) & 0x1F) + 16);
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(v6 + 2 * v10) );
  sub_140133C9C((int)Handle, v16, v9, a1 + 120, v8, v7, v6, v10, v15);
  ZwClose(Handle);
  if ( (*(_DWORD *)(a1 + 1952) & 1) != 0 )
  {
    v5 = sub_140182A58(a1);
    if ( v5 >= 0 )
      v5 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a1 + 8), &stru_14014C508, 0LL, (PUNICODE_STRING)(a1 + 1960));
  }
  v11 = *(_BYTE **)(a1 + 112);
  if ( v11 && (*v11 & 0x1F) == 0xD )
  {
    v12 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v13 = (struct _UNICODE_STRING *)(a1 + 2080);
    v14 = (const GUID *)&unk_14014C4D8;
    goto LABEL_12;
  }
  return (unsigned int)v5;
}

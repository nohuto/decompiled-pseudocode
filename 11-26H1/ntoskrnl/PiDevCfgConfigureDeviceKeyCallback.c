/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x140A496A0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDevCfgCopyDeviceProperties @ 0x14077C964 (PiDevCfgCopyDeviceProperties.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140A47944 (PiDevCfgCopyDeviceKeys.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        void *a5,
        void *a6,
        __int64 a7)
{
  void *v7; // rdi
  int v8; // ebx
  char v9; // r15
  int v12; // esi
  unsigned int v13; // eax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  HANDLE v17; // rcx
  void *v18; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v21; // [rsp+38h] [rbp-18h] BYREF
  void *v22; // [rsp+90h] [rbp+40h] BYREF

  v7 = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  v8 = a4 & 0x800;
  v9 = a4;
  v12 = v8 != 0 ? 3 : 1;
  v21 = 0LL;
  if ( *(_DWORD *)(a3 + 16) == 16 && !wcsicmp(*(const wchar_t **)a3, L"Properties") )
  {
    v13 = PiDevCfgCopyDeviceProperties(a5, (__int64)a6, *(_QWORD *)(a2 + 8), 1LL, v12, a7);
LABEL_14:
    v15 = v13;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(a3 + 8) & 1) == 0 || (v9 & 1) != 0 || !v8 )
  {
    v18 = a6;
    v17 = a5;
    goto LABEL_13;
  }
  v21.Buffer = L"Classes";
  *(_DWORD *)&v21.Length = 1048590;
  v14 = IopOpenRegistryKeyEx(&Handle, a5, &v21, 0x20019u);
  v15 = v14;
  if ( v14 == -1073741772 )
  {
    v15 = 0;
    goto LABEL_15;
  }
  if ( v14 >= 0 )
  {
    v16 = IopCreateRegistryKeyEx(&v22, a6, &v21, 131103LL, 0, 0LL);
    v7 = v22;
    v15 = v16;
    if ( v16 >= 0 )
    {
      v17 = Handle;
      v18 = v22;
LABEL_13:
      v13 = PiDevCfgCopyDeviceKeys(v17, v18, v12, a7);
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v7 )
    ZwClose(v7);
  return v15;
}

/*
 * XREFs of sub_14003F8B0 @ 0x14003F8B0
 * Callers:
 *     sub_140046548 @ 0x140046548 (sub_140046548.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140044864 @ 0x140044864 (sub_140044864.c)
 *     sub_14006CE88 @ 0x14006CE88 (sub_14006CE88.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14003F8B0(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  const WCHAR *v4; // rdx
  const wchar_t *v5; // rcx
  int v6; // eax
  int v7; // eax
  HRESULT v8; // edi
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // r14d
  DWORD v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]
  DWORD taskId; // [rsp+80h] [rbp+30h] BYREF
  int pvData; // [rsp+88h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+90h] [rbp+40h] BYREF
  const wchar_t *v22; // [rsp+98h] [rbp+48h] BYREF

  pvData = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"RTOperatingMode",
         0x18u,
         0LL,
         &pvData,
         &pcbData) )
  {
    v2 = *(_DWORD *)(a1 + 16);
  }
  else
  {
    v2 = pvData;
    *(_DWORD *)(a1 + 16) = pvData;
  }
  LOBYTE(v3) = 0;
  taskId = 0;
  v4 = L"Audio";
  v5 = L"Pro Audio";
  if ( !*(_DWORD *)(a1 + 108) )
    v5 = L"Audio";
  v22 = v5;
  if ( !v2 )
  {
    v8 = RtwqLockSharedWorkQueue(v5, 0, (DWORD *)(a1 + 20), (DWORD *)(a1 + 24));
    if ( v8 < 0 )
    {
      v9 = 53;
      goto LABEL_28;
    }
    v3 = *(_DWORD *)(a1 + 24);
    v14 = *(_DWORD *)(a1 + 20);
    taskId = v14;
    *(_DWORD *)(a1 + 28) = v3;
    goto LABEL_30;
  }
  v6 = v2 - 1;
  if ( !v6 )
  {
    v8 = RtwqLockSharedWorkQueue(v5, 0, &taskId, (DWORD *)(a1 + 24));
    if ( v8 < 0 )
    {
      v9 = 65;
      goto LABEL_28;
    }
    v3 = *(_DWORD *)(a1 + 24);
    v15 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0LL;
    if ( v15 )
      sub_1400B6010(v15);
    v16 = sub_140044864(a1 + 40, &v22);
    v17 = v16;
    if ( v16 < 0 )
    {
      sub_14000C2A8((int)retaddr, 69, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v16);
      return v17;
    }
    v5 = *(const wchar_t **)(a1 + 40);
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0LL;
    if ( v10 )
      sub_1400B6010(v10);
    v11 = sub_140044864(a1 + 40, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      sub_14000C2A8((int)retaddr, 77, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v11);
      return v12;
    }
    v5 = *(const wchar_t **)(a1 + 40);
LABEL_18:
    *(_DWORD *)(a1 + 28) = *((_DWORD *)v5 + 4);
    v14 = *((_DWORD *)v5 + 5);
LABEL_30:
    *(_DWORD *)(a1 + 32) = v14;
    goto LABEL_31;
  }
  if ( v7 == 1 )
  {
    v8 = RtwqLockSharedWorkQueue(v5, 0, &taskId, (DWORD *)(a1 + 24));
    if ( v8 < 0 )
    {
      v9 = 88;
LABEL_28:
      sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v8);
      return (unsigned int)v8;
    }
    v3 = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 28) = 0LL;
  }
LABEL_31:
  if ( (byte_1400E8401 & 8) != 0 )
    sub_14006CE88(
      (_DWORD)v5,
      (_DWORD)v4,
      a1,
      *(_DWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 108),
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 32),
      v3,
      taskId);
  return 0LL;
}

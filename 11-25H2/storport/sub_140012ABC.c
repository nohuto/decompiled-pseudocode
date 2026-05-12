/*
 * XREFs of sub_140012ABC @ 0x140012ABC
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_14005440C @ 0x14005440C (sub_14005440C.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140071644 @ 0x140071644 (sub_140071644.c)
 *     sub_1400717E4 @ 0x1400717E4 (sub_1400717E4.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140012ABC(char **a1, void *a2)
{
  char *v2; // rbp
  void *v3; // r15
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  int v7; // esi
  PDEVICE_OBJECT *v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // r8
  char *v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r13
  char *v16; // rcx
  char v17; // al
  const GUID *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  unsigned int v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // r9d
  bool v26; // zf
  int v27; // esi
  int v28; // esi
  int v29; // esi
  unsigned int v30; // esi
  struct _DEVICE_OBJECT *v31; // r15
  __int64 v32; // rax
  char v33; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+10h]
  PDEVICE_OBJECT DeviceObject; // [rsp+F0h] [rbp+18h]

  v2 = *a1;
  v3 = &unk_1401489C4;
  v4 = 0;
  v5 = a1 + 1;
  v33 = 0;
  v7 = 3;
  if ( a2 )
    v3 = a2;
  v8 = (PDEVICE_OBJECT *)(v2 + 8);
  v9 = (__int64 *)(v2 + 8);
  v10 = (__int64 *)(v2 + 32);
  v11 = (__int64 *)(v2 + 24);
  if ( ((_BYTE)a1[31] & 1) != 0 )
    v12 = 0LL;
  else
    v12 = v2 + 4800;
  v13 = *v11;
  v14 = *v9;
  v15 = *v10;
  DeviceObject = *v8;
  v34 = v14;
  if ( (byte_1401694F0 & 0x10) != 0 )
  {
    sub_140071644(
      *((unsigned __int8 *)v5 + 83),
      (unsigned int)&unk_14014A988,
      *((unsigned __int8 *)v5 + 97),
      *v5,
      v5[6],
      *((_BYTE *)v5 + 72),
      *((_BYTE *)v5 + 97),
      *((_BYTE *)v5 + 146),
      v5[51],
      v5[52],
      v5[53],
      v5[48],
      v5[55],
      *((_BYTE *)v5 + 98),
      *((_BYTE *)v5 + 99),
      *((_BYTE *)v5 + 144),
      v5[54],
      v5[40],
      *((_BYTE *)v5 + 83),
      *((_BYTE *)v5 + 196));
    v14 = v34;
  }
  v16 = a1[29];
  v17 = *((_BYTE *)a1 + 248) | 2;
  *((_BYTE *)a1 + 248) = v17;
  LODWORD(v18) = *(_DWORD *)v16;
  if ( *(_DWORD *)v16 == 136 )
  {
LABEL_26:
    v19 = (*((__int64 (__fastcall **)(char *, _QWORD, _QWORD, void *, _DWORD *, char *))v16 + 4))(
            a1[30] + 16,
            0LL,
            0LL,
            v3,
            v5,
            &v33);
    goto LABEL_10;
  }
  if ( (v17 & 8) == 0 )
  {
    if ( (_DWORD)v18 != 208 )
      goto LABEL_11;
    goto LABEL_26;
  }
  v19 = (*((__int64 (__fastcall **)(char *, __int64, __int64, __int64, void *, _DWORD *, char *))v16 + 4))(
          a1[30] + 16,
          v15,
          v14,
          v13,
          v3,
          v5,
          &v33);
LABEL_10:
  v7 = v19;
LABEL_11:
  *((_BYTE *)a1 + 248) &= ~2u;
  if ( v7 == 1 && (!*((_BYTE *)v5 + 90) || !*((_BYTE *)v5 + 91) || !*((_BYTE *)v5 + 81) || !*((_BYTE *)v5 + 82)) )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
    {
      if ( (HIDWORD(off_140168120->Timer) & 2) != 0 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930(off_140168120->AttachedDevice, 10LL, &unk_14014C620);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 2) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930(off_140168120->AttachedDevice, 11LL, &unk_14014C620);
      }
    }
LABEL_59:
    v4 = -1073741438;
    goto LABEL_15;
  }
  if ( (v5[50] & 2) != 0 )
  {
    v26 = v7 == 4;
LABEL_61:
    if ( !v26 )
    {
      v4 = -1073741595;
      goto LABEL_15;
    }
    goto LABEL_64;
  }
  if ( !v7 )
  {
    v4 = -1073741275;
    goto LABEL_15;
  }
  v27 = v7 - 1;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( !v28 )
    {
      v4 = -1073741630;
      goto LABEL_15;
    }
    v29 = v28 - 1;
    if ( !v29 )
      goto LABEL_59;
    v26 = v29 == 1;
    goto LABEL_61;
  }
LABEL_64:
  if ( ((_BYTE)a1[31] & 1) == 0 && *(_DWORD *)v12 && *((_QWORD *)v12 + 1) && *((_QWORD *)v12 + 2) )
  {
    LODWORD(v14) = 1369696157;
    v30 = 0;
    v31 = DeviceObject;
    do
    {
      v18 = (const GUID *)(*((_QWORD *)v12 + 1) + 16LL * v30);
      v32 = *(_QWORD *)&v18->Data1 - 0x470FEAA4E1233993LL;
      if ( *(_QWORD *)&v18->Data1 == 0x470FEAA4E1233993LL )
        v32 = *(_QWORD *)v18->Data4 - 0x71FBB6C151A3E79DLL;
      if ( v32 )
      {
        PoRegisterPowerSettingCallback(v31, v18, Callback, *a1, (PVOID *)(*((_QWORD *)v12 + 2) + 8LL * v30));
        LODWORD(v14) = 1369696157;
      }
      ++v30;
    }
    while ( v30 < *(_DWORD *)v12 );
  }
LABEL_15:
  v20 = v5[51];
  v21 = 1000;
  if ( v20 <= 0x3E8 || (LODWORD(v18) = *((unsigned __int8 *)v5 + 144), (unsigned __int8)((_BYTE)v18 - 2) <= 2u) )
  {
    v21 = v5[51];
    if ( v20 < 0x10 )
    {
      if ( (byte_1401694F0 & 0x10) != 0 )
        sub_1400717E4(v20, (_DWORD)v18, v14, (unsigned int)L"MaxNumberOfIO", (__int64)L"MaxNumberOfIO", 16, v20, 16);
      v5[51] = 16;
      v21 = 16;
    }
  }
  else
  {
    if ( (byte_1401694F0 & 0x10) != 0 )
      sub_1400717E4(
        v20,
        (_DWORD)v18,
        v14,
        (unsigned int)L"MaxNumberOfIO",
        (__int64)L"Dma64BitAddresses",
        (char)v18,
        v20,
        232);
    v5[51] = 1000;
  }
  v22 = v5[52];
  v23 = 255;
  if ( v22 > 0xFF )
  {
    LODWORD(v18) = *((unsigned __int8 *)v5 + 98);
    if ( (_BYTE)v18 != 1 )
    {
      if ( (byte_1401694F0 & 0x10) != 0 )
        sub_1400717E4(v22, (_DWORD)v18, v14, (unsigned int)L"MaxIOsPerLun", (__int64)L"SrbType", (char)v18, v22, 255);
LABEL_79:
      v5[52] = v23;
      goto LABEL_20;
    }
LABEL_19:
    v23 = v5[52];
    if ( v22 <= v21 )
      goto LABEL_20;
    if ( (byte_1401694F0 & 0x10) != 0 )
      sub_1400717E4(v22, (_DWORD)v18, v14, (unsigned int)L"MaxIOsPerLun", (__int64)L"MaxNumberOfIO", v21, v22, v21);
    v23 = v5[51];
    goto LABEL_79;
  }
  if ( v22 >= 0x10 )
    goto LABEL_19;
  if ( (byte_1401694F0 & 0x10) != 0 )
    sub_1400717E4(v22, (_DWORD)v18, v14, (unsigned int)L"MaxIOsPerLun", (__int64)L"MaxIOsPerLun", 16, v22, 16);
  v5[52] = 16;
  v23 = 16;
LABEL_20:
  v24 = v5[53];
  if ( v24 > v23 )
  {
    if ( (byte_1401694F0 & 0x10) != 0 )
      sub_1400717E4(
        v22,
        (_DWORD)v18,
        v14,
        (unsigned int)L"InitialLunQueueDepth",
        (__int64)L"MaxIOsPerLun",
        v23,
        v24,
        v23);
    v24 = v5[52];
    LOBYTE(v23) = v24;
    v5[53] = v24;
  }
  if ( (byte_1401694F0 & 0x10) != 0 )
    sub_140071644(
      v5[6],
      (unsigned int)&unk_14014A870,
      *((unsigned __int8 *)v5 + 97),
      *v5,
      v5[6],
      *((_BYTE *)v5 + 72),
      *((_BYTE *)v5 + 97),
      *((_BYTE *)v5 + 146),
      v5[51],
      v23,
      v24,
      v5[48],
      v5[55],
      *((_BYTE *)v5 + 98),
      *((_BYTE *)v5 + 99),
      *((_BYTE *)v5 + 144),
      v5[54],
      v5[40],
      *((_BYTE *)v5 + 83),
      *((_BYTE *)v5 + 196));
  return v4;
}

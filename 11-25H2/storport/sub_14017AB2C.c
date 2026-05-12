/*
 * XREFs of sub_14017AB2C @ 0x14017AB2C
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_14006AA44 @ 0x14006AA44 (sub_14006AA44.c)
 *     sub_14006B0D0 @ 0x14006B0D0 (sub_14006B0D0.c)
 *     sub_1400A85C4 @ 0x1400A85C4 (sub_1400A85C4.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14017AB2C(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // edx
  _BYTE *v4; // r14
  bool v6; // zf
  PVOID *i; // rsi
  PVOID v8; // rbp
  unsigned int v9; // eax
  const wchar_t *v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 936);
  v3 = *(_DWORD *)(a1 + 944) & 0x1F;
  v17 = 0;
  v4 = 0LL;
  v6 = (*(_BYTE *)(a1 + 112) & 0x10) == 0;
  v18 = *(_DWORD *)(a1 + 948) & 7 | (8 * ((32 * v2) | v3));
  if ( !v6 )
    return;
  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = (PVOID *)qword_140169290; i != &qword_140169290; i = (PVOID *)*i )
  {
    v8 = i[5];
    v9 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD, unsigned int *))v8 + 4))(
           *((_QWORD *)v8 + 1),
           &v18,
           0LL,
           &v17);
    v1 = v9;
    if ( v9 == -1056964601 )
      goto LABEL_5;
    if ( v9 != -1056964604 )
    {
      v10 = L"Failed to query NVMe ICE required capability size";
      goto LABEL_23;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72436152u);
    v4 = (_BYTE *)sub_1400143E0(256LL, v17, 1917018450LL, *(_QWORD *)(a1 + 8));
    if ( !v4 )
    {
      v1 = -1073741670;
      break;
    }
    v9 = (*((__int64 (__fastcall **)(_QWORD, int *, _BYTE *, unsigned int *))v8 + 4))(
           *((_QWORD *)v8 + 1),
           &v18,
           v4,
           &v17);
    v1 = v9;
    if ( v9 == -1056964601 )
    {
LABEL_5:
      v15 = 4;
      v10 = L"Device incompatible with NVMe ICE interface";
      v11 = 3238002695LL;
LABEL_24:
      sub_1400A85C4(a1, (__int64)i, v11, v10, v15);
      continue;
    }
    if ( v9 )
    {
      v10 = L"Unexpected error status from NVMe ICE QueryCapabilities";
LABEL_23:
      v15 = 2;
      v11 = v9;
      goto LABEL_24;
    }
    v13 = *(unsigned __int16 *)v4;
    if ( (_DWORD)v13 == 1 )
    {
      if ( (v4[4] & 1) == 0 )
      {
        sub_1400A85C4(a1, (__int64)i, 0LL, L"NVMe ICE interface does not support a page size of 4096", 4);
        continue;
      }
      *((_BYTE *)i + 96) = v4[6];
      v9 = sub_14006AA44(a1, (__int64)v4, (__int64)i);
      v1 = v9;
      if ( !v9 )
        break;
      v10 = L"Failed to initialize NVMe ICE using compatible interface";
      goto LABEL_23;
    }
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 2) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      LODWORD(v16) = 0;
      LODWORD(v14) = *(unsigned __int16 *)v4;
      sub_14006B0D0((__int64)off_140168120->AttachedDevice, v13, v12, a1, v14, v8, v16);
    }
  }
  ExReleaseResourceLite(&Resource);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72436152u);
  if ( v1 < 0
    && off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    LODWORD(v14) = v1;
    sub_140067FD4((__int64)off_140168120->AttachedDevice, 0x10u, (__int64)&unk_14014B8F0, a1, v14);
  }
}

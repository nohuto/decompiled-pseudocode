/*
 * XREFs of sub_1400BBB40 @ 0x1400BBB40
 * Callers:
 *     sub_1400BBAD0 @ 0x1400BBAD0 (sub_1400BBAD0.c)
 * Callees:
 *     sub_1400336C8 @ 0x1400336C8 (sub_1400336C8.c)
 *     sub_14006F36C @ 0x14006F36C (sub_14006F36C.c)
 *     sub_14006FB94 @ 0x14006FB94 (sub_14006FB94.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400BBB40(__int64 a1, __int64 a2)
{
  int v3; // ebx
  USHORT *v4; // rdi
  UUID v5; // xmm6
  __int64 v6; // rax
  char v7; // al
  UUID v8; // xmm0
  char v9; // al
  __int64 result; // rax
  STRING String1; // [rsp+20h] [rbp-50h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]

  Uuid = 0LL;
  v13 = 0LL;
  String1 = 0LL;
  v3 = sub_1400336C8(0x48536152u, (unsigned __int16 *)(a1 + 120), &String1);
  if ( v3 < 0 )
    return 3221225473LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1401692A0.DeviceExtension, 1u);
  v4 = *(USHORT **)&stru_1401692A0.SectorSize;
  v5 = 0LL;
  while ( v4 != &stru_1401692A0.SectorSize )
  {
    if ( !RtlCompareString(&String1, (const STRING *)v4 + 1, 0) )
    {
      v5 = (UUID)*((_OWORD *)v4 + 2);
      break;
    }
    v4 = *(USHORT **)v4;
  }
  Uuid = v5;
  v6 = *(_QWORD *)&v5.Data1 - v13;
  if ( *(_QWORD *)&v5.Data1 == (_QWORD)v13 )
    v6 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v13 + 1);
  if ( !v6 )
  {
    v3 = ExUuidCreate(&Uuid);
    if ( v3 >= 0 )
    {
      v3 = sub_14006FB94(String1.Buffer, String1.Length, &Uuid);
      if ( v3 >= 0 )
        v3 = sub_14006F36C((__int64)String1.Buffer, String1.Length, (struct _STRING *)&Uuid);
    }
  }
  ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceExtension);
  ExFreePoolWithTag(String1.Buffer, 0x48536152u);
  if ( v3 < 0 )
    return 3221225473LL;
  v7 = *(_BYTE *)a2 & 0xF1;
  *(_QWORD *)&String1.Length = 0x202020205446534DLL;
  v8 = Uuid;
  *(_BYTE *)a2 = v7 | 1;
  v9 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v9 | 1;
  *(_QWORD *)(a2 + 4) = *(_QWORD *)&String1.Length;
  result = 0LL;
  *(UUID *)(a2 + 12) = v8;
  return result;
}

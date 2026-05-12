/*
 * XREFs of sub_14006F36C @ 0x14006F36C
 * Callers:
 *     sub_14006F6EC @ 0x14006F6EC (sub_14006F6EC.c)
 *     sub_1400BBB40 @ 0x1400BBB40 (sub_1400BBB40.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 */

__int64 __fastcall sub_14006F36C(__int64 a1, int a2, struct _STRING *a3)
{
  unsigned int v3; // edi
  struct _STRING *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  PCHAR Buffer; // rcx
  PCSZ v12; // r10
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax

  v3 = 0;
  v7 = (struct _STRING *)sub_1400143E0(64LL, 48LL, 1213423954LL, 0LL);
  if ( !v7 )
    return (unsigned int)-1073741670;
  v8 = (unsigned int)(a2 + 1);
  v9 = v8;
  v10 = sub_1400143E0(64LL, v8, 1213423954LL, 0LL);
  if ( !v10 )
  {
    Buffer = v7[1].Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x48536152u);
    ExFreePoolWithTag(v7, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  sub_14006FED8(v10, v9, a1);
  v7->Buffer = (PCHAR)v7;
  *(_QWORD *)&v7->Length = v7;
  RtlInitAnsiString(v7 + 1, v12);
  v7[2] = *a3;
  DeviceObjectExtension = stru_1401692A0.DeviceObjectExtension;
  if ( *(struct _DEVICE_OBJECT **)stru_1401692A0.DeviceObjectExtension != (struct _DEVICE_OBJECT *)&stru_1401692A0.SectorSize )
    __fastfail(3u);
  *(_QWORD *)&v7->Length = &stru_1401692A0.SectorSize;
  v7->Buffer = (PCHAR)DeviceObjectExtension;
  *(_QWORD *)&DeviceObjectExtension->Type = v7;
  stru_1401692A0.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)v7;
  return v3;
}

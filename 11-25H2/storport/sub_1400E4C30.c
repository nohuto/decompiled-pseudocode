/*
 * XREFs of sub_1400E4C30 @ 0x1400E4C30
 * Callers:
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 * Callees:
 *     sub_14008BAE8 @ 0x14008BAE8 (sub_14008BAE8.c)
 */

void __fastcall sub_1400E4C30(__int64 a1)
{
  bool v1; // zf
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 656) == 0;
  Timeout.QuadPart = -100000000LL;
  if ( !v1 )
  {
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 32LL), BusRelations);
    if ( KeWaitForSingleObject((PVOID)(a1 + 256), Executive, 0, 0, &Timeout) == 258 && (dword_140168408 & 2) != 0 )
      sub_14008BAE8(2, a1, 0LL);
  }
}

/*
 * XREFs of sub_1400401B0 @ 0x1400401B0
 * Callers:
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     sub_14004DCE0 @ 0x14004DCE0 (sub_14004DCE0.c)
 *     sub_1400554A4 @ 0x1400554A4 (sub_1400554A4.c)
 */

NTSTATUS __fastcall sub_1400401B0(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 1984) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1976), 0);
  result = sub_1400554A4(a1);
  if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 104) &= 0xF9u;
  }
  v3 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v3 != -1 )
  {
    result = sub_14004DCE0(v3, 0LL, a1);
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}

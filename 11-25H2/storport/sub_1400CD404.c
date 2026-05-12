/*
 * XREFs of sub_1400CD404 @ 0x1400CD404
 * Callers:
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 * Callees:
 *     sub_14004DCE0 @ 0x14004DCE0 (sub_14004DCE0.c)
 */

int __fastcall sub_1400CD404(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 v4; // rcx

  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 888) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 880), 0);
  if ( *(_QWORD *)(a1 + 872) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 864), 0);
  if ( (*(_BYTE *)(a1 + 144) & 8) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_QWORD *)(a1 + 144) &= 0xFFFFFFFFFFFFFFF3uLL;
  }
  v4 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v4 != -1 )
  {
    LOBYTE(a2) = 1;
    result = sub_14004DCE0(v4, a2, (int *)a1);
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}

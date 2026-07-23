/*
 * XREFs of BiIsValidObject @ 0x140B3AA68
 * Callers:
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsValidObject(_DWORD *a1, _QWORD *a2, char a3)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rax

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 0;
  v3 = a1[1];
  if ( !(v3 >> 28) )
    return 0;
  if ( v3 >> 28 != 1 )
    return v3 >> 28 != 2 || (v3 & 0xF00000) != 0 && ((v3 & 0xF00000) != 0x200000 || (v3 & 0xFFFFF) != 0);
  v4 = v3 & 0xFFFFF;
  if ( (v3 & 0xFFFFF) == 0 )
    return 0;
  v5 = (v3 >> 20) & 0xF;
  if ( !v5 )
    return 0;
  if ( v5 != 1 )
    return 1;
  v6 = v4 - 1;
  if ( v6 )
    return v6 != 1048574 || (a3 & 1) != 0;
  if ( !a2 )
    return 0;
  v7 = *a2 - *(_QWORD *)&GUID_FIRMWARE_BOOTMGR.Data1;
  if ( *a2 == *(_QWORD *)&GUID_FIRMWARE_BOOTMGR.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_FIRMWARE_BOOTMGR.Data4;
  return !v7;
}

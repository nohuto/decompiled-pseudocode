/*
 * XREFs of BiGetBcdDeviceType @ 0x140898600
 * Callers:
 *     BiResolveLocateDevice @ 0x140897718 (BiResolveLocateDevice.c)
 *     BiResolveLocate @ 0x14089933C (BiResolveLocate.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall BiGetBcdDeviceType(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  if ( a1 <= 8 )
  {
    if ( a1 == 8 )
      return L"LOCATE";
    v1 = a1 - 1;
    if ( !v1 )
      return L"BOOT_DEVICE";
    v2 = v1 - 1;
    if ( !v2 )
      return L"PARTITION";
    v3 = v2 - 1;
    if ( !v3 )
      return L"FILE";
    v4 = v3 - 1;
    if ( !v4 )
      return L"RAMDISK";
    v5 = v4 - 2;
    if ( !v5 )
      return L"QUALIFIED_PARTITION";
    if ( v5 == 1 )
      return L"VMBUS";
    return L"UNKNOWN";
  }
  v7 = a1 - 9;
  if ( !v7 )
    return L"URI";
  v8 = v7 - 1;
  if ( !v8 )
    return L"COMPOSITE";
  v9 = v8 - 1;
  if ( !v9 )
    return L"CIMFS";
  v10 = v9 - 1;
  if ( !v10 )
    return L"MEMDISK";
  if ( v10 != 1 )
    return L"UNKNOWN";
  return L"QUALIFIED_HARD_DISK";
}

/*
 * XREFs of IommuUnmapDevice @ 0x14059F520
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     IommupUnmapDeviceInternal @ 0x14059FB94 (IommupUnmapDeviceInternal.c)
 */

__int64 __fastcall IommuUnmapDevice(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9

  v3 = *a1;
  v5 = *(_QWORD *)(a1[1] + 24);
  if ( v5 )
  {
    ExtEnvFreeMemory((__int64)a1, v5);
    *(_QWORD *)(a1[1] + 24) = 0LL;
  }
  v6 = IommupUnmapDeviceInternal(v3, a2);
  HalpIommuDeleteDevice(a2, v7, v8, v9);
  return v6;
}

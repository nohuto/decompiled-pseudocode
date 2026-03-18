/*
 * XREFs of PipMatchPersistentMemoryV1 @ 0x14079DD64
 * Callers:
 *     PipEnumeratePersistedMemoryCallback @ 0x1405D8B00 (PipEnumeratePersistedMemoryCallback.c)
 *     PipGetPersistentMemory @ 0x14079D57C (PipGetPersistentMemory.c)
 * Callees:
 *     PipGetDeviceObjectLocation @ 0x14079D194 (PipGetDeviceObjectLocation.c)
 *     PnpCompareMultiSz @ 0x140A7ADF8 (PnpCompareMultiSz.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMatchPersistentMemoryV1(ULONG_PTR a1, __int64 a2, char a3, _BYTE *a4)
{
  PVOID v4; // rbx
  int DeviceObjectLocation; // eax
  unsigned int v8; // edi
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v10 = 0;
  P = 0LL;
  *a4 = 0;
  if ( !a1 )
  {
    if ( !a3 && *(_DWORD *)(a2 + 4) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    DeviceObjectLocation = PipGetDeviceObjectLocation(a1, &v10, &P);
    v4 = P;
    v8 = DeviceObjectLocation;
    if ( DeviceObjectLocation < 0 )
      goto LABEL_10;
    if ( (unsigned __int8)PnpCompareMultiSz((PCWCH)P, (PCWCH)(a2 + 16), 0) )
LABEL_8:
      *a4 = 1;
  }
LABEL_9:
  v8 = 0;
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x61706E50u);
  return v8;
}

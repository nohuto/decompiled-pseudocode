/*
 * XREFs of PipMatchPersistentMemory @ 0x1407A07C4
 * Callers:
 *     PipEnumeratePersistedMemoryCallback @ 0x1405DB300 (PipEnumeratePersistedMemoryCallback.c)
 *     PipGetPersistentMemory @ 0x1407A00BC (PipGetPersistentMemory.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     PipGetDeviceObjectLocation @ 0x14079FCD4 (PipGetDeviceObjectLocation.c)
 *     PnpCompareMultiSz @ 0x140A8BF3C (PnpCompareMultiSz.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMatchPersistentMemory(ULONG_PTR a1, const void **a2, _WORD *a3, __int64 a4, char a5, _BYTE *a6)
{
  _BYTE *v6; // r14
  PVOID v7; // rbx
  char v9; // r9
  bool v10; // zf
  __int64 v11; // rsi
  int DeviceObjectLocation; // eax
  unsigned int v13; // esi
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v16 = 0;
  v7 = 0LL;
  P[0] = 0LL;
  v9 = a5;
  *a6 = 0;
  if ( a3 )
  {
    if ( *a3 != *(_WORD *)(a4 + 16) )
      goto LABEL_17;
  }
  else if ( !v9 && *(_WORD *)(a4 + 16) )
  {
    goto LABEL_17;
  }
  if ( !a1 )
  {
    if ( !v9 )
    {
      v10 = *(_DWORD *)(a4 + 4) == 0;
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  v11 = *(unsigned int *)(a4 + 4);
  if ( (_DWORD)v11 )
  {
    if ( a2 )
    {
      v10 = RtlCompareMemory((const void *)(a4 + 24), a2[1], *(unsigned __int16 *)a2) == v11;
LABEL_12:
      if ( !v10 )
        goto LABEL_17;
      goto LABEL_16;
    }
    DeviceObjectLocation = PipGetDeviceObjectLocation(a1, &v16, P);
    v7 = P[0];
    v13 = DeviceObjectLocation;
    if ( DeviceObjectLocation < 0 )
      goto LABEL_18;
    if ( (unsigned __int8)PnpCompareMultiSz((PCWCH)P[0], (PCWCH)(a4 + 24), 0) )
LABEL_16:
      *v6 = 1;
  }
LABEL_17:
  v13 = 0;
LABEL_18:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x61706E50u);
  return v13;
}

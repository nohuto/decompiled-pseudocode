/*
 * XREFs of CmSiUnlockViewOfSection @ 0x1404C7D68
 * Callers:
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408BFBB4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 * Callees:
 *     ZwUnlockVirtualMemory @ 0x14072BBA0 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiUnlockViewOfSection(ULONG_PTR a1, void **a2, void *a3, ULONG_PTR a4)
{
  void *v4; // rcx
  ULONG_PTR v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwUnlockVirtualMemory(v4, &v7, &v6, 1u);
}

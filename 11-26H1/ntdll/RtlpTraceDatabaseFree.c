/*
 * XREFs of RtlpTraceDatabaseFree @ 0x18014A0E8
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180149E20 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

bool __fastcall RtlpTraceDatabaseFree(void *a1)
{
  ULONG_PTR v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  v2 = 0LL;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v3, &v2, 0x8000u) >= 0;
}

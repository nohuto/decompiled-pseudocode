/*
 * XREFs of LdrDeleteEnclave @ 0x180126340
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800364A0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800911BC (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpDeleteEnclave @ 0x180139424 (LdrpDeleteEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015DA04 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  __int64 *v1; // rax
  char *v2; // rdi
  int v3; // ebx
  int v4; // esi
  char *v5; // rcx
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  RegionSize = 0LL;
  v1 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v2 = (char *)v1;
  if ( !v1 )
    goto LABEL_5;
  v3 = *((_DWORD *)v1 + 14);
  v4 = LdrpDeleteEnclave(v1);
  LdrpUnlockAndDereferenceEnclave(v2);
  v5 = 0LL;
  if ( v3 == 16 )
    v5 = v2;
  v2 = v5;
  if ( v4 >= 0 )
LABEL_5:
    v4 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return v4;
}

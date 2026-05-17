/*
 * XREFs of LdrDeleteEnclave @ 0x1801265D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18004BF20 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x180070D6C (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpDeleteEnclave @ 0x1801396B4 (LdrpDeleteEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015DB44 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdi
  int v3; // ebx
  int v4; // esi
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  v8 = 0LL;
  v1 = LdrpObtainLockedEnclave(a1, 1);
  v2 = (__int64)v1;
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
    v4 = ZwFreeVirtualMemory(-1LL, &v7, &v8, 0x8000LL);
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return (unsigned int)v4;
}

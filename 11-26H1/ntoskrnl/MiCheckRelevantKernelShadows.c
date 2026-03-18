/*
 * XREFs of MiCheckRelevantKernelShadows @ 0x14040D30C
 * Callers:
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 * Callees:
 *     KeQueryKvaShadowRegion @ 0x14040D384 (KeQueryKvaShadowRegion.c)
 *     MiCheckKernelShadow @ 0x14040D4B4 (MiCheckKernelShadow.c)
 */

__int64 __fastcall MiCheckRelevantKernelShadows(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 i; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v1 = 0LL;
  v6 = 0LL;
  v3 = 0xFFFFFFFFLL;
  for ( i = 0LL; (unsigned int)KeQueryKvaShadowRegion(i, &v7, &v6); i = v1 )
  {
    v3 = MiCheckKernelShadow(a1, v7, v6);
    if ( v3 != 0xFFFFFFFFLL )
      break;
    ++v1;
  }
  return v3;
}

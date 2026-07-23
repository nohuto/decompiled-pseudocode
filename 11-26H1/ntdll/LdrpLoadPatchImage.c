/*
 * XREFs of LdrpLoadPatchImage @ 0x18015BD30
 * Callers:
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadPatchImage(void *a1)
{
  char *v2; // r9
  char *v3; // rbx
  __int16 v5; // [rsp+48h] [rbp-B8h]
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  char *v7; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  int v9[4]; // [rsp+68h] [rbp-98h] BYREF
  int v10[32]; // [rsp+80h] [rbp-80h] BYREF

  memset_thunk_772440563353939046(v10, 0, 0x80uLL);
  BaseAddress = 0LL;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    269,
    (__int64)"LdrpLoadPatchImage",
    3,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  *(_OWORD *)v9 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v10);
  LODWORD(v6) = 0;
  LdrpLoadDllInternal(
    (_UNICODE_STRING *)v9,
    (__int64)v10,
    0LL,
    9,
    0LL,
    0LL,
    (__int64 *)&BaseAddress,
    (int *)&v6,
    (__int64)a1,
    v5);
  v3 = 0LL;
  v7 = 0LL;
  if ( (int)v6 < 0 )
  {
    LdrpFindLoadedDllByHandle(a1, (__int64 *)&v7, 0LL, v2);
    v3 = v7;
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), (__int64)v7, (unsigned __int16 *)v9, v6, 1);
    LdrpLogInternal(
      "minkernel\\ldr\\ldrapi.c",
      325,
      (__int64)"LdrpLoadPatchImage",
      0,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1,
      v6);
  }
  LdrpFreeUnicodeString((__int64)v9);
  LdrpReleaseDllPath((__int64)v10);
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  if ( v3 )
    LdrpDereferenceModule(v3);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 342, (__int64)"LdrpLoadPatchImage", 4, "Status: 0x%08lx\n", v6);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 343, (__int64)"LdrpLoadPatchImage", 6, "%x\n", v6);
  return (unsigned int)v6;
}

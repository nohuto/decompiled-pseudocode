/*
 * XREFs of LdrpLoadPatchImage @ 0x18015BE70
 * Callers:
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     LdrpFreeUnicodeString @ 0x1800E04A0 (LdrpFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadPatchImage(const void *a1)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rbx
  __int16 v5; // [rsp+48h] [rbp-B8h]
  char v6[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v9[12]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v10[128]; // [rsp+80h] [rbp-80h] BYREF

  memset_thunk_772440563353939046(v10, 0, 0x80uLL);
  v8 = 0LL;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    269,
    (__int64)"LdrpLoadPatchImage",
    3,
    "Loading patch image with Base image at: 0x%p\n",
    a1);
  *(_OWORD *)v9 = 0LL;
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v10);
  *(_DWORD *)v6 = 0;
  LdrpLoadDllInternal((__int64)v9, (int)v10, 0, 9, 0LL, 0LL, &v8, (int *)v6, (__int64)a1, v5);
  v3 = 0LL;
  v7 = 0LL;
  if ( *(int *)v6 < 0 )
  {
    LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v7, 0LL, v2);
    v3 = v7;
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), v7, v9, *(int *)v6, 1);
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrapi.c",
      325,
      (__int64)"LdrpLoadPatchImage",
      0,
      "Failed to load patch image with base address 0x%p. Status: 0x%08lx\n",
      a1,
      *(_DWORD *)v6);
  }
  LdrpFreeUnicodeString((__int64)v9);
  LdrpReleaseDllPath((__int64)v10);
  if ( v8 )
    LdrpDereferenceModule(v8);
  if ( v3 )
    LdrpDereferenceModule(v3);
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    342,
    (__int64)"LdrpLoadPatchImage",
    4,
    "Status: 0x%08lx\n",
    *(_DWORD *)v6);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 343, (__int64)"LdrpLoadPatchImage", 6, "%x\n", *(_DWORD *)v6);
  return *(unsigned int *)v6;
}

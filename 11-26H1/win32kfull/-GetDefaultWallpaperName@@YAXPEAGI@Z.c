/*
 * XREFs of ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1402D1A28
 * Callers:
 *     LoadWallpaperFilenameFromRegistry @ 0x14013DA04 (LoadWallpaperFilenameFromRegistry.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x14028CDD0 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall GetDefaultWallpaperName(char *a1, unsigned int a2)
{
  wchar_t *v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&v11);
  v4 = L"winnt";
  if ( v11 != 1 )
    v4 = (wchar_t *)L"lanmannt";
  v5 = a2;
  RtlStringCchCopyW(a1, a2, (char *)v4);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904);
  if ( *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 7002LL)
     * (unsigned int)*(unsigned __int8 *)(v8 + 7003) > 4 )
    RtlStringCchCatW((unsigned __int16 *)a1, v5, (char *)L"256");
}

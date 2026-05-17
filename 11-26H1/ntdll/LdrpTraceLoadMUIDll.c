/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800A7CD0
 * Callers:
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     LdrpAccessResourceData @ 0x18002FFB0 (LdrpAccessResourceData.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpResUltimateFallbackInfo @ 0x1800A7430 (RtlpResUltimateFallbackInfo.c)
 *     LdrpResFileSize @ 0x1800A75FC (LdrpResFileSize.c)
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A8A50 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1800A9D20 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x1800AA63C (LdrpResSearchResourceHandle.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 *     LdrpResValidateFilePath @ 0x1800D92B8 (LdrpResValidateFilePath.c)
 *     LdrFindResource_U @ 0x1800D9C50 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800ECF60 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180103100 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x180109594 (LdrpResMapFile.c)
 *     LdrpMUIEtwOutput @ 0x180113278 (LdrpMUIEtwOutput.c)
 * Callees:
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int16 v4; // ax
  unsigned int v5; // edi
  _OWORD v7[3]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v8[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset_thunk_772440563353939046(v8, 0, 0x218uLL);
  v4 = *a1 & 0xFFFE;
  memset(v7, 0, sizeof(v7));
  if ( v4 >= 0x212u )
    v5 = 265;
  else
    v5 = *a1 >> 1;
  memmove(v8, *((const void **)a1 + 1), 2LL * v5);
  v8[v5] = 0;
  BYTE4(v7[0]) = 0;
  LOWORD(v7[0]) = 2 * (v5 + 25);
  *(_OWORD *)((char *)&v7[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent(v2, 256LL, 48LL, v7);
}

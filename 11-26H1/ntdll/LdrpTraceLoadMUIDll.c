/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800A6E00
 * Callers:
 *     LdrpAccessResourceData @ 0x18001B110 (LdrpAccessResourceData.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x1800A6560 (RtlpResUltimateFallbackInfo.c)
 *     LdrpResFileSize @ 0x1800A672C (LdrpResFileSize.c)
 *     LdrResGetRCConfig @ 0x1800A68D0 (LdrResGetRCConfig.c)
 *     LdrpResGetMappingSize @ 0x1800A6EF0 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A7B80 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1800A8E50 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x1800A976C (LdrpResSearchResourceHandle.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     LdrpResValidateFilePath @ 0x1800D6278 (LdrpResValidateFilePath.c)
 *     LdrFindResource_U @ 0x1800D6C10 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800EC400 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180102480 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x180108F34 (LdrpResMapFile.c)
 *     LdrpMUIEtwOutput @ 0x180112D28 (LdrpMUIEtwOutput.c)
 * Callees:
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int16 v4; // ax
  unsigned int v5; // edi
  _OWORD Fields[3]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v8[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset_thunk_772440563353939046(v8, 0, 0x218uLL);
  v4 = *a1 & 0xFFFE;
  memset(Fields, 0, sizeof(Fields));
  if ( v4 >= 0x212u )
    v5 = 265;
  else
    v5 = *a1 >> 1;
  memmove(v8, *((const void **)a1 + 1), 2LL * v5);
  v8[v5] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v5 + 25);
  *(GUID *)((char *)&Fields[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}

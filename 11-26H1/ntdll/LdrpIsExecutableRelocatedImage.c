/*
 * XREFs of LdrpIsExecutableRelocatedImage @ 0x1800DC0E0
 * Callers:
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

_BOOL8 __fastcall LdrpIsExecutableRelocatedImage(unsigned __int64 a1)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v3 = 0LL;
  return (int)RtlImageNtHeaderEx(3, a1, 0LL, &v5) >= 0
      && *(_QWORD *)(v5 + 48) == a1
      && (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v3, 24LL, 0LL) >= 0
      && (_QWORD)v3 == a1
      && (v4 & 2) == 0
      && (v4 & 1) == 0;
}

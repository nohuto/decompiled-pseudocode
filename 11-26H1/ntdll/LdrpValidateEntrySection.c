/*
 * XREFs of LdrpValidateEntrySection @ 0x1800DDA10
 * Callers:
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 */

bool __fastcall LdrpValidateEntrySection(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v5 = 0LL;
  RtlImageNtHeaderEx(3, v1, 0LL, &v5);
  v3 = *(_DWORD *)(v5 + 40);
  return !v3 || !*(_QWORD *)(a1 + 56) || v3 >= *(_DWORD *)(v5 + 84);
}

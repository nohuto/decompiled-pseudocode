/*
 * XREFs of ?SetProductVersionInfo@@YAHXZ @ 0x1402B7908
 * Callers:
 *     _SetWatermarkStrings @ 0x1402B7990 (_SetWatermarkStrings.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011B9D0 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall SetProductVersionInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  unsigned int v6; // ecx
  char *v7; // r8
  unsigned __int64 v8; // r9

  v2 = 1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( *(_DWORD *)(v4 + 2164) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v6 = 126;
    if ( *(_WORD *)(UserSessionState + 66408) <= 0x7Eu )
      v6 = *(unsigned __int16 *)(UserSessionState + 66408);
    v7 = *(char **)(UserSessionState + 66416);
    v8 = v6 >> 1;
    *(_DWORD *)(UserSessionState + 66400) = v8;
    if ( (int)RtlStringCchCopyNW((char *)(UserSessionState + 66272), 64LL, v7, v8) < 0 )
      return 0;
  }
  return v2;
}

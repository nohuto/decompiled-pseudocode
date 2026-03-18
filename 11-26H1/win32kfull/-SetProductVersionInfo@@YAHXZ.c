/*
 * XREFs of ?SetProductVersionInfo@@YAHXZ @ 0x1402D1D94
 * Callers:
 *     _SetWatermarkStrings @ 0x140251AC0 (_SetWatermarkStrings.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140131830 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall SetProductVersionInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // eax
  char *v9; // r8
  unsigned int v10; // eax

  v2 = 1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  if ( *(_DWORD *)(v4 + 2164) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v6 = UserSessionState + 66264;
    v7 = *(unsigned __int16 *)(UserSessionState + 66400);
    v8 = 126;
    if ( (unsigned __int16)v7 <= 0x7Eu )
      v8 = v7;
    v9 = *(char **)(v6 + 144);
    v10 = v8 >> 1;
    *(_DWORD *)(v6 + 128) = v10;
    if ( (int)RtlStringCchCopyNW((char *)v6, 64LL, v9, v10) < 0 )
      return 0;
  }
  return v2;
}

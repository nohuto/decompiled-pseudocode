/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x180079A10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x1800E5874 (ApiSetResolveToHost.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(__int64 a1, _BYTE *a2)
{
  void *ApiSetMap; // rbx
  int v5; // ebx
  __int64 v6; // r8
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  LdrpLogDllState(0LL, a1, 5328LL);
  v5 = ApiSetResolveToHost((_DWORD)ApiSetMap, a1, 0, (_DWORD)a2, (__int64)&v8);
  if ( v5 >= 0 && *a2 )
  {
    if ( (_WORD)v8 )
      v6 = 5329LL;
    else
      v6 = 5330LL;
  }
  else
  {
    v6 = 5331LL;
  }
  LdrpLogDllState(0LL, a1, v6);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( *a2 )
  {
    if ( !(_WORD)v8 )
      *a2 = 0;
  }
  return 0LL;
}

/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x140132ACC
 * Callers:
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1401329F0 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x140132DD8 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x140132FC0 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString, __int64 a2)
{
  __int64 v3; // rbx
  struct _CIT_PARAMETERS *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(SourceString, a2) + 18912);
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_DWORD *)(v3 + 4) = 64;
  *(_DWORD *)(v3 + 8) = 60000;
  *(_DWORD *)(v3 + 12) = 1;
  *(_DWORD *)(v3 + 16) = 60000;
  *(_DWORD *)(v3 + 20) = 1000;
  CitpParametersCompute((struct _CIT_PARAMETERS *)(v3 + 4));
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_OWORD *)(v3 + 40) = 0LL;
  *(_OWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 64) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_DWORD *)(v3 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_BYTE *)v3 = 1;
  CitpParametersLoad(v4, SourceString);
  if ( !*(_BYTE *)(v3 + 24) )
    return 0LL;
  result = CitpStart(v6, v5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

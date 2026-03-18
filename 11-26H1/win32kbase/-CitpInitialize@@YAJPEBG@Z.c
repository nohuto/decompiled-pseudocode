/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x14016B920
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x14016B80C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x14016BC30 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x14016BEBC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString, int a2, int a3)
{
  __int64 v4; // rbx
  struct _CIT_PARAMETERS *v5; // r10
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)SourceString, a2, a3) + 18952);
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_DWORD *)(v4 + 4) = 64;
  *(_DWORD *)(v4 + 8) = 60000;
  *(_DWORD *)(v4 + 12) = 1;
  *(_DWORD *)(v4 + 16) = 60000;
  *(_DWORD *)(v4 + 20) = 1000;
  CitpParametersCompute((struct _CIT_PARAMETERS *)(v4 + 4));
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_OWORD *)(v4 + 40) = 0LL;
  *(_OWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)(v4 + 64) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_DWORD *)(v4 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_BYTE *)v4 = 1;
  CitpParametersLoad(v5, SourceString);
  if ( !*(_BYTE *)(v4 + 24) )
    return 0LL;
  result = CitpStart(v7, v6, v8);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

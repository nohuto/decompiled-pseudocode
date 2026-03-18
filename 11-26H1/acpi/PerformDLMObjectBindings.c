/*
 * XREFs of PerformDLMObjectBindings @ 0x14006E6BC
 * Callers:
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1400588E0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 * Callees:
 *     ParseDLMObjectInternal @ 0x14006E4EC (ParseDLMObjectInternal.c)
 */

__int64 __fastcall PerformDLMObjectBindings(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  _DWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // eax

  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v3 = *(unsigned int **)(a1 + 32);
    v4 = 0LL;
    v5 = 0;
    v6 = *v3;
    while ( v5 < v6 )
    {
      if ( HIWORD(v3[10 * v5 + 2]) != 4 )
        goto LABEL_9;
      v7 = *(_DWORD **)&v3[10 * v5 + 10];
      if ( *v7 > 1u )
      {
        v8 = (__int64)(v7 + 2);
        v9 = (__int64)(v7 + 12);
        do
        {
          v10 = ParseDLMObjectInternal(v4, a2, v8, v9);
          v4 = v10;
        }
        while ( v10 == -1073741802 );
      }
      ++v5;
    }
  }
  else
  {
LABEL_9:
    LODWORD(v4) = -1072431089;
  }
  return (unsigned int)v4;
}

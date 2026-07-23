/*
 * XREFs of RtlFindHotPatchBase @ 0x1408B1444
 * Callers:
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     RtlFindHotPatchBaseMachine @ 0x1408B147C (RtlFindHotPatchBaseMachine.c)
 *     RtlFindHotPatchInformation @ 0x1408B14E4 (RtlFindHotPatchInformation.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlFindHotPatchBase(unsigned int *a1, unsigned int a2)
{
  char *v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  char *result; // rax
  char *v6; // rcx

  if ( a2 >= a1[4] )
    return 0LL;
  v2 = (char *)a1 + a1[3];
  v3 = *(unsigned int *)&v2[4 * a2];
  if ( !*(_DWORD *)&v2[4 * a2] )
    return 0LL;
  v4 = a1[1];
  result = 0LL;
  v6 = (char *)a1 + v3;
  if ( v3 + 32 <= v4 )
    return v6;
  return result;
}

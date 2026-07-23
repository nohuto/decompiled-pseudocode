/*
 * XREFs of RtlpImageNtHeader @ 0x18015DC34
 * Callers:
 *     LdrpGetPdbSignature @ 0x18015D2A0 (LdrpGetPdbSignature.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpImageNtHeader(__int64 a1)
{
  __int64 v1; // rdx
  _DWORD *v2; // rcx

  v1 = 0LL;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && *(_WORD *)a1 == 23117
    && *(_DWORD *)(a1 + 60) < 0x10000000u )
  {
    v2 = (_DWORD *)(*(int *)(a1 + 60) + a1);
    if ( *v2 != 17744 )
      return 0LL;
    return v2;
  }
  return (_DWORD *)v1;
}

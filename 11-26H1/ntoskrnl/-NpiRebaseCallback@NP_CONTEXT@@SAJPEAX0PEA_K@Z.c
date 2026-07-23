/*
 * XREFs of ?NpiRebaseCallback@NP_CONTEXT@@SAJPEAX0PEA_K@Z @ 0x140640090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NP_CONTEXT::NpiRebaseCallback(void *a1, void *a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r9d

  if ( !a1 )
  {
    v3 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 3) == 1 )
    {
      if ( ((v3 >> 2) & 0x3FF) > (unsigned int)a2 )
        v4 = ((unsigned __int16)v3 ^ (unsigned __int16)(v3 - 4 * (_WORD)a2)) & 0xFFC ^ v3;
      else
        v4 = v3 & 0xFFFFF003;
      *(_DWORD *)a3 = v4;
    }
  }
  return 0LL;
}

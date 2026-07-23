/*
 * XREFs of RtlXRestore @ 0x1403D883C
 * Callers:
 *     RtlXRestoreS @ 0x1403D7DE0 (RtlXRestoreS.c)
 *     KxContextToKframes @ 0x1403D82B0 (KxContextToKframes.c)
 *     KiRestoreProcessorState @ 0x1405FFEF8 (KiRestoreProcessorState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlXRestore(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // r8d

  if ( *(__int64 *)(a1 + 520) >= 0 && (a2 & 6) == 4 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = _mm_getcsr();
    result = a2;
    _xrstor((void *)a1, a2);
    *(_DWORD *)(a1 + 24) = v3;
  }
  else
  {
    result = a2;
    _xrstor((void *)a1, a2);
  }
  return result;
}

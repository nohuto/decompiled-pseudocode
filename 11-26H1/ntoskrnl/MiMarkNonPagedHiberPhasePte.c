/*
 * XREFs of MiMarkNonPagedHiberPhasePte @ 0x140C06F70
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // r9
  __int64 v7; // rcx

  v3 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    v5 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    if ( MiIsPfn(v5) )
    {
      if ( (v3 & 0x80u) == 0LL )
      {
        if ( !a3
          && ((unsigned __int16)*(_DWORD *)(48 * v5 - 0x220000000000LL + 32) > 1u
           || (*(_QWORD *)(48 * v5 - 0x220000000000LL) & 1) == 0
           || (*(_DWORD *)(48 * v5 - 0x220000000000LL + 32) & 0x8000000) != 0) )
        {
          v6 = 1LL;
LABEL_14:
          PoSetHiberRange(0LL, 0x14000u, (PVOID)((v3 >> 12) & 0xFFFFFFFFFFLL), v6, 0x6C64704Eu);
        }
      }
      else
      {
        v6 = 512LL;
        if ( a3 <= 1 )
          goto LABEL_14;
        v7 = (unsigned int)(a3 - 1);
        do
        {
          v6 <<= 9;
          --v7;
        }
        while ( v7 );
        if ( v6 )
          goto LABEL_14;
      }
    }
  }
  return 0LL;
}

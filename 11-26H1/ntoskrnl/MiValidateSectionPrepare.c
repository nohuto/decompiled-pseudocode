/*
 * XREFs of MiValidateSectionPrepare @ 0x140B05814
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateSectionPrepare(__int64 *a1)
{
  __int64 v1; // r10
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // edx

  v1 = a1[1];
  *((_DWORD *)a1 + 9) |= 4u;
  v3 = *((_DWORD *)a1 + 7);
  a1[12] = *(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  *((_DWORD *)a1 + 12) = 0;
  v4 = *a1;
  if ( (*(_DWORD *)(v1 + 56) & 0x800) != 0 )
  {
    if ( (v3 & 0x40000000) != 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 115;
      return 3221226547LL;
    }
    v3 |= 0x10000000u;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 52LL) & 0x10) != 0 )
  {
    v3 |= 0x40u;
  }
  v5 = v3 | 0x1000000;
  if ( (*(_DWORD *)(v1 + 56) & 0x30000000) != 0x10000000 )
    v5 = v3;
  *((_DWORD *)a1 + 7) = v5;
  if ( (v5 & 0x40000000) == 0 || *(_QWORD *)(v1 + 144) )
  {
    *((_DWORD *)a1 + 10) = ((v5 & 5) != 0) + 2;
    *((_DWORD *)a1 + 11) = (v5 & 5) != 0 ? 2 : 0;
    return 0LL;
  }
  else
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 116;
    return 3221225595LL;
  }
}

/*
 * XREFs of sub_1400EC308 @ 0x1400EC308
 * Callers:
 *     sub_1400EB6AC @ 0x1400EB6AC (sub_1400EB6AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400EC308(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v6; // r10
  unsigned __int8 *v7; // r8

  v3 = *(_QWORD *)(a1 + 128);
  v4 = 0;
  v6 = v3 + 584;
  if ( (*(_DWORD *)(v3 + 144) & 0x800LL) != 0 || *(_QWORD *)v6 )
  {
    v7 = *(unsigned __int8 **)(*(_QWORD *)v6 + 120LL);
    if ( a2 < *((_DWORD *)v7 + 1) )
    {
      *(_DWORD *)a3 = a2;
      *(_DWORD *)(a3 + 4) = *(_DWORD *)&v7[48 * a2 + 32];
      *(_QWORD *)(a3 + 8) = *(_QWORD *)&v7[48 * a2 + 8];
      *(_DWORD *)(a3 + 16) = *(_DWORD *)&v7[48 * a2 + 36];
      *(_DWORD *)(a3 + 20) = *v7;
      *(_DWORD *)(a3 + 24) = *(_DWORD *)&v7[48 * a2 + 44];
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v4;
}

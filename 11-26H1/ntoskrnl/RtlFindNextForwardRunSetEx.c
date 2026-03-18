/*
 * XREFs of RtlFindNextForwardRunSetEx @ 0x1404A2400
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x14086E230 (MiApplyHotPatchToDriverDataPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rsi
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx

  v3 = *a1;
  v4 = 0LL;
  v6 = a2;
  if ( *a1 > a2 )
  {
    v7 = a1[1];
    v8 = 0LL;
    v9 = v7 + 8 * ((v3 - 1) >> 6);
    v10 = (unsigned __int64 *)(v7 + 8 * (a2 >> 6));
    v11 = *v10 & ~((1LL << v6) - 1);
    v12 = v10 + 1;
    while ( !v11 )
    {
      if ( (unsigned __int64)v12 > v9 )
        goto LABEL_5;
      ++v10;
      ++v12;
      v11 = *v10;
    }
    _BitScanForward64((unsigned __int64 *)&v13, v11);
    v6 = (unsigned int)v13 + ((__int64)((__int64)v10 - v7) >> 3 << 6);
    if ( v6 > v3 )
    {
LABEL_5:
      v6 = *a1;
      goto LABEL_6;
    }
    v15 = ((1LL << v13) - 1) | v11;
    LODWORD(v16) = 64;
    while ( 1 )
    {
      v17 = ~v15;
      if ( v17 )
        break;
      v8 += 64LL;
      if ( (unsigned __int64)(v10 + 1) > v9 )
        goto LABEL_15;
      v15 = v10[1];
      ++v10;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v17);
LABEL_15:
    v18 = *a1;
    v19 = (unsigned int)v16 + ((__int64)((__int64)v10 - v7) >> 3 << 6);
    if ( v19 <= v3 )
      v18 = v19;
    v8 = v18 - v6;
LABEL_6:
    v4 = v8;
  }
  *a3 = v6;
  return v4;
}

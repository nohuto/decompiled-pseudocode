/*
 * XREFs of RtlFindNextForwardRunSetEx @ 0x14049CCA0
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x140874600 (MiApplyHotPatchToDriverDataPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx

  v3 = *a1;
  v4 = 0LL;
  v6 = a2;
  if ( *a1 > a2 )
  {
    v7 = a1[1];
    v8 = v7 + 8 * ((v3 - 1) >> 6);
    v9 = (unsigned __int64 *)(v7 + 8 * (a2 >> 6));
    v10 = *v9 & ~((1LL << v6) - 1);
    v11 = v9 + 1;
    while ( !v10 )
    {
      if ( (unsigned __int64)v11 > v8 )
        goto LABEL_5;
      ++v9;
      ++v11;
      v10 = *v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v10);
    v6 = (unsigned int)v12 + ((__int64)((__int64)v9 - v7) >> 3 << 6);
    if ( v6 > v3 )
    {
LABEL_5:
      v6 = *a1;
      goto LABEL_6;
    }
    v14 = ((1LL << v12) - 1) | v10;
    while ( 1 )
    {
      v15 = ~v14;
      if ( v15 )
        break;
      if ( (unsigned __int64)(v9 + 1) > v8 )
      {
        v16 = 64LL;
        goto LABEL_14;
      }
      v14 = v9[1];
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v15);
LABEL_14:
    v17 = *a1;
    v18 = v16 + ((__int64)((__int64)v9 - v7) >> 3 << 6);
    if ( v18 <= v3 )
      v17 = v18;
    v4 = v17 - v6;
  }
LABEL_6:
  *a3 = v6;
  return v4;
}

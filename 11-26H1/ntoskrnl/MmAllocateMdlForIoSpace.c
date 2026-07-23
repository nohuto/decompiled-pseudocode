/*
 * XREFs of MmAllocateMdlForIoSpace @ 0x1406EFA80
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 */

__int64 __fastcall MmAllocateMdlForIoSpace(_QWORD *a1, unsigned __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdx
  _DWORD *v6; // r9
  unsigned int i; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 result; // rax
  __int64 Mdl; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  _QWORD *j; // r11
  unsigned int v16; // r10d
  unsigned __int64 v17; // r9
  __int64 v18; // rdx

  v4 = a1;
  v5 = 0LL;
  v6 = a1;
  for ( i = 0; i < a2; ++i )
  {
    if ( (v6[2] & 0xFFF) != 0 )
      return 3221225711LL;
    if ( (*v6 & 0xFFF) != 0 )
      return 3221225711LL;
    v9 = *(_QWORD *)v6 >> 12;
    if ( v9 <= qword_140E2D920 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      return 3221225711LL;
    v10 = v5 + *((_QWORD *)v6 + 1);
    if ( v10 < v5 )
      return 3221225711LL;
    v5 += *((_QWORD *)v6 + 1);
    if ( v10 > 0xFFFFFFFF )
      return 3221225711LL;
    v6 += 4;
  }
  Mdl = IopAllocateMdl(0LL, v5, 0, (__int64)v6, 0LL, 0);
  v13 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  v14 = 0;
  for ( j = (_QWORD *)(Mdl + 48); v14 < a2; v4 += 2 )
  {
    v16 = 0;
    v17 = v4[1] >> 12;
    v18 = *v4 >> 12;
    if ( v17 )
    {
      do
      {
        ++v16;
        *j++ = v18++;
      }
      while ( v16 < v17 );
    }
    ++v14;
  }
  *(_WORD *)(Mdl + 10) |= 2u;
  *(_QWORD *)(Mdl + 16) = 0LL;
  result = 0LL;
  *a3 = v13;
  return result;
}

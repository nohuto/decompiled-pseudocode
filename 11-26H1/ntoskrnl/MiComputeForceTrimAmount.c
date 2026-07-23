/*
 * XREFs of MiComputeForceTrimAmount @ 0x1403C3B44
 * Callers:
 *     MiForcedTrim @ 0x1403C3240 (MiForcedTrim.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeForceTrimAmount(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // r10
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  v4 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  v5 = v4[2300];
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    v5 *= 2LL;
  }
  else if ( a3 > v4[2128] )
  {
    return 0LL;
  }
  v6 = v4[2786];
  v7 = 2 * v5;
  if ( v7 > 0x40000 )
    v7 = 0x40000LL;
  v8 = a2;
  if ( a2 >= v6 )
    v8 = v4[2786];
  v9 = v7 * (100 * v8 / v6) / 0x64;
  v10 = a2 / 0xA;
  if ( v9 <= a2 / 0xA )
    return v9;
  return v10;
}

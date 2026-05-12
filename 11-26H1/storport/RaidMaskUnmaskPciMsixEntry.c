/*
 * XREFs of RaidMaskUnmaskPciMsixEntry @ 0x14005BA3C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidMaskUnmaskPciMsixEntry(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int (__fastcall *v10)(_QWORD, __int64, _QWORD, __int64); // r8

  v3 = 0LL;
  v5 = -1073741637;
  if ( *(_DWORD *)a1 == 1094997074 )
  {
    if ( !*(_BYTE *)(a1 + 4433) )
      return v5;
    v6 = *(_QWORD *)(a1 + 4416);
    if ( !v6 )
      return v5;
    if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 4) )
      return (unsigned int)-1073741811;
    v3 = (_QWORD *)(a1 + 5984);
  }
  else if ( *(_DWORD *)a1 == 1314275652 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x800LL) == 0 )
      return v5;
    v7 = *(_QWORD *)(a1 + 592);
    if ( !v7 )
      return v5;
    v8 = *(_QWORD *)(a1 + 600);
    if ( !v8 )
      return v5;
    v9 = *(_QWORD *)(v8 + 120);
    if ( !v9 )
      return v5;
    if ( (unsigned int)a2 >= *(_DWORD *)(v9 + 4) )
      return (unsigned int)-1073741811;
    v3 = (_QWORD *)(v7 + 72);
  }
  if ( a3 )
    v10 = (unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, __int64))v3[5];
  else
    v10 = (unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, __int64))v3[6];
  if ( v10 )
    return v10(v3[1], a2, v10, 3221225659LL);
  return v5;
}

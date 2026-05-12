/*
 * XREFs of sub_14008DFD0 @ 0x14008DFD0
 * Callers:
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_140134E5C @ 0x140134E5C (sub_140134E5C.c)
 */

__int64 __fastcall sub_14008DFD0(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r10d

  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 3584);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 6056);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 6064);
  }
  if ( !v4 )
    return (unsigned int)-1073741637;
  v5 = sub_140134E5C(a1, v3, v4);
  if ( v5 < 0 )
    sub_14006FED8(a2, 32LL, (__int64)"TcglibDiscoverDevice");
  return (unsigned int)v5;
}

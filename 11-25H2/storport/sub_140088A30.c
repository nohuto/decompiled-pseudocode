/*
 * XREFs of sub_140088A30 @ 0x140088A30
 * Callers:
 *     sub_1400879CC @ 0x1400879CC (sub_1400879CC.c)
 * Callees:
 *     sub_140088348 @ 0x140088348 (sub_140088348.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140088A30(__int64 a1, unsigned int *a2)
{
  int v3; // ebx
  unsigned int (__fastcall *v4)(_QWORD); // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = sub_140088348(a1, &v6);
  if ( v3 >= 0 )
  {
    if ( *(_WORD *)(v6 + 2) >= 2u && (v4 = *(unsigned int (__fastcall **)(_QWORD))(v6 + 56)) != 0LL )
      *a2 = (v4(*(_QWORD *)(v6 + 8)) >> 2) & 0x3FF;
    else
      return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}

/*
 * XREFs of MiIoRangeIsConstant @ 0x1404C2394
 * Callers:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 * Callees:
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 */

__int64 __fastcall MiIoRangeIsConstant(__int64 a1)
{
  __int64 v1; // r10
  _QWORD *v2; // r11
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // rcx
  unsigned __int64 v6; // rax

  v1 = a1;
  v2 = (_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (unsigned __int64 *)(a1 + 48);
  if ( *(_BYTE *)(v1 + 17) )
  {
    MiIoSpaceGetBounds((__int64)v4, v3);
    *(_BYTE *)(v1 + 17) = 0;
  }
  else if ( v3 < *v4 || v3 > *(_QWORD *)(v1 + 56) )
  {
    MiIoSpaceGetBounds((__int64)v4, v3);
  }
  if ( *(_DWORD *)(v1 + 24) != 1 || *(_DWORD *)(v1 + 68) == 3 )
    return 3221226021LL;
  *(_DWORD *)(v1 + 72) |= 1 << *(_DWORD *)(v1 + 64);
  v6 = *(_QWORD *)(v1 + 40) - v3;
  if ( *(_QWORD *)(v1 + 56) - v3 + 1 <= v6 )
    v6 = *(_QWORD *)(v1 + 56) - v3 + 1;
  *v2 += v6;
  return 0LL;
}

/*
 * XREFs of sub_140122E00 @ 0x140122E00
 * Callers:
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_1401228F0 @ 0x1401228F0 (sub_1401228F0.c)
 * Callees:
 *     sub_1400F3180 @ 0x1400F3180 (sub_1400F3180.c)
 *     sub_140122F10 @ 0x140122F10 (sub_140122F10.c)
 */

__int64 __fastcall sub_140122E00(__int64 SystemArgument2, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  if ( (*(_QWORD *)(SystemArgument2 + 968) & 0x8000LL) != 0 )
    return 3221225486LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 1) != 0 )
  {
    a4 = *(_QWORD *)(SystemArgument2 + 712);
  }
  else if ( !a5 )
  {
    if ( (*(_BYTE *)(SystemArgument2 + 136) & 2) != 0 )
      a4 = *(_QWORD *)(SystemArgument2 + 728) + 192LL * a3;
    else
      a4 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(SystemArgument2 + 872) + 2LL * a3)
         + *(_QWORD *)(SystemArgument2 + 728)
         - 192LL;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4252LL) = *(_WORD *)(a4 + 136);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x100) != 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(SystemArgument2 + 948), 1u);
    sub_1400F3180(SystemArgument2, 0);
  }
  return sub_140122F10((PVOID)SystemArgument2, a5);
}

/*
 * XREFs of RaidSrbIsPowerRequired @ 0x14002B0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RaidSrbIsPowerRequired(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v2 == 40 )
    v2 = *(_DWORD *)(a2 + 20);
  if ( v2 == 9 )
    return 1;
  if ( v2 != 8 )
  {
    switch ( v2 )
    {
      case 0:
      case 2:
      case 7:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        return 1;
      case 16:
        v4 = *(_QWORD *)(a1 + 24);
        return v4 && *(_DWORD *)v4 == 1094997074 && (*(_BYTE *)(v4 + 604) & 0x10) != 0;
      default:
        return 0;
    }
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 24) + 467LL) != 0;
}

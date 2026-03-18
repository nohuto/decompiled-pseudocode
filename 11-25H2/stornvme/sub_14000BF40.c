/*
 * XREFs of sub_14000BF40 @ 0x14000BF40
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000BF40(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_DWORD *)(a1 + 1612) == 1 )
  {
    v1 = *(unsigned int *)(a1 + 88);
  }
  else
  {
    v1 = *(unsigned int *)(a1 + 84);
    if ( (_DWORD)v1 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1610) )
      {
        if ( *(_BYTE *)(a1 + 1609) <= 2u )
          return 0LL;
        v1 = *(unsigned int *)(a1 + 1636);
      }
      else
      {
        v1 = *(unsigned int *)(a1 + 1628);
      }
    }
  }
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1600) |= 0x20u;
    return StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1640), sub_1400111C0);
  }
  return 0LL;
}

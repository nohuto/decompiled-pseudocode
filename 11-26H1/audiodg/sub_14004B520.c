/*
 * XREFs of sub_14004B520 @ 0x14004B520
 * Callers:
 *     sub_14004AEE4 @ 0x14004AEE4 (sub_14004AEE4.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_14004B664 @ 0x14004B664 (sub_14004B664.c)
 */

__int64 __fastcall sub_14004B520(__int64 a1, _WORD *a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbp
  void *v12; // rax
  __int64 v13; // rcx

  v4 = 0;
  if ( !a2 )
    return 2147942487LL;
  if ( a4 || (unsigned int)sub_14004B664(a2) )
  {
    v9 = (unsigned __int16)a2[8];
    if ( v9 + 18 < v9 )
      return (unsigned int)-2147024362;
    if ( v9 + 18 <= a3 )
    {
      j_j__o_free(*(_QWORD *)(a1 + 16));
      v11 = 18LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( *a2 != 1 )
        v11 = (unsigned __int16)a2[8] + 18LL;
      v12 = (void *)sub_1400499AC(v11, v10);
      *(_QWORD *)(a1 + 16) = v12;
      if ( v12 )
      {
        memcpy(v12, a2, v11);
        if ( *a2 == 1 )
          *(_WORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0;
        v13 = *(_QWORD *)(a1 + 16);
        if ( *(_WORD *)v13 )
          *(_DWORD *)(a1 + 12) = ((*(_WORD *)v13 - 1) & 0xFFFD) != 0
                              && (*(_WORD *)v13 != 0xFFFE
                               || (*(_QWORD *)(v13 + 24) != 0x10000000000001LL
                                || *(_QWORD *)(v13 + 32) != 0x719B3800AA000080LL)
                               && (*(_QWORD *)(v13 + 24) != 0x10000000000003LL
                                || *(_QWORD *)(v13 + 32) != 0x719B3800AA000080LL));
      }
      else
      {
        return (unsigned int)-2147024882;
      }
      return v4;
    }
  }
  return (unsigned int)-2147024809;
}

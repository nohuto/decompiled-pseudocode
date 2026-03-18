/*
 * XREFs of sub_1400283C0 @ 0x1400283C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

char __fastcall sub_1400283C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // eax

  v2 = sub_140005000(a2);
  v6 = v2;
  if ( v4 )
  {
    LOBYTE(v2) = *(_BYTE *)(v3 + 3);
    if ( (_BYTE)v2 == 1 && *v4 == 1313882949 )
    {
      v7 = *(_QWORD *)(v5 + 1656);
      LOWORD(v2) = *(_WORD *)v7;
      *(_WORD *)(v5 + 3768) = *(_WORD *)v7;
      if ( (_WORD)v2 == 256 )
      {
        v8 = *(unsigned __int16 *)(v7 + 2);
        *(_DWORD *)(v5 + 3772) = v8;
        if ( v8 )
          *(_BYTE *)(v5 + 3752) = 1;
        *(_DWORD *)(v5 + 3776) = *(_DWORD *)(v7 + 4);
        LODWORD(v2) = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v5 + 3780) = v2;
      }
    }
  }
  *(_BYTE *)(v6 + 4225) |= 8u;
  return v2;
}

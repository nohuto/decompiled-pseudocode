/*
 * XREFs of sub_1400C5164 @ 0x1400C5164
 * Callers:
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 * Callees:
 *     sub_1400C4D68 @ 0x1400C4D68 (sub_1400C4D68.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_1400C5164(__int64 a1, char a2)
{
  int v5; // esi
  __int64 v6; // rcx
  _DWORD Dst[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+88h] [rbp-20h]
  unsigned int v9; // [rsp+8Ch] [rbp-1Ch]

  memset_0(Dst, 0, 0x40uLL);
  if ( _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(a1 + 6160) + 8LL), 0) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 8LL) |= 8u;
    return 3221226614LL;
  }
  else
  {
    Dst[0] = 9;
    v8 = v8 & 0xFFFFFF00 | 0xD1;
    v9 = v9 & 0xFFFFFFE1 | (16 * (a2 & 1)) | 1;
    BYTE1(v9) = 0;
    v5 = sub_140187D84(a1, 0, 0, 0, (__int64)Dst);
    if ( v5 < 0 )
    {
      sub_1400C4D68(a1, 0, a2, 1, 0, v5);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 6160);
      if ( a2 )
      {
        if ( *(_DWORD *)(v6 + 32) != 1 )
          *(_DWORD *)(v6 + 32) = 1;
      }
      else if ( *(_DWORD *)(v6 + 32) )
      {
        *(_DWORD *)(v6 + 32) = 0;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 8LL) &= ~1u;
    return (unsigned int)v5;
  }
}

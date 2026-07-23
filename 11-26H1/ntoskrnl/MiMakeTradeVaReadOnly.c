/*
 * XREFs of MiMakeTradeVaReadOnly @ 0x140292D94
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 */

void __fastcall MiMakeTradeVaReadOnly(__int64 a1)
{
  int v2; // r8d
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 56) != 2 )
  {
    v2 = *(_DWORD *)(a1 + 16);
    if ( (v2 & 0x20) == 0 && ((v2 & 8) == 0 || (v2 & 0x80u) != 0) )
    {
      v3 = *(_QWORD *)(a1 + 272);
      if ( (v3 & 0x42) != 0 || (*(_DWORD *)(a1 + 16) & 0x1000) != 0 )
      {
        if ( (v2 & 0x80u) != 0 )
        {
          MiWriteValidPteNewProtection(*(_QWORD *)(a1 + 192), v3 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          *(_DWORD *)(a1 + 16) = v2 | 0x40;
          **(_QWORD **)(a1 + 192) = v3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          *(_DWORD *)a1 |= 1u;
        }
        MiFlushSingleTbEntry(*(_QWORD *)(a1 + 176), *(unsigned int *)(a1 + 208));
      }
    }
  }
}

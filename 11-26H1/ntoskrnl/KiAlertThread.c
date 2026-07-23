/*
 * XREFs of KiAlertThread @ 0x1405308C8
 * Callers:
 *     KeAlertThread @ 0x1403108E0 (KeAlertThread.c)
 * Callees:
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 */

char __fastcall KiAlertThread(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  char v6; // al
  char v7; // al

  v4 = 1;
  if ( ((unsigned __int8)(1 << a3) & *(_BYTE *)(a2 + 113)) == 0 )
  {
    v4 = 0;
    if ( *(_BYTE *)(a2 + 388) != 5
      || (v6 = *(_BYTE *)(a2 + 112) & 7, v6 == 4)
      || v6 == 3
      || (*(_DWORD *)(a2 + 116) & 0x10) == 0
      || a3 > *(char *)(a2 + 391)
      || (v7 = KiSignalThread(a1, a2, 257LL, 0LL), *(_BYTE *)(a2 + 112) |= 0x80u, !v7) )
    {
      *(_BYTE *)(a2 + 113) |= 1 << a3;
    }
  }
  return v4;
}

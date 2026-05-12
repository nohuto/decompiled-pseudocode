/*
 * XREFs of StorEtwMiniportGetKeyword @ 0x140042684
 * Callers:
 *     StorEtwRaidMiniportEvent @ 0x140042204 (StorEtwRaidMiniportEvent.c)
 *     StorEtwMiniportLogByteStream @ 0x1400B1628 (StorEtwMiniportLogByteStream.c)
 *     StorEtwNvmeMiniportEvent @ 0x1400B1BA0 (StorEtwNvmeMiniportEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall StorEtwMiniportGetKeyword(__int16 a1, __int64 a2)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v5 = ((a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL) | 0x20;
  if ( (a1 & 2) == 0 )
    v5 = (a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL;
  v6 = v5 | 0x100000000LL;
  if ( (a1 & 4) == 0 )
    v6 = v5;
  v7 = v6 | 0x400000000LL;
  if ( (a1 & 8) == 0 )
    v7 = v6;
  v8 = v7 | 0x80;
  if ( (a1 & 0x10) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (a1 & 0x20) == 0 )
    v9 = v8;
  v10 = v9 | 0x8000000;
  if ( (a1 & 0x40) == 0 )
    v10 = v9;
  v11 = v10 | 0x400;
  if ( (a1 & 0x80u) == 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (a1 & 0x100) == 0 )
    v12 = v11;
  v13 = v12 | 0x8000;
  if ( (a1 & 0x200) == 0 )
    v13 = v12;
  return a2 & 0xFF00000000000000uLL | v13;
}

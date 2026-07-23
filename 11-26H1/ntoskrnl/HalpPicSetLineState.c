/*
 * XREFs of HalpPicSetLineState @ 0x1405A4C50
 * Callers:
 *     <none>
 * Callees:
 *     WRITE_PORT_USHORT_PAIR @ 0x140581388 (WRITE_PORT_USHORT_PAIR.c)
 *     READ_PORT_USHORT_PAIR @ 0x1405A4D7C (READ_PORT_USHORT_PAIR.c)
 *     HalpIoDelay @ 0x140727680 (HalpIoDelay.c)
 */

__int64 __fastcall HalpPicSetLineState(_DWORD *a1, __int64 a2, __int64 a3)
{
  bool v6; // bl
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // r8d
  int v10; // ebx
  int v11; // ecx
  int v12; // r8d

  if ( *(_BYTE *)(a3 + 4) )
    return 3221225659LL;
  v6 = 0;
  if ( *a1 == 45056 )
  {
    v6 = *(_DWORD *)(a2 + 4) == 2;
    v7 = 0;
  }
  else
  {
    v7 = 8;
  }
  v8 = READ_PORT_USHORT_PAIR(1232LL, 1233LL);
  if ( *(_DWORD *)(a3 + 8) || v6 )
    v9 = v8 & ~(1 << (v7 + *(_BYTE *)(a2 + 4)));
  else
    v9 = v8 | (1 << (v7 + *(_BYTE *)(a2 + 4)));
  WRITE_PORT_USHORT_PAIR(0x4D0u, 0x4D1u, v9);
  v10 = (unsigned __int16)READ_PORT_USHORT_PAIR(33LL, 161LL);
  HalpIoDelay();
  v11 = v7 + *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
    v12 = v10 & ~(1 << v11);
  else
    v12 = v10 | (1 << v11);
  WRITE_PORT_USHORT_PAIR(0x21u, 0xA1u, v12);
  HalpIoDelay();
  return 0LL;
}

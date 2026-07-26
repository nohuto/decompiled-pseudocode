/*
 * XREFs of NdisMonitorReceiveDrop @ 0x1400BCC00
 * Callers:
 *     <none>
 * Callees:
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisMonitorReceiveDrop(_BYTE *BugCheckParameter4, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( *BugCheckParameter4 != 17 )
    ndisBugCheckEx(0x34uLL, 1uLL, 1uLL, (ULONG_PTR)BugCheckParameter4);
  if ( (_DWORD)a3 )
    ndisBugCheckEx(0x2DuLL, 3uLL, (unsigned int)a3, (ULONG_PTR)BugCheckParameter4);
  if ( byte_14011F740 )
  {
    v3 = (__int64)(BugCheckParameter4 + 5816);
    if ( (*(_DWORD *)(v3 + 56) & 2) != 0 )
      PktMonClientNblDropNdis(v3, a2, a3, 1LL, *(_DWORD *)(a2 + 140), -536866801);
  }
}

/*
 * XREFs of NtDCompositionCreateConnection @ 0x140228DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x14022A1A8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionCreateConnection(int a1, void *a2, void *a3)
{
  signed int v4; // ebx
  struct HDCOMPOSITIONCONNECTION__ *Src; // [rsp+40h] [rbp+18h] BYREF

  Src = 0LL;
  v4 = a3 == 0LL ? 0xC000000D : 0;
  if ( a3 )
    v4 = DirectComposition::CConnection::Create(a1 != 0, a2, &Src);
  if ( v4 >= 0 )
    RtlCopyToUser(a3, &Src, 8uLL);
  return (unsigned int)v4;
}

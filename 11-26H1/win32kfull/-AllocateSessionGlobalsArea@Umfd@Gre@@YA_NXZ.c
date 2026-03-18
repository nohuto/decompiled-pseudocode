/*
 * XREFs of ?AllocateSessionGlobalsArea@Umfd@Gre@@YA_NXZ @ 0x1401C13F4
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

bool __fastcall Gre::Umfd::AllocateSessionGlobalsArea(Gre::Umfd *this, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rdi
  PVOID v4; // rax
  PVOID v5; // rbx

  SessionState = W32GetSessionState(this, a2, a3);
  v4 = EngAllocMem(0, 0x58u, 0x35474747u);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x58uLL);
    LOBYTE(v4) = 1;
    *(_QWORD *)(SessionState + 104) = v5;
  }
  return (char)v4;
}

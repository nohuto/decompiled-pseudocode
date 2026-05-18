/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x18000FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800025E4 (--3@YAXPEAX_K@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000FD10 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  *(_QWORD *)this = &CPortClient::`vftable';
  CPortClient::Disconnect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ?Attach@SipcFileHandle@@QEAAXPEAX@Z @ 0x180110354
 * Callers:
 *     ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180080244 (-Share@AlpcSection@@QEAAJG_NPEA_K@Z.c)
 * Callees:
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x180098FA4 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 */

void __fastcall SipcFileHandle::Attach(HANDLE *this, HANDLE a2)
{
  if ( a2 != *this )
  {
    SipcFileHandle::Reset(this);
    *this = a2;
  }
}

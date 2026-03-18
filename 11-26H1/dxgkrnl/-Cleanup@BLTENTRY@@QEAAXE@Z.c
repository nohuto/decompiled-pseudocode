/*
 * XREFs of ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1403D3C10
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1403D3C54 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403FC694 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403FC814 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 */

void __fastcall BLTENTRY::Cleanup(BLTENTRY *this, char a2)
{
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
      BLTENTRY::ReleaseRenderingDoneEvent(this);
    if ( *((_QWORD *)this + 6) )
      BLTENTRY::ReleasePresentDoneEvent(this, 0);
  }
  DXGALLOCATIONREFERENCE::AssignNull((BLTENTRY *)((char *)this + 32));
}

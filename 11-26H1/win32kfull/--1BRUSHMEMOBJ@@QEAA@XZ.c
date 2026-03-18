/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140296670
 * Callers:
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x14028C6C8 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *(_QWORD *)this )
  {
    v2 = Gre::Base::Globals(this);
    DEC_SHARE_REF_CNT(v2, *(_QWORD *)this);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**(_QWORD **)this, 0LL, 0LL);
    *(_QWORD *)this = 0LL;
  }
  PopThreadGuardedObject((char *)this + 16);
}

/*
 * XREFs of ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18028186C
 * Callers:
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x180209514 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x180281340 (--1CSceneNode@@MEAA@XZ.c)
 *     ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x18028179C (-OnChildrenChanged@CSceneNode@@QEAAXXZ.c)
 * Callees:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802814E4 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802815AC (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::SetParent(CSceneNode *this, struct CSceneNode *a2)
{
  __int64 v4; // rcx

  if ( *((struct CSceneNode **)this + 17) != a2 )
  {
    if ( !a2 || *((_QWORD *)this + 16) != *((_QWORD *)a2 + 16) )
      CSceneNode::DehydrateSpectreResources(this);
    *((_QWORD *)this + 17) = a2;
    if ( a2 && *((_QWORD *)a2 + 18) )
    {
      v4 = *((_QWORD *)this + 18);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      else
        CSceneNode::HydrateSpectreResources(this, *((struct CSceneWorld **)a2 + 16));
    }
  }
}

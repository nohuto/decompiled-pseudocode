/*
 * XREFs of ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x140290C80
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 *     UMPDThreadCleanup @ 0x1400D6E20 (UMPDThreadCleanup.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     _NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::_UMPDObjDereference @ 0x1400D7E90 (_NtGdiSetPUMPDOBJ_--_8_--UMPDObjDereference--_UMPDObjDereference.c)
 *     UnexpectedThreadTerminationHandler__NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference_::OnUnexpectedThreadTerminationStatic @ 0x14032C150 (UnexpectedThreadTerminationHandler__NtGdiSetPUMPDOBJ_--_8_--UMPDObjDereference_--OnUnexpectedThr.c)
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     EngDeletePath @ 0x1400D7FA0 (EngDeletePath.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x140235008 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

void __fastcall UMPDOBJ::Dereference(PATHOBJ **this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  PATHOBJ *v3; // rcx
  PATHOBJ *v4; // rdx
  PATHOBJ *v5; // rdx
  PATHOBJ *v6; // rdx
  PATHOBJ *v7; // rcx
  PATHOBJ *v8; // rdx
  PATHOBJ *v9; // rcx
  char v10; // [rsp+28h] [rbp-20h]
  struct _SURFOBJ *v11; // [rsp+50h] [rbp+8h] BYREF

  v10 = 17;
  v2 = Gre::Base::Globals((Gre::Base *)this);
  if ( HmgRemoveObject(v2, *this, 0LL, 1LL, 1, v10, 0LL) )
  {
    v3 = this[30];
    if ( v3 )
      EngDeletePath(v3);
    if ( *((_BYTE *)this + 440) )
    {
      v4 = this[8];
      v11 = 0LL;
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v4);
        UMPDOBJ::pso((UMPDOBJ *)this, (struct _DDIOBJMAP *)(this + 8), &v11, 0);
      }
      v5 = this[10];
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v5);
        UMPDOBJ::pso((UMPDOBJ *)this, (struct _DDIOBJMAP *)(this + 10), &v11, 0);
      }
      v6 = this[12];
      if ( v6 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v6);
        UMPDOBJ::pso((UMPDOBJ *)this, (struct _DDIOBJMAP *)(this + 12), &v11, 0);
      }
    }
    v7 = this[49];
    if ( v7 )
    {
      DereferenceW32ProcessEx(v7, 1LL);
      this[49] = 0LL;
    }
    v8 = this[44];
    if ( v8 )
    {
      Gre::MapViewOfSectionObj::Unmap(this[47][7].fl, v8);
      DereferenceW32ProcessEx(this[47], 1LL);
    }
    v9 = this[50];
    if ( v9 )
      Win32FreePool(v9);
    Win32FreePool(this);
  }
  else
  {
    DEC_SHARE_REF_CNT(v2, this);
  }
}

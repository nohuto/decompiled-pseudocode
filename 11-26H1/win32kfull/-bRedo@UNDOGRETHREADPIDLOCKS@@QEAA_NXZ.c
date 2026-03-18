/*
 * XREFs of ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x140169254
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

char __fastcall UNDOGRETHREADPIDLOCKS::bRedo(UNDOGRETHREADPIDLOCKS *this)
{
  char v2; // di
  __int64 v3; // rsi
  Gre::Base *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 1;
  Gre::Base::Globals(this);
  v3 = *(_QWORD *)this;
  Gre::Base::Globals(v4);
  v7 = *((_QWORD *)this + 1);
  if ( !*((_BYTE *)this + 16) )
  {
LABEL_2:
    if ( !*((_BYTE *)this + 17) )
      return v2;
    v13 = *(_QWORD *)(v7 + 496);
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(v3 + 496);
  if ( !*((_BYTE *)this + 17) )
  {
    if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v3 + 496), v5, v6) == 2 )
    {
      *(_DWORD *)(v3 + 44) |= 1u;
      v2 = 0;
    }
    goto LABEL_2;
  }
  v10 = *(_QWORD *)(v7 + 496);
  if ( v10 >= v9 )
  {
    if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v3 + 496), v5, v6) == 2 )
    {
      *(_DWORD *)(v3 + 44) |= 1u;
      v2 = 0;
    }
    _InterlockedOr(v14, 0);
    v13 = v10;
LABEL_16:
    if ( (unsigned int)SURFACE::Map(v13, v5, v6) != 2 )
      return v2;
    *(_DWORD *)(v7 + 44) |= 1u;
    return 0;
  }
  if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v7 + 496), v5, v6) == 2 )
  {
    *(_DWORD *)(v7 + 44) |= 1u;
    v2 = 0;
  }
  _InterlockedOr(v14, 0);
  if ( (unsigned int)SURFACE::Map(v9, v11, v12) == 2 )
  {
    *(_DWORD *)(v3 + 44) |= 1u;
    return 0;
  }
  return v2;
}

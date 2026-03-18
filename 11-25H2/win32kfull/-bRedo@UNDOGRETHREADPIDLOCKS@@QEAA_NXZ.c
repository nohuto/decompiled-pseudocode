/*
 * XREFs of ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x14000885C
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

char __fastcall UNDOGRETHREADPIDLOCKS::bRedo(UNDOGRETHREADPIDLOCKS *this)
{
  char v2; // di
  __int64 v3; // rsi
  Gre::Base *v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 1;
  Gre::Base::Globals(this);
  v3 = *(_QWORD *)this;
  Gre::Base::Globals(v4);
  v5 = *((_QWORD *)this + 1);
  if ( !*((_BYTE *)this + 16) )
  {
LABEL_2:
    if ( !*((_BYTE *)this + 17) )
      return v2;
    v9 = *(_QWORD *)(v5 + 496);
    goto LABEL_16;
  }
  v7 = *(_QWORD *)(v3 + 496);
  if ( !*((_BYTE *)this + 17) )
  {
    if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v3 + 496)) == 2 )
    {
      *(_DWORD *)(v3 + 44) |= 1u;
      v2 = 0;
    }
    goto LABEL_2;
  }
  v8 = *(_QWORD *)(v5 + 496);
  if ( v8 >= v7 )
  {
    if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v3 + 496)) == 2 )
    {
      *(_DWORD *)(v3 + 44) |= 1u;
      v2 = 0;
    }
    _InterlockedOr(v10, 0);
    v9 = v8;
LABEL_16:
    if ( (unsigned int)SURFACE::Map(v9) != 2 )
      return v2;
    *(_DWORD *)(v5 + 44) |= 1u;
    return 0;
  }
  if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v5 + 496)) == 2 )
  {
    *(_DWORD *)(v5 + 44) |= 1u;
    v2 = 0;
  }
  _InterlockedOr(v10, 0);
  if ( (unsigned int)SURFACE::Map(v7) == 2 )
  {
    *(_DWORD *)(v3 + 44) |= 1u;
    return 0;
  }
  return v2;
}

/*
 * XREFs of GreDCSelectPen @ 0x140038F40
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401ECBE0 (-GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     GreSetSolidBrushLight @ 0x1400325A0 (GreSetSolidBrushLight.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14003A42C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 */

__int64 __fastcall GreDCSelectPen(DC *this, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r12d
  unsigned int *v7; // rbx
  char *v8; // r15
  struct Gre::Base::SESSION_GLOBALS *v9; // r14
  unsigned int *v10; // rax
  unsigned int *v11; // r14
  DC *v13; // [rsp+90h] [rbp+8h] BYREF
  __int64 v14; // [rsp+98h] [rbp+10h]
  int v15; // [rsp+A0h] [rbp+18h]

  v14 = a2;
  v13 = this;
  v4 = 0LL;
  W32GetSessionState(this);
  if ( this )
  {
    v6 = 0;
    v15 = 0;
    v7 = (unsigned int *)*((_QWORD *)this + 18);
    v8 = (char *)this + 976;
    v4 = *(_QWORD *)(*((_QWORD *)this + 122) + 168LL);
    if ( a2 != *(_QWORD *)v7 )
    {
      v9 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v5) + 88);
      v10 = (unsigned int *)HmgShareLock((__int64)v9, a2, 16, 0);
      v7 = v10;
      if ( v10 && (v10[10] & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(v9, *((struct BRUSH **)this + 18));
        *(_DWORD *)(*(_QWORD *)v8 + 152LL) |= 2u;
        *((_QWORD *)this + 18) = v7;
        v6 = 1;
        v15 = 1;
      }
      else
      {
        if ( v10 )
        {
          HmgDecrementShareReferenceCount((__int64)v9, v10);
          v7 = 0LL;
        }
        v4 = 0LL;
      }
    }
    if ( v7 )
    {
      if ( v4 )
      {
        v11 = (unsigned int *)*((_QWORD *)v7 + 6);
        if ( v11 != v7 + 18 && (*v11 & 4) != 0 )
        {
          GreSetSolidBrushLight((__int64)v7, v11[1], 1);
          *(_DWORD *)(*(_QWORD *)v8 + 152LL) |= 2u;
          *v11 &= ~4u;
          v6 = 1;
        }
        if ( v6 )
        {
          DC::QuickInitXform(this, &v13, 516LL);
          DC::vRealizeLineAttrs(this, (struct EXFORMOBJ *)&v13);
        }
      }
      *(_QWORD *)(*(_QWORD *)v8 + 168LL) = a2;
      *(_DWORD *)(*(_QWORD *)v8 + 152LL) &= ~0x2000u;
    }
  }
  return v4;
}

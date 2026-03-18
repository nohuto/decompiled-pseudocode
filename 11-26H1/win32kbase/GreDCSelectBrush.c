/*
 * XREFs of GreDCSelectBrush @ 0x14003A7C0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBrush @ 0x14016EC90 (GreSelectBrush.c)
 *     ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140175100 (-GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     GreSetSolidBrushLight @ 0x1400325A0 (GreSetSolidBrushLight.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // r14
  struct Gre::Base::SESSION_GLOBALS *v8; // r12
  _DWORD *v9; // rsi
  int v11; // edx

  v4 = 0LL;
  W32GetSessionState(a1);
  if ( a1 )
  {
    v6 = *(_QWORD **)(a1 + 136);
    v7 = a1 + 976;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 160LL);
    if ( a2 != *v6 )
    {
      v8 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v5) + 88);
      v6 = (_QWORD *)HmgShareLock((__int64)v8, a2, 16, 0);
      if ( v6 )
      {
        DEC_SHARE_REF_CNT_LAZY0(v8, *(struct BRUSH **)(a1 + 136));
        *(_DWORD *)(*(_QWORD *)v7 + 152LL) |= 1u;
        *(_QWORD *)(a1 + 136) = v6;
      }
      else
      {
        v4 = 0LL;
      }
    }
    if ( v6 )
    {
      if ( v4 )
      {
        v9 = (_DWORD *)v6[6];
        if ( v9 != (_DWORD *)(v6 + 9) )
        {
          v11 = v9[1];
          if ( (*v9 & 4) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)v7 + 152LL) |= 1u;
            GreSetSolidBrushLight((__int64)v6, v11, 0);
            *v9 &= ~4u;
          }
        }
      }
      *(_QWORD *)(*(_QWORD *)v7 + 160LL) = a2;
      *(_DWORD *)(*(_QWORD *)v7 + 152LL) &= ~0x1000u;
    }
  }
  return v4;
}

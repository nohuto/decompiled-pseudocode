/*
 * XREFs of GreDCSelectBrush @ 0x14001CA90
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBrush @ 0x1401373C0 (GreSelectBrush.c)
 *     ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x14013FB30 (-GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z @ 0x140019540 (-HmgShareLockCheck2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreSetSolidBrushLight @ 0x140071A70 (GreSetSolidBrushLight.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, struct HOBJ__ *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct _BASEOBJECT *v6; // rbx
  __int64 v7; // r14
  __int64 SessionState; // rax
  _DWORD *v9; // rsi
  __int64 v11; // rdx

  v4 = 0LL;
  W32GetSessionState(a1);
  if ( a1 )
  {
    v6 = *(struct _BASEOBJECT **)(a1 + 136);
    v7 = a1 + 976;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 160LL);
    if ( a2 != *(struct HOBJ__ **)v6 )
    {
      SessionState = W32GetSessionState(v5);
      v6 = HmgShareLockCheck2(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a2, 16);
      if ( v6 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(a1 + 136));
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
        v9 = (_DWORD *)*((_QWORD *)v6 + 6);
        if ( v9 != (_DWORD *)((char *)v6 + 72) )
        {
          v11 = (unsigned int)v9[1];
          if ( (*v9 & 4) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)v7 + 152LL) |= 1u;
            GreSetSolidBrushLight(v6, v11, 0LL);
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

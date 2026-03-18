/*
 * XREFs of ?bInside@RGNCOREOBJ@@QEBAHPEAU_RECTL@@@Z @ 0x1400A8618
 * Callers:
 *     CddEngRectInRgn @ 0x1401FBAA0 (CddEngRectInRgn.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::bInside(REGION_CORE **this, struct _RECTL *a2)
{
  REGION_CORE *v3; // rcx
  struct SCAN *pScan; // rdx
  int v6; // r8d
  __int64 v7; // r9
  LONG *v8; // rax
  unsigned __int64 v9; // rcx

  v3 = *this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 80LL))(v3);
  if ( a2->left < *((_DWORD *)v3 + 9)
    && a2->right > *((_DWORD *)v3 + 7)
    && a2->top < *((_DWORD *)v3 + 10)
    && a2->bottom > *((_DWORD *)v3 + 8) )
  {
    pScan = REGION_CORE::get_pScan(v3);
    v6 = *((_DWORD *)*this + 6);
    if ( v6 )
    {
      do
      {
        if ( a2->top < *((_DWORD *)pScan + 2) )
          break;
        pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
        --v6;
      }
      while ( v6 );
      while ( v6 && a2->bottom > *((_DWORD *)pScan + 1) )
      {
        v7 = *(unsigned int *)pScan;
        v8 = (LONG *)((char *)pScan + 12);
        v9 = (unsigned __int64)pScan + 4 * v7 + 12;
        if ( (unsigned __int64)pScan + 12 < v9 )
        {
          while ( a2->left >= v8[1] )
          {
            v8 += 2;
            if ( (unsigned __int64)v8 >= v9 )
              goto LABEL_15;
          }
          if ( a2->right > *v8 )
            return 2LL;
        }
LABEL_15:
        pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * v7 + 16));
        --v6;
      }
    }
  }
  return 1LL;
}

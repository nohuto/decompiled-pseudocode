/*
 * XREFs of ?GrepUpdatePfnTextOutAndSurfaceDcoIfNeeded@@YAXAEAVXDCOBJ@@PEAVRFONTOBJ@@PEAVSURFACE@@AEAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@7PEAU_BRUSHOBJ@@8PEAU_POINTL@@K@Z@Z @ 0x1400D5264
 * Callers:
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     <none>
 */

void __fastcall GrepUpdatePfnTextOutAndSurfaceDcoIfNeeded(
        struct XDCOBJ *a1,
        struct RFONTOBJ *a2,
        struct SURFACE *a3,
        int (**a4)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))
{
  __int64 v6; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  v6 = *(unsigned int *)(*(_QWORD *)a2 + 12LL);
  if ( (v6 & 0x10000) != 0 && ((*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x1000000) == 0 || (v6 & 0x10000000) != 0) )
  {
    if ( *a4 != EngTextOut )
    {
      *((_QWORD *)a3 + 13) = a1;
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v6);
      v8 = 0LL;
      if ( CurrentThreadWin32Thread )
        v8 = *CurrentThreadWin32Thread;
      v9 = v8 + 8;
      v10 = -v8;
      if ( (v9 & -(__int64)(v10 != 0)) != 0 )
        *(_QWORD *)((v9 & -(__int64)(v10 != 0)) + 0x120) = a1;
    }
    *a4 = (int (*)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))SpTextOut;
  }
}

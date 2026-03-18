/*
 * XREFs of ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1400D4410
 * Callers:
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4010 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::ptlBaseLineAdjustSet(ESTROBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 v5; // r10

  v2 = (__int64)*a2;
  v3 = 0;
  *((_QWORD *)this + 30) = v2;
  if ( ((_DWORD)v2 || *((_DWORD *)this + 61)) && *(_DWORD *)this )
  {
    v4 = 0LL;
    v5 = 0LL;
    do
    {
      if ( *(_DWORD *)(v5 + *((_QWORD *)this + 26)) == *((_DWORD *)this + 59) )
      {
        *(_DWORD *)(*((_QWORD *)this + 8) + v4 + 16) += *((_DWORD *)this + 60);
        *(_DWORD *)(*((_QWORD *)this + 8) + v4 + 20) += *((_DWORD *)this + 61);
        ++v3;
      }
      v5 += 4LL;
      v4 += 24LL;
    }
    while ( v3 < *(_DWORD *)this );
  }
}

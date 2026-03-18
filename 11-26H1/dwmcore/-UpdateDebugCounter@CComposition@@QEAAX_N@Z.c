/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18022B478
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?SetIsDebugCounterEnabled@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x18024B924 (-SetIsDebugCounterEnabled@-$CChannelGeneratedT@VCChannelContext@@V-$CMILRefCountBaseT@UIMILRefCo.c)
 * Callees:
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x1801C52B8 (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v2 = *((_DWORD *)this + 248);
  if ( a2 )
  {
    v3 = v2 + 1;
    *((_DWORD *)this + 248) = v3;
    if ( v3 != 1 )
      return;
    if ( *((_BYTE *)this + 1008) == 1 )
      goto LABEL_9;
    *((_WORD *)this + 504) = 1;
    goto LABEL_8;
  }
  v4 = v2 - 1;
  *((_DWORD *)this + 248) = v4;
  if ( v4 )
    return;
  if ( *((_BYTE *)this + 1008) )
  {
    *((_WORD *)this + 504) = 0;
LABEL_8:
    *((_BYTE *)this + 1010) = 0;
    *((_QWORD *)this + 127) = 0LL;
    *((_DWORD *)this + 250) = -1;
    *((_DWORD *)this + 251) = -1;
  }
LABEL_9:
  CRenderTargetManager::ForceFullDirty(*((CRenderTargetManager **)this + 77));
}

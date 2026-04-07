/*
 * XREFs of ?SetContent@CContainerVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x180007AF4
 * Callers:
 *     ?SetContent@CContainerVisual@@UEAAJPEAVCResourceProxy@@@Z @ 0x180007A60 (-SetContent@CContainerVisual@@UEAAJPEAVCResourceProxy@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180028E40 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVisualProxy::SetContent(CContainerVisualProxy *this, const struct CResourceProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 280LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}

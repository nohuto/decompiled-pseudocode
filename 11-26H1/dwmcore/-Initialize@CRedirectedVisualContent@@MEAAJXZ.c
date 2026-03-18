/*
 * XREFs of ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1801B5AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::Initialize(struct CResource **this)
{
  CVisual *v2; // rcx
  int VisualTree; // ebx
  __int64 *v5; // [rsp+30h] [rbp-28h]
  struct CVisualTree *v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  CResource::RegisterNotifier((CResource *)this, this[9]);
  v2 = this[9];
  v5 = (__int64 *)(this + 10);
  v6 = 0LL;
  v7 = 1;
  VisualTree = CVisual::GetVisualTree(v2, &v6, 1);
  if ( v7 )
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(v5, (__int64)v6);
  if ( VisualTree < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, VisualTree, 0x26u, 0LL);
  return (unsigned int)VisualTree;
}

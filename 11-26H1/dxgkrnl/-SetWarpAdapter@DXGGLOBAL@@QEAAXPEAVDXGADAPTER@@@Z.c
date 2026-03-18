/*
 * XREFs of ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401E008C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetWarpAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax

  v2 = *((_QWORD *)this + 126);
  v3 = (_QWORD *)((char *)this + 992);
  if ( !v2 || v2 == *v3 )
  {
    *((_QWORD *)this + 126) = a2;
    if ( a2 )
      *((_QWORD *)this + 127) = *(_QWORD *)((char *)a2 + 412);
  }
  *v3 = a2;
}

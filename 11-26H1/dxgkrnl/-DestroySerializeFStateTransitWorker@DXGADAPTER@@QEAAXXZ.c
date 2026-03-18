/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14019827C
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 409) )
  {
    if ( *((_QWORD *)this + 510) )
    {
      *((_BYTE *)this + 4088) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3952), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 510), 0, 0LL);
      ZwClose(*((HANDLE *)this + 510));
      *((_QWORD *)this + 510) = 0LL;
    }
  }
}

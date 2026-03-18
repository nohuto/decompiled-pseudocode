/*
 * XREFs of ??$swap@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@YAXAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@0@0@Z @ 0x140099700
 * Callers:
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140282120 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 * Callees:
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x14009029C (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 */

__int64 __fastcall wistd::swap<unsigned char [0],wistd::default_delete<unsigned char [0]>>(__int64 *a1, __int64 *a2)
{
  return wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
           a1,
           a2);
}

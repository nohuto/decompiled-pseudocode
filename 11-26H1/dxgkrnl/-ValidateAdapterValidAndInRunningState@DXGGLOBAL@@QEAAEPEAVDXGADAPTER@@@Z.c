/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401E0334
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x14007BF70 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401DFD40 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401E01D4 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  struct DXGADAPTER *v2; // r8
  struct DXGADAPTER *i; // rax
  struct DXGADAPTER *v4; // rcx

  v2 = (DXGGLOBAL *)((char *)this + 808);
  for ( i = (struct DXGADAPTER *)*((_QWORD *)this + 101); ; i = *(struct DXGADAPTER **)i )
  {
    v4 = 0LL;
    if ( i != v2 )
      v4 = i;
    if ( !v4 )
      break;
    if ( v4 == a2 )
      return *((_DWORD *)a2 + 50) == 1;
  }
  return 0;
}

/*
 * XREFs of ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400EEE34
 * Callers:
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x14008DF44 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x140175474 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     RIMGetPanelId @ 0x1400EF0E4 (RIMGetPanelId.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CInputSpaceRegion::PopulatePanelId(CInputSpaceRegion *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 11);
  Object = 0LL;
  v5 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(this, a2);
  if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, __int64 *))(DxgkWin32kInterface + 456))(
         (char *)this + 36,
         v2,
         &Object,
         &v5) >= 0 )
  {
    RIMGetPanelId(v5, (char *)this + 48);
    ObfDereferenceObject(Object);
  }
}

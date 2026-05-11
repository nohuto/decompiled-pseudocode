/*
 * XREFs of WmiRegisterProvider @ 0x14002E478
 * Callers:
 *     DeviceCreate @ 0x1400088F0 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiRegisterProvider(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v1 + 464) = &WmiGuidList;
  *(_QWORD *)(v1 + 472) = WmiQueryRegInfo;
  *(_QWORD *)(v1 + 480) = WmiQueryDataBlock;
  *(_QWORD *)(v1 + 488) = 0LL;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 504) = 0LL;
  *(_QWORD *)(v1 + 512) = WmiFunctionControl;
  *(_DWORD *)(v1 + 456) = 4;
  return IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 24), 1u);
}

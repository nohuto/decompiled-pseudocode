/*
 * XREFs of ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007B590
 * Callers:
 *     NdisMRegisterAdapterShutdownHandler @ 0x140095BA0 (NdisMRegisterAdapterShutdownHandler.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMRegisterBugCheckHandler(char *Buffer)
{
  bool v2; // zf
  struct _KBUGCHECK_CALLBACK_RECORD *v3; // rcx

  if ( (unsigned __int8)Buffer[32] < 6u )
  {
    v2 = *((_QWORD *)Buffer + 258) == 0LL;
  }
  else
  {
    if ( (*((_DWORD *)Buffer + 30) & 0x400) == 0 )
      return;
    v2 = *(_QWORD *)(*((_QWORD *)Buffer + 470) + 232LL) == 0LL;
  }
  if ( !v2 && (*((_DWORD *)Buffer + 30) & 0x2000) == 0 )
  {
    v3 = (struct _KBUGCHECK_CALLBACK_RECORD *)(Buffer + 2072);
    v3->State = 0;
    if ( KeRegisterBugCheckCallback(v3, ndisBugcheckHandler, Buffer, 0x17F0u, (PUCHAR)"Ndis miniport") )
      _InterlockedOr((volatile signed __int32 *)Buffer + 30, 0x2000u);
  }
}

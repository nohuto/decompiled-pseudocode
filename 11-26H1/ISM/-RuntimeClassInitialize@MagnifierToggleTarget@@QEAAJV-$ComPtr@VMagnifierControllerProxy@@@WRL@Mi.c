/*
 * XREFs of ?RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@@Z @ 0x1801B363C
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@@Z @ 0x1801B18D4 (--$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPro.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ @ 0x180135D60 (-GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801B1F08 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MagnifierToggleTarget::RuntimeClassInitialize(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx

  Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(a1 + 16), a2);
  if ( BamoPenEventsClientProxy::GetTailButtonLongPressedEventsRequired((BamoPenEventsClientProxy *)(*(_QWORD *)(a1 + 16) + 8LL)) )
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(a1 + 24), a3);
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 8LL))(v6 + 16);
  }
  v7 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}

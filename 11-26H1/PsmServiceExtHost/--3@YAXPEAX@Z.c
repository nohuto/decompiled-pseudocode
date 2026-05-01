/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18006EED4
 * Callers:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18002C900 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x18002D2B0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005A638 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ?RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ @ 0x18005A740 (-RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x18005EFC0 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_E?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180071650 (--_E-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UE.c)
 *     ??_EModernResourceEnforcer@@UEAAPEAXI@Z @ 0x18007F830 (--_EModernResourceEnforcer@@UEAAPEAXI@Z.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x1800816C0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180089A10 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??1?$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008AB0C (--1-$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008AB50 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x18008AB80 (--_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008ABC0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}

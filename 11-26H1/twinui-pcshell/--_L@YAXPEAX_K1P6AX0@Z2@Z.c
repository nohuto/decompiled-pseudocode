/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1802CE03C
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18007239C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18018F534 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801FE898 (--$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802FBD20 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f___ @ 0x1803F52E4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundati.c)
 *     ?GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KPEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1803F8390 (-GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KPEAPEAU-$IAsyncOperation@PE.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1802CDCFC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}

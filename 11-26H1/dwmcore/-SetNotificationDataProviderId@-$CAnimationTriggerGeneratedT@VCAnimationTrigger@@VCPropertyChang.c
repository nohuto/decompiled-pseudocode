/*
 * XREFs of ?SetNotificationDataProviderId@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJ_K@Z @ 0x18021F970
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetNotificationDataProviderId(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *a1;
  a1[10] = a2;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 80))(a1, 0LL, 0LL);
  return 0LL;
}

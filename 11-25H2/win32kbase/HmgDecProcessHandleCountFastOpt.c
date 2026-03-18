/*
 * XREFs of HmgDecProcessHandleCountFastOpt @ 0x1401C8258
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgDecProcessHandleCount @ 0x140179250 (HmgDecProcessHandleCount.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1400BC6B0 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

void __fastcall HmgDecProcessHandleCountFastOpt(_QWORD *a1, int a2)
{
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v6; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 && a2 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a2, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
      SEMOBJ<20>::SEMOBJ<20>(&v6, a1, IsEnabledDeviceUsageNoInline != 0);
      --*((_DWORD *)W32ProcessFromId + 15);
      SEMOBJ<20>::vUnlock(&v6);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}

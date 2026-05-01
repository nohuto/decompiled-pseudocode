/*
 * XREFs of ?SendNewNotificationTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@W4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x18031838C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bbdef009ac6d12572d5652df4e291152___::Run @ 0x180318170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bbdef009ac6d12572d5652df4e291152___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180238D58 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::SendNewNotificationTask(__int64 a1, __int64 a2, int a3)
{
  struct BroadcastDVRActiveAppInfo *v6; // rbx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // r9d
  struct BroadcastDVRActiveAppInfo *v13; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-20h]
  bool v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = *(_QWORD *)(a1 + 304);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v13, (_QWORD *)(a1 + 312));
  v6 = v13;
  if ( v13 && *((_BYTE *)v13 + 16) && (*(_QWORD *)v13 == a2 || *((_QWORD *)v13 + 1) == a2) )
  {
    v7 = *((_DWORD *)v13 + 14);
    v8 = (*((_BYTE *)v13 + 18) != 0 ? 65 : 1) | 2;
    if ( (v7 & 8) == 0 )
      v8 = *((_BYTE *)v13 + 18) != 0 ? 65 : 1;
    v9 = v8 | 4;
    if ( (v7 & 0x10) == 0 )
      v9 = v8;
    v10 = v9 | 8;
    if ( (v7 & 0x20) == 0 )
      v10 = v9;
    v15 = (*((_DWORD *)v13 + 14) & 2) != 0;
    v11 = v10 | 0x10;
    if ( (v7 & 0x40) == 0 )
      v11 = v10;
    BroadcastDVRComponent::SendShellNotificationToDVR2(a1, a3, v13, v11, 0, &v15);
    if ( v15 )
      *((_DWORD *)v6 + 14) |= 2u;
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
}

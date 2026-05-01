/*
 * XREFs of ?QueryService@CLauncherUIMode@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18039C130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@XZ @ 0x18039A244 (--$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIServiceProvider@@@WRL@Micro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherUIMode::QueryService(
        CLauncherUIMode *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  char *v12; // rcx
  __int64 (__fastcall **v13)(char *, const struct _GUID *, void **); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_SInPlaceBrowser.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_SInPlaceBrowser.Revision )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_SInPlaceBrowser.SubAuthority;
  if ( !v8 && (*((_BYTE *)this + 104) & 1) != 0 )
    return (unsigned int)-2147467263;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IFolderView.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IFolderView.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IFolderView.Data4;
  if ( !v9 && (*((_BYTE *)this + 104) & 2) != 0 )
    return (unsigned int)-2147467263;
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4fdd8ae5_be97_43b0_a418_6216a0314385.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4fdd8ae5_be97_43b0_a418_6216a0314385.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4fdd8ae5_be97_43b0_a418_6216a0314385.Data4;
  v12 = (char *)this - 40;
  if ( !v11 && (v12[144] & 0x10) != 0 )
    goto LABEL_14;
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_667708d1_a931_4a85_9999_609eaa7dd85a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_667708d1_a931_4a85_9999_609eaa7dd85a.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_667708d1_a931_4a85_9999_609eaa7dd85a.Data4;
  if ( !v14 )
    goto LABEL_14;
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1 )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4;
  if ( !v15 )
    goto LABEL_14;
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IExecuteCommandHost.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IExecuteCommandHost.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IExecuteCommandHost.Data4;
  v17 = v12;
  if ( !v16 )
  {
    if ( *((_DWORD *)v12 + 37) != -1 )
    {
LABEL_14:
      v13 = *(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v12;
      return (unsigned int)(*v13)(v12, a3, a4);
    }
    v17 = (char *)this - 40;
  }
  v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2e7d8d8c_f368_42f1_88d8_1d717c3f1e34.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2e7d8d8c_f368_42f1_88d8_1d717c3f1e34.Data1 )
    v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2e7d8d8c_f368_42f1_88d8_1d717c3f1e34.Data4;
  if ( !v18 )
    goto LABEL_14;
  v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_728e9d41_2d68_4714_99bd_fae3742125d5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_728e9d41_2d68_4714_99bd_fae3742125d5.Data1 )
    v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_728e9d41_2d68_4714_99bd_fae3742125d5.Data4;
  if ( !v19 )
    goto LABEL_14;
  v20 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data1 )
    v20 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data4;
  if ( !v20 && (v17[144] & 0x20) != 0 )
  {
    v13 = *(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v17;
LABEL_42:
    v12 = v17;
    return (unsigned int)(*v13)(v12, a3, a4);
  }
  v21 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ExecuteLogUsage.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ExecuteLogUsage.Revision )
    v21 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ExecuteLogUsage.SubAuthority;
  if ( !v21 && v17[144] < 0 )
  {
    v13 = (__int64 (__fastcall **)(char *, const struct _GUID *, void **))*((_QWORD *)this - 5);
    goto LABEL_42;
  }
  CWRLObjectWithGITSite::Site<IServiceProvider>((__int64)v17, &v23);
  if ( v23 )
    v10 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v23 + 24LL))(
            v23,
            a2,
            a3,
            a4);
  else
    v10 = -2147467263;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  return v10;
}

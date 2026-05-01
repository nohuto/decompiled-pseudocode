/*
 * XREFs of ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DF220
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801F0248 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DF0C8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherTipContextMenu::_EnsureScheduler(CLauncherTipContextMenu *this)
{
  HRESULT Instance; // edi
  LPVOID *ppv; // rbx

  Instance = 0;
  ppv = (LPVOID *)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
    Instance = CoCreateInstance(&CLSID_ShellTaskScheduler, 0LL, 1u, &GUID_6ccb7be0_6807_11d0_b810_00c04fd706ec, ppv);
    if ( Instance < 0
      || (Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)*ppv + 48LL))(
                       *ppv,
                       1LL,
                       4294967294LL),
          Instance < 0) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
    }
  }
  return (unsigned int)Instance;
}

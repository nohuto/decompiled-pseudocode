/*
 * XREFs of ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800E97E4
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001113C (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180023BC4 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckGUIHandleQuota(DWORD a1, unsigned int a2, DWORD a3)
{
  unsigned int v3; // edi
  HANDLE CurrentProcess; // rax
  DWORD GuiResources; // esi
  unsigned int v6; // ebx
  DWORD cbData; // [rsp+60h] [rbp+28h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+30h] BYREF
  DWORD Type; // [rsp+70h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+40h] BYREF

  Type = a3;
  Data = a2;
  cbData = a1;
  v3 = -2003304445;
  CurrentProcess = GetCurrentProcess();
  GuiResources = GetGuiResources(CurrentProcess, 0);
  if ( GuiResources >= (unsigned int)g_GUIHandleQuota )
  {
    if ( (_DWORD)g_GUIHandleQuota )
      return (unsigned int)-2147024882;
    hKey = 0LL;
    v6 = 10000;
    if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, 1u, &hKey) )
    {
      Type = 0;
      Data = 0;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, lpValueName, 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && Data )
        v6 = Data;
      RegCloseKey(hKey);
    }
    LODWORD(g_GUIHandleQuota) = v6 - (v6 >> 3);
    if ( GuiResources >= (unsigned int)g_GUIHandleQuota )
      return (unsigned int)-2147024882;
  }
  return v3;
}

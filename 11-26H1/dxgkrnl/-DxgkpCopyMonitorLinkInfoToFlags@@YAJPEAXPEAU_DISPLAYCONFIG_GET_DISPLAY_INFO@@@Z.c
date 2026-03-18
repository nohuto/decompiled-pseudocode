/*
 * XREFs of ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1403C01D0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0298 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall DxgkpCopyMonitorLinkInfoToFlags(void *a1, struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a2)
{
  unsigned int v3; // edx
  __int64 result; // rax
  int v6; // r9d
  __int16 v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // edx
  struct _DXGK_MONITORLINKINFO v10; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v10.UsageHints.0 = 0LL;
  v3 = *((_DWORD *)a2 + 479);
  v10.DitheringSupport.Value = 0;
  LODWORD(result) = MonitorGetLinkInfoFromTarget(a1, v3, &v10);
  v6 = *((_DWORD *)a2 + 513);
  if ( (int)result < 0 )
  {
    v9 = v6 & 0xFFFFB61F;
  }
  else
  {
    v7 = (__int16)v10.Capabilities.0;
    v8 = v6 & 0xFFFFF63F | (4
                          * (*(_WORD *)&v10.Capabilities.0 & 0x200 | (8
                                                                    * (*(_BYTE *)&v10.Capabilities.0 & 4 | (2 * (*(_BYTE *)&v10.Capabilities.0 & 1 | (2 * (*(_BYTE *)&v10.Capabilities.0 & 2)))) | 1))));
    *((_DWORD *)a2 + 513) = v8;
    if ( *((_BYTE *)a1 + 3108) )
      v9 = v8 | 0x4000;
    else
      v9 = v8 & 0xFFFFBFFF | (8 * (v7 & 0x800));
  }
  *((_DWORD *)a2 + 513) = v9;
  return (unsigned int)result;
}

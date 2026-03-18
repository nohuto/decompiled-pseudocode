/*
 * XREFs of ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402DD6F0
 * Callers:
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1401A23B0 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1401A2DC0 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1401A5004 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D3940 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140412BCC (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1402DD7D8 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtection(ADAPTER_DISPLAY *this, unsigned int a2)
{
  unsigned int v4; // ebx
  char *v5; // rdx
  unsigned int v6; // r9d
  char *i; // rcx
  char *v8; // rax
  void *v9; // rcx
  char *v11; // rax
  unsigned int v12; // eax

  v4 = 0;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5972;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5972LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = (char *)this + 80;
  v6 = 0;
  for ( i = (char *)*((_QWORD *)this + 10); ; i = *(char **)i )
  {
    v8 = 0LL;
    if ( i != v5 )
      v8 = i;
    if ( !v8 )
      break;
    v11 = i;
    if ( i == v5 )
      v11 = 0LL;
    if ( *((_DWORD *)v11 + 13) == a2 )
    {
      v12 = *((_DWORD *)v11 + 14);
      if ( v12 > v6 )
        v6 = v12;
    }
  }
  v9 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
    return (unsigned int)DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
                           v9,
                           a2,
                           D3DKMDT_VPPMT_MACROVISION_APSTRIGGER,
                           v6);
  else
    DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(v9, a2, D3DKMDT_VPPMT_NOPROTECTION, 0);
  return v4;
}

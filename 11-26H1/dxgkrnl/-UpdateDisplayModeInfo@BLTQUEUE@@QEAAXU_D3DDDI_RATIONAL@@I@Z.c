/*
 * XREFs of ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1402842E4
 * Callers:
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402843BC (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED754 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x140446154 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfo(BLTQUEUE *this, struct _D3DDDI_RATIONAL a2, int a3)
{
  struct _D3DDDI_RATIONAL v4; // rbx

  v4 = a2;
  if ( !a2.Numerator || !a2.Denominator )
    v4 = (struct _D3DDDI_RATIONAL)0x10000003CLL;
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) |= 4u;
    *((struct _D3DDDI_RATIONAL *)this + 86) = v4;
    *((_DWORD *)this + 174) = a3;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((struct _D3DDDI_RATIONAL *)this + 86) = v4;
    *((_DWORD *)this + 174) = a3;
    *((_BYTE *)this + 658) = 1;
  }
  BLTQUEUE::IssueCommand(this);
}

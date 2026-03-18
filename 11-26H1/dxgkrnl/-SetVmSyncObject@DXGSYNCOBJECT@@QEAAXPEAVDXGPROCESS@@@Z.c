/*
 * XREFs of ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1403516A8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // r8
  int v6; // edx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax

  v2 = 0;
  v3 = (_DWORD *)(a2 + 408);
  if ( !a2 || (v6 = 1, (*v3 & 0x180) == 0) )
    v6 = 0;
  v7 = (16 * v6) | *((_DWORD *)this + 107) & 0xFFFFFFEF;
  *((_DWORD *)this + 107) = v7;
  if ( v6 )
  {
    if ( (*v3 & 0x100) != 0 )
      v8 = *(_QWORD *)(a2 + 592);
    else
      v8 = a2 & -(__int64)((*v3 & 0x80u) != 0);
    *((_QWORD *)this + 54) = v8;
    if ( !v8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6451;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVmwpProcess", 6451LL, 0LL, 0LL, 0LL, 0LL);
      v7 = *((_DWORD *)this + 107);
    }
    v3 = (_DWORD *)(a2 + 408);
  }
  else
  {
    *((_QWORD *)this + 54) = 0LL;
  }
  if ( a2 )
  {
    if ( (*v3 & 0x104) == 0x104 )
    {
      v9 = (2 * *((_DWORD *)this + 104)) >> 1;
      if ( v9 == 5 || v9 == 18 )
        v2 = 32;
    }
  }
  *((_DWORD *)this + 107) = v2 | v7 & 0xFFFFFFDF;
}

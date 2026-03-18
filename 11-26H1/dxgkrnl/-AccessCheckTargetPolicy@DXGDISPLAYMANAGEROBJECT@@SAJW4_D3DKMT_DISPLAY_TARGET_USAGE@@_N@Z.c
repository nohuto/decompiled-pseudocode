/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14040977C
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403CD840 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MonitorAreSpecializedDisplaysSupported@@YAHXZ @ 0x14005C520 (-MonitorAreSpecializedDisplaysSupported@@YAHXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x14018D674 (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, char a2)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  struct DXGSESSIONDATA *v11; // rsi
  __int64 v12; // rcx
  bool v13; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v5 = Current;
  if ( Current && (*((_DWORD *)Current + 102) & 4) != 0 )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v7, v8, v9);
  v11 = SessionData;
  if ( SessionData )
  {
    if ( *((_BYTE *)SessionData + 18500) )
      return 0LL;
  }
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v5 + 11) + 224LL))() )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku(v12) )
    {
      v13 = g_OSTestSigningEnabled != 0;
      if ( v11 && *((_BYTE *)v11 + 18501) )
        v13 = 0;
      if ( DXGPROCESS::IsCurrentThreadAppContainer() || a2 && !v13 )
        return 3221225506LL;
      if ( v3 != 2 )
        return v3 != 1 ? 0xC0000022 : 0;
      if ( !(unsigned int)MonitorAreSpecializedDisplaysSupported() && !v13 )
        return 3221225506LL;
      return 0LL;
    }
    if ( !DXGPROCESS::IsCurrentThreadAppContainer() )
      return 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
    v16 = 0;
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v16) >= 0 )
    {
      if ( v16 )
        return 0LL;
    }
  }
  return 3221225506LL;
}

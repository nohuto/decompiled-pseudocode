/*
 * XREFs of ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x1801CD11C
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x1801CCE40 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 *     ?GetLastActiveTimestamp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@PEAU_FILETIME@@@Z @ 0x1802F8EF0 (-GetLastActiveTimestamp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@PEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRealmActivationHistory::_GetRealmForActivation(__int64 a1, __int64 a2, int a3)
{
  FILETIME *v3; // rsi
  __int64 v4; // rbx
  __int64 v7; // rbp

  v3 = (FILETIME *)(a2 + 4);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = 0LL;
  v4 = a1 + 160;
  v7 = 20LL;
  do
  {
    if ( (a3 & *(_DWORD *)v4) != 0 && CompareFileTime((const FILETIME *)(v4 + 4), v3) > 0 )
    {
      *v3 = *(FILETIME *)(v4 + 4);
      *(_DWORD *)a2 = *(_DWORD *)v4;
    }
    v4 += 12LL;
    --v7;
  }
  while ( v7 );
  return a2;
}

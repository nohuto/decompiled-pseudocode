/*
 * XREFs of ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x18004A100
 * Callers:
 *     ?HampManagerDplKeyStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180049FC0 (-HampManagerDplKeyStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180037E08 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180049E7C (-HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18004A2A0 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18004A330 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004A390 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampManagerOnDplKeyStateChanged(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _EDP_DPL_WNF_KEYS_STATE_DATA *a2)
{
  struct _HAM_SESSION *v3; // rax
  unsigned int v4; // ebx
  struct _HAM_SESSION *v5; // rdi
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rsi

  v3 = HampSessionFindInManager(a1, *((_DWORD *)a2 + 3));
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    HampSessionAcquireLockExclusive(v3);
    *((_DWORD *)v5 + 36) = *((_DWORD *)v5 + 36) & 0xFFFFFFFE | (*((_DWORD *)a2 + 2) != 0);
    HampSessionReleaseLockExclusive(v5);
    if ( *((_DWORD *)a2 + 2) )
    {
      for ( i = HampHostEnumerateHostsInNode(v5, 1, 0LL); ; i = HampSessionGetNextHost(v8) )
      {
        v8 = i;
        if ( !i )
          break;
        HampHostNotifyDplKeysLocked(i);
      }
    }
    CemRcObjectDereference(v5);
  }
  else
  {
    return (unsigned int)-1073741729;
  }
  return v4;
}

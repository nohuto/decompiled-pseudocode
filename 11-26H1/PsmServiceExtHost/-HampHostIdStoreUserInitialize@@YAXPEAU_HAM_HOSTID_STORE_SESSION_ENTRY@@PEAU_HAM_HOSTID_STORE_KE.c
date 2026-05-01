/*
 * XREFs of ?HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_USER_ENTRY@@@Z @ 0x18005F7C8
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180035880 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18005F924 (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampHostIdStoreUserInitialize(
        struct _HAM_HOSTID_STORE_SESSION_ENTRY *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        struct _HAM_HOSTID_STORE_USER_ENTRY *a3)
{
  memset_0(a3, 0, 0xA0uLL);
  HamRcNodeInitialize((void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy, a1, a3);
  *(_OWORD *)((char *)a3 + 88) = *((_OWORD *)a2 + 29);
  *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)a2 + 30);
  *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)a2 + 31);
  *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)a2 + 32);
  *((_DWORD *)a3 + 38) = *((_DWORD *)a2 + 132);
}

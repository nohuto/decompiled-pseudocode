/*
 * XREFs of ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180011700
 * Callers:
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18000FD5C (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180010484 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180010938 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180010D20 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001113C (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800115D8 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActCompareByHandle(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = a2[5];
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}

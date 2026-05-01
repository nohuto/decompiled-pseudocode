/*
 * XREFs of ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180014BD0
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180014468 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180014800 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x180074F20 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 */

void __fastcall ArActDereference(struct _AR_ACTIVITY *a1)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CemRcObjectDereference(*((_QWORD *)a1 + 2));
    HampFreeHeap(a1);
  }
}

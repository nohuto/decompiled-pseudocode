/*
 * XREFs of ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007D628
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007B3F4 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007B824 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800421D4 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupAddTerminateDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  char *v10; // r8
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  struct _HAM_DEPENDENCY_GROUP *v21; // rbx
  unsigned int v22; // edi
  struct _HAM_DEPENDENCY_GROUP *v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+41h] [rbp-BFh]
  __int16 v27; // [rsp+45h] [rbp-BBh]
  char v28; // [rsp+47h] [rbp-B9h]
  char v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+1D0h] [rbp+D0h]
  __int64 v31; // [rsp+1D8h] [rbp+D8h]
  __int64 v32; // [rsp+1E0h] [rbp+E0h]
  int v33; // [rsp+1E8h] [rbp+E8h]
  int v34; // [rsp+1ECh] [rbp+ECh]
  _BYTE v35[400]; // [rsp+1F0h] [rbp+F0h] BYREF

  memset_0(v35, 0, 0x188uLL);
  v24 = 0LL;
  HampActivityPropertiesInitialize(
    (char *)&word_1800BBB1C,
    (char *)&word_1800BBB1C,
    (struct _HAM_ACTIVITY_PROPERTIES *)v35);
  v10 = &v29;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v11 = 3LL;
  v30 = 0LL;
  v25 = 3;
  v12 = v35;
  do
  {
    v13 = v12[1];
    *(_OWORD *)v10 = *v12;
    v14 = v12[2];
    *((_OWORD *)v10 + 1) = v13;
    v15 = v12[3];
    *((_OWORD *)v10 + 2) = v14;
    v16 = v12[4];
    *((_OWORD *)v10 + 3) = v15;
    v17 = v12[5];
    *((_OWORD *)v10 + 4) = v16;
    v18 = v12[6];
    *((_OWORD *)v10 + 5) = v17;
    v19 = v12[7];
    v12 += 8;
    *((_OWORD *)v10 + 6) = v18;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v19;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)v10 = *(_QWORD *)v12;
  v34 = a5;
  v31 = a4;
  v33 = a6 | 0xC00;
  v32 = a2;
  v20 = HampDepGroupAddDependency(a3, a1, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v25, 0LL, &v24);
  v21 = v24;
  v22 = 0;
  if ( v20 < 0 )
    v22 = v20;
  if ( v24 )
  {
    HampDepGroupRunStateChangeWorker(v24);
    HampDepGroupDereference(v21);
  }
  return v22;
}

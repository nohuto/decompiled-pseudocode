/*
 * XREFs of ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001AD9C
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDepStart@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18006A0FC (-HampHostDepStart@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampDepGroupCheckCreateDependencyActivity(
        struct _HAM_ADD_DEPENDENCY_PARAMETERS *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        unsigned int a3,
        struct _HAM_HOST_DEPENDENCY *a4)
{
  struct _HAM_ACTIVITY *v4; // rbx
  __int64 v7; // r9
  _OWORD *v8; // rax
  _OWORD *v9; // r10
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v18; // r8
  __int64 v19; // r11
  int v20; // eax
  int v21; // edi
  _DWORD v23[100]; // [rsp+40h] [rbp-198h] BYREF
  struct _HAM_ACTIVITY *v24; // [rsp+1F8h] [rbp+20h] BYREF

  v4 = 0LL;
  v24 = 0LL;
  v7 = 3LL;
  if ( *((_BYTE *)a4 + 40) == 3 )
    goto LABEL_8;
  v8 = (_OWORD *)((char *)a1 + 8);
  v9 = v23;
  do
  {
    v10 = v8[1];
    *v9 = *v8;
    v11 = v8[2];
    v9[1] = v10;
    v12 = v8[3];
    v9[2] = v11;
    v13 = v8[4];
    v9[3] = v12;
    v14 = v8[5];
    v9[4] = v13;
    v15 = v8[6];
    v9[5] = v14;
    v16 = v8[7];
    v8 += 8;
    v9[6] = v15;
    v9 += 8;
    *(v9 - 1) = v16;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)v9 = *(_QWORD *)v8;
  if ( RmHamHostGetJobType(a2) != 2 )
    v23[0] &= ~0x400u;
  v20 = HampActCreate(
          *(struct _HAM_CLIENT_CONTEXT **)(v19 + 400),
          (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 792)
                                                                                            + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 392),
          v18,
          (struct _HAM_ACTIVITY_PROPERTIES *)v23,
          a3,
          0LL,
          &v24);
  v4 = v24;
  v21 = v20;
  if ( v20 >= 0 )
  {
    *((_QWORD *)v24 + 9) = a4;
    *(_QWORD *)a4 = v4;
    HampHostDepStart(a4);
LABEL_8:
    v21 = 0;
  }
  if ( v4 )
  {
    if ( v21 < 0 )
      HampActClose(v4, (__int64)a2);
    CemRcObjectDereference(v4);
  }
  return (unsigned int)v21;
}

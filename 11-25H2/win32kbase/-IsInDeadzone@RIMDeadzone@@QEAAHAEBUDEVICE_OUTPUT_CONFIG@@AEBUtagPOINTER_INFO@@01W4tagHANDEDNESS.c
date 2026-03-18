/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EDD08
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1401DCBA4 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1401DCCEC (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140127B28 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140127C18 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1401527AC (_lambda_0204d79c2644d1b9cd88bde7d32e7162_--operator().c)
 *     ConvertPointCoordinates @ 0x14015D084 (ConvertPointCoordinates.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x140161034 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019F800 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1401EE324 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // ebx
  unsigned int v10; // r13d
  int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // rdi
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 UserSessionState; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rbx
  __int64 v27; // r9
  int v28; // r8d
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  LONG v31; // ecx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  int v38; // edi
  int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct tagPOINT v50; // [rsp+38h] [rbp-59h] BYREF
  __int64 v51; // [rsp+40h] [rbp-51h] BYREF
  __int128 v52; // [rsp+48h] [rbp-49h]
  __int64 v53; // [rsp+58h] [rbp-39h] BYREF
  __int128 v54; // [rsp+68h] [rbp-29h] BYREF
  int *v55; // [rsp+78h] [rbp-19h]
  int *v56; // [rsp+80h] [rbp-11h]
  __int128 v57; // [rsp+88h] [rbp-9h] BYREF
  int v58[16]; // [rsp+98h] [rbp+7h] BYREF
  struct tagPOINT v59; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v60; // [rsp+F8h] [rbp+67h]
  __int64 v61; // [rsp+100h] [rbp+6Fh]

  v61 = a4;
  v60 = a3;
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a4 + 72) && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a4 + 76) )
  {
    v9 = a6;
    v10 = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      if ( a6 == *(_DWORD *)a1 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)(a1 + 24) )
      RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)a1);
    v11 = v9
        ? RIMDeadzone::_InitializeRightHandedDeadzone((RIMDeadzone *)a1)
        : RIMDeadzone::_InitializeLeftHandedDeadzone((RIMDeadzone *)a1);
    if ( v11 >= 0 )
    {
LABEL_11:
      v12 = *(_DWORD *)(a3 + 36);
      v13 = *(_DWORD *)(a3 + 32);
      v55 = (int *)(a3 + 32);
      v50 = (struct tagPOINT)__PAIR64__(v12, v13);
      v14 = *(_DWORD *)(a5 + 36);
      v15 = *(_DWORD *)(a5 + 32);
      v56 = (int *)(a5 + 32);
      v59 = (struct tagPOINT)__PAIR64__(v14, v15);
      v59.x = RIMDeadzone::_GetAngle((struct tagPOINT)__PAIR64__(v12, v13), (struct tagPOINT)__PAIR64__(v14, v15));
      v18 = (v12 - v14) * (v12 - v14);
      v19 = 0LL;
      v20 = (v13 - v15) * (v13 - v15) + v18;
      if ( *(_DWORD *)(a1 + 32) )
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v52 = 3 * v19;
          v22 = *(_QWORD *)(v21 + 24 * v19);
          UserSessionState = W32GetUserSessionState(v17, v16);
          if ( RIMDeadzone::_IsAngleWithinRange(v59.x, *(_DWORD *)(UserSessionState + 272), v22) )
          {
            v24 = *(_QWORD *)(a1 + 24);
            v25 = 0;
            v17 = v52;
            if ( *(_DWORD *)(v24 + 8 * v52 + 16) )
              break;
          }
LABEL_18:
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= *(_DWORD *)(a1 + 32) )
            goto LABEL_21;
        }
        v26 = v61;
        while ( 1 )
        {
          v27 = *(_QWORD *)(v24 + 8 * v17 + 8);
          v28 = *(_DWORD *)(v26 + 20);
          v29 = *(_OWORD *)(v26 + 4);
          v30 = *(_OWORD *)(v26 + 20);
          v50.y = *(_DWORD *)(v26 + 24);
          HIDWORD(v51) = v50.y;
          v31 = v28 + *(_DWORD *)(v27 + 8LL * v25);
          v53 = 0LL;
          v50.x = v31;
          LODWORD(v51) = v28 + *(_DWORD *)(v27 + 8LL * v25 + 4);
          v54 = v29;
          v57 = v30;
          ConvertPointCoordinates(*(_QWORD *)&v50, (int *)&v57, (int *)&v54, &v53);
          v32 = *(_OWORD *)(v26 + 4);
          v33 = *(_OWORD *)(v26 + 20);
          *(_QWORD *)&v54 = 0LL;
          v57 = v32;
          *(_OWORD *)v58 = v33;
          ConvertPointCoordinates(v51, v58, (int *)&v57, &v54);
          v34 = *(_DWORD *)(v26 + 4);
          v17 = (unsigned int)((v53 - v34) * (v53 - v34));
          v16 = (unsigned int)(v54 - v34);
          if ( v20 >= (unsigned int)v17 )
          {
            v16 = (unsigned int)(v16 * v16);
            if ( v20 < (unsigned int)v16 )
              break;
          }
          v24 = *(_QWORD *)(a1 + 24);
          ++v25;
          v17 = v52;
          if ( v25 >= *(_DWORD *)(v24 + 8 * v52 + 16) )
            goto LABEL_18;
        }
        v10 = 1;
      }
LABEL_21:
      v52 = *(_OWORD *)(a2 + 20);
      if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 272) == 90
        || *(_DWORD *)(W32GetUserSessionState(v36, v35) + 272) == 270 )
      {
        v39 = *(_DWORD *)(a2 + 24);
        v38 = *(_DWORD *)(a2 + 32);
        v37 = *(_DWORD *)(a2 + 28);
      }
      else
      {
        v37 = HIDWORD(v52);
        v38 = DWORD2(v52);
        v39 = v52;
      }
      v40 = W32GetUserSessionState(v36, v35);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v40 + 272),
        &v59,
        (int *)(v60 + 40),
        a2 + 20,
        *(_DWORD *)(v40 + 272));
      v43 = W32GetUserSessionState(v42, v41);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v43 + 272),
        &v50,
        v55,
        a2 + 4,
        *(_DWORD *)(v43 + 272));
      v46 = W32GetUserSessionState(v45, v44);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v46 + 272),
        &v51,
        v56,
        v61 + 4,
        *(_DWORD *)(v46 + 272));
      if ( v10 || *(_DWORD *)(W32GetUserSessionState(v48, v47) + 36) == 6 )
        return v10;
      if ( a6 == 1 )
      {
        if ( v59.y > v37 - 1000 && v50.x >= (int)v51 )
          return 1;
        if ( v59.x <= v38 - 530 )
          return v10;
      }
      else
      {
        if ( a6 )
        {
          LODWORD(v61) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 840);
        }
        if ( v59.y > v37 - 1000 && v50.x <= (int)v51 )
          return 1;
        if ( v59.x >= v39 + 530 )
          return v10;
      }
      if ( v50.y >= SHIDWORD(v51) )
        return 1;
      return v10;
    }
  }
  return 0LL;
}

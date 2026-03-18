/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1400F85FC (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x140202D28 (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14017F694 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x14017F788 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1401908BC (_lambda_0204d79c2644d1b9cd88bde7d32e7162_--operator().c)
 *     ConvertPointCoordinates @ 0x140196130 (ConvertPointCoordinates.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1401A647C (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1401C07F0 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x14020C99C (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // ebx
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rax
  unsigned int i; // r13d
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 UserSessionState; // rax
  unsigned int v25; // ebx
  unsigned int x; // eax
  __int64 v27; // rsi
  int v28; // r10d
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // r8
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // ebx
  int v37; // edi
  int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  struct tagPOINT v55; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v56[2]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v57; // [rsp+48h] [rbp-69h]
  __int64 v58; // [rsp+50h] [rbp-61h]
  __int64 v59; // [rsp+58h] [rbp-59h] BYREF
  __int128 v60; // [rsp+60h] [rbp-51h]
  __int128 v61; // [rsp+78h] [rbp-39h] BYREF
  __int64 v62; // [rsp+88h] [rbp-29h]
  int *v63; // [rsp+90h] [rbp-21h]
  int *v64; // [rsp+98h] [rbp-19h]
  __int128 v65; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v66[4]; // [rsp+B8h] [rbp+7h] BYREF
  struct tagPOINT v67; // [rsp+110h] [rbp+5Fh] BYREF
  __int64 v68; // [rsp+118h] [rbp+67h]
  __int64 v69; // [rsp+120h] [rbp+6Fh]

  v69 = a4;
  v68 = a3;
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
      RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)a1, a2, a3, a4);
    v11 = v9
        ? RIMDeadzone::_InitializeRightHandedDeadzone((RIMDeadzone *)a1)
        : RIMDeadzone::_InitializeLeftHandedDeadzone((RIMDeadzone *)a1);
    if ( v11 >= 0 )
    {
LABEL_11:
      v12 = *(_DWORD *)(a3 + 36);
      v13 = *(_DWORD *)(a3 + 32);
      v63 = (int *)(a3 + 32);
      v55 = (struct tagPOINT)__PAIR64__(v12, v13);
      v14 = *(_DWORD *)(a5 + 36);
      v15 = *(_DWORD *)(a5 + 32);
      v64 = (int *)(a5 + 32);
      v67 = (struct tagPOINT)__PAIR64__(v14, v15);
      v56[0] = RIMDeadzone::_GetAngle((struct tagPOINT)__PAIR64__(v12, v13), (struct tagPOINT)__PAIR64__(v14, v15));
      v19 = 0LL;
      v67.x = 0;
      for ( i = (v13 - v15) * (v13 - v15) + (v12 - v14) * (v12 - v14); (unsigned int)v19 < *(_DWORD *)(a1 + 32); v67.x = v19 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        v22 = 3 * v19;
        v62 = 3 * v19;
        v23 = *(_QWORD *)(v21 + 24 * v19);
        UserSessionState = W32GetUserSessionState(v17, v16, v18);
        if ( RIMDeadzone::_IsAngleWithinRange(v56[0], *(_DWORD *)(UserSessionState + 272), v23) )
        {
          v17 = *(_QWORD *)(a1 + 24);
          v25 = 0;
          *(_QWORD *)&v60 = v17;
          x = *(_DWORD *)(v17 + 8 * v22 + 16);
          v27 = v69;
          v55.x = x;
          while ( v25 < x )
          {
            v28 = *(_DWORD *)(v27 + 20);
            v29 = *(_OWORD *)(v27 + 4);
            v30 = *(_OWORD *)(v27 + 20);
            v31 = *(_QWORD *)(v17 + 8 * v62 + 8);
            HIDWORD(v57) = *(_DWORD *)(v27 + 24);
            HIDWORD(v58) = HIDWORD(v57);
            v59 = 0LL;
            LODWORD(v57) = v28 + *(_DWORD *)(v31 + 8LL * v25);
            LODWORD(v58) = v28 + *(_DWORD *)(v31 + 8LL * v25 + 4);
            v61 = v29;
            v65 = v30;
            ConvertPointCoordinates(v57, &v65, (int *)&v61, &v59);
            *(_QWORD *)&v61 = 0LL;
            v65 = v29;
            v66[0] = v30;
            ConvertPointCoordinates(v58, v66, (int *)&v65, &v61);
            v32 = *(_DWORD *)(v27 + 4);
            LODWORD(v17) = (v59 - v32) * (v59 - v32);
            v16 = v61 - v32;
            if ( i >= (unsigned int)v17 )
            {
              v16 *= v16;
              if ( i < v16 )
              {
                v10 = 1;
                goto LABEL_20;
              }
            }
            v17 = v60;
            ++v25;
            x = v55.x;
          }
        }
        v19 = (unsigned int)(v67.x + 1);
      }
      v27 = v69;
LABEL_20:
      v60 = *(_OWORD *)(a2 + 20);
      if ( *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 272) == 90
        || *(_DWORD *)(W32GetUserSessionState(v34, v33, v35) + 272) == 270 )
      {
        v38 = *(_DWORD *)(a2 + 24);
        v37 = *(_DWORD *)(a2 + 32);
        v36 = *(_DWORD *)(a2 + 28);
      }
      else
      {
        v36 = HIDWORD(v60);
        v37 = DWORD2(v60);
        v38 = v60;
      }
      v39 = W32GetUserSessionState(v34, v33, v35);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        v40,
        &v67,
        (int *)(v68 + 40),
        a2 + 20,
        *(_DWORD *)(v39 + 272));
      v44 = W32GetUserSessionState(v42, v41, v43);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(v45, v56, v63, a2 + 4, *(_DWORD *)(v44 + 272));
      v49 = W32GetUserSessionState(v47, v46, v48);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(v50, &v55, v64, v27 + 4, *(_DWORD *)(v49 + 272));
      if ( v10 || *(_DWORD *)(W32GetUserSessionState(v52, v51, v53) + 36) == 6 )
        return v10;
      if ( a6 == 1 )
      {
        if ( v67.y > v36 - 1000 && (int)v56[0] >= v55.x )
          return 1;
        if ( v67.x <= v37 - 530 )
          return v10;
      }
      else
      {
        if ( a6 )
        {
          LODWORD(v69) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 840);
        }
        if ( v67.y > v36 - 1000 && (int)v56[0] <= v55.x )
          return 1;
        if ( v67.x >= v38 + 530 )
          return v10;
      }
      if ( (int)v56[1] >= v55.y )
        return 1;
      return v10;
    }
  }
  return 0LL;
}

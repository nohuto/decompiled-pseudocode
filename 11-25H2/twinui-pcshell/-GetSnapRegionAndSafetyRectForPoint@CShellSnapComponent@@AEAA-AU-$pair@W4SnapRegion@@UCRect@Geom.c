/*
 * XREFs of ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_N@Z @ 0x1801949D4
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1800D996C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x180194E28 (-ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapR.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CShellSnapComponent::GetSnapRegionAndSafetyRectForPoint(
        __int64 a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        int *a5,
        char a6)
{
  __int128 v6; // xmm6
  unsigned int v9; // edx
  int v10; // r12d
  int v11; // r14d
  __int64 v12; // rdx
  int v13; // ebx
  SnapLayoutHelpers *v14; // rcx
  unsigned int v15; // ebx
  int v16; // r13d
  int v17; // r9d
  int v18; // r10d
  int v19; // ecx
  bool v20; // cc
  int v21; // eax
  enum _TABLETMODESTATE *v22; // rdx
  SnapLayoutHelpers *v23; // rcx
  _DWORD *v24; // rbp
  _DWORD *v25; // r8
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  __int64 result; // rax
  bool v31; // al
  _DWORD *v32; // rdx
  bool v33; // al
  int v34; // [rsp+40h] [rbp-78h]
  int v35; // [rsp+44h] [rbp-74h]
  __int128 v37; // [rsp+50h] [rbp-68h] BYREF

  v6 = 0LL;
  v37 = 0LL;
  if ( a6 )
  {
    v9 = *(_DWORD *)(a1 + 1176);
    v10 = (int)(float)((float)(a3[2] - *a3) * 0.1);
    v11 = (int)(float)((float)(a3[3] - a3[1]) * 0.1);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 1164);
    v10 = 138;
    v11 = 138;
  }
  if ( *(_BYTE *)(a1 + 1156) )
  {
    v16 = a5[1];
    v17 = v11;
    v18 = v10;
    if ( v11 < (int)HIBYTE(v9) )
      v17 = HIBYTE(v9);
    v34 = v17;
    if ( v10 < BYTE2(v9) )
      v18 = BYTE2(v9);
    v19 = BYTE1(v9);
    v20 = v10 < BYTE1(v9);
    v21 = (unsigned __int8)v9;
    v22 = (enum _TABLETMODESTATE *)(unsigned int)*a5;
    v15 = 0;
    if ( v20 )
      v10 = v19;
    v35 = v18;
    if ( v11 < v21 )
      v11 = v21;
    v23 = (SnapLayoutHelpers *)(unsigned int)(v10 + *a4);
    if ( (int)v22 <= (int)v23 )
    {
      v31 = SnapLayoutHelpers::AreQuadrantsEnabled(v23, v22);
      v25 = a4 + 1;
      if ( v31 )
      {
        if ( v16 > v11 + *v25 )
        {
          v15 = 7;
          if ( v16 < a4[3] - v34 )
            v15 = 8;
        }
        else
        {
          v15 = 1;
        }
        v32 = a4 + 3;
      }
      else
      {
        v15 = 8;
        v32 = a4 + 3;
      }
      v24 = a4 + 2;
    }
    else
    {
      v24 = a4 + 2;
      if ( (int)v22 < a4[2] - v18 )
      {
        v25 = a4 + 1;
        if ( v16 <= v11 + a4[1] )
        {
          v15 = 2;
          v26 = v11 + *v25;
          v27 = a3[1];
          v28 = *v24 - v18;
LABEL_22:
          v29 = v10 + *a4;
LABEL_23:
          *(_QWORD *)&v37 = __PAIR64__(v27, v29);
          *((_QWORD *)&v37 + 1) = __PAIR64__(v26, v28);
          v6 = v37;
          goto LABEL_24;
        }
        v32 = a4 + 3;
        if ( v16 >= a4[3] - v17 )
        {
          v15 = 6;
          v28 = *v24 - v18;
          v26 = a3[3];
          v27 = a4[3] - v17;
          goto LABEL_22;
        }
LABEL_34:
        if ( !v15 )
          goto LABEL_24;
        if ( v15 != 1 )
        {
          if ( v15 == 3 )
          {
            v27 = a3[1];
            v26 = v11 + *v25;
          }
          else if ( v15 == 4 )
          {
            v26 = *v32 - v17;
            v27 = v11 + *v25;
          }
          else
          {
            if ( v15 != 5 )
            {
              if ( v15 == 7 )
              {
                v28 = v10 + *a4;
                v26 = a3[3];
                v27 = a4[3] - v17;
              }
              else
              {
                v26 = a4[3] - v17;
                v28 = v10 + *a4;
                v27 = v11 + a4[1];
              }
              goto LABEL_61;
            }
            v26 = a3[3];
            v27 = a4[3] - v17;
          }
          v28 = a3[2];
          v29 = *v24 - v18;
          goto LABEL_23;
        }
        v26 = v11 + *v25;
        v27 = a3[1];
        v28 = v10 + *a4;
LABEL_61:
        v29 = *a3;
        goto LABEL_23;
      }
      v33 = SnapLayoutHelpers::AreQuadrantsEnabled(v23, v22);
      v25 = a4 + 1;
      if ( v33 )
      {
        if ( v16 > v11 + *v25 )
        {
          v15 = 5;
          if ( v16 < a4[3] - v34 )
            v15 = 4;
        }
        else
        {
          v15 = 3;
        }
        v32 = a4 + 3;
      }
      else
      {
        v15 = 4;
        v32 = a4 + 3;
      }
    }
    v17 = v34;
    v18 = v35;
    goto LABEL_34;
  }
  v12 = 0LL;
  v13 = a5[1];
  v14 = (SnapLayoutHelpers *)(unsigned int)(v10 + *a4);
  if ( *a5 <= (int)v14 )
  {
    if ( SnapLayoutHelpers::AreQuadrantsEnabled(v14, 0LL) )
    {
      if ( v13 <= v11 + a4[1] )
      {
        v15 = 1;
        goto LABEL_8;
      }
      if ( v13 >= a4[3] - v11 )
      {
        v15 = 7;
        goto LABEL_8;
      }
    }
    v12 = 8LL;
LABEL_28:
    v15 = v12;
    if ( !(_DWORD)v12 )
      goto LABEL_24;
    goto LABEL_9;
  }
  if ( *a5 >= a4[2] - v10 )
  {
    if ( SnapLayoutHelpers::AreQuadrantsEnabled(v14, 0LL) )
    {
      if ( v13 <= v11 + a4[1] )
      {
        v15 = 3;
        goto LABEL_8;
      }
      if ( v13 >= a4[3] - v11 )
      {
        v15 = 5;
        goto LABEL_8;
      }
    }
    v12 = 4LL;
    goto LABEL_28;
  }
  if ( v13 > v11 + a4[1] )
  {
    if ( v13 >= a4[3] - v11 )
    {
      v15 = 6;
      goto LABEL_8;
    }
    goto LABEL_28;
  }
  v15 = 2;
LABEL_8:
  v12 = v15;
LABEL_9:
  v6 = *(_OWORD *)SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
                    &v37,
                    v12,
                    a3,
                    a4,
                    v11,
                    v10,
                    v10,
                    v11);
LABEL_24:
  result = a2;
  *(_DWORD *)a2 = v15;
  *(_OWORD *)(a2 + 4) = v6;
  return result;
}

/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB168
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1400C9D9C (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1400EEC10 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193AB4 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140194444 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x140225494 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline @ 0x140225608 (Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // eax
  __int64 v3; // r12
  struct PTPEnginePointerNode *v5; // r14
  unsigned int v7; // r15d
  struct PTPEnginePointerNode *v8; // r13
  int v9; // r8d
  int v10; // r11d
  char *v11; // rsi
  bool v12; // cl
  int v13; // eax
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rcx
  char v17; // bp
  int v18; // eax
  char v19; // r8
  int v20; // edx
  struct PTPEnginePointerNode *v21; // r9
  _DWORD *v22; // r10
  int v23; // eax
  int v24; // ebp
  unsigned int v25; // r14d
  _DWORD *v26; // r15
  __int64 v27; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  int v29; // r9d
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // r11
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
  unsigned int v36; // r9d
  _DWORD *v37; // r8
  __int64 v38; // rdx
  _DWORD *v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  int v41; // [rsp+A0h] [rbp+8h]
  int v42; // [rsp+A8h] [rbp+10h]
  int v43; // [rsp+B0h] [rbp+18h] BYREF
  struct PTPEnginePointerNode *v44; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)this + 706);
  v3 = *(_QWORD *)a2;
  v44 = 0LL;
  v39 = 0LL;
  v40 = v3;
  v42 = 0;
  v5 = 0LL;
  v41 = 0;
  if ( *((_DWORD *)a2 + 9) )
    return;
  if ( (*((_DWORD *)this + 770) & 1) != 0 )
    return;
  if ( (unsigned int)(v2 - 1) > 1 )
    return;
  if ( *((_DWORD *)this + 6) )
    return;
  v7 = 0;
  v8 = (struct PTPInput *)((char *)a2 + 56);
  v43 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    v9 = *((_DWORD *)v8 + 3);
    if ( !v9 )
    {
      v24 = v41;
      goto LABEL_93;
    }
    v10 = *((_DWORD *)this + 706);
    v11 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v8 + 1) % *((_DWORD *)this + 4)) + 816;
    v12 = v10 == 2 && *((_DWORD *)this + 696) == *((_DWORD *)v8 + 1) % *((_DWORD *)this + 4);
    if ( (v9 & 0x40000) == 0
      && (*(_DWORD *)v11 & 4) != 0
      && (*((_DWORD *)v11 + 1) & 4) != 0
      && !*((_DWORD *)this + 697)
      && !*((_DWORD *)this + 705)
      && (v12 || v10 != 2)
      && ((*(_DWORD *)v11 & 0x100) == 0 || *((_DWORD *)this + 698) == 1 || v12) )
    {
      if ( v10 != 2 )
      {
        v13 = *((_DWORD *)this + 770);
        if ( (v13 & 0x40000) == 0 && (v13 & 0x20000) != 0 )
        {
          *((_QWORD *)this + 370) = v3;
          *((_DWORD *)this + 770) = v13 | 0x40000;
        }
      }
      v14 = *((_DWORD *)this + 770);
      v15 = *((_QWORD *)this + 12);
      if ( (v14 & 0x20000) != 0 )
      {
        v16 = *((_QWORD *)this + 12);
        if ( v3 - *((_QWORD *)this + 370) < v15 * (unsigned __int64)*((unsigned int *)this + 787) / 0x3E8 )
        {
          v17 = 0;
LABEL_30:
          v18 = *((_DWORD *)this + 770);
          if ( v10 != 2 && (v14 & 0x400000) == 0 && (v14 & 0x100000) != 0 )
          {
            v18 = v14 | 0x400000;
            *((_QWORD *)this + 372) = v3;
            *((_DWORD *)this + 770) = v14 | 0x400000;
          }
          if ( (v18 & 0x100000) != 0 )
          {
            if ( v3 - *((_QWORD *)this + 372) < v15 * (unsigned __int64)*((unsigned int *)this + 815) / 0x3E8 )
            {
              v19 = 0;
              goto LABEL_38;
            }
            v16 = v15;
          }
          v19 = 1;
          v15 = v16;
LABEL_38:
          if ( v17 && v19 && v3 - *((_QWORD *)v11 + 9) >= v15 * (unsigned __int64)*((unsigned int *)this + 848) / 0x3E8 )
          {
            v43 = 0;
            if ( (unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(this, a2, (struct CContactState *)v11, &v43) )
            {
              v20 = 1;
              v44 = v8;
              v42 = 1;
              v21 = v8;
              v22 = v11;
              v39 = v11;
LABEL_83:
              v24 = v41;
              goto LABEL_84;
            }
            if ( v43 )
            {
              CPTPEngine::ResetDragThresholds(this, a2);
              *((_DWORD *)this + 706) = 1;
            }
          }
LABEL_82:
          v20 = v42;
          v21 = v44;
          v22 = v39;
          goto LABEL_83;
        }
      }
      else
      {
        v16 = *((_QWORD *)this + 12);
      }
      v17 = 1;
      goto LABEL_30;
    }
    if ( (*((_DWORD *)v11 + 1) & 1) == 0
      || v10 == 2
      || (v9 & 0x48000) != 0x40000
      || (v23 = *(_DWORD *)v11, (*(_DWORD *)v11 & 0x20) == 0)
      || (v23 & 0x10) != 0
      || (v23 & 0x1000000) != 0
      || (v23 & 0x2000000) != 0
      || (v23 & 4) != 0 && ((v23 & 0x20000) == 0 || _bittest((const signed __int32 *)this + 770, 0x18u))
      || *((_QWORD *)this + 361) >= *((_QWORD *)v11 + 8) )
    {
      if ( (*((_DWORD *)this + 824) & 0x100) != 0 && (v9 & 0x48000) == 0x40000 )
      {
        v33 = *((_QWORD *)v11 + 13);
        if ( v33 != *((_QWORD *)v11 + 8) )
        {
          v34 = *((_QWORD *)this + 12);
          if ( v3 - v33 < v34 * *((unsigned int *)this + 801) / 0x3E8 )
          {
            v35 = *((_QWORD *)v11 + 1);
            if ( *((unsigned int *)this + 782)
               * (__int64)(int)((*((_QWORD *)v11 + 6) - v35) * (*((_QWORD *)v11 + 6) - v35))
               + (unsigned __int64)*((unsigned int *)this + 781)
               * (int)((HIDWORD(*((_QWORD *)v11 + 6)) - HIDWORD(v35)) * (HIDWORD(*((_QWORD *)v11 + 6)) - HIDWORD(v35))) < *((unsigned int *)this + 782) * (unsigned __int64)*((unsigned int *)this + 781)
              && (*(_DWORD *)v11 & 0x20000) != 0
              && (*((_DWORD *)a2 + 7) != *((_DWORD *)v11 + 14) || *((_DWORD *)a2 + 8) != *((_DWORD *)v11 + 15)) )
            {
              CBasePTPEngine::SendWarpbackTelemetry(
                this,
                14LL,
                *(_QWORD *)((char *)a2 + 28),
                *((_QWORD *)v11 + 7),
                1000 * (v3 - v33) / v34);
              CBasePTPEngine::SendMouseOutput((__int64)this, 5, *((_QWORD *)v11 + 7));
            }
          }
        }
      }
      goto LABEL_82;
    }
    v24 = 1;
    v41 = 1;
    v5 = v8;
    if ( *((_DWORD *)this + 699) )
      goto LABEL_72;
    *((_DWORD *)this + 700) = 0;
    v25 = 0;
    *(_QWORD *)((char *)this + 2876) = *((_QWORD *)v11 + 1);
    if ( !*((_DWORD *)a2 + 12) )
      goto LABEL_71;
    v26 = (_DWORD *)((char *)a2 + 60);
    do
    {
      v27 = 328LL * (unsigned int)(*v26 % *((_DWORD *)this + 4));
      IsEnabledDeviceUsageNoInline = Feature_UpdateMultiFingerTiming__private_IsEnabledDeviceUsageNoInline();
      v29 = *(_DWORD *)((char *)this + v27 + 816);
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( (*(_DWORD *)((_BYTE *)this + v27 + 816) & 1) != 0 )
        {
          v30 = *((_QWORD *)v11 + 9);
          v31 = *(_QWORD *)((char *)this + v27 + 888);
          v32 = v30 - v31;
          if ( v30 <= v31 )
            v32 = *(_QWORD *)((char *)this + v27 + 888) - v30;
          if ( v32 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 811) / 0x3E8 )
          {
LABEL_68:
            *(_DWORD *)((char *)this + v27 + 816) = v29 | 0x80000;
            ++*((_DWORD *)this + 699);
          }
        }
      }
      else if ( (*(_DWORD *)((_BYTE *)this + v27 + 816) & 1) != 0 && (v29 & 0x4000000) == 0 )
      {
        goto LABEL_68;
      }
      ++v25;
      v26 += 24;
    }
    while ( v25 < *((_DWORD *)a2 + 12) );
    v3 = v40;
    v24 = 1;
    v7 = v43;
LABEL_71:
    v5 = v8;
LABEL_72:
    ++*((_DWORD *)this + 700);
    v20 = v42;
    v21 = v44;
    v22 = v39;
LABEL_84:
    if ( (*((_DWORD *)v8 + 3) & 0x40000) != 0 && v5 != v8 )
    {
      *((_DWORD *)this + 699) = 0;
      CPTPEngine::ResetDragThresholds(this, a2);
      v36 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        v37 = (_DWORD *)((char *)a2 + 60);
        do
        {
          v38 = 328LL * (unsigned int)(*v37 % *((_DWORD *)this + 4));
          if ( (*(_DWORD *)((_BYTE *)this + v38 + 816) & 1) != 0 )
            *(_DWORD *)((char *)this + v38 + 820) &= ~1u;
          ++v36;
          v37 += 24;
        }
        while ( v36 < *((_DWORD *)a2 + 12) );
      }
LABEL_93:
      v20 = v42;
      v21 = v44;
      v22 = v39;
    }
    ++v7;
    v8 = (struct PTPEnginePointerNode *)((char *)v8 + 96);
    v43 = v7;
  }
  while ( v7 < *((_DWORD *)a2 + 12) );
  if ( v20 )
  {
    if ( v24 && ((*v22 & 0x100) != 0 || (*v22 & 0x10) == 0) )
LABEL_101:
      CPTPEngine::HandleTap(this, a2, v5);
    else
      CPTPEngine::HandleMove(this, a2, v21);
  }
  else if ( v24 )
  {
    goto LABEL_101;
  }
}

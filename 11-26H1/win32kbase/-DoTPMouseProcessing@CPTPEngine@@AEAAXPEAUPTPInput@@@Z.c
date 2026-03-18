/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1401062D4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x140133B30 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B1764 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4 (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1402272B8 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  __int64 v2; // r13
  int v3; // eax
  struct PTPEnginePointerNode *v4; // r9
  int v6; // r12d
  bool v8; // cl
  unsigned int v9; // ebp
  int *v10; // r15
  int v11; // ecx
  int v12; // esi
  __int64 v13; // r8
  char *v14; // r14
  bool v15; // dl
  int v16; // eax
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rcx
  char v20; // r11
  int v21; // eax
  char v22; // r8
  struct PTPEnginePointerNode *v23; // r8
  int v24; // edx
  _DWORD *v25; // r10
  unsigned int v26; // r9d
  _DWORD *v27; // r8
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r11d
  unsigned int v31; // r10d
  _DWORD *v32; // r11
  __int64 v33; // rsi
  int v34; // r9d
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  __int64 v40; // rdx
  struct PTPEnginePointerNode *v41; // [rsp+30h] [rbp-58h]
  int v42; // [rsp+90h] [rbp+8h]
  int v43; // [rsp+98h] [rbp+10h] BYREF
  struct PTPEnginePointerNode *v44; // [rsp+A0h] [rbp+18h]
  _DWORD *v45; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)a2;
  v3 = *((_DWORD *)this + 706);
  v4 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v6 = 0;
  v42 = 0;
  v8 = v3 == 2 || v3 == 1;
  if ( *((_DWORD *)a2 + 9) )
    return;
  if ( (*((_DWORD *)this + 768) & 1) != 0 )
    return;
  if ( !v8 )
    return;
  if ( *((_DWORD *)this + 6) )
    return;
  v9 = 0;
  v43 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  v10 = (int *)((char *)a2 + 68);
  do
  {
    v11 = *v10;
    if ( !*v10 )
    {
      v24 = v42;
      v23 = v44;
      v25 = v45;
      goto LABEL_61;
    }
    v12 = *((_DWORD *)this + 706);
    v13 = (unsigned int)*(v10 - 2) % *((_DWORD *)this + 4);
    v14 = (char *)this + 328 * v13 + 816;
    v15 = v12 == 2 && *((_DWORD *)this + 696) == (_DWORD)v13;
    if ( (v11 & 0x40000) != 0
      || (*(_DWORD *)v14 & 4) == 0
      || (*((_DWORD *)v14 + 1) & 2) == 0
      || *((_DWORD *)this + 697)
      || *((_DWORD *)this + 705)
      || !v15 && v12 == 2
      || (*(_DWORD *)v14 & 0x100) != 0 && *((_DWORD *)this + 698) != 1 && !v15 )
    {
      v30 = *(_DWORD *)v14;
      if ( *(int *)v14 >= 0
        || v12 == 2
        || (v11 & 0x48000) != 0x40000
        || (v30 & 0x20) == 0
        || (v30 & 0x10) != 0
        || (v30 & 0x1000000) != 0
        || (v30 & 0x2000000) != 0
        || (v30 & 4) != 0 && ((v30 & 0x20000) == 0 || _bittest((const signed __int32 *)this + 768, 0x18u))
        || *((_QWORD *)this + 361) >= *((_QWORD *)v14 + 8) )
      {
        if ( (*((_DWORD *)this + 821) & 0x100) != 0 && (v11 & 0x48000) == 0x40000 )
        {
          v38 = *((_QWORD *)v14 + 13);
          if ( v38 != *((_QWORD *)v14 + 8) )
          {
            v39 = *((_QWORD *)this + 12);
            if ( v2 - v38 >= v39 * *((unsigned int *)this + 798) / 0x3E8 )
            {
              v9 = v43;
            }
            else
            {
              v40 = *((_QWORD *)v14 + 1);
              if ( *((unsigned int *)this + 779)
                 * (__int64)(int)((HIDWORD(*((_QWORD *)v14 + 6)) - HIDWORD(v40))
                                * (HIDWORD(*((_QWORD *)v14 + 6)) - HIDWORD(v40)))
                 + (unsigned __int64)*((unsigned int *)this + 780)
                 * (int)((*((_QWORD *)v14 + 6) - v40) * (*((_QWORD *)v14 + 6) - v40)) < *((unsigned int *)this + 779)
                                                                                      * (unsigned __int64)*((unsigned int *)this + 780)
                && (v30 & 0x20000) != 0
                && (*((_DWORD *)a2 + 7) != *((_DWORD *)v14 + 14) || *((_DWORD *)a2 + 8) != *((_DWORD *)v14 + 15)) )
              {
                CBasePTPEngine::SendWarpbackTelemetry(
                  this,
                  14LL,
                  *(_QWORD *)((char *)a2 + 28),
                  *((_QWORD *)v14 + 7),
                  1000 * (v2 - v38) / v39);
                CBasePTPEngine::SendMouseOutput(this, 5LL, *((_QWORD *)v14 + 7));
              }
              v9 = v43;
LABEL_51:
              v4 = v41;
            }
          }
        }
      }
      else
      {
        v4 = (struct PTPEnginePointerNode *)(v10 - 3);
        v41 = (struct PTPEnginePointerNode *)(v10 - 3);
        v6 = 1;
        if ( !*((_DWORD *)this + 699) )
        {
          *((_DWORD *)this + 700) = 0;
          v31 = 0;
          *(_QWORD *)((char *)this + 2876) = *((_QWORD *)v14 + 1);
          if ( *((_DWORD *)a2 + 12) )
          {
            v32 = (_DWORD *)((char *)a2 + 60);
            do
            {
              v33 = 328LL * (unsigned int)(*v32 % *((_DWORD *)this + 4));
              v34 = *(_DWORD *)((char *)this + v33 + 816);
              if ( (v34 & 1) != 0 )
              {
                v35 = *((_QWORD *)v14 + 9);
                v36 = *(_QWORD *)((char *)this + v33 + 888);
                v37 = v35 - v36;
                if ( v35 <= v36 )
                  v37 = *(_QWORD *)((char *)this + v33 + 888) - v35;
                if ( v37 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 808) / 0x3E8 )
                {
                  *(_DWORD *)((char *)this + v33 + 816) = v34 | 0x80000;
                  ++*((_DWORD *)this + 699);
                }
              }
              ++v31;
              v32 += 24;
            }
            while ( v31 < *((_DWORD *)a2 + 12) );
            v9 = v43;
            v4 = (struct PTPEnginePointerNode *)(v10 - 3);
          }
        }
        ++*((_DWORD *)this + 700);
      }
      v25 = v45;
      v23 = v44;
      v24 = v42;
      goto LABEL_53;
    }
    if ( v12 != 2 )
    {
      v16 = *((_DWORD *)this + 768);
      if ( (v16 & 0x40000) == 0 && (v16 & 0x20000) != 0 )
      {
        *((_QWORD *)this + 369) = v2;
        *((_DWORD *)this + 768) = v16 | 0x40000;
      }
    }
    v17 = *((_DWORD *)this + 768);
    v18 = *((_QWORD *)this + 12);
    if ( (v17 & 0x20000) == 0 )
    {
      v19 = *((_QWORD *)this + 12);
LABEL_34:
      v20 = 1;
      goto LABEL_35;
    }
    v19 = *((_QWORD *)this + 12);
    if ( v2 - *((_QWORD *)this + 369) >= v18 * (unsigned __int64)*((unsigned int *)this + 785) / 0x3E8 )
      goto LABEL_34;
    v20 = 0;
LABEL_35:
    v21 = *((_DWORD *)this + 768);
    if ( v12 != 2 && (v17 & 0x400000) == 0 && (v17 & 0x100000) != 0 )
    {
      v21 = v17 | 0x400000;
      *((_QWORD *)this + 371) = v2;
      *((_DWORD *)this + 768) = v17 | 0x400000;
    }
    if ( (v21 & 0x100000) != 0 )
    {
      if ( v2 - *((_QWORD *)this + 371) < v18 * (unsigned __int64)*((unsigned int *)this + 812) / 0x3E8 )
      {
        v22 = 0;
        goto LABEL_43;
      }
      v19 = v18;
    }
    v22 = 1;
    v18 = v19;
LABEL_43:
    if ( !v20 || !v22 || v2 - *((_QWORD *)v14 + 9) < v18 * (unsigned __int64)*((unsigned int *)this + 845) / 0x3E8 )
      goto LABEL_51;
    v43 = 0;
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(this, a2, (struct CContactState *)v14, &v43) )
    {
      if ( v43 )
      {
        CPTPEngine::ResetDragThresholds(this, a2);
        *((_DWORD *)this + 706) = 1;
      }
      goto LABEL_51;
    }
    v4 = v41;
    v23 = (struct PTPEnginePointerNode *)(v10 - 3);
    v24 = 1;
    v44 = (struct PTPEnginePointerNode *)(v10 - 3);
    v42 = 1;
    v25 = v14;
    v45 = v14;
LABEL_53:
    if ( (*v10 & 0x40000) != 0 && v4 != (struct PTPEnginePointerNode *)(v10 - 3) )
    {
      *((_DWORD *)this + 699) = 0;
      CPTPEngine::ResetDragThresholds(this, a2);
      v26 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        v27 = (_DWORD *)((char *)a2 + 60);
        do
        {
          v28 = (unsigned int)(*v27 % *((_DWORD *)this + 4));
          v29 = *((_DWORD *)this + 82 * v28 + 204);
          if ( (v29 & 1) != 0 )
            *((_DWORD *)this + 82 * v28 + 204) = v29 & 0x7FFFFFFF;
          ++v26;
          v27 += 24;
        }
        while ( v26 < *((_DWORD *)a2 + 12) );
      }
      v25 = v45;
      v23 = v44;
      v24 = v42;
    }
LABEL_61:
    v4 = v41;
    ++v9;
    v10 += 24;
    v43 = v9;
  }
  while ( v9 < *((_DWORD *)a2 + 12) );
  if ( v24 )
  {
    if ( v6 && ((*v25 & 0x100) != 0 || (*v25 & 0x10) == 0) )
LABEL_102:
      CPTPEngine::HandleTap(this, a2, v41);
    else
      CPTPEngine::HandleMove(this, a2, v23);
  }
  else if ( v6 )
  {
    goto LABEL_102;
  }
}

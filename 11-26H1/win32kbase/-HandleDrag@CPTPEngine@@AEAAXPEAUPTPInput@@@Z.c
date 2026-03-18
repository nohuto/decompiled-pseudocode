/*
 * XREFs of ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140105A98
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1401055B8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x140105ED4 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x140106158 (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1401062D4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::HandleDrag(CPTPEngine *this, struct PTPInput *a2)
{
  struct tagPOINTER_INFO *v2; // r13
  char *v3; // rsi
  int v4; // r12d
  int v5; // edi
  struct CContactState *v6; // rbp
  unsigned int v7; // r15d
  int v10; // eax
  _DWORD *v11; // r11
  int v12; // r8d
  int v13; // eax
  int v14; // r9d
  LONG v15; // eax
  LONG v16; // edx
  bool v17; // sf
  LONG v18; // ecx
  int v19; // eax
  int v20; // r10d
  int v21; // r9d
  int v22; // esi
  int v23; // eax
  int v24; // ecx
  LONG v25; // r8d
  int v26; // esi
  int v27; // edi
  tagPOINT v28; // rax
  int v29; // eax
  int v30; // ecx
  tagPOINT v31; // [rsp+68h] [rbp+10h] BYREF
  struct tagPOINT v32; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = (char *)a2 + 56;
  v4 = 0;
  v32 = 0LL;
  v5 = 0;
  v31 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      v10 = *((_DWORD *)v3 + 3);
      v11 = (_DWORD *)((char *)this + 328 * (unsigned int)(*((_DWORD *)v3 + 1) % *((_DWORD *)this + 4)));
      if ( (v10 & 0x40000) == 0 && v10 )
      {
        v12 = v11[204];
        v13 = v12 << 29;
        if ( __CFSHR__(v12, 17) )
        {
          v5 = 1;
        }
        else
        {
          v14 = v11[204] << 29;
          if ( (v11[204] & 4) != 0 )
          {
            v15 = HIDWORD(*((_QWORD *)v3 + 5)) - v11[215];
            v16 = *((_QWORD *)v3 + 5) - v11[214];
            v17 = (int)(v11[215] - HIDWORD(*((_QWORD *)v3 + 5))) < 0;
            v18 = v11[215] - HIDWORD(*((_QWORD *)v3 + 5));
            v32.y = v15;
            v32.x = v16;
            if ( v17 )
              v18 = v15;
            v19 = -v16;
            if ( v16 > 0 )
              v19 = v16;
            if ( v18 + v19 >= v4 )
            {
              v6 = (struct CContactState *)(v11 + 204);
              v31 = v32;
              v4 = v18 + v19;
              v2 = (struct tagPOINTER_INFO *)v3;
            }
            if ( (v12 & 0x8000) == 0 )
              v5 = 1;
            v13 = v14;
          }
          else if ( (v12 & 0x4000) != 0 )
          {
            v5 = 1;
          }
        }
        if ( *((_DWORD *)this + 697)
          && *((_DWORD *)this + 706) == 5
          && *((_DWORD *)this + 698) == 1
          && (v12 & 0x100) != 0
          && v13 >= 0
          && (v12 & 0x4000) == 0
          && (v12 & 0x8000) == 0
          && !__CFSHR__(v12, 17) )
        {
          CPTPEngine::SendMouseUpIfPending((struct tagPOINT *)this, (unsigned int *)this + 697);
        }
      }
      v3 += 96;
      ++v7;
    }
    while ( v7 < *((_DWORD *)a2 + 12) );
    if ( v6 )
    {
      v20 = *((_DWORD *)this + 697);
      if ( v20 )
      {
        if ( *((_DWORD *)this + 706) == 1 )
        {
          v30 = *((_DWORD *)this + 768);
          if ( (v30 & 0x40000) == 0 && (v30 & 0x20000) != 0 )
          {
            *((_QWORD *)this + 369) = *(_QWORD *)a2;
            *((_DWORD *)this + 768) = v30 | 0x40000;
          }
        }
      }
      v21 = *((_DWORD *)this + 768);
      if ( (v21 & 0x20000) == 0
        || *(_QWORD *)a2 - *((_QWORD *)this + 369) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 785)
                                                    / 0x3E8 )
      {
        v22 = 0;
        if ( *((_DWORD *)this + 706) != 5 && (*((_DWORD *)this + 698) == 2 || (v21 & 2) != 0 || (v21 & 4) != 0) )
        {
          *((_DWORD *)this + 706) = 5;
          if ( v20 && !v5 )
            *((_DWORD *)v6 + 35) = 0;
          v22 = 1;
          CBasePTPEngine::SendLastActionTelemetry((__int64)this, 8);
        }
        if ( *((_DWORD *)this + 706) == 4
          || *((_DWORD *)this + 698) != 1
          || (v29 = *((_DWORD *)this + 768), (v29 & 2) != 0)
          || (v29 & 4) != 0 )
        {
          if ( !v22 )
            goto LABEL_29;
        }
        else
        {
          *((_DWORD *)this + 706) = 4;
          *((_DWORD *)v6 + 35) = 0;
          CBasePTPEngine::SendLastActionTelemetry((__int64)this, 7);
        }
        *((_DWORD *)this + 768) &= ~0x1000000u;
        *(_QWORD *)((char *)this + 2860) = 0LL;
        *(_QWORD *)((char *)this + 2868) = 0LL;
LABEL_29:
        v23 = *((_DWORD *)this + 768);
        if ( (v23 & 0x20000000) != 0
          && (*((_DWORD *)this + 698) == 1 && (v23 & 2) == 0 && (v23 & 4) == 0 || *((_DWORD *)this + 697) && !v5) )
        {
          CPTPEngine::ApplyElasticDragModeDeltas(this, v6, v2, &v31);
        }
        v24 = *((_DWORD *)this + 776);
        v25 = *((_DWORD *)this + 716) + v31.y;
        v31.x += *((_DWORD *)this + 715);
        v31.y = v25;
        v32.x = 100 * v31.x / v24;
        v26 = v32.x - *((_DWORD *)this + 717);
        v32.y = 100 * v25 / v24;
        v27 = v32.y - *((_DWORD *)this + 718);
        v28 = v31;
        *(struct tagPOINT *)((char *)this + 2868) = v32;
        v32 = (struct tagPOINT)__PAIR64__(v27, v26);
        *(tagPOINT *)((char *)this + 2860) = v28;
        if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(this, a2, (struct tagPOINT)__PAIR64__(v27, v26), v6)
          && (v26 || v27) )
        {
          *((_DWORD *)this + 768) |= 0x1000000u;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, 0LL, v32);
        }
      }
    }
  }
}

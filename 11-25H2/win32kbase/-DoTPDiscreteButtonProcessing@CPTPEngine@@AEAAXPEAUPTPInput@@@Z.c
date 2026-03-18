/*
 * XREFs of ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CAEBC
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400C9F70 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400C911C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1400C93B0 (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1400C9490 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 */

void __fastcall CPTPEngine::DoTPDiscreteButtonProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  int v2; // ebp
  int v3; // esi
  int v4; // r9d
  int v5; // r10d
  unsigned int v8; // ecx
  int v9; // r8d
  int v10; // ebp
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  int v20; // eax

  v2 = *((_DWORD *)this + 705);
  v3 = 0;
  v4 = 0;
  v5 = v2 & 0x20;
  v8 = *((_DWORD *)this + 770);
  v9 = v5 != 0;
  v10 = v2 & 0x40;
  v11 = v10 != 0;
  if ( (unsigned __int8)(v8 & 2) >> 1 != v9 )
  {
    v4 = 1;
    v8 = v8 & 0xFFFFFFFD | (2 * v9);
    *((_DWORD *)this + 770) = v8;
  }
  if ( (unsigned __int8)(v8 & 4) >> 2 != v11 )
  {
    v3 = 1;
    v8 = v8 & 0xFFFFFFFB | (4 * v11);
    *((_DWORD *)this + 770) = v8;
  }
  if ( v4 )
  {
    if ( !v5 )
    {
      if ( __CFSHR__(v8, 17) )
      {
        if ( (v8 & 0x10) != 0 && (v8 & 0x40) != 0 && (v8 & 0x100) == 0 )
        {
          *((_QWORD *)this + 381) = *(_QWORD *)a2;
          CPTPEngine::SendMouseUpAtPoint(this, 16, *(struct tagPOINT *)((char *)a2 + 28));
        }
        *((_DWORD *)this + 770) &= ~0x40u;
      }
      else
      {
        if ( (v8 & 8) != 0 && (v8 & 0x20) != 0 && (v8 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 381) = *(_QWORD *)a2;
          CPTPEngine::SendMouseUpAtPoint(this, 4, *(struct tagPOINT *)((char *)a2 + 28));
        }
        *((_DWORD *)this + 770) &= ~0x20u;
      }
      goto LABEL_6;
    }
    v12 = *((_DWORD *)this + 697);
    if ( __CFSHR__(v8, 17) )
    {
      v13 = v8 | 0x40;
      *((_DWORD *)this + 770) = v13;
      if ( v12 == 16 )
        *((_DWORD *)this + 697) = 0;
      if ( (v13 & 0x10) != 0 )
        goto LABEL_6;
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 6);
      v14 = 8;
    }
    else
    {
      v15 = v8 | 0x20;
      *((_DWORD *)this + 770) = v15;
      if ( v12 == 4 )
        *((_DWORD *)this + 697) = 0;
      if ( (v15 & 8) != 0 )
        goto LABEL_6;
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 5);
      v14 = 2;
    }
    CPTPEngine::SendMouseDownAtPoint(this, v14, *(struct tagPOINT *)((char *)a2 + 28), 0);
  }
LABEL_6:
  if ( !v3 )
    return;
  v16 = *((_DWORD *)this + 770);
  if ( !v10 )
  {
    if ( __CFSHR__(*((_DWORD *)this + 770), 17) )
    {
      if ( (v16 & 8) != 0 && (v16 & 0x20) != 0 && (v16 & 0x80u) == 0 )
      {
        *((_QWORD *)this + 381) = *(_QWORD *)a2;
        CPTPEngine::SendMouseUpAtPoint(this, 4, *(struct tagPOINT *)((char *)a2 + 28));
      }
      *((_DWORD *)this + 770) &= ~0x20u;
    }
    else
    {
      if ( (v16 & 0x10) != 0 && (v16 & 0x40) != 0 && (v16 & 0x100) == 0 )
      {
        *((_QWORD *)this + 381) = *(_QWORD *)a2;
        CPTPEngine::SendMouseUpAtPoint(this, 16, *(struct tagPOINT *)((char *)a2 + 28));
      }
      *((_DWORD *)this + 770) &= ~0x40u;
    }
    return;
  }
  v17 = *((_DWORD *)this + 697);
  if ( __CFSHR__(*((_DWORD *)this + 770), 17) )
  {
    v18 = v16 | 0x20;
    *((_DWORD *)this + 770) = v18;
    if ( v17 == 4 )
      *((_DWORD *)this + 697) = 0;
    if ( (v18 & 8) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 5);
      v19 = 2;
LABEL_51:
      CPTPEngine::SendMouseDownAtPoint(this, v19, *(struct tagPOINT *)((char *)a2 + 28), 0);
    }
  }
  else
  {
    v20 = v16 | 0x40;
    *((_DWORD *)this + 770) = v20;
    if ( v17 == 16 )
      *((_DWORD *)this + 697) = 0;
    if ( (v20 & 0x10) == 0 )
    {
      CBasePTPEngine::SendLastActionTelemetry((__int64)this, 6);
      v19 = 8;
      goto LABEL_51;
    }
  }
}

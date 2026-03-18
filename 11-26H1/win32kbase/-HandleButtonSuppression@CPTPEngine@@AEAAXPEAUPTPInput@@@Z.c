/*
 * XREFs of ?HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x14010325C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1401058D4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140105958 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x140135B6C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 */

void __fastcall CPTPEngine::HandleButtonSuppression(CPTPEngine *this, struct PTPInput *a2)
{
  _DWORD *v2; // r14
  int v3; // eax
  unsigned int *v4; // r15
  unsigned int v6; // ecx
  int v8; // ecx
  bool v9; // si
  int v10; // eax
  int v11; // ecx
  bool v12; // si
  int v13; // eax
  int v14; // ecx
  bool v15; // si
  int v16; // eax
  char v17; // cl
  int v18; // eax
  char v19; // al
  int v20; // ecx
  char v21; // cl
  int v22; // eax

  v2 = (_DWORD *)((char *)this + 2820);
  v3 = *((_DWORD *)a2 + 17) & 0x70;
  v4 = (unsigned int *)((char *)this + 3072);
  *((_DWORD *)this + 705) = v3;
  v6 = *((_DWORD *)this + 768);
  if ( (v6 & 1) == 0 )
  {
    v8 = -__CFSHR__(v6, 10);
    v9 = v8 != 0;
    v10 = v3 & 0x10;
    if ( v8 || !v10 )
    {
      if ( !v8 )
      {
        if ( v10 )
          goto LABEL_29;
LABEL_5:
        v2 = (_DWORD *)((char *)this + 2820);
        v6 = (v9 << 9) ^ *((_DWORD *)this + 768) & 0xFFFFFDFF;
        *v4 = v6;
        goto LABEL_6;
      }
      if ( !v10 )
      {
        v9 = 0;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 698) || *((_DWORD *)a2 + 9) || (v17 = 0, *((_DWORD *)this + 26) == 2) )
        v17 = 1;
      v18 = *((_DWORD *)this + 706);
      if ( v18 != 3
        && v18 != 6
        && !*((_DWORD *)this + 697)
        && (!*((_DWORD *)this + 762) || *((_DWORD *)a2 + 9))
        && !*((_DWORD *)a2 + 10)
        && !*((_DWORD *)this + 6)
        && (!v17 || (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x40u, 0)) )
      {
        v9 = 0;
        v4 = (unsigned int *)((char *)this + 3072);
LABEL_29:
        CPTPEngine::CancelMouseUpTimer(this, 1);
        if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
        {
          CBasePTPEngine::SendInertiaOutput(this, 3LL);
          *((_DWORD *)a2 + 10) = 0;
        }
        CPTPEngine::TPAAPSetCurtainState(this, 0);
        goto LABEL_5;
      }
      v9 = 1;
      v4 = (unsigned int *)((char *)this + 3072);
    }
    *v2 &= ~0x10u;
    goto LABEL_5;
  }
LABEL_6:
  if ( (v6 & 2) != 0 )
    goto LABEL_11;
  v11 = -__CFSHR__(v6, 11);
  v12 = v11 != 0;
  v13 = *v2 & 0x20;
  if ( !v11 && v13 )
  {
    if ( !*((_DWORD *)this + 698) || *((_DWORD *)a2 + 9) || (v21 = 0, *((_DWORD *)this + 26) == 2) )
      v21 = 1;
    v22 = *((_DWORD *)this + 706);
    if ( v22 != 3
      && v22 != 6
      && !*((_DWORD *)a2 + 10)
      && !*((_DWORD *)this + 6)
      && (!v21 || (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x40u, 0)) )
    {
      v12 = 0;
      goto LABEL_56;
    }
    v12 = 1;
    v2 = (_DWORD *)((char *)this + 2820);
LABEL_64:
    *v2 &= ~0x20u;
    goto LABEL_10;
  }
  if ( v11 )
  {
    if ( !v13 )
    {
      v12 = 0;
      goto LABEL_10;
    }
    goto LABEL_64;
  }
  if ( v13 )
  {
LABEL_56:
    CPTPEngine::CancelMouseUpTimer(this, 1);
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      *((_DWORD *)a2 + 10) = 0;
    }
  }
LABEL_10:
  v2 = (_DWORD *)((char *)this + 2820);
  v6 = (v12 << 10) ^ *((_DWORD *)this + 768) & 0xFFFFFBFF;
  *((_DWORD *)this + 768) = v6;
LABEL_11:
  if ( (v6 & 4) != 0 )
    return;
  v14 = -__CFSHR__(v6, 12);
  v15 = v14 != 0;
  v16 = *v2 & 0x40;
  if ( !v14 && v16 )
  {
    if ( !*((_DWORD *)this + 698) || *((_DWORD *)a2 + 9) || (v19 = 0, *((_DWORD *)this + 26) == 2) )
      v19 = 1;
    v20 = *((_DWORD *)this + 706);
    if ( v20 != 3
      && v20 != 6
      && !*((_DWORD *)a2 + 10)
      && !*((_DWORD *)this + 6)
      && (!v19 || (unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x40u, 0)) )
    {
      v15 = 0;
      goto LABEL_43;
    }
    v15 = 1;
    v2 = (_DWORD *)((char *)this + 2820);
LABEL_62:
    *v2 &= ~0x40u;
    goto LABEL_15;
  }
  if ( v14 )
  {
    if ( !v16 )
    {
      v15 = 0;
      goto LABEL_15;
    }
    goto LABEL_62;
  }
  if ( v16 )
  {
LABEL_43:
    CPTPEngine::CancelMouseUpTimer(this, 1);
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    {
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
      *((_DWORD *)a2 + 10) = 0;
    }
  }
LABEL_15:
  *((_DWORD *)this + 768) = (v15 << 11) ^ *((_DWORD *)this + 768) & 0xFFFFF7FF;
}

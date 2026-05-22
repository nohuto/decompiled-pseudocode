/*
 * XREFs of ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180024D74
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024590 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BFF00 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2128 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C49D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x18007C0A0 (-ResetState@MPCButtonHoldHelper@@QEAAXXZ.c)
 */

void __fastcall MPCButtonHoldHelper::UpdateState(MPCButtonHoldHelper *this, char a2, __int64 a3)
{
  char v3; // al

  v3 = *((_BYTE *)this + 8);
  *(_DWORD *)((char *)this + 10) = 0;
  *((_QWORD *)this + 4) = a3;
  if ( a2 )
  {
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 9) && (unsigned __int64)(a3 - *((_QWORD *)this + 2)) > *((_QWORD *)this + 3) )
      {
        *((_BYTE *)this + 13) = 1;
        *((_BYTE *)this + 9) = 1;
      }
    }
    else
    {
      *((_QWORD *)this + 2) = a3;
      *((_BYTE *)this + 10) = 1;
    }
  }
  else
  {
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 9) )
        *((_BYTE *)this + 11) = 1;
      *((_BYTE *)this + 12) = 1;
    }
    MPCButtonHoldHelper::ResetState(this);
  }
  *((_BYTE *)this + 8) = a2;
}

/*
 * XREFs of ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EED58
 * Callers:
 *     _lambda_b1e571efbfc61821245745bd1df533a0_::operator() @ 0x1400C9DEC (_lambda_b1e571efbfc61821245745bd1df533a0_--operator().c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1400EEC10 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?GetSensitivityLevel@CPTPEngine@@AEAA?AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ @ 0x1400EEF10 (-GetSensitivityLevel@CPTPEngine@@AEAA-AW4TOUCHPAD_SENSITIVITY_LEVEL@@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowNow(CPTPEngine *this, struct PTPInput *a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // r14
  int SensitivityLevel; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r8
  int v11; // r9d
  __int64 v12; // r10
  int v13; // r11d
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // r9d
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _OWORD *v19; // rbx

  v2 = *(_QWORD *)a2;
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  SensitivityLevel = CPTPEngine::GetSensitivityLevel(this);
  if ( !SensitivityLevel || SensitivityLevel == 4 && v11 )
  {
    v14 = 0;
    LOBYTE(v4) = SensitivityLevel == 4;
  }
  else
  {
    v14 = v10 & 2;
    if ( v14 && (*(_DWORD *)(v9 + 3080) & 0x8000) != 0 )
    {
      v4 = 1;
    }
    else
    {
      v14 = v13;
      v15 = v13 & 0x6C;
      if ( (v13 & 0x6C) != 0 )
      {
        if ( v15 == 32 )
        {
          v16 = *(_DWORD *)(v12 + 4LL * SensitivityLevel + 3320);
        }
        else
        {
          v16 = *(_DWORD *)(v12 + 4LL * SensitivityLevel + 3300);
          if ( v15 == 64 )
            v16 = *(_DWORD *)(v12 + 4LL * SensitivityLevel + 3340);
        }
        v5 = *(_QWORD *)(v8 + 8);
        v6 = *(_QWORD *)(v8 + 16);
        if ( v5 > 0 )
        {
          if ( v6 <= v5 )
          {
            v16 = *(_DWORD *)(v12 + 3380);
            v17 = v2 - v5;
          }
          else
          {
            v17 = v2 - v6;
          }
          v14 = v13;
          if ( (__int64)((unsigned __int64)(1000 * v17) / *(_QWORD *)(v12 + 96)) < v16 )
          {
            v4 = 1;
            v14 = v13 & 0x6C;
          }
        }
      }
    }
  }
  v18 = *(_QWORD *)(v12 + 96);
  v19 = (_OWORD *)(v12 + 772);
  *(_DWORD *)(v12 + 772) = 1;
  *(_DWORD *)(v12 + 776) = 0;
  *(_DWORD *)(v12 + 780) = 1000 * v5 / v18;
  *(_DWORD *)(v12 + 784) = 1000 * v6 / v18;
  *(_DWORD *)(v12 + 788) = 1000 * v2 / v18;
  *(_DWORD *)(v12 + 792) = v4;
  *(_DWORD *)(v12 + 796) = v14;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 8) + 8LL))(*(_QWORD *)(v12 + 8), v12 + 772);
  *v19 = 0LL;
  LOBYTE(v3) = v4 == 0;
  v19[1] = 0LL;
  return v3;
}

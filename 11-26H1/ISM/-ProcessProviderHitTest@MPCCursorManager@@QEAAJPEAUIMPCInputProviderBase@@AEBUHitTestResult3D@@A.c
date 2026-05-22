/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x180070AC4
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18000EE4C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x180070C78 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x180070D14 (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x180099588 (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::_lambda_2c96748461f4900de3746577f815c647_ @ 0x1800BEBB8 (_lambda_2c96748461f4900de3746577f815c647_--_lambda_2c96748461f4900de3746577f815c647_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  int v7; // r10d
  _OWORD *v8; // rax
  const char *v9; // r9
  char v10; // cl
  bool v12; // [rsp+40h] [rbp-29h] BYREF
  char v13[7]; // [rsp+41h] [rbp-28h] BYREF
  _OWORD v14[3]; // [rsp+48h] [rbp-21h] BYREF
  char v15; // [rsp+78h] [rbp+Fh]
  char v16; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  bool v18; // [rsp+D0h] [rbp+67h] BYREF

  if ( *((_BYTE *)this + 64) )
  {
    v13[0] = 0;
    v18 = MPCCursorManager::Is2DCursorVisible(this);
    v12 = MPCCursorManager::Is3DCursorVisible(this);
    v8 = (_OWORD *)lambda_2c96748461f4900de3746577f815c647_::_lambda_2c96748461f4900de3746577f815c647_(
                     (unsigned int)&v16,
                     (_DWORD)this,
                     v7,
                     (unsigned int)&v18,
                     (__int64)&v12,
                     (__int64)v13,
                     (__int64)a3);
    v14[0] = *v8;
    v14[1] = v8[1];
    v14[2] = v8[2];
    v15 = 1;
    if ( *((_BYTE *)this + 56) && *((_BYTE *)this + 65) )
    {
      if ( !a2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x79,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v9);
      if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 256LL))(a2)
        || ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) == 0 )
      {
        v18 = 0;
        v12 = 1;
        v15 = 0;
        lambda_2c96748461f4900de3746577f815c647_::operator()(v14);
        return 0LL;
      }
      if ( *(_DWORD *)this >= *((_DWORD *)this + 2) || (v10 = 1, *((_DWORD *)this + 1) >= *((_DWORD *)this + 3)) )
        v10 = 0;
      if ( *((_DWORD *)a3 + 95) >= *((_DWORD *)a3 + 97) || *((_DWORD *)a3 + 96) >= *((_DWORD *)a3 + 98) )
      {
        v13[0] = 0;
        v18 = 0;
        v12 = 1;
      }
      else
      {
        v13[0] = 1;
        if ( !v10 || *((_DWORD *)this + 8) != *((_DWORD *)a3 + 94) )
        {
          v18 = 1;
          v12 = 0;
        }
      }
    }
    v15 = 0;
    lambda_2c96748461f4900de3746577f815c647_::operator()(v14);
    return 0LL;
  }
  *a4 = 0;
  return 0LL;
}

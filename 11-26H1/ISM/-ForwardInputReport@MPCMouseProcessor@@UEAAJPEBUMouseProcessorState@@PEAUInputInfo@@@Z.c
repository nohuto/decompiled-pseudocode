/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C6280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x18009AB6C (pow.c)
 *     sqrt @ 0x18009AB90 (sqrt.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801C5F40 (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C648C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7C2C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  int *v3; // r10
  int v7; // ecx
  int v8; // eax
  const struct MouseProcessorState *v9; // rdx
  struct InputInfo *v10; // r8
  _DWORD *v11; // r14
  _DWORD *v12; // r15
  _DWORD *v13; // rbp
  double v14; // xmm0_8
  double v15; // xmm7_8
  double v16; // xmm0_8
  int v17; // ebx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v3 = (int *)((char *)a2 + 16);
  if ( (*((_BYTE *)a3 + 90) & 1) != 0
    || *((_BYTE *)this + 5384)
    && MPCMouseProcessor::ButtonToInteractionState(
         (MPCMouseProcessor *)((char *)this - 8),
         *v3,
         16,
         (enum MPCHolographicInputManager::InteractionState *)&v21) )
  {
    *((_BYTE *)this + 5384) = 1;
    *((_DWORD *)a3 + 29) = 1;
    *((_DWORD *)this + 1322) = *v3;
  }
  else
  {
    *((_BYTE *)this + 5384) = 0;
    *((_DWORD *)this + 1323) = *v3;
    v7 = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 1318) = v7;
    v8 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 1347) += v7;
    *((_DWORD *)this + 1348) += v8;
    ++*((_DWORD *)this + 1349);
    *((_DWORD *)this + 1319) = v8;
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
      && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418) )
    {
      MPCMouseProcessor::ProcessPoints((MPCMouseProcessor *)((char *)this - 8), v9, v10);
      v11 = (_DWORD *)((char *)this + 5264);
      v12 = (_DWORD *)((char *)this + 5268);
      if ( !*((_BYTE *)this + 5261) )
      {
        *v11 = *(_DWORD *)a2;
        *v12 = *((_DWORD *)a2 + 1);
        *((_BYTE *)this + 5261) = 1;
      }
      v13 = (_DWORD *)((char *)this + 5280);
      if ( *((_QWORD *)a3 + 2) - *((_QWORD *)this + 667) > *((_QWORD *)this + 679) )
        *v13 = 0;
      v14 = (double)*((int *)this + 1319);
      *((_QWORD *)this + 667) = *((_QWORD *)a3 + 2);
      v15 = pow(v14, 2.0);
      v16 = pow((double)*((int *)this + 1318), 2.0);
      *v13 += (int)sqrt(v16 + v15);
      v17 = MPCMouseProcessor::ForwardInputReportInternal((MPCMouseProcessor *)((char *)this - 8), a2, a3);
      if ( v17 < 0 )
      {
        v18 = 208LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v17);
        return (unsigned int)v17;
      }
      *v11 = *(_DWORD *)a2;
      *v12 = *((_DWORD *)a2 + 1);
    }
    else if ( *((_DWORD *)a3 + 29) )
    {
      *((_DWORD *)a3 + 29) = 1;
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 463) + 24LL))(
              *((_QWORD *)this + 463),
              a2,
              a3);
      if ( v17 < 0 )
      {
        v18 = 184LL;
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}

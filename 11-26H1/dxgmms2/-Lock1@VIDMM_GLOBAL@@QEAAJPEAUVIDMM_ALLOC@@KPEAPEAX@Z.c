/*
 * XREFs of ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140127978
 * Callers:
 *     VidMmBeginCPUAccess @ 0x140041790 (VidMmBeginCPUAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ValidateCommonLockParameters @ 0x140036320 (ValidateCommonLockParameters.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043A8C (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z @ 0x1400E7D78 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAXPEA_N@Z.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E85D8 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock1(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // rcx
  bool *v19; // [rsp+28h] [rbp-50h]
  bool v20; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0LL;
  v6 = a3;
  v9 = 0;
  v10 = **a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v6;
    WdLogGlobalForLineNumber = 22880;
  }
  *a4 = 0LL;
  result = ValidateCommonLockParameters((__int64)this, a2);
  if ( (int)result >= 0 )
  {
    v14 = (unsigned int)v6 & 0xFFFFFFA7;
    if ( (v14 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(v10 + 208) )
      {
        WdLogSingleEntry1(1LL, v10);
        WdLogGlobalForLineNumber = 22911;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = (VIDMM_GLOBAL *)**(unsigned int **)(v10 + 368);
      if ( ((unsigned __int8)v13 & 8) != 0 )
      {
        WdLogSingleEntry1(1LL, v10);
        WdLogGlobalForLineNumber = 22903;
LABEL_7:
        DxgkLogInternalTriageEvent(v15, 0x40000LL);
        return 3221225485LL;
      }
    }
    if ( (v14 & 0xFFFFF858) != 0 )
    {
      WdLogSingleEntry1(1LL, v14);
      WdLogGlobalForLineNumber = 22920;
      goto LABEL_7;
    }
    if ( (v14 & 0x82) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 24) & 1) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 22943;
        goto LABEL_7;
      }
      if ( !*((_BYTE *)this + 7042) )
      {
        v13 = (VIDMM_GLOBAL *)**(unsigned int **)(v10 + 368);
        if ( ((unsigned __int8)v13 & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 22953;
          goto LABEL_7;
        }
      }
    }
    if ( (v14 & 0x81) != 0 )
    {
      if ( (v14 & 0x100) != 0 )
      {
        WdLogSingleEntry2(4LL, a2, -1071775484LL);
        result = 3223191812LL;
        WdLogGlobalForLineNumber = 22989;
        return result;
      }
      VIDMM_GLOBAL::WaitOnAllocForceSync(v13, (struct VIDMM_ALLOC *)a2);
      v9 = 4;
    }
    else if ( (v14 & 2) == 0 )
    {
      return 3223191810LL;
    }
    v20 = 0;
    v16 = VIDMM_GLOBAL::LockCommon(this, a2, 0, v14 & 0x400, a4, &v20);
    if ( v16 >= 0 && (byte_14008A201 & 1) != 0 )
    {
      v18 = (__int64)a2[1];
      if ( v18 )
        v4 = *(_QWORD *)(v18 + 24);
      LODWORD(v19) = v14;
      McTemplateK0ppqq_EtwWriteTransfer(v18, &EventLock, v17, v4, a2, v19, v9);
    }
    return (unsigned int)v16;
  }
  return result;
}

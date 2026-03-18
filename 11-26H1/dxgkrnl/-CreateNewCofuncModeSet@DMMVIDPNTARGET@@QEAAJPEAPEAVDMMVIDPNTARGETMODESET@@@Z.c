/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002D558
 * Callers:
 *     ?CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1403C03D4 (-CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x14002CD94 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET **a2)
{
  char *v4; // r14
  __int64 v5; // r8
  DMMVIDPNTARGETMODESET *Pool2; // rax
  DMMVIDPNTARGETMODESET *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // ebx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 853;
  }
  v4 = (char *)this + 112;
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v5);
    result = 3223192400LL;
    WdLogGlobalForLineNumber = 862;
  }
  else
  {
    Pool2 = (DMMVIDPNTARGETMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( Pool2 && (v7 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(Pool2, this), (v8 = (__int64)v7) != 0) )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v7 + 3))((__int64)v7 + 24) )
      {
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, v8);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v4 + 96LL));
        v9 = *(_QWORD *)v4;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v4;
        if ( *(_DWORD *)(v9 + 96) != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 899;
        }
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v8, *((unsigned int *)this + 6), *(int *)(v8 + 40));
        v11 = *(_DWORD *)(v8 + 40);
        WdLogGlobalForLineNumber = 883;
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
        return v11;
      }
    }
    else
    {
      WdLogSingleEntry1(6LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 875;
    }
  }
  return result;
}

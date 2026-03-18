/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002DC48
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1403D3150 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x14002CF98 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  char *v4; // r14
  __int64 v5; // r8
  DMMVIDPNSOURCEMODESET *Pool2; // rax
  DMMVIDPNSOURCEMODESET *v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 837;
  }
  v4 = (char *)this + 120;
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v5);
    result = 3223192400LL;
    WdLogGlobalForLineNumber = 846;
  }
  else
  {
    Pool2 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( Pool2 && (v7 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(Pool2, this), (v8 = (__int64)v7) != 0) )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v7 + 3))((__int64)v7 + 24) )
      {
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)this + 15, v8);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v4 + 96LL));
        v10 = *(_QWORD *)v4;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v4;
        if ( *(_DWORD *)(v10 + 96) != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 883;
        }
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v8, *((unsigned int *)this + 6), *(int *)(v8 + 40));
        v11 = *(_DWORD *)(v8 + 40);
        WdLogGlobalForLineNumber = 867;
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
        return v11;
      }
    }
    else
    {
      WdLogSingleEntry1(6LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 859;
    }
  }
  return result;
}

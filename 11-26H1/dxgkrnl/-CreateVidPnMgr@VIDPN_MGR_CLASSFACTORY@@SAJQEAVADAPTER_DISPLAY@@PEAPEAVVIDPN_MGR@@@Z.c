/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x14018E508
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  unsigned int v2; // ebx
  VIDPN_MGR *v5; // rax
  VIDPN_MGR *v6; // rax
  int *v7; // rdi
  __int64 result; // rax
  VIDPN_MGR *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 56;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 57;
  }
  v5 = (VIDPN_MGR *)operator new(0x238uLL, 0x4E506456u, 64LL);
  if ( v5 && (v6 = VIDPN_MGR::VIDPN_MGR(v5, a1), v9 = v6, (v7 = (int *)v6) != 0LL) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v6 + 11))((__int64)v6 + 88) )
    {
      v9 = 0LL;
      *a2 = (struct VIDPN_MGR *)v7;
    }
    else
    {
      WdLogSingleEntry3(7LL, v7, a1, v7[24]);
      v2 = v7[24];
      WdLogGlobalForLineNumber = 80;
    }
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v9);
    return v2;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 72;
  }
  return result;
}

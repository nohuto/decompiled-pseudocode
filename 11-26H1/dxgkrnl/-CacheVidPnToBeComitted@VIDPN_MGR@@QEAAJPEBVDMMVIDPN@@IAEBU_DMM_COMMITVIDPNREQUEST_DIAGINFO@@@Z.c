/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14002E274
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z @ 0x14004FE70 (-Enqueue@-$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  __int64 v4; // rbp
  DMMVIDPN *Pool2; // rax
  DMMVIDPN *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // xmm0_8
  __int64 result; // rax
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a3;
  v16 = 0LL;
  Pool2 = (DMMVIDPN *)ExAllocatePool2(256LL, 320LL, 1313891414LL);
  if ( Pool2 && (v9 = DMMVIDPN::DMMVIDPN(Pool2, a2), (v10 = (__int64)v9) != 0) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 9))((__int64)v9 + 72) )
    {
      v16 = v10;
      v17[0] = 0LL;
      v12 = ExAllocatePool2(256LL, 72LL, 1313891414LL);
      if ( v12 )
      {
        v13 = *((_DWORD *)a4 + 2);
        v14 = *(_QWORD *)a4;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_DWORD *)(v12 + 40) = 1833173016;
        *(_QWORD *)v12 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
        *(_QWORD *)(v12 + 24) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
        *(_QWORD *)(v12 + 32) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
        *(_QWORD *)(v12 + 48) = v10;
        *(_QWORD *)(v12 + 60) = v14;
        *(_DWORD *)(v12 + 68) = v13;
        *(_DWORD *)(v12 + 56) = v4;
        Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::Enqueue((char *)this + 192, v12);
        return 0LL;
      }
      WdLogSingleEntry5(6LL, 72LL, a2, (int)(*(_DWORD *)a4 << 28) >> 28, v4, (int)(*(_DWORD *)a4 << 24) >> 28);
      WdLogGlobalForLineNumber = 218;
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v17);
      v11 = -1073741801;
    }
    else
    {
      WdLogSingleEntry3(2LL, v10, a2, *(int *)(v10 + 80));
      v11 = *(_DWORD *)(v10 + 80);
      WdLogGlobalForLineNumber = 200;
    }
    auto_rc<DMMVIDPN>::reset(&v16, 0LL);
    return v11;
  }
  else
  {
    WdLogSingleEntry2(6LL, 320LL, a2);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 190;
  }
  return result;
}

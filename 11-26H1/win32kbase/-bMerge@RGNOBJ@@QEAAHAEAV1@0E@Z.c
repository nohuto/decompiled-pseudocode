/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140021F20
 * Callers:
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v6 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v7 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    v8 = v6 & -(__int64)(v4 != 0);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 144LL))(
           v8,
           (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL),
           (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL));
    if ( !(*(unsigned int (__fastcall **)(__int64))(v7 + 176))(v8) )
      GrepCaptureLiveMemoryDump(400LL, 64LL, v8, 0LL, 0LL, 0);
    return v9;
  }
  else
  {
    v14[1] = this;
    v11 = v6 & -(__int64)(v4 != 0);
    v13 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    v12 = (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL);
    v14[0] = &v11;
    return (unsigned __int8)RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___(
                              (unsigned int)&v11,
                              (unsigned int)&v13,
                              (unsigned int)&v12,
                              a4,
                              (__int64)v14);
  }
}

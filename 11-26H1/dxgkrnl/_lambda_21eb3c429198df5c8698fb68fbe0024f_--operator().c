/*
 * XREFs of _lambda_21eb3c429198df5c8698fb68fbe0024f_::operator() @ 0x1402CC48C
 * Callers:
 *     _DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14004C03C (_DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402CB1B0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

void __fastcall lambda_21eb3c429198df5c8698fb68fbe0024f_::operator()(__int64 **a1, __int64 a2)
{
  ReferenceCounted *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // [rsp+20h] [rbp-18h] BYREF
  ReferenceCounted *v7; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (ReferenceCounted *)*a1[1];
  v3 = **a1;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 1896LL);
  v5 = WdLogNewEntry5_WdTrace(v3, a2);
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = v4;
  WdLogGlobalForLineNumber = 2435;
  if ( v4 && v2 )
  {
    if ( !*(_QWORD *)(v4 + 3160) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2453;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 3160) + 112LL) )
    {
      v6 = retaddr;
      v7 = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v6);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v6);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v6);
      v7 = v2;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v6);
      ReferenceCounted::Release(v2);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v6);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2463;
    }
  }
}

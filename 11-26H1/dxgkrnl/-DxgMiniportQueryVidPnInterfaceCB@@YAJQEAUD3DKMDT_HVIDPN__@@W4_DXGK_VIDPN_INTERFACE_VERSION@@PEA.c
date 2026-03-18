/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1403A0610
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  __int64 v4; // rsi
  VIDPN_MGR *v6; // rbx
  const struct _DXGK_VIDPN_INTERFACE *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGADAPTER *ContainingAdapter; // rax
  int v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  char v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v4 = a2;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 7056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 7056);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a1 && *((_DWORD *)a1 + 16) == 1833172997 )
    {
      v6 = (VIDPN_MGR *)*((_QWORD *)a1 + 6);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, (__int64)v6);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v6);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ContainingAdapter + 27) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, ContainingAdapter, 0LL, 0LL);
          WdLogGlobalForLineNumber = 4609;
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v17 + 40));
      }
      if ( (_DWORD)v4 == 1 )
      {
        v7 = (const struct _DXGK_VIDPN_INTERFACE *)*((_QWORD *)v6 + 51);
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          *a3 = 0LL;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1543;
          v8 = -1073741637;
          goto LABEL_12;
        }
        v7 = (const struct _DXGK_VIDPN_INTERFACE *)*((_QWORD *)v6 + 52);
      }
      v8 = 0;
      *a3 = v7;
LABEL_12:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
      if ( v16 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
      }
      return v8;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4589;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3223192323LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v4, a1);
    WdLogGlobalForLineNumber = 4574;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}

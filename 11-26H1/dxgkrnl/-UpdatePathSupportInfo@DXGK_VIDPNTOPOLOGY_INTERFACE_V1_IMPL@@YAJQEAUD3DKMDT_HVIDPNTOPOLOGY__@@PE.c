/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140387630
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002BF30 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002C444 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14004FBAC (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x14005075C (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x140387B08 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x140387C28 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r12
  _QWORD *v9; // rax
  int v10; // eax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v11; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h]
  char v22; // [rsp+30h] [rbp-10h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 7038);
  if ( a2 )
  {
    v7 = *(_DWORD *)a2;
    v8 = *((unsigned int *)a2 + 1);
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v9[3] = v7;
    v9[4] = v8;
    v9[5] = this;
    v9[6] = a2;
    WdLogGlobalForLineNumber = 2722;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v10 = *((_DWORD *)a2 + 83);
      if ( (v10 & 1) == 0 )
        *((_DWORD *)a2 + 83) = v10 | 1;
      if ( *((_BYTE *)this + 76) <= 3u )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 243;
      }
      if ( (*((_BYTE *)this + 78) & 8) != 0 )
      {
        v11 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
        v12 = 0LL;
        if ( v11 != (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
          v12 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)((char *)v11 - 8);
        while ( v12
             && (*(_DWORD *)(*((_QWORD *)v12 + 11) + 24LL) != (_DWORD)v7
              || *(_DWORD *)(*((_QWORD *)v12 + 12) + 24LL) != (_DWORD)v8) )
        {
          v18 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 1);
          v12 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)((char *)v18 - 8);
          if ( v18 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
            v12 = 0LL;
        }
        if ( v12 )
        {
          if ( DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNPRESENTPATH *)v12)
            && DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v12) )
          {
            if ( VIDPN_MGR::_bShouldLogOn1277688 && ((_DWORD)a2[4] & 6) != 0 )
            {
              WdLogSingleEntry2(3LL, (unsigned int)v7, v8);
              WdLogGlobalForLineNumber = 1108;
              VIDPN_MGR::_bShouldLogOn1277688 = 0;
            }
            *((_DWORD *)v12 + 30) = 1;
            if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v12)
              && ((_DWORD)v12[30] & 0x10) != 0 )
            {
              WdLogSingleEntry0(3LL);
              *((_DWORD *)v12 + 30) &= ~0x10u;
              WdLogGlobalForLineNumber = 869;
            }
            if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v12)
              && ((_DWORD)v12[30] & 8) != 0 )
            {
              WdLogSingleEntry0(3LL);
              *((_DWORD *)v12 + 30) &= ~8u;
              WdLogGlobalForLineNumber = 881;
            }
          }
          else
          {
            DMMVIDPNPRESENTPATH::SetScalingSupport(
              (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v12,
              (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4);
          }
          DMMVIDPNPRESENTPATH::SetRotationSupport(
            (DMMVIDPNPRESENTPATH *)v12,
            (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6);
          v12[42] = a2[83];
          if ( *((_QWORD *)this + 17) <= 3uLL )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 82;
          }
          if ( *(_QWORD *)(*((_QWORD *)this + 18) + 24LL) != 255LL )
          {
            if ( *((_QWORD *)this + 17) <= 3uLL )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 82;
            }
            --*(_QWORD *)(*((_QWORD *)this + 18) + 24LL);
          }
          if ( *((_QWORD *)this + 17) <= 3uLL )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 82;
          }
          if ( !*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) )
            ProtectableFromChange::DisallowModifyingAction(
              (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 56),
              3u);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
          if ( v22 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
          }
          return 0LL;
        }
        WdLogSingleEntry3(2LL, (unsigned int)v7, v8, this);
        WdLogGlobalForLineNumber = 1090;
        v16 = -1071774937;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1077;
        v16 = -1073741790;
      }
      WdLogSingleEntry2(2LL, a2, this);
      WdLogGlobalForLineNumber = 2771;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
      return v16;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2734;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2708;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}

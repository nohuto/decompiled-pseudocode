/*
 * XREFs of ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x14025C94C
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14002C69C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1400965FC (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        VIDPN_MGR *this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // esi
  __int64 Container; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  int v14; // [rsp+48h] [rbp+10h] BYREF
  int v15; // [rsp+4Ch] [rbp+14h]

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3553;
  }
  if ( !(_DWORD)v3 || (unsigned int)(v3 - 254) <= 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3556;
  }
  v6 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v3);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry3(2LL, v3, a2, v6);
    WdLogGlobalForLineNumber = 3568;
    return v7;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40);
  v10 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  LOBYTE(v11) = 1;
  v12 = *((_QWORD *)a2 + 12);
  v14 = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v15 = *(_DWORD *)(v12 + 24);
  v13 = VIDPN_MGR::FormalizeVidPnChange(this, v10 & -(__int64)(v10 != -88), 7LL, v11, &v14);
  v7 = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1071774970 )
    {
      WdLogSingleEntry2(3LL, v3, a2);
      WdLogGlobalForLineNumber = 3597;
    }
    else
    {
      WdLogSingleEntry3(2LL, v3, a2, v13);
      WdLogGlobalForLineNumber = 3604;
    }
    return v7;
  }
  return 0LL;
}

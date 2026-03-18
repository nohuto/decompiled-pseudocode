/*
 * XREFs of ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x140284810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x140055480 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___ @ 0x14009B9F0 (DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___.c)
 *     _DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14009BA10 (_DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140191CCC (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x14023239C (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

__int64 __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  DXGDODPRESENT *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTER *Adapter; // rax
  BLTQUEUE_REMOTE_VSYNC_SOURCE *v10; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rax
  DXGDODPRESENT *v13; // rcx
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rdx
  DXG_GUEST_GLOBAL_VMBUS *v16; // rcx
  unsigned int v17; // ebx
  struct _LUID v18; // rbx
  unsigned int v19; // r14d
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  struct _LUID v22; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-1h]
  BLTQUEUE_REMOTE_VSYNC_SOURCE *v24; // [rsp+60h] [rbp+7h] BYREF
  int *v25; // [rsp+68h] [rbp+Fh]
  int *v26; // [rsp+70h] [rbp+17h]
  _BYTE v27[32]; // [rsp+80h] [rbp+27h] BYREF
  int MappingFromGuestId; // [rsp+C0h] [rbp+67h] BYREF
  int v29; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( *((_BYTE *)this + 104) )
    return 3221225473LL;
  v6 = (DXGDODPRESENT *)*((_QWORD *)this + 12);
  if ( !v6 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdTrace)(0LL, a2);
    WdLogGlobalForLineNumber = 62;
    return 3221225473LL;
  }
  if ( a3 == -1 )
  {
    DXGDODPRESENT::GetAdapter(v6);
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 69;
    return 3221225473LL;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305320) )
  {
    WdLogNewEntry5_WdTrace(v8, v7);
    WdLogGlobalForLineNumber = 76;
    return 3221225473LL;
  }
  MappingFromGuestId = 0;
  v25 = &MappingFromGuestId;
  v29 = 3;
  v26 = &v29;
  v24 = this;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55_((__int64)v27, (__int64)&v24);
  Adapter = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
  v25 = (int *)(unsigned int)v4;
  v10 = *(BLTQUEUE_REMOTE_VSYNC_SOURCE **)((char *)Adapter + 412);
  v22 = 0LL;
  v23 = 0;
  v24 = v10;
  Global = DXGGLOBAL::GetGlobal();
  MappingFromGuestId = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                         (struct _KTHREAD **)Global + 38159,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v24,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v22);
  if ( MappingFromGuestId < 0 )
  {
    v12 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry2(2LL, v12, v4);
    v13 = (DXGDODPRESENT *)*((_QWORD *)this + 12);
    WdLogGlobalForLineNumber = 97;
    v14 = DXGDODPRESENT::GetAdapter(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find host mapping for adapter 0x%I64x, target id 0x%I64x",
      (__int64)v14,
      v4,
      0LL,
      0LL,
      0LL);
    v29 = 0;
LABEL_15:
    v17 = MappingFromGuestId;
    goto LABEL_16;
  }
  v16 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 212);
  if ( !v16 )
  {
    WdLogNewEntry5_WdTrace(0LL, v15);
    WdLogGlobalForLineNumber = 107;
    v17 = -1073741823;
    MappingFromGuestId = -1073741823;
    v29 = 1;
LABEL_16:
    DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v27);
    return v17;
  }
  v18 = v22;
  v19 = v23;
  MappingFromGuestId = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(v16, v22, v23, (char *)this + 72, 1);
  if ( MappingFromGuestId < 0 )
  {
    v20 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry3(3LL, v20, v4, v21);
    WdLogGlobalForLineNumber = 117;
    v29 = 2;
    goto LABEL_15;
  }
  KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
  *((_BYTE *)this + 104) = 1;
  *(struct _LUID *)((char *)this + 108) = v18;
  *((_DWORD *)this + 29) = v19;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v27);
  return (unsigned int)MappingFromGuestId;
}

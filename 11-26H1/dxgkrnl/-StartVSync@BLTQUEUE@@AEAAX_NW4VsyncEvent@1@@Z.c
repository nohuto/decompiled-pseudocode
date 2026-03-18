/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140283D74
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x140283020 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x140417200 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140446010 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400063B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x14000688C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14005A918 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018F994 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403BCBA0 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(__int64 a1, char a2, char a3)
{
  struct _KTHREAD **v6; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp-20h] BYREF
  int v20; // [rsp+A0h] [rbp+20h] BYREF
  int v21; // [rsp+B8h] [rbp+38h] BYREF

  if ( (*(_DWORD *)(a1 + 1072) & 0xA) == 8 )
  {
    v6 = 0LL;
    if ( !a2 )
      v6 = (struct _KTHREAD **)(a1 + 424);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, v6, 0);
    if ( !a2 )
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v19);
    if ( *(_DWORD *)(a1 + 136) == 2
      && *((_BYTE *)DXGGLOBAL::GetGlobal() + 305320)
      && (Global = DXGGLOBAL::GetGlobal(), DXGGLOBAL::IsVmConnectedToHost(Global)) )
    {
      BLTQUEUE::RecreateVsyncSource(a1, 0, 13);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
             *(_QWORD *)(a1 + 128),
             *(_QWORD *)(a1 + 384),
             *(unsigned int *)(a1 + 260));
      if ( (unsigned int)dword_1401665B8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1401665B8, 0x400000000800LL) )
        {
          v20 = *(_DWORD *)(a1 + 136);
          v21 = v9;
          v17 = 33556480LL;
          v18 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            (int)&unk_1401468EA,
            v10,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v21,
            (__int64)&v20);
          v11 = dword_1401665B8;
        }
        if ( v11 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 2048LL) )
        {
          v20 = *(_DWORD *)(a1 + 136);
          v21 = v9;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            (__int64)&unk_140146945,
            v10,
            v12,
            (__int64)&v21,
            (__int64)&v20);
        }
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
             *(_QWORD *)(a1 + 128),
             *(_QWORD *)(a1 + 384),
             *(unsigned int *)(a1 + 260));
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(v8, &EventBltQueueVsyncStart, v10, *(_DWORD *)(a1 + 136), v9, a3);
    if ( v9 >= 0 )
      goto LABEL_26;
    *(_DWORD *)(a1 + 136) = 2;
    BLTQUEUE::RecreateVsyncSource(a1, 1, 14);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 384),
            *(unsigned int *)(a1 + 260));
    v16 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(1LL, a1, v13);
      WdLogGlobalForLineNumber = 3273;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"BLTQUEUE 0x%I64x : Failed to start Vsync source after recreate Vsync source, Status = 0x%I64x",
        a1,
        v16,
        0LL,
        0LL,
        0LL);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v14, &EventBltQueueVsyncStart, v15, *(_DWORD *)(a1 + 136), v16, 14);
    }
    if ( (int)v16 >= 0 )
LABEL_26:
      *(_DWORD *)(a1 + 1072) |= 2u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  }
}

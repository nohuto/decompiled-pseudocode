/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x14037C5A4
 * Callers:
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401E5A70 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  DXGDEVICE *v3; // r9
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v9; // esi
  __int64 v10; // rbp
  unsigned int v11; // esi

  v3 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( v3 == this )
  {
    if ( !*((_DWORD *)this + 116) )
    {
      v9 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v9 & 4) != 0 )
      {
        if ( a3 )
        {
          v10 = *((_QWORD *)this + 237);
          v11 = (v9 >> 6) & 0xF;
          if ( v10 )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 237)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1182;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
                1182LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_DWORD *)this + 152) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v10 + 3160), this, v11)
              && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v11) == a2 )
            {
              DXGDEVICE::UpdateDodFrontBuffer((ADAPTER_RENDER **)this, a2);
            }
          }
        }
      }
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                   + 776LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
           *((_QWORD *)a2 + 3));
    v7 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry3(3LL, this, a2, v6);
      WdLogGlobalForLineNumber = 1201;
    }
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry4(3LL, a2, this, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 1165;
  }
  return v7;
}

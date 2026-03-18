/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1401294CC
 * Callers:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14000480C (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@AEAAPEAXI@Z @ 0x140004680 (--_GVIDMM_PROCESS_FENCE_STORAGE@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140038588 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@777@Z @ 0x140040290 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_140040290.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     ?GetTotalGlobalSharedFence@VIDMM_PROCESS_FENCE_STORAGE@@SAI_N@Z @ 0x1400464D8 (-GetTotalGlobalSharedFence@VIDMM_PROCESS_FENCE_STORAGE@@SAI_N@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400D71A4 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400E2790 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140110C4C (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS ***this)
{
  VIDMM_PROCESS **v2; // rdx
  VIDMM_PROCESS **v3; // rax
  VIDMM_PROCESS **v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // r8
  unsigned int v9; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v11; // rax
  VIDMM_PROCESS **v12; // rax
  unsigned int i; // edi
  __int64 v14; // rsi
  VIDMM_PROCESS *v15; // rcx
  VIDMM_PROCESS **v16; // rax
  _QWORD *j; // rdi
  VIDMM_PROCESS **v18; // rcx
  unsigned int k; // edi
  __int64 v20; // rsi
  VIDMM_PROCESS *v21; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v22; // rcx
  CVirtualAddressAllocator *v23; // rcx
  VIDMM_PROCESS **v24; // rcx
  struct VIDMM_PARTITION *v25; // rcx
  __int16 v26[2]; // [rsp+60h] [rbp-9h] BYREF
  int TotalGlobalSharedFence; // [rsp+64h] [rbp-5h] BYREF
  int v28; // [rsp+68h] [rbp-1h] BYREF
  int v29; // [rsp+6Ch] [rbp+3h] BYREF
  int v30; // [rsp+70h] [rbp+7h] BYREF
  void *v31; // [rsp+78h] [rbp+Fh] BYREF
  __int128 *v32; // [rsp+80h] [rbp+17h] BYREF
  __int64 v33; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v34; // [rsp+90h] [rbp+27h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 122;
  }
  ExAcquirePushLockExclusiveEx(&g_VidMmProcessListHeadLock, 0LL);
  v2 = *this;
  if ( (*this)[1] != (VIDMM_PROCESS *)this || (v3 = this[1], *v3 != (VIDMM_PROCESS *)this) )
    __fastfail(3u);
  *v3 = (VIDMM_PROCESS *)v2;
  v2[1] = (VIDMM_PROCESS *)v3;
  ExReleasePushLockExclusiveEx(&g_VidMmProcessListHeadLock, 0LL);
  if ( this[32] && (unsigned int)dword_14008A048 > 5 && tlgKeywordOn((__int64)&dword_14008A048, 0x400000000008LL) )
  {
    TotalGlobalSharedFence = VIDMM_PROCESS_FENCE_STORAGE::GetTotalGlobalSharedFence(1);
    v28 = VIDMM_PROCESS_FENCE_STORAGE::GetTotalGlobalSharedFence(0);
    v29 = *((_DWORD *)this + 65);
    v4 = this[9];
    v30 = v5;
    v6 = (__int64)v4[8];
    v7 = *(_OWORD *)(v6 + 144);
    v31 = *(void **)(v6 + 96);
    v32 = &v34;
    v34 = v7;
    v26[0] = 0;
    v33 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (__int64)&unk_14007CC81,
      v8,
      v5,
      (__int64)&v33,
      (__int64)v26,
      (__int64 *)&v32,
      &v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&TotalGlobalSharedFence);
  }
  if ( this[4] )
  {
    v9 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        VIDMM_PROCESS::DestroyAdapterInfo((VIDMM_PROCESS *)this, v9++);
        v11 = DXGGLOBAL::GetGlobal();
      }
      while ( v9 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v11) );
    }
    operator delete(this[4]);
  }
  v12 = this[9];
  if ( (!v12 || ((_DWORD)v12[51] & 0x100) == 0) && this[5] )
  {
    for ( i = 0; i < *((_DWORD *)this + 16); this[5][v14] = 0LL )
    {
      v14 = i;
      v15 = this[5][i];
      if ( v15 )
        (**(void (__fastcall ***)(VIDMM_PROCESS *, __int64))v15)(v15, 1LL);
      ++i;
    }
    operator delete(this[5]);
    this[5] = 0LL;
  }
  v16 = this[9];
  if ( v16 )
  {
    if ( ((_DWORD)v16[51] & 0x180) != 0 )
    {
      for ( j = this + 11;
            (_QWORD *)*j != j;
            VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)(*j - 24LL)) )
      {
        ;
      }
    }
    if ( ((_DWORD)this[9][51] & 0x80) != 0 )
    {
      v18 = this[6];
      if ( v18 )
      {
        (*(void (__fastcall **)(VIDMM_PROCESS **, __int64))*v18)(v18, 1LL);
        this[6] = 0LL;
      }
      if ( this[7] )
      {
        for ( k = 0; k < *((_DWORD *)this + 16); this[7][v20] = 0LL )
        {
          v20 = k;
          v21 = this[7][k];
          if ( v21 )
            (**(void (__fastcall ***)(VIDMM_PROCESS *, __int64))v21)(v21, 1LL);
          ++k;
        }
        operator delete(this[7]);
        this[7] = 0LL;
      }
    }
  }
  v22 = (VIDMM_PROCESS_FENCE_STORAGE *)this[10];
  if ( v22 )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'(v22);
  v23 = (CVirtualAddressAllocator *)this[33];
  if ( v23 )
    CVirtualAddressAllocator::DestroyVaAllocator(v23);
  v24 = this[43];
  if ( v24 != (VIDMM_PROCESS **)-1LL )
    ObCloseHandle(v24, 0);
  v25 = (struct VIDMM_PARTITION *)this[42];
  if ( v25 )
    VidMmiClosePartition(v25);
}

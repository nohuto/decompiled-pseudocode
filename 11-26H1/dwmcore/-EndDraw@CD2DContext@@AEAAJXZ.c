/*
 * XREFs of ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1801359A0
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180135D40 (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x180135E68 (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::EndDraw(CD2DContext *this, __int64 a2, __int64 a3)
{
  char v4; // r15
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+40h] [rbp-40h] BYREF
  int *v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int *v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]

  if ( *((_BYTE *)this + 429) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v16 = 0;
      v18 = &v15;
      v15 = 17;
      v20 = &v16;
      v19 = 4LL;
      v21 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        a3,
        3u,
        &v17);
    }
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      v4 = 1;
      v13 = 0LL;
      if ( g_pComposition )
        v13 = *((_QWORD *)g_pComposition + 110);
      if ( *((_QWORD *)g_pComposition + 2) == v13 )
        QueryPerformanceCounter((LARGE_INTEGER *)g_pComposition + 19);
    }
    else
    {
      v4 = 0;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 392LL))(
           *((_QWORD *)this + 25),
           0LL,
           0LL);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x5E0u, 0LL);
    *(_WORD *)((char *)this + 429) = 0;
    if ( !*((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 41) = 512;
      ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 8);
      ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 48);
      ShrinkableArray<CDrawListEntryBatch *,RefCountLifetime<CDrawListEntryBatch *>>::Optimize((char *)this + 88);
    }
    --*((_DWORD *)this + 41);
    if ( v4 )
    {
      v14 = 0LL;
      if ( g_pComposition )
        v14 = *((_QWORD *)g_pComposition + 110);
      if ( *((_QWORD *)g_pComposition + 2) == v14 )
        QueryPerformanceCounter((LARGE_INTEGER *)g_pComposition + 20);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v15 = 0;
      v18 = &v16;
      v16 = 17;
      v20 = &v15;
      v19 = 4LL;
      v21 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v6,
        3u,
        &v17);
    }
  }
  else
  {
    v9 = (__int64)this + 1108;
    if ( !this )
      v9 = 1124LL;
    if ( *(_DWORD *)v9 )
    {
      v7 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x5F2u, 0LL);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( *((_DWORD *)this + 277)
    || v7 != -2005532292 && v7 != -2147024882 && v7 != -2005270523
    || !*((_DWORD *)this + 106) )
  {
    goto LABEL_17;
  }
  if ( v7 != -2005270523 )
  {
LABEL_28:
    CD2DContext::TempDisableHardwareProtection(this);
    goto LABEL_17;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 312LL))(*((_QWORD *)this + 66));
  v11 = *((_DWORD *)this + 277);
  if ( v10 == -2005270480 )
  {
    if ( v11 )
      goto LABEL_28;
    *((_DWORD *)this + 277) = -2005270480;
    CD2DContext::TempDisableHardwareProtection(this);
LABEL_17:
    if ( v7 >= 0 )
      goto LABEL_18;
    goto LABEL_32;
  }
  if ( !v11 )
    *((_DWORD *)this + 277) = -2005270523;
LABEL_32:
  if ( *((_DWORD *)this + 277) )
    return 2291662989LL;
LABEL_18:
  v15 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v7, 0, &v15) )
  {
    v12 = v15;
    if ( v15 == -2003304307 )
    {
      if ( v7 >= 0 )
        v7 = -2003304307;
      if ( !*((_DWORD *)this + 277) )
        *((_DWORD *)this + 277) = v7;
    }
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xB71u, 0LL);
  }
  return (unsigned int)v7;
}

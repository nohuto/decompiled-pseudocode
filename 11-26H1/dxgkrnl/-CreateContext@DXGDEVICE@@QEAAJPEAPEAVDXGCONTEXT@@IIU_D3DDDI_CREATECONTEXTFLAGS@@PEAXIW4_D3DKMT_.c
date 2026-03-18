/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401B5348 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateContext @ 0x1403A3C90 (DxgkCreateContext.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1403A6E48 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x14003CC00 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A5FB0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A64B4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        unsigned __int8 a9)
{
  __int64 v13; // rcx
  DXGCONTEXT *v14; // rax
  unsigned int v15; // r9d
  DXGCONTEXT *v16; // rax
  struct DXGCONTEXT *v17; // rbx
  int v18; // edi
  struct DXGCONTEXT **v20; // rax
  __int64 v21; // rcx
  _BYTE v22[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1976;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppContext != NULL", 1976LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1977;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 1977LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1978;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1978LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1984;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1984LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  v14 = (DXGCONTEXT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(496LL);
  if ( !v14 )
    goto LABEL_19;
  v15 = 1;
  if ( a4 )
    v15 = a4;
  v16 = DXGCONTEXT::DXGCONTEXT(v14, this, a3, v15, a5, a8, a9);
  v17 = v16;
  if ( v16 )
  {
    v18 = DXGCONTEXT::Initialize(v16, a6, a7);
    if ( v18 >= 0 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, (struct _KTHREAD **)this + 50);
      v20 = (struct DXGCONTEXT **)((char *)this + 496);
      v21 = *((_QWORD *)this + 62);
      if ( *(DXGDEVICE **)(v21 + 8) != (DXGDEVICE *)((char *)this + 496) )
        __fastfail(3u);
      *(_QWORD *)v17 = v21;
      *((_QWORD *)v17 + 1) = v20;
      *(_QWORD *)(v21 + 8) = v17;
      *v20 = v17;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
      *a2 = v17;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
    else
    {
      DXGCONTEXT::DestroyContext(v17, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v17);
    }
  }
  else
  {
LABEL_19:
    v18 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2013;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGCONTEXT class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v18;
}

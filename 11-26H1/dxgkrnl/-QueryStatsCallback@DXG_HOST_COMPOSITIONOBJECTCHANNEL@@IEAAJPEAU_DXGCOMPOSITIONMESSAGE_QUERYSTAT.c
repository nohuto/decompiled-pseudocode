/*
 * XREFs of ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1401C02E0
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401BFD70 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140041AB0 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS *a2,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *a3)
{
  int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v9; // rax
  DxgkCompositionObject *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _BYTE v16[16]; // [rsp+20h] [rbp-98h] BYREF
  _OWORD v17[5]; // [rsp+30h] [rbp-88h] BYREF

  v6 = -1073741811;
  v7 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
  {
    v9 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, v9, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v10 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v10 )
    {
      v7 = v10;
      DxgkCompositionObject::AddRef(v10);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 696;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 701;
  }
  if ( v7 )
  {
    memset(v17, 0, sizeof(v17));
    v6 = (*(__int64 (__fastcall **)(_QWORD *, _OWORD *))(*((_QWORD *)v7 + 4) + 48LL))((_QWORD *)v7 + 4, v17);
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 715;
    }
    else
    {
      v11 = v17[1];
      *((_OWORD *)a3 + 1) = v17[0];
      v12 = v17[2];
      *((_OWORD *)a3 + 2) = v11;
      v13 = v17[3];
      *((_OWORD *)a3 + 3) = v12;
      v14 = v17[4];
      *((_OWORD *)a3 + 4) = v13;
      *((_OWORD *)a3 + 5) = v14;
    }
    DxgkCompositionObject::Release(v7);
  }
  *((_DWORD *)a3 + 1) = v6;
  return (unsigned int)v6;
}

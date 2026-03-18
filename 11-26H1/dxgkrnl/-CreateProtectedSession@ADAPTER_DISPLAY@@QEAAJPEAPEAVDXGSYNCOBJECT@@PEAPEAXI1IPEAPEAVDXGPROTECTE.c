/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401F94C4
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1401FA080 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1400809B8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x140080BA4 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1401F99DC (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateProtectedSession(
        DXGADAPTER **this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        unsigned int a4,
        void **a5,
        unsigned int a6,
        struct DXGPROTECTEDSESSION **a7)
{
  __int64 v11; // rax
  DXGPROTECTEDSESSION *v12; // rbx
  int v13; // ebp
  DXGPROTECTEDSESSION **v15; // rax
  DXGADAPTER *v16; // rcx
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 867;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      867LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 869;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppProtectedSession", 869LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  v11 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(160LL);
  v12 = (DXGPROTECTEDSESSION *)v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 16) = this;
    *(_OWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_DWORD *)(v11 + 64) = 0;
    *(_DWORD *)(v11 + 68) = -1;
    *(_DWORD *)(v11 + 72) = 76;
    *(_DWORD *)(v11 + 80) = 0;
    *(_QWORD *)(v11 + 88) = 0LL;
    *(_DWORD *)(v11 + 96) = 0;
    *(_QWORD *)(v11 + 104) = 0LL;
    *(_DWORD *)(v11 + 112) = 0;
    *(_QWORD *)(v11 + 120) = 0LL;
    *(_QWORD *)(v11 + 128) = 0LL;
    *(_BYTE *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 148) = 1;
    *(_QWORD *)(v11 + 152) = 0LL;
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v11 + 136));
    v13 = DXGPROTECTEDSESSION::Initialize(v12, a2, a3, a4, a5, a6);
    if ( v13 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v17,
        (struct ADAPTER_DISPLAY *)this);
      v15 = this + 91;
      v16 = this[91];
      if ( *((DXGADAPTER ***)v16 + 1) != this + 91 )
        __fastfail(3u);
      *(_QWORD *)v12 = v16;
      *((_QWORD *)v12 + 1) = v15;
      *((_QWORD *)v16 + 1) = v12;
      *v15 = v12;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
      _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
      *a7 = v12;
      return 0LL;
    }
    else
    {
      DXGPROTECTEDSESSION::`scalar deleting destructor'(v12);
      return (unsigned int)v13;
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 878;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"ADAPTER_DISPLAY 0x%I64x: Unable to allocate protected session object, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}

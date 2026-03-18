/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1403EE83C
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1403EE710 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140011EA0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C354 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1403FFEF8 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(DXGGLOBAL *this, __int64 a2, union _LARGE_INTEGER a3)
{
  char v4; // r13
  _QWORD **v5; // r12
  union _LARGE_INTEGER v6; // rsi
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  bool v9; // zf
  volatile signed __int32 *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // r14
  LARGE_INTEGER v14; // rax
  int v15; // r8d
  int v16; // r9d
  LONGLONG v17; // rax
  char v18; // dl
  unsigned int v19; // r14d
  volatile __int32 *v20; // rsi
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v23[3]; // [rsp+3Ch] [rbp-C4h] BYREF
  LONGLONG v24; // [rsp+48h] [rbp-B8h] BYREF
  DXGGLOBAL *v25; // [rsp+50h] [rbp-B0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTERLISTLOCK *v27[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+12Ch] [rbp+2Ch]
  _DWORD *v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]
  int *v35; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]
  LONGLONG *v37; // [rsp+150h] [rbp+50h]
  __int64 v38; // [rsp+158h] [rbp+58h]

  PerformanceFrequency = a3;
  v25 = this;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 520, 1, 0) && *((_QWORD *)this + 239) != a2 )
  {
    *((_QWORD *)this + 239) = a2;
    v4 = 0;
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v27, (DXGGLOBAL *)((char *)this + 680));
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v27);
    v5 = (_QWORD **)((char *)this + 808);
    v6 = PerformanceFrequency;
    v7 = *v5;
    while ( 1 )
    {
LABEL_4:
      v8 = 0LL;
      if ( v7 != v5 )
        v8 = v7;
      if ( !v8 )
        break;
      v9 = v7 == v5;
      v10 = (volatile signed __int32 *)v7;
      v7 = (_QWORD *)*v7;
      if ( v9 )
        v10 = 0LL;
      if ( *((_QWORD *)v10 + 396) && *((_DWORD *)v10 + 855) && *((_DWORD *)v10 + 852) )
      {
        _m_prefetchw((const void *)(v10 + 6));
        v11 = *((_QWORD *)v10 + 3);
        do
        {
          if ( !v11 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1182;
            goto LABEL_4;
          }
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
        }
        while ( v12 != v11 );
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, (struct DXGADAPTER *const)v10, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
        v13 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
        PerformanceFrequency.QuadPart = 0LL;
        v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v15 = *((_DWORD *)v10 + 105);
        v16 = *((_DWORD *)v10 + 106);
        v17 = 1000000 * (v14.QuadPart - v6.QuadPart) / PerformanceFrequency.QuadPart;
        if ( (unsigned int)dword_140166660 > 5
          && (qword_140166670 & 0x400000000004LL) != 0
          && (qword_140166678 & 0x400000000004LL) == qword_140166678 )
        {
          v24 = v17;
          v22 = v16;
          v37 = &v24;
          v23[0] = v15;
          v35 = &v22;
          v38 = 8LL;
          v33 = v23;
          *(_DWORD *)&EventDescriptor.Level = 5;
          UserData.Ptr = (ULONGLONG)off_140166668;
          v36 = 4LL;
          v34 = 4LL;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 0x400000000004LL;
          UserData.Size = *(unsigned __int16 *)off_140166668;
          v30 = &unk_14014342C;
          UserData.Reserved = 2;
          v31 = 82;
          v32 = 1;
          v23[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwWriteTransfer(qword_140166680, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
        }
        if ( (int)v13 < 0 )
        {
          WdLogSingleEntry2(3LL, v10, v13);
          WdLogGlobalForLineNumber = 1177;
        }
        else
        {
          v18 = 0;
          v19 = 0;
          if ( *((_DWORD *)v10 + 852) )
          {
            do
            {
              if ( !*(_DWORD *)(520LL * v19 + *((_QWORD *)v10 + 408) + 208) )
              {
                DXGADAPTER::SetPowerComponentActiveCBInternal((DXGADAPTER *)v10, v19, 1u, 0);
                v18 = 1;
              }
              ++v19;
            }
            while ( v19 < *((_DWORD *)v10 + 852) );
            if ( v18 )
            {
              v4 = 1;
              _InterlockedIncrement(v10 + 986);
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
      }
    }
    v20 = (volatile __int32 *)v25;
    if ( v4 && KeSetTimer((PKTIMER)v25 + 30, (LARGE_INTEGER)-10000000LL, (PKDPC)v25 + 31) )
    {
      DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)v27);
      DXGGLOBAL::ReleaseComponentReferencesHelper((DXGGLOBAL *)v20);
    }
    _InterlockedExchange(v20 + 520, 0);
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v27);
  }
}

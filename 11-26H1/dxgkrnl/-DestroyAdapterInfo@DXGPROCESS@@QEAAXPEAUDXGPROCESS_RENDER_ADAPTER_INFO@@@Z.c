/*
 * XREFs of ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1402E75F4
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A6A7C (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402E7344 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U6@U6@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@33333333AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@8888AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140048D40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrappe.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x14006F5CC (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ @ 0x1402E7A5C (--1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x140371EF8 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x140371F38 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403DF694 (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::DestroyAdapterInfo(DXGPROCESS *this, struct DXGPROCESS_RENDER_ADAPTER_INFO *a2)
{
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v2; // rbx
  ADAPTER_RENDER *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r14
  char *v10; // rdi
  __int64 v11; // rcx
  char **v12; // rax
  _QWORD *v13; // rdi
  void *v14; // rdx
  _QWORD *v15; // r15
  __int64 v16; // r9
  unsigned int v17; // r8d
  void *v18; // r10
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int128 v21; // xmm0
  bool v22; // al
  __int64 v23; // r8
  char v24; // [rsp+D0h] [rbp-80h] BYREF
  char v25; // [rsp+D1h] [rbp-7Fh] BYREF
  bool v26; // [rsp+D2h] [rbp-7Eh] BYREF
  char v27; // [rsp+D3h] [rbp-7Dh] BYREF
  char v28[2]; // [rsp+D4h] [rbp-7Ch] BYREF
  __int16 v29; // [rsp+D6h] [rbp-7Ah] BYREF
  int v30; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int16 *v31; // [rsp+E0h] [rbp-70h] BYREF
  __int128 *v32; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-60h] BYREF
  void *v34; // [rsp+F8h] [rbp-58h] BYREF
  const CHAR *v35; // [rsp+100h] [rbp-50h] BYREF
  __int64 v36; // [rsp+108h] [rbp-48h] BYREF
  __int64 v37; // [rsp+110h] [rbp-40h] BYREF
  __int64 v38; // [rsp+118h] [rbp-38h] BYREF
  __int64 v39; // [rsp+120h] [rbp-30h] BYREF
  __int64 v40; // [rsp+128h] [rbp-28h] BYREF
  __int64 v41; // [rsp+130h] [rbp-20h] BYREF
  __int64 v42; // [rsp+138h] [rbp-18h] BYREF
  __int64 v43; // [rsp+140h] [rbp-10h] BYREF
  __int64 v44; // [rsp+148h] [rbp-8h] BYREF
  __int64 v45; // [rsp+150h] [rbp+0h] BYREF
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v46; // [rsp+158h] [rbp+8h]
  _QWORD v47[8]; // [rsp+160h] [rbp+10h] BYREF
  __int128 v48; // [rsp+1A0h] [rbp+50h] BYREF

  v46 = a2;
  v2 = a2;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2686;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapterInfo != nullptr", 2686LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (ADAPTER_RENDER *)*((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v4 + 2);
  if ( *((_BYTE *)v2 + 109) )
  {
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(v2, this, *((struct ADAPTER_RENDER **)v2 + 10));
    v14 = (void *)*((_QWORD *)v2 + 6);
    if ( v14 )
    {
      ADAPTER_RENDER::DdiDestroyProcess(*((ADAPTER_RENDER **)v2 + 10), v14);
      *((_QWORD *)v2 + 6) = 0LL;
    }
    DXGPROCESS_ADAPTER_INFO_PASID_DATA::Deallocate(v2);
    v4 = (ADAPTER_RENDER *)*((_QWORD *)v2 + 10);
  }
  memset(v47, 0, sizeof(v47));
  if ( !*(_BYTE *)(v5 + 209) )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = *((_QWORD *)v4 + 92);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v7 - 1) + 16);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v7 + 8) + 1080LL))(
          *((_QWORD *)v4 + 93),
          v8,
          v47);
        v4 = (ADAPTER_RENDER *)*((_QWORD *)v2 + 10);
      }
    }
  }
  if ( *((_DWORD *)v2 + 15) )
    ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v4);
  v9 = *((_QWORD *)v2 + 10);
  v10 = (char *)v2 + 88;
  if ( *(struct _KTHREAD **)(v9 + 80) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4649;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
      4649LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *(_QWORD *)v10;
  if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || (v12 = (char **)*((_QWORD *)v2 + 12), *v12 != v10) )
    __fastfail(3u);
  *v12 = (char *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  --*(_DWORD *)(v9 + 312);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(v5 + 240)) = 0LL;
  v13 = (_QWORD *)*((_QWORD *)v2 + 17);
  if ( v13 != (_QWORD *)((char *)v2 + 136) )
  {
    do
    {
      v15 = v13;
      v13 = (_QWORD *)*v13;
      v16 = v15[3];
      if ( v16 )
      {
        v17 = *((_DWORD *)this + 102);
        v18 = &unk_1400B4A34;
        v19 = v17 >> 8;
        if ( (v17 & 0x100) != 0 )
          v18 = (void *)*((_QWORD *)this + 78);
        if ( (unsigned int)dword_140166660 > 5
          && (qword_140166670 & 0x400000000010LL) != 0
          && (qword_140166678 & 0x400000000010LL) == qword_140166678 )
        {
          v20 = *((_QWORD *)this + 8);
          v31 = *(unsigned __int16 **)(v5 + 1968);
          v32 = &v48;
          v21 = *(_OWORD *)(v20 + 144);
          v34 = v18;
          v48 = v21;
          v24 = *(_BYTE *)(v20 + 138);
          v25 = *(_BYTE *)(v20 + 137);
          v22 = (v17 & 0x20) != 0;
          v23 = v17 >> 4;
          v26 = v22;
          LOBYTE(v23) = v23 & 1;
          v33 = *(_QWORD *)(v5 + 412);
          v27 = v23;
          v28[0] = v19 & 1;
          v35 = *(const CHAR **)(v20 + 96);
          v36 = *(_QWORD *)(v20 + 80);
          v30 = *((_DWORD *)v15 + 4);
          v37 = v47[7];
          v38 = v47[5];
          v39 = v47[4];
          v40 = v47[3];
          v41 = v47[1];
          v42 = v47[0];
          v43 = v47[2];
          v29 = 7;
          v44 = v16;
          v45 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v20,
            (__int64)&unk_140143A21,
            v23,
            v16,
            (__int64)&v45,
            (__int64)&v29,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v30,
            (__int64)&v36,
            &v35,
            &v34,
            (__int64)&v33,
            (__int64)v28,
            (__int64)&v27,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64 *)&v32,
            &v31);
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    }
    while ( v13 != (_QWORD *)((char *)v2 + 136) );
    v2 = v46;
  }
  DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA(v2);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
}

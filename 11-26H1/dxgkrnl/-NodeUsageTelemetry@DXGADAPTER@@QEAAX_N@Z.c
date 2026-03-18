/*
 * XREFs of ?NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z @ 0x14019CF80
 * Callers:
 *     ?NodeUsageTelemetryCallback@DXGGLOBAL@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401DF000 (-NodeUsageTelemetryCallback@DXGGLOBAL@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401DF380 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperArray@$07@@@Z @ 0x140002250 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::NodeUsageTelemetry(DXGADAPTER *this)
{
  int v1; // eax
  char v3; // r10
  __int64 v4; // r14
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v17; // [rsp+78h] [rbp-88h] BYREF
  __int16 v18; // [rsp+80h] [rbp-80h]
  _BYTE v19[144]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v20[512]; // [rsp+120h] [rbp+20h] BYREF

  v1 = *((_DWORD *)this + 111);
  if ( (v1 & 4) == 0 && (v1 & 0x10) == 0 && *((int *)this + 694) >= 0x2000 && !*((_BYTE *)this + 209) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, this, 0LL);
    if ( (!v3 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL) >= 0)
      && *(_QWORD *)(*((_QWORD *)this + 396) + 736LL) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 4912, 0LL);
      *((_QWORD *)this + 615) = KeGetCurrentThread();
      v4 = *((_QWORD *)this + 611);
      if ( *((_BYTE *)this + 4904) )
      {
        v5 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v7 = *((_QWORD *)this + 612);
        v8 = v5 * TimeIncrement;
        if ( v8 > v7 )
          v4 += v8 - v7;
      }
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 736LL) + 8LL) + 1112LL))(
        *(_QWORD *)(*((_QWORD *)this + 396) + 744LL),
        v20);
      if ( (unsigned int)dword_140166660 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140166660, 0x400001000000LL) )
        {
          v18 = v11;
          v17 = v20;
          v14 = (unsigned __int16 *)*((_QWORD *)this + 246);
          v15 = *(_QWORD *)((char *)this + 412);
          v13 = v4;
          v16 = 0x1000000LL;
          v12 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperArray<8>>(
            v9,
            (__int64)&unk_140140949,
            v10,
            v11,
            (__int64)&v12,
            (__int64)&v16,
            (__int64)&v15,
            &v14,
            (__int64)&v13,
            (__int64 *)&v17);
        }
      }
      *((_QWORD *)this + 615) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 4912, 0LL);
      KeLeaveCriticalRegion();
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  }
}

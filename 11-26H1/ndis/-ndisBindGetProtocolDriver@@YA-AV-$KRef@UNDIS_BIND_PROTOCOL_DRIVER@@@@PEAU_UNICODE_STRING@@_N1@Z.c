/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x140161DD0
 * Callers:
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x140160D00 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x14014B4B4 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x140161F40 (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140167170 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x14016B3E0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 */

struct NDIS_BIND_PROTOCOL_DRIVER **__fastcall ndisBindGetProtocolDriver(
        struct NDIS_BIND_PROTOCOL_DRIVER **a1,
        const struct _UNICODE_STRING *a2,
        char a3,
        bool a4)
{
  __int64 v4; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  struct NDIS_BIND_PROTOCOL_DRIVER **v11; // rsi
  Rtl::KString *value; // rcx
  unsigned __int64 Length; // rax
  struct NDIS_BIND_PROTOCOL_DRIVER *v14; // rax
  struct Rtl::KString *v16; // rax
  struct NDIS_BIND_PROTOCOL_DRIVER *v17; // rdi
  __int64 v18; // rbx
  struct NDIS_BIND_PROTOCOL_DRIVER *v19; // [rsp+20h] [rbp-48h] BYREF
  KLockHolder v20; // [rsp+28h] [rbp-40h] BYREF

  v4 = qword_14011F6D8;
  v20.m_Lock = (KPushLockBase *)qword_14011F6D8;
  KeEnterCriticalRegion();
  v20.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  v8 = qword_14011F6D8;
  v9 = 0LL;
  v20.m_State = Exclusive;
  v10 = *(unsigned int *)(qword_14011F6D8 + 44);
  while ( 1 )
  {
    if ( v9 == v10 )
    {
      v19 = 0LL;
      if ( (unsigned __int8)KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(&v19) )
      {
        v16 = Rtl::KString::Initialize(a2);
        v17 = v19;
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
          (void **)&v19->Name.__ptr_.__value_,
          v16);
        if ( v17->Name.__ptr_.__value_
          && ndisBindReadProtocolDriverConfiguration(v17, a4)
          && (v18 = qword_14011F6D8,
              Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
                (unsigned int *)(qword_14011F6D8 + 40),
                (unsigned int)(*(_DWORD *)(qword_14011F6D8 + 44) + 1))) )
        {
          *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * *(unsigned int *)(v18 + 44)) = v17;
          _InterlockedIncrement((volatile signed __int32 *)&v17[1].DriverReady);
          ++*(_DWORD *)(v18 + 44);
          v19 = 0LL;
          *a1 = v17;
        }
        else
        {
          *a1 = 0LL;
        }
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((__int64 *)&v19);
        goto LABEL_23;
      }
      *a1 = 0LL;
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((__int64 *)&v19);
LABEL_12:
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      return a1;
    }
    if ( v9 >= *(unsigned int *)(v8 + 44) )
      __fastfail(5u);
    v11 = (struct NDIS_BIND_PROTOCOL_DRIVER **)(*(_QWORD *)(v8 + 48) + 8 * v9);
    value = (*v11)->Name.__ptr_.__value_;
    Length = value->Length;
    if ( (_WORD)Length == a2->Length && !_wcsnicmp(value->Buffer, a2->Buffer, Length >> 1) )
      break;
    ++v9;
  }
  if ( !a3 || ndisBindReadProtocolDriverConfiguration(*v11, 1) )
  {
    v14 = *v11;
    *a1 = *v11;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)&v14[1].DriverReady);
    goto LABEL_12;
  }
  *a1 = 0LL;
LABEL_23:
  KLockHolder::~KLockHolder(&v20);
  return a1;
}

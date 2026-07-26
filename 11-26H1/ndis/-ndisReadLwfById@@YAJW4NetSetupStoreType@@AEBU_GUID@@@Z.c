/*
 * XREFs of ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x14014CB5C (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x14014CF64 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1400E60E4 (--1LwfBindProperties@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?append@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@@Z @ 0x14014D914 (-append@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@@Z.c)
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x14014DA88 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x14014DEEC (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x14014E40C (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ndisLwfSortPredicate @ 0x14014EA04 (ndisLwfSortPredicate.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015F060 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1401603F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisReadLwfById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int FilterAltitude; // ebx
  char *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  char v7; // al
  bool v9; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v10; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v14[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v15; // [rsp+80h] [rbp-80h] BYREF
  bool v16; // [rsp+84h] [rbp-7Ch] BYREF
  int v17; // [rsp+88h] [rbp-78h]
  wchar_t v18[128]; // [rsp+90h] [rbp-70h] BYREF

  v2 = *a2;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v12 = v2;
  v10.m_ptr = 0LL;
  netsetupBuildObjectPath(3LL, a2, a1);
  FilterAltitude = KRegKey::Open(&v10, 1u, v18, 0LL);
  if ( !FilterAltitude )
  {
    v11[0] = &v10;
    FilterAltitude = ndisBlowStringListIntoAtoms(
                       (NetSetupPropertyBag *)v11,
                       (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_BottomRange,
                       (__int64)v13);
    if ( !FilterAltitude )
    {
      FilterAltitude = ndisBlowStringListIntoAtoms(
                         (NetSetupPropertyBag *)v11,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_BottomExclude,
                         (__int64)v14);
      if ( !FilterAltitude )
      {
        FilterAltitude = ndisGetFilterAltitude((struct NetSetupPropertyBag *)v11, &v15);
        if ( !FilterAltitude )
        {
          FilterAltitude = NetSetupPropertyBag::ReadBoolean(
                             (NetSetupPropertyBag *)v11,
                             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_DefaultDisabled,
                             &v16);
          if ( !FilterAltitude )
          {
            v9 = 0;
            NetSetupPropertyBag::ReadBoolean(
              (NetSetupPropertyBag *)v11,
              (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_FilterDriver_IsMonitoring,
              &v9);
            if ( v9 )
              v4 = (char *)qword_14011F6E0 + 56;
            else
              v4 = (char *)qword_14011F6E0 + 40;
            v5 = 0LL;
            v6 = 0LL;
            while ( v5 < *((unsigned int *)v4 + 1) )
            {
              if ( !ndisLwfSortPredicate(v6 + *((_QWORD *)v4 + 1), (__int64)&v12) )
              {
                v7 = Rtl::KArray<LwfBindProperties,1>::insertAt((__int64)v4, v5, (__int64)&v12);
                goto LABEL_15;
              }
              ++v5;
              v6 += 64LL;
            }
            v7 = Rtl::KArray<LwfBindProperties,1>::append((__int64)v4, (__int64)&v12);
LABEL_15:
            FilterAltitude = -1073741670;
            if ( v7 )
              FilterAltitude = 0;
          }
        }
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
  LwfBindProperties::~LwfBindProperties((LwfBindProperties *)&v12);
  return FilterAltitude;
}

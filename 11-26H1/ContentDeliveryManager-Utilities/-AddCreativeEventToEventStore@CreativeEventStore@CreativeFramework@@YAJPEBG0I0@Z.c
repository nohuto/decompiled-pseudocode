/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18004E6D4
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18004D750 (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     ??$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x180027420 (--$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002DBF0 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18002E6B0 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18003B71C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCreativeEvent@CreativeEventStore@CreativeFramework@@YAJPEBGI0PEAPEAG@Z @ 0x180051600 (-GetCreativeEvent@CreativeEventStore@CreativeFramework@@YAJPEBGI0PEAPEAG@Z.c)
 *     ?GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x1800536A4 (-GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 *     ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x1800539D4 (-GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        CreativeFramework::CreativeEventStore *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned int v7; // r14d
  unsigned __int16 **v8; // r8
  int PlacementEventStoreRegKey; // eax
  bool *v10; // r8
  unsigned int v11; // ebx
  CreativeFramework::ContentDeliveryManagerSettings *v12; // rbx
  const unsigned __int16 *v13; // rdx
  int DoesKeyExist; // edi
  __int64 v15; // rdx
  unsigned __int16 **v16; // r8
  int UniqueTimestamp; // eax
  int CreativeEvent; // eax
  __int64 v19; // r9
  int v20; // eax
  unsigned __int16 **v22; // [rsp+20h] [rbp-20h] BYREF
  LPCWSTR lpValueName; // [rsp+28h] [rbp-18h] BYREF
  LPCVOID lpData; // [rsp+30h] [rbp-10h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v25; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v25 = 0LL;
  v7 = (unsigned int)a3;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&v25,
    0LL);
  PlacementEventStoreRegKey = CreativeFramework::CreativeEventStore::GetPlacementEventStoreRegKey(
                                this,
                                (const unsigned __int16 *)&v25,
                                v8);
  v11 = PlacementEventStoreRegKey;
  if ( PlacementEventStoreRegKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)PlacementEventStoreRegKey);
    goto LABEL_22;
  }
  v12 = v25;
  LOBYTE(v22) = 0;
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(
                   (const WCHAR *)v25,
                   (unsigned __int16 *)&v22,
                   v10);
  if ( DoesKeyExist < 0 )
  {
    v15 = 75LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)DoesKeyExist);
LABEL_6:
    v11 = DoesKeyExist;
    goto LABEL_22;
  }
  if ( !(_BYTE)v22 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey((const WCHAR *)v12, v13);
    if ( DoesKeyExist < 0 )
    {
      v15 = 78LL;
      goto LABEL_5;
    }
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
                     (const WCHAR *)v12,
                     0LL,
                     0);
    if ( DoesKeyExist < 0 )
    {
      v15 = 83LL;
      goto LABEL_5;
    }
  }
  lpValueName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&lpValueName,
    0LL);
  UniqueTimestamp = CreativeFramework::CreativeEventStore::GetUniqueTimestamp(
                      v12,
                      (const unsigned __int16 *)&lpValueName,
                      v16);
  DoesKeyExist = UniqueTimestamp;
  if ( UniqueTimestamp < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)UniqueTimestamp);
LABEL_14:
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpValueName);
    goto LABEL_6;
  }
  lpData = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&lpData,
    0LL);
  CreativeEvent = CreativeFramework::CreativeEventStore::GetCreativeEvent(
                    a2,
                    (const unsigned __int16 *)v7,
                    a4,
                    (const unsigned __int16 *)&lpData,
                    v22);
  DoesKeyExist = CreativeEvent;
  if ( CreativeEvent < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)CreativeEvent);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpData);
    goto LABEL_14;
  }
  v19 = -1LL;
  do
    ++v19;
  while ( *((_WORD *)lpData + v19) );
  v20 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          (const WCHAR *)v12,
          lpValueName,
          lpData,
          (const unsigned __int16 *)v19);
  v11 = v20;
  if ( v20 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpData);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpValueName);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v20);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpData);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpValueName);
  }
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v25);
  return v11;
}

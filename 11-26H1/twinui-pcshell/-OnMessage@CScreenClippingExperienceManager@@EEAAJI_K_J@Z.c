/*
 * XREFs of ?OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z @ 0x1801D0E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039B9A0 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnMessage(CScreenClippingExperienceManager *this, int a2, int a3)
{
  const struct _tlgProvider_t *v6; // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  _DWORD *v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  v6 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v6 > 5u )
  {
    v8[0] = a2;
    v14 = v8;
    v15 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *((_QWORD *)v6 + 1);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v11 = &unk_1807F915B;
    v12 = 52;
    v13 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  if ( a3 == 88 )
    CScreenClippingExperienceManager::LaunchOrToggle((char *)this - 24, 3LL);
  return 0LL;
}

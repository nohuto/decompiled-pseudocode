/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180012004
 * Callers:
 *     ?ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x1800550EC (-ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18006A5C0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18010BA94 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  CEndpointCharacteristics *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rbx
  DWORD pid; // ebx
  GUID *p_Buf2; // rax
  __int64 v10; // rdx
  int v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch] BYREF
  CEndpointCharacteristics *v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  GUID Buf2; // [rsp+50h] [rbp-20h] BYREF
  DWORD v16; // [rsp+60h] [rbp-10h]

  v14 = 0LL;
  v11 = 0;
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a1,
         &v14) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 48LL))(v14, &v11) >= 0
    && v11 == 1 )
  {
    v13 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                         + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           1LL) >= 0 )
    {
      v4 = v13;
      v5 = (struct _RTL_CRITICAL_SECTION *)((char *)v13 + 320);
      EnterCriticalSection((LPCRITICAL_SECTION)v13 + 8);
      if ( v5 )
        LeaveCriticalSection(v5);
      v6 = *((_QWORD *)v4 + 49);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      *(_QWORD *)&Buf2.Data1 = *((_QWORD *)v4 + 48);
      v7 = (std::_Ref_count_base *)*((_QWORD *)v4 + 49);
      *(_QWORD *)Buf2.Data4 = v7;
      v12 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v13, a2, &v12);
      if ( v12 )
        CPolicyConfig::DisconnectHelper(a1);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    if ( v13 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  Buf2 = a2->fmtid;
  pid = a2->pid;
  v16 = pid;
  if ( !memcmp_0(&PKEY_AudioEndpoint_AvoidSelection, &Buf2, 0x10uLL) && pid == 1 )
  {
    *(_QWORD *)&Buf2.Data1 = 0LL;
    *(_DWORD *)Buf2.Data4 = 0;
    p_Buf2 = &Buf2;
    v10 = 2LL;
    do
    {
      LOWORD(p_Buf2->Data1) = 257;
      BYTE2(p_Buf2->Data1) = 1;
      p_Buf2 = (GUID *)((char *)p_Buf2 + 6);
      --v10;
    }
    while ( v10 );
    DynamicAudioEndpointManager::RefreshPublishedDefaults(g_DynamicAudioEndpointManager, (bool (*const)[6])&Buf2, 0);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}

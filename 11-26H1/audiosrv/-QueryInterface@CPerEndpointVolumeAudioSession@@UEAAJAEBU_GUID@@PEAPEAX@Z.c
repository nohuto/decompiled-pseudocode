/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048930
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CEFE0 (-QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CEFF0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF000 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF010 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF020 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF030 (-QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18001DE40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180048E04 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInspectable@@@Details.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        struct _GUID *a2,
        void **a3)
{
  CPerEndpointVolumeAudioSession *v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rax
  char *v6; // rcx
  int CanCastTo; // edi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  int v11; // eax

  v3 = this;
  v4 = 0;
  if ( !a3 )
    return 2147500035LL;
  v5 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
    v5 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
  if ( v5 )
  {
    *a3 = 0LL;
    if ( a2->Data1 )
    {
      if ( a2->Data1 != -1350114592
        || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
      {
        goto LABEL_7;
      }
      if ( *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
        {
          *a3 = this;
LABEL_39:
          CanCastTo = 0;
LABEL_14:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
          return (unsigned int)CanCastTo;
        }
LABEL_7:
        if ( a2->Data1 == -29802186 )
        {
          if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_fe394136_900b_469c_bdfc_4321bcd92f34.Data2
            || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_fe394136_900b_469c_bdfc_4321bcd92f34.Data4 )
          {
            goto LABEL_9;
          }
          v11 = *(_DWORD *)&GUID_fe394136_900b_469c_bdfc_4321bcd92f34.Data4[4];
        }
        else
        {
          if ( a2->Data1 != 31342451
            || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b.Data2
            || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b.Data4 )
          {
            goto LABEL_9;
          }
          v11 = *(_DWORD *)&GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b.Data4[4];
        }
        if ( *(_DWORD *)&a2->Data4[4] == v11 )
        {
          *a3 = (char *)this + 8;
          goto LABEL_39;
        }
LABEL_9:
        v6 = (char *)this + 16;
        if ( a2->Data1 == 56
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
          || (v6 = (char *)v3 + 24, a2->Data1 == 1845242312)
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4[4]
          || (v6 = (char *)v3 + 32, a2->Data1 == 1972882042)
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data4[4] )
        {
          *a3 = v6;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>::CanCastTo((char *)v3 + 40);
        }
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
        goto LABEL_14;
      }
    }
    else if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
           || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
           || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_7;
    }
    *a3 = this;
    (*(void (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)this + 8LL))(this);
    return v4;
  }
  v9 = *((_QWORD *)this + 7);
  while ( v9 >= 0 )
  {
    if ( (_DWORD)v9 != 0x7FFFFFFF )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v9 + 1, v9);
      if ( v10 != v9 )
        continue;
    }
    goto LABEL_56;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), (volatile int *)a2);
LABEL_56:
  *a3 = (void *)(((unsigned __int64)v3 + 920) & -(__int64)(v3 != 0LL));
  return 0LL;
}

/*
 * XREFs of ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039744
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18003CC84 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800421E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

void __fastcall CProcess::RegisteredForSoundLevelNotifications(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v11 = v3;
  if ( a3 == -1 || !a3 )
  {
    if ( a2 )
    {
      v7 = *(_DWORD *)(a1 + 504) + 1;
      *(_DWORD *)(a1 + 504) = v7;
      if ( v7 == 1 )
      {
        v8 = *(_DWORD *)(a1 + 448) | (1 << a3);
LABEL_11:
        *(_DWORD *)(a1 + 448) = v8;
      }
    }
    else if ( a3 == -1 )
    {
      *(_DWORD *)(a1 + 448) &= ~1u;
      *(_DWORD *)(a1 + 504) = 0;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 504);
      if ( v9 )
      {
        v10 = v9 - 1;
        *(_DWORD *)(a1 + 504) = v10;
        if ( !v10 )
        {
          v8 = *(_DWORD *)(a1 + 448) & ~(1 << a3);
          goto LABEL_11;
        }
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
}

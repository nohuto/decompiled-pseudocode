/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180084EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x18001FE2C (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008DE74 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::OnDeviceNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  const wchar_t *v6; // rdi
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  unsigned int v12; // ebx
  int v13; // r8d
  int v14; // r8d
  PnpDevice *v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned int v17; // eax
  HSTRING string; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]

  if ( !a2 || *(_QWORD *)a2 != a1 )
    return 0LL;
  v6 = 0LL;
  if ( !a3 )
  {
    v12 = 3;
    goto LABEL_24;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = 4;
LABEL_24:
    v6 = (const wchar_t *)(a4 + 24);
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = 2;
          v13 = v11 - 2;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 != 1 )
                return 0LL;
            }
            else
            {
              v12 = 1;
            }
          }
          else
          {
            v12 = 0;
          }
          v6 = (const wchar_t *)(a4 + 8);
          goto LABEL_25;
        }
        v12 = 8;
      }
      else
      {
        v12 = 7;
      }
    }
    else
    {
      v12 = 6;
    }
  }
  else
  {
    v12 = 5;
  }
  v15 = *(PnpDevice **)(a2 + 16);
  if ( !v15 )
  {
LABEL_25:
    v16 = (a4 + a5 - (unsigned __int64)v6) >> 1;
    if ( v16 <= 0xFFFFFFFF )
    {
      v17 = wcsnlen(v6, (a4 + a5 - (unsigned __int64)v6) >> 1);
      if ( v17 )
      {
        if ( v17 < v16 )
        {
          Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v6, v17);
          try
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 8))(v12, v21, *(_QWORD *)(a2 + 16));
          }
          catch ( ... )
          {
            return 0LL;
          }
        }
      }
    }
    return 0LL;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( PnpDevice::GetInterfacePath(v15, &string) >= 0 )
  {
    try
    {
      (*(void (__fastcall **)(_QWORD, HSTRING, _QWORD))(a2 + 8))(v12, string, *((_QWORD *)v15 + 18));
    }
    catch ( ... )
    {
    }
  }
  WindowsDeleteString(string);
  return 0LL;
}

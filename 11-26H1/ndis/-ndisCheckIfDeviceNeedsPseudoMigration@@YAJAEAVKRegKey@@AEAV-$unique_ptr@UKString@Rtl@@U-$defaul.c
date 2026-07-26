/*
 * XREFs of ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140167A00
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x140096C80 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1401382E4 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140139988 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140167C50 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsPseudoMigration(KRegKey *this, const struct _UNICODE_STRING **a2, _BYTE *a3)
{
  const UNICODE_STRING *v6; // rcx
  __int64 v7; // rdi
  int v8; // ebp
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int16 v12; // dx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int16 v16; // dx
  const wchar_t *v17; // rax
  __int16 v18; // di
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-58h] BYREF
  GUID Guid; // [rsp+40h] [rbp-48h] BYREF

  if ( ndisIsNetSetupV2Interface(*a2) || !ndisIsNetSetupV1Interface(*a2) )
  {
    *a3 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x38u,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (*a2)->Buffer);
    v6 = *a2;
    Guid = 0LL;
    v7 = 0x7FFFLL;
    v8 = -1073741811;
    if ( RtlGUIDFromString(v6, &Guid) >= 0 )
    {
      ValueName = 0LL;
      v9 = L"SuggestedInstanceId";
      v10 = 0x7FFFLL;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v10;
      }
      while ( v10 );
      v11 = -1073741811;
      if ( v10 )
      {
        v11 = 0;
        v12 = 2 * v10;
        ValueName.Buffer = L"SuggestedInstanceId";
        ValueName.Length = -2 - v12;
        ValueName.MaximumLength = -v12;
      }
      if ( v11 >= 0 )
        ZwSetValueKey(this->m_ptr, &ValueName, 0, 3u, &Guid, 0x10u);
    }
    ValueName = 0LL;
    v13 = L"MigratedFromNetSetupV1";
    v14 = 0x7FFFLL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v14;
    }
    while ( v14 );
    v15 = -1073741811;
    if ( v14 )
    {
      v15 = 0;
      v16 = 2 * v14;
      ValueName.Buffer = L"MigratedFromNetSetupV1";
      ValueName.Length = -2 - v16;
      ValueName.MaximumLength = -v16;
    }
    if ( v15 >= 0 )
      KRegKey::SetValueUlong(this, &ValueName, 1);
    ValueName = 0LL;
    v17 = L"NetCfgInstanceId";
    do
    {
      if ( !*v17 )
        break;
      ++v17;
      --v7;
    }
    while ( v7 );
    if ( v7 )
    {
      v8 = 0;
      v18 = 2 * v7;
      ValueName.Buffer = L"NetCfgInstanceId";
      ValueName.Length = -2 - v18;
      ValueName.MaximumLength = -v18;
    }
    if ( v8 >= 0 )
      ZwDeleteValueKey(this->m_ptr, &ValueName);
    *a3 = 1;
  }
  return 0LL;
}

/*
 * XREFs of ??$GetSettingValue@_K$0EA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEA_K_K@Z @ 0x180046644
 * Callers:
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x180052658 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A558 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::Details::GetSettingValue<unsigned __int64,64>(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        char a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  const wchar_t *v7; // rdi
  LSTATUS ValueW; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+64h] [rbp+Ch]

  v14 = HIDWORD(a1);
  v5 = a5;
  a5 = 0LL;
  v7 = a3;
  *v5 = 0LL;
  v13 = 8;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, a2, a3, 0x40u, 0LL, &a5, &v13);
  v10 = ValueW;
  if ( ValueW > 0 )
    v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v10 & 0x80000000) == 0 )
  {
    *v5 = a5;
    return 0LL;
  }
  if ( a4 && v10 == -2147024894 )
    return 0LL;
  if ( !v7 )
    v7 = &Src;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x51,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v10,
    (unsigned __int64)"RegKey: %ws %ws",
    (const char *)a2,
    v7);
  return v10;
}

/*
 * XREFs of ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140137010
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_S @ 0x140096C80 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A220 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsFullMigration(__int64 a1, __int64 a2, _BYTE *a3)
{
  PVOID v5; // rcx
  const wchar_t *v6; // rax
  __int64 v8; // r9
  int v9; // ebx
  __int16 v10; // r9
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  P = 0LL;
  v6 = L"RetiredNetCfgInstanceId";
  v13 = 0LL;
  v8 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v8;
  }
  while ( v8 );
  v9 = -1073741811;
  if ( v8 )
  {
    v9 = 0;
    v10 = 2 * v8;
    *((_QWORD *)&v13 + 1) = L"RetiredNetCfgInstanceId";
    LOWORD(v13) = -2 - v10;
    WORD1(v13) = -v10;
  }
  if ( v9 >= 0 )
  {
    v11 = KRegKey::QueryValueString(a1, &v13, &P);
    v5 = P;
    v9 = v11;
  }
  if ( v9 == -1073741772 )
  {
    *a3 = 0;
    if ( v5 )
      ExFreePoolWithTag(v5, 0x7274534Bu);
    return 0LL;
  }
  else if ( v9 )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x39u,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        *(const wchar_t **)(*(_QWORD *)a2 + 8LL));
    *a3 = 1;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&P, 0LL);
    return 0LL;
  }
}

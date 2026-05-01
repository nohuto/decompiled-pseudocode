/*
 * XREFs of ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802915EC (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x1800325F4 (-_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 *     ??$_Resize_and_overwrite@V_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KV_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@Z @ 0x18030FCB8 (--$_Resize_and_overwrite@V_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_@@@-$basic_string@GU-$char_tr.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::filesystem::operator/(_OWORD *a1, _QWORD *a2, std::filesystem *a3)
{
  _QWORD *v4; // r9
  __int64 v6; // r11
  std::filesystem *v7; // r10
  unsigned __int16 *v8; // r10
  __int64 v9; // r8

  v4 = a2;
  v6 = *((_QWORD *)a3 + 2);
  v7 = a3;
  if ( *((_QWORD *)a3 + 3) > 7uLL )
    v7 = *(std::filesystem **)a3;
  if ( !v6
    || std::filesystem::_Has_drive_letter_prefix(v7, (char *)v7 + 2 * v6, (const unsigned __int16 *const)a3)
    || (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v8) )
  {
    std::wstring::wstring((__int64)a1, v4);
    std::filesystem::path::operator/=(a1, a3);
    return a1;
  }
  v9 = v4[2];
  if ( v4[3] > 7uLL )
    v4 = (_QWORD *)*v4;
  if ( v9 == 2 )
  {
    if ( (*(_DWORD *)v4 & 0xFFFFFFDF) - 3801153 < 0x1A )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v9 )
LABEL_12:
    std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)v4 + v9 - 1));
LABEL_13:
  *a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Resize_and_overwrite<_lambda_0c61b6091c0f476b83bd2ddad44c8ebc_>(a1);
  return a1;
}

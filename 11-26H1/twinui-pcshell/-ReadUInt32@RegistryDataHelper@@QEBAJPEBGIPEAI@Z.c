/*
 * XREFs of ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1802BCE34
 * Callers:
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x1801E1B38 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z @ 0x180231914 (--$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z.c)
 */

__int64 __fastcall RegistryDataHelper::ReadUInt32(
        RegistryDataHelper *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RegistryDataHelper::ReadData<unsigned long,24>((__int64)this, a2, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (int)"shellcommon\\internal\\shell\\inc\\RegistryDataHelper.h",
    (const char *)(unsigned int)v4);
  return v5;
}

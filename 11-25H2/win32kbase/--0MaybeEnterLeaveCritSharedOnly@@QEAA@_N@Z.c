/*
 * XREFs of ??0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z @ 0x14008A1FC
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 */

MaybeEnterLeaveCritSharedOnly *__fastcall MaybeEnterLeaveCritSharedOnly::MaybeEnterLeaveCritSharedOnly(
        MaybeEnterLeaveCritSharedOnly *this,
        char a2)
{
  *(_BYTE *)this = a2;
  if ( a2 )
    EnterSharedCrit(1LL, 1LL);
  return this;
}

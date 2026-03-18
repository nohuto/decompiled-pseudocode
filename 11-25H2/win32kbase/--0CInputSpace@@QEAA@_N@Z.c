/*
 * XREFs of ??0CInputSpace@@QEAA@_N@Z @ 0x14013493C
 * Callers:
 *     NtConfigureInputSpace @ 0x1401B9DA0 (NtConfigureInputSpace.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x140134970 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, bool a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  CInputSpace::CInputSpace(this, (const struct INPUT_SPACE *)&v4, a2);
  return this;
}

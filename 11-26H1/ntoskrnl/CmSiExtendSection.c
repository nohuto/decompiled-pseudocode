/*
 * XREFs of CmSiExtendSection @ 0x1404F1654
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1408B8788 (HvpViewMapExtendStorage.c)
 * Callees:
 *     ZwExtendSection @ 0x140725150 (ZwExtendSection.c)
 */

__int64 __fastcall CmSiExtendSection(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ZwExtendSection(a1, &v3);
}

/*
 * XREFs of IsMiPEnabledForThread @ 0x14015DEF8
 * Callers:
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x14015D8C0 (xxxMNEndMenuStateInternal.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x14015DDD0 (NtUserAutoPromoteMouseInPointer.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x14015DE50 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     NtUserPromoteMouseInPointer @ 0x14029B9A0 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 808LL) & 4) != 0 || (*(_DWORD *)(a1 + 1360) & 0x6000000) != 0;
}

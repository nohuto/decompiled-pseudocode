/*
 * XREFs of NVMeVersionCheck @ 0x1400114D0
 * Callers:
 *     NVMeControllerSupportsUUIDList @ 0x14000FE50 (NVMeControllerSupportsUUIDList.c)
 *     NVMeVersionCheck2 @ 0x140011480 (NVMeVersionCheck2.c)
 *     NVMeNameSpaceIdentify @ 0x140027A44 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  bool v4; // cf
  bool v5; // zf

  v3 = *(unsigned __int16 *)(a1 + 186);
  v4 = v3 < a2;
  v5 = v3 == a2;
  if ( v3 == a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 185) >= a3 )
      return 1;
    v4 = v3 < a2;
    v5 = v3 == a2;
  }
  return !v4 && !v5;
}

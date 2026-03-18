/*
 * XREFs of RIMIsParentCommon @ 0x14012AAD0
 * Callers:
 *     RIMFindInputDeviceForConfig @ 0x14012A394 (RIMFindInputDeviceForConfig.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMFindConfigDeviceForInput @ 0x1401E0400 (RIMFindConfigDeviceForInput.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401E04B8 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401E06B0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsParentCommon(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  unsigned int v5; // edi
  unsigned int v6; // eax

  v5 = 0;
  if ( *(_WORD *)(a3 + 110) == a4 && *(_WORD *)(a3 + 112) == a5 )
  {
    v6 = *(_DWORD *)(a1 + 312);
    if ( v6 == *(_DWORD *)(a2 + 312)
      && (!v6 || RtlCompareMemory(*(const void **)(a1 + 304), *(const void **)(a2 + 304), v6) == v6) )
    {
      return 1;
    }
  }
  return v5;
}

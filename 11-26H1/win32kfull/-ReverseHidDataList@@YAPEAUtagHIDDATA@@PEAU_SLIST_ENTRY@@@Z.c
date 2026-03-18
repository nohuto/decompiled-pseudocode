/*
 * XREFs of ?ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z @ 0x140054258
 * Callers:
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x140053CD4 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 * Callees:
 *     <none>
 */

struct tagHIDDATA *__fastcall ReverseHidDataList(struct _SLIST_ENTRY *a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 i; // r8
  __int64 v3; // rdx

  v1 = 0LL;
  for ( i = (unsigned __int64)&a1[-2] & -(__int64)(a1 != 0LL); i; i = (v3 - 32) & -(__int64)(v3 != 0) )
  {
    v3 = *(_QWORD *)(i + 32);
    *(_QWORD *)(i + 32) = v1;
    v1 = i;
  }
  return (struct tagHIDDATA *)v1;
}

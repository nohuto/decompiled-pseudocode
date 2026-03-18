/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x1405C2484
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405BF024 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1405BF1A0 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405BFF04 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1405C09CC (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     VslStartSecurePageIteration @ 0x140518844 (VslStartSecurePageIteration.c)
 *     HvlpGetPageListIterator @ 0x1405C2308 (HvlpGetPageListIterator.c)
 *     HvlpSetupPageListIteration @ 0x1405C23D8 (HvlpSetupPageListIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(
        int a1,
        unsigned int a2,
        char *a3,
        void *a4,
        unsigned int a5,
        struct _LIST_ENTRY **a6)
{
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v9; // rax
  struct _LIST_ENTRY **v11; // r12
  struct _LIST_ENTRY *Blink; // r14
  unsigned int v13; // ebx
  __int128 Flink; // rtt
  __int64 v15; // rbp
  LONGLONG v16; // rax
  unsigned int v17; // ebx
  char *v18; // r15
  __int64 v19; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v21; // rax
  int started; // edx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *PageListIterator; // rax
  __int64 v24; // [rsp+30h] [rbp-38h]

  v9 = HvlpSetupPageListIteration(a1, 1);
  if ( !v9 )
    return 3221225473LL;
  v11 = a6;
  Blink = v9->ApcState.ApcListHead[0].Blink;
  v13 = 0;
  Flink = (__int64)v9->ApcState.ApcListHead[1].Flink;
  *a6 = Blink;
  v24 = Flink / 4096;
  v15 = v24;
  v16 = 0LL;
  if ( a3 )
  {
    v17 = 0x200000;
    v18 = a3;
    if ( a5 <= 0x200000 )
      v17 = a5;
    v13 = v17 >> 12;
    if ( v13 )
    {
      v19 = v13;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v18);
        v18 += 4096;
        Blink->Flink = (struct _LIST_ENTRY *)(PhysicalAddress.QuadPart / 4096);
        Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
        --v19;
      }
      while ( v19 );
      v11 = a6;
      v15 = v24;
    }
    v21 = MmGetPhysicalAddress(a4);
    *v11 = (struct _LIST_ENTRY *)a3;
    v16 = v21.QuadPart / 4096;
  }
  started = VslStartSecurePageIteration(a1 == 0, v15, v16, v13, a2);
  if ( started < 0 )
  {
    PageListIterator = HvlpGetPageListIterator(a1);
    PageListIterator->ApcState.ApcListHead[0].Blink = 0LL;
    LOWORD(PageListIterator->ApcState.ApcListHead[0].Flink) = 0;
    *(_WORD *)&PageListIterator->ApcStateFill[3] = 0;
    PageListIterator->ApcStateFill[2] = 0;
  }
  return (unsigned int)started;
}

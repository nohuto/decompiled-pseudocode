/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x1405C4CF4
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405C1894 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1405C1A10 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405C2774 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1405C323C (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     VslStartSecurePageIteration @ 0x1405122B4 (VslStartSecurePageIteration.c)
 *     HvlpGetPageListIterator @ 0x1405C4B78 (HvlpGetPageListIterator.c)
 *     HvlpSetupPageListIteration @ 0x1405C4C48 (HvlpSetupPageListIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(
        int a1,
        unsigned int a2,
        char *a3,
        void *a4,
        unsigned int a5,
        LONGLONG **a6)
{
  volatile __int64 *v9; // rax
  LONGLONG **v11; // r12
  LONGLONG *v12; // r14
  unsigned int v13; // ebx
  __int128 v14; // rtt
  __int64 v15; // rbp
  LONGLONG v16; // rax
  unsigned int v17; // ebx
  char *v18; // r15
  __int64 v19; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v21; // rax
  int started; // edx
  volatile __int64 *PageListIterator; // rax
  __int64 v24; // [rsp+30h] [rbp-38h]

  v9 = HvlpSetupPageListIteration(a1, 1);
  if ( !v9 )
    return 3221225473LL;
  v11 = a6;
  v12 = (LONGLONG *)*((_QWORD *)v9 + 1);
  v13 = 0;
  v14 = *((__int64 *)v9 + 2);
  *a6 = v12;
  v24 = v14 / 4096;
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
        *v12++ = PhysicalAddress.QuadPart / 4096;
        --v19;
      }
      while ( v19 );
      v11 = a6;
      v15 = v24;
    }
    v21 = MmGetPhysicalAddress(a4);
    *v11 = (LONGLONG *)a3;
    v16 = v21.QuadPart / 4096;
  }
  started = VslStartSecurePageIteration(a1 == 0, v15, v16, v13, a2);
  if ( started < 0 )
  {
    PageListIterator = HvlpGetPageListIterator(a1);
    *((_QWORD *)PageListIterator + 1) = 0LL;
    *(_WORD *)PageListIterator = 0;
    *(_WORD *)((char *)PageListIterator + 3) = 0;
    *((_BYTE *)PageListIterator + 2) = 0;
  }
  return (unsigned int)started;
}

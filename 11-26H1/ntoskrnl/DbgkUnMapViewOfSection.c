/*
 * XREFs of DbgkUnMapViewOfSection @ 0x140995428
 * Callers:
 *     MiFreeEnclaveModules @ 0x140776CE8 (MiFreeEnclaveModules.c)
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpSuppressDbgMsg @ 0x14078D460 (DbgkpSuppressDbgMsg.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *v4; // rcx
  __int64 Teb; // rcx
  _BYTE v6[224]; // [rsp+58h] [rbp-E0h] BYREF

  memset_0(v6, 0, 0xD8uLL);
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( a1[1].UserTime )
      {
        v4 = KeGetCurrentThread();
        if ( (v4->MiscFlags & 0x400) != 0 )
          return DbgkpSendApiMessage(a1);
        if ( v4->ApcStateIndex == 1 )
          return DbgkpSendApiMessage(a1);
        Teb = (__int64)v4->Teb;
        if ( !Teb )
          return DbgkpSendApiMessage(a1);
        if ( a1 != CurrentThread->Process )
          return DbgkpSendApiMessage(a1);
        result = DbgkpSuppressDbgMsg(Teb);
        if ( !(_DWORD)result )
          return DbgkpSendApiMessage(a1);
      }
    }
  }
  return result;
}

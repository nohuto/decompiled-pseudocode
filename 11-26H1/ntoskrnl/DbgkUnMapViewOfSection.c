/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1409C4448
 * Callers:
 *     MiFreeEnclaveModules @ 0x140773CE8 (MiFreeEnclaveModules.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     DbgkpSuppressDbgMsg @ 0x14078A930 (DbgkpSuppressDbgMsg.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *v6; // rcx
  __int64 Teb; // rcx
  _OWORD v8[2]; // [rsp+20h] [rbp-118h] BYREF
  __int128 v9; // [rsp+40h] [rbp-F8h]
  __int64 v10; // [rsp+50h] [rbp-E8h]
  _BYTE v11[224]; // [rsp+58h] [rbp-E0h] BYREF

  memset_0(v11, 0, 0xD8uLL);
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( a1[1].UserTime )
      {
        v6 = KeGetCurrentThread();
        if ( (v6->MiscFlags & 0x400) != 0
          || v6->ApcStateIndex == 1
          || (Teb = (__int64)v6->Teb) == 0
          || a1 != CurrentThread->Process
          || (result = DbgkpSuppressDbgMsg(Teb), !(_DWORD)result) )
        {
          v10 = a2;
          v9 = 0LL;
          v8[0] = 0x800380010uLL;
          DWORD2(v9) = 6;
          v8[1] = 0LL;
          return DbgkpSendApiMessage(a1, 1, (__int64)v8);
        }
      }
    }
  }
  return result;
}

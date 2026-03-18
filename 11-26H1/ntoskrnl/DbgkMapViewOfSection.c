/*
 * XREFs of DbgkMapViewOfSection @ 0x1409C37E4
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     NtMapViewOfSection @ 0x1409C28A0 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1409F1570 (MiMapViewOfSectionExCommon.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     DbgkpSuppressDbgMsg @ 0x14078A930 (DbgkpSuppressDbgMsg.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     DbgkpSectionToFileHandle @ 0x140B260F0 (DbgkpSectionToFileHandle.c)
 */

int __fastcall DbgkMapViewOfSection(
        _KPROCESS *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rdi
  struct _KTHREAD *v12; // rbx
  __int64 Teb; // rbx
  bool IsUserAddress; // di
  _DWORD *v15; // rbx
  int ULongFromUser; // eax
  int v17; // eax
  _DWORD v19[12]; // [rsp+30h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-108h]
  unsigned __int64 v21; // [rsp+68h] [rbp-100h]
  int v22; // [rsp+70h] [rbp-F8h]
  int v23; // [rsp+74h] [rbp-F4h]
  __int64 v24; // [rsp+78h] [rbp-F0h]
  _BYTE v25[232]; // [rsp+80h] [rbp-E8h] BYREF

  memset_0(v25, 0, 0xC0uLL);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v11 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)&v11[1].SwapListEntry + 2);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      if ( a1[1].UserTime )
      {
        v12 = KeGetCurrentThread();
        if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = (__int64)v12->Teb;
        memset_0(v19, 0, 0x50uLL);
        if ( Teb && a1 == v11->Process )
        {
          LODWORD(CurrentThread) = DbgkpSuppressDbgMsg(Teb);
          if ( (_DWORD)CurrentThread )
            return (int)CurrentThread;
          v24 = Teb + 40;
        }
        if ( a2 )
          Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
        else
          Handle = 0LL;
        v21 = a3;
        v22 = a6;
        v23 = a7;
        IsUserAddress = MmIsUserAddress(a3);
        if ( a3 )
          v15 = RtlImageNtHeader(a3);
        else
          v15 = 0LL;
        if ( v15 )
        {
          if ( IsUserAddress )
            ULongFromUser = RtlReadULongFromUser(v15 + 3);
          else
            ULongFromUser = v15[3];
          v22 = ULongFromUser;
          if ( IsUserAddress )
            v17 = RtlReadULongFromUser(v15 + 4);
          else
            v17 = v15[4];
          v23 = v17;
        }
        v19[0] = 5242920;
        v19[1] = 8;
        v19[10] = 5;
        LODWORD(CurrentThread) = DbgkpSendApiMessage(a1, 1, (__int64)v19);
        if ( Handle )
          LODWORD(CurrentThread) = ObCloseHandle(Handle, 0);
      }
    }
  }
  return (int)CurrentThread;
}

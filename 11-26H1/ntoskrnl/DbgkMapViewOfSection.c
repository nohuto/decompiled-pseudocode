/*
 * XREFs of DbgkMapViewOfSection @ 0x1409947C4
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     DbgkpSuppressDbgMsg @ 0x14078D460 (DbgkpSuppressDbgMsg.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140B28350 (DbgkpSectionToFileHandle.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *a1, __int64 a2, void *a3, __int64 a4, __int64 a5, int a6, int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rdi
  struct _KTHREAD *v12; // rbx
  __int64 Teb; // rbx
  bool IsUserAddress; // di
  PIMAGE_NT_HEADERS v15; // rbx
  int ULongFromUser; // eax
  int NumberOfSymbols; // eax
  _DWORD v19[12]; // [rsp+30h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-108h]
  void *v21; // [rsp+68h] [rbp-100h]
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
        IsUserAddress = MmIsUserAddress((unsigned __int64)a3);
        if ( a3 )
          v15 = RtlImageNtHeader(a3);
        else
          v15 = 0LL;
        if ( v15 )
        {
          if ( IsUserAddress )
            ULongFromUser = RtlReadULongFromUser(&v15->FileHeader.PointerToSymbolTable);
          else
            ULongFromUser = v15->FileHeader.PointerToSymbolTable;
          v22 = ULongFromUser;
          if ( IsUserAddress )
            NumberOfSymbols = RtlReadULongFromUser(&v15->FileHeader.NumberOfSymbols);
          else
            NumberOfSymbols = v15->FileHeader.NumberOfSymbols;
          v23 = NumberOfSymbols;
        }
        v19[0] = 5242920;
        v19[1] = 8;
        v19[10] = 5;
        LODWORD(CurrentThread) = DbgkpSendApiMessage(a1);
        if ( Handle )
          LODWORD(CurrentThread) = ObCloseHandle(Handle, 0);
      }
    }
  }
  return (int)CurrentThread;
}

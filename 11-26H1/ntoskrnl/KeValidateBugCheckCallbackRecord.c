/*
 * XREFs of KeValidateBugCheckCallbackRecord @ 0x1405E9B24
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1405CB4D8 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405CB638 (IopDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1405CEF80 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405D0A40 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405EAF24 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405EB0FC (KiInvokeBugCheckEntryCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IoIsPartialDumpRetry @ 0x140503934 (IoIsPartialDumpRetry.c)
 */

bool __fastcall KeValidateBugCheckCallbackRecord(__int64 a1, int a2, _QWORD *a3)
{
  bool v3; // di
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rcx
  bool result; // al

  v3 = 0;
  v7 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12;
    if ( v9 )
    {
      while ( MmIsAddressValidEx(v8) )
      {
        v8 += 4096LL;
        if ( !--v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( *(_QWORD *)(a1 + 8) == *a3 )
      {
        v7 = a1;
        if ( IoIsPartialDumpRetry() )
        {
          v10 = *(_BYTE *)(a1 + 44);
          if ( v10 == 3 || v10 == 4 )
            *(_BYTE *)(a1 + 44) = 1;
        }
        if ( *(_BYTE *)(a1 + 44) == 1 )
        {
          v11 = *(int *)(a1 + 40);
          v12 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) == v12 + v11 + *(_QWORD *)(a1 + 24) && (_DWORD)v11 == a2 )
            v3 = MmIsAddressValidEx(v12) != 0;
        }
      }
    }
  }
  result = v3;
  *a3 = v7;
  return result;
}

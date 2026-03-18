/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x1405BFF04
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1405BFEB0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1405C0130 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140509E84 (IoIsPartialDumpRetry.c)
 *     HvlpAddCrashdumpAreaPages @ 0x1405C0764 (HvlpAddCrashdumpAreaPages.c)
 *     HvlpEndSecurePageListIteration @ 0x1405C2188 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1405C2484 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x1405C2FCC (VslGetSecurePageList.c)
 */

char __fastcall HvlAddSecurePagesCallbackRoutine(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  struct _LIST_ENTRY **p_Blink; // rax
  __int64 v8; // rdx
  char v9; // bp
  _QWORD *v10; // r9
  unsigned __int8 v11; // dl
  int v12; // ebx
  int v13; // ebx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  v16 = 0LL;
  v4 = a1 | 4;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  LOBYTE(p_Blink) = IoIsPartialDumpRetry();
  v9 = (char)p_Blink;
  if ( *v10 )
  {
    if ( VslpReservedTransferLock.WaitBlockFill7[155] == v4 )
      goto LABEL_6;
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    *(_QWORD *)a4 = 0LL;
  }
  *(_OWORD *)&VslpReservedTransferLock.WaitBlockFill11[152] = 0LL;
  *(_OWORD *)&VslpReservedTransferLock.WaitBlockFill11[168] = 0LL;
  *(_OWORD *)&VslpReservedTransferLock.LastXStateSaveDebugInfo = 0LL;
  LODWORD(p_Blink) = HvlpStartSecurePageListIteration(1LL, v4, 0LL, 0LL, 0, &v16);
  if ( (int)p_Blink < 0 )
    return (char)p_Blink;
  *(_QWORD *)&VslpReservedTransferLock.ThreadFlags2 = v16;
  p_Blink = &VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Blink;
  VslpReservedTransferLock.WaitBlockFill7[155] = v4;
  VslpReservedTransferLock.WaitBlockFill7[152] = 1;
  *(_QWORD *)a4 = &VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Blink;
LABEL_6:
  if ( VslpReservedTransferLock.WaitBlockFill7[152] )
  {
    if ( VslpReservedTransferLock.WaitBlockFill7[153]
      || (LOBYTE(v8) = 1, LOBYTE(p_Blink) = HvlpAddCrashdumpAreaPages(a4, v8), !(_BYTE)p_Blink) )
    {
      if ( VslpReservedTransferLock.WaitBlockFill7[154]
        || (LOBYTE(p_Blink) = HvlpAddCrashdumpAreaPages(a4, 0LL), !(_BYTE)p_Blink) )
      {
        if ( !v9 || a1 == 2 || a1 == 8 || (a1 == 1 || a1 == 16) && *(_DWORD *)(a4 + 12) == 395 )
        {
          do
          {
            while ( !LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo) )
            {
              LOBYTE(v15) = 0;
              if ( (int)VslGetSecurePageList(0LL, 0LL, 0LL, &v15) < 0 )
                goto LABEL_27;
              LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo) = *(unsigned __int16 *)(*(_QWORD *)&VslpReservedTransferLock.ThreadFlags2
                                                                                              + 8LL);
              VslpReservedTransferLock.Spare18 = *(_QWORD *)&VslpReservedTransferLock.ThreadFlags2 + 16LL;
            }
            *(_QWORD *)(a4 + 24) = (*(_QWORD *)VslpReservedTransferLock.WaitBlock[3].Object >> 40) + 1LL;
            LOBYTE(p_Blink) = -1;
            *(_QWORD *)(a4 + 16) = *(_QWORD *)VslpReservedTransferLock.WaitBlock[3].Object & 0xFFFFFFFFFFLL;
            VslpReservedTransferLock.Spare18 += 8LL;
            --LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo);
          }
          while ( !*(_QWORD *)(a4 + 24) );
          *(_DWORD *)(a4 + 8) = -2147483646;
          v12 = a1 - 1;
          if ( v12 && ((v13 = v12 - 1) == 0 || v13 == 6) )
            *(_DWORD *)(a4 + 8) = -2147483614;
          else
            *(_DWORD *)(a4 + 8) = -2147483630;
        }
        else
        {
LABEL_27:
          LOBYTE(p_Blink) = HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
          VslpReservedTransferLock.WaitBlockFill7[152] = 0;
        }
      }
      else
      {
        VslpReservedTransferLock.WaitBlockFill7[154] = 1;
      }
    }
    else
    {
      VslpReservedTransferLock.WaitBlockFill7[153] = v11;
    }
  }
  return (char)p_Blink;
}

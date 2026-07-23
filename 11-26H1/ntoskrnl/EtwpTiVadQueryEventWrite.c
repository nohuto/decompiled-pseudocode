/*
 * XREFs of EtwpTiVadQueryEventWrite @ 0x14025A2AC
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140259188 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogSetContextThread @ 0x140A84C80 (EtwTiLogSetContextThread.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x14025A374 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpTiFillZeroVad @ 0x14048BC90 (EtwpTiFillZeroVad.c)
 */

NTSTATUS __fastcall EtwpTiVadQueryEventWrite(
        PEVENT_DATA_DESCRIPTOR UserData,
        int a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR *v8; // r10
  const GUID *ActivityId; // r11
  __int64 v10; // rax
  ULONG UserDataCount; // r8d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v8 = UserData;
  ActivityId = 0LL;
  v17 = MEMORY[0xFFFFF78000000014];
  v10 = a3;
  UserDataCount = a3 + 1;
  v10 *= 2LL;
  *(&UserData->Ptr + v10) = (ULONGLONG)&v17;
  *((_QWORD *)&UserData->Size + v10) = 8LL;
  if ( a8 )
    return EtwpTiAsyncVadQueryEventWrite((_DWORD)UserData, a2, UserDataCount, a4, a5, a6, (__int64)EventDescriptor);
  if ( a6 )
  {
    v13 = a6;
    do
    {
      v14 = EtwpTiFillZeroVad(&v8[UserDataCount], v13);
      UserDataCount = v14 + v15;
      v13 = v16 - 1;
    }
    while ( v13 );
  }
  return EtwWriteEx(EtwThreatIntProvRegHandle, EventDescriptor, 0LL, 0, ActivityId, ActivityId, UserDataCount, v8);
}

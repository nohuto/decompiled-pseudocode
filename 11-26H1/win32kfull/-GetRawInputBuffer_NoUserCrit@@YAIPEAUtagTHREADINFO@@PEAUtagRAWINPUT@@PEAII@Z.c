/*
 * XREFs of ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x140053CD4
 * Callers:
 *     NtUserGetRawInputBuffer @ 0x140053C50 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x140053EE4 (-GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z.c)
 *     ?ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z @ 0x140054258 (-ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140094328 (-CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall GetRawInputBuffer_NoUserCrit(
        union _SLIST_HEADER *a1,
        struct tagRAWINPUT *a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v7; // esi
  struct tagHIDDATA **v8; // r14
  struct _SLIST_ENTRY *v9; // rax
  struct tagHIDDATA *v10; // rax
  _QWORD *p_Alignment; // rcx
  struct tagHIDDATA *i; // rdx
  struct tagHIDDATA *j; // r15
  unsigned int v14; // eax
  struct tagHIDDATA *v15; // rcx
  _QWORD *k; // rax
  unsigned int v18; // [rsp+30h] [rbp-58h] BYREF
  union _SLIST_HEADER *v19; // [rsp+38h] [rbp-50h]
  unsigned int v20[8]; // [rsp+40h] [rbp-48h] BYREF
  struct tagRAWINPUT *v21; // [rsp+98h] [rbp+10h] BYREF

  v21 = a2;
  v20[0] = 0;
  v18 = 0;
  v7 = 0;
  if ( SLODWORD(a1[74].Alignment) > 500 )
  {
    CleanOutOldInputMessages((struct tagTHREADINFO *)a1);
    if ( LODWORD(a1[74].Alignment) )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 16629LL);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(a1[30].Alignment + 8), 0xFFFFFBFF);
  v8 = (struct tagHIDDATA **)&a1[73];
  v19 = a1 + 73;
  if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
  {
    FlushPostedRawInput(a1);
  }
  else
  {
    v9 = ExpInterlockedFlushSList(a1 + 72);
    v10 = ReverseHidDataList(v9);
    p_Alignment = &a1[73].Alignment;
    for ( i = *v8; i; i = (struct tagHIDDATA *)*((_QWORD *)i + 4) )
      p_Alignment = (_QWORD *)((char *)i + 32);
    *p_Alignment = v10;
  }
  for ( j = 0LL; ; j = v15 )
  {
    if ( !*v8 || (v14 = GRIB_CopyHidData(*v8, v20, &v18, &v21, a4)) == 0 )
    {
      if ( a4 <= v18 )
      {
        if ( v21 )
        {
          v7 = -1;
          UserSetLastError(122);
          goto LABEL_27;
        }
      }
      else if ( v21 )
      {
        _InterlockedExchange(
          (volatile __int32 *)(a1[30].Alignment + 20),
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        goto LABEL_20;
      }
      v7 = 0;
LABEL_27:
      RtlWriteULongToUser(a3, v18);
      goto LABEL_20;
    }
    if ( v14 != 1 )
      break;
    ++v7;
    v15 = *v8;
    *v8 = (struct tagHIDDATA *)*((_QWORD *)*v8 + 4);
    *((_QWORD *)v15 + 4) = 0LL;
    if ( j )
    {
      k = (_QWORD *)((char *)j + 32);
    }
    else
    {
      for ( k = &a1[73].Region; *k; k = (_QWORD *)(*k + 32LL) )
        ;
    }
    *k = v15;
    ++LODWORD(a1[74].Alignment);
  }
  v7 = -1;
LABEL_20:
  if ( *v8 )
    SetWakeBit(a1, 1024LL);
  return v7;
}

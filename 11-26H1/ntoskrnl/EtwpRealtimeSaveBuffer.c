/*
 * XREFs of EtwpRealtimeSaveBuffer @ 0x140A14D18
 * Callers:
 *     EtwpRealtimeUpdateReferenceTime @ 0x140836280 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140A12CDC (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpFlushBuffer @ 0x140A13E4C (EtwpFlushBuffer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x14082B8C8 (EtwpEventWriteTemplateBackingFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B377A8 (EtwpEventWriteTemplateAdmin.c)
 */

__int64 __fastcall EtwpRealtimeSaveBuffer(__int64 a1, _WORD *a2)
{
  signed __int64 v2; // r8
  LONGLONG *v3; // r14
  LARGE_INTEGER v4; // rax
  LONGLONG *v5; // rsi
  LONGLONG v6; // rbx
  __int64 QuadPart; // rdx
  _DWORD *v10; // rbp
  __int64 Length; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  LONGLONG *v16; // r9
  NTSTATUS v17; // r15d
  LONGLONG v18; // r8
  int v19; // ecx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int IoStatusBlock; // [rsp+20h] [rbp-68h]
  int IoStatusBlocka; // [rsp+20h] [rbp-68h]
  struct _IO_STATUS_BLOCK v28; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 392);
  v3 = (LONGLONG *)(a1 + 384);
  v4 = *(LARGE_INTEGER *)(a1 + 384);
  v5 = (LONGLONG *)(a1 + 400);
  v6 = *(_QWORD *)(a1 + 400);
  ByteOffset = v4;
  QuadPart = v4.QuadPart;
  v28 = 0LL;
  v10 = a2 + 24;
  if ( v4.QuadPart >= v2 )
  {
    Length = (unsigned int)*v10;
    v16 = (LONGLONG *)(a1 + 384);
    if ( v4.QuadPart + Length > *(_QWORD *)(a1 + 416) )
    {
      QuadPart = 72LL;
      v16 = (LONGLONG *)(a1 + 384);
      ByteOffset.QuadPart = 72LL;
      v5 = (LONGLONG *)(a1 + 400);
      v6 = v4.QuadPart;
    }
    if ( QuadPart >= v2 )
      goto LABEL_11;
    v3 = v16;
  }
  LODWORD(Length) = *v10;
  if ( QuadPart + (unsigned int)*v10 >= v2 )
  {
    ++*(_DWORD *)(a1 + 260);
    *(_DWORD *)(a1 + 448) = 2;
    if ( *(int *)(a1 + 16) >= 0 )
      _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_BACKING_FILE_FULL) )
      EtwpEventWriteTemplateBackingFile(
        v13,
        v12,
        v14,
        (unsigned __int16 *)(a1 + 136),
        IoStatusBlock,
        *(_DWORD *)(a1 + 12));
    return 3221225864LL;
  }
LABEL_11:
  v17 = ZwWriteFile(*(HANDLE *)(a1 + 360), 0LL, 0LL, 0LL, &v28, a2, Length, &ByteOffset, 0LL);
  if ( v17 < 0 )
  {
    ++*(_DWORD *)(a1 + 260);
    *(_DWORD *)(a1 + 448) = 2;
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_WRITE_FAILED) )
      EtwpEventWriteTemplateAdmin(
        a1 + 368,
        (unsigned int)&ETW_EVENT_WRITE_FAILED,
        v22,
        a1 + 136,
        a1 + 368,
        v17,
        *(_DWORD *)(a1 + 12));
  }
  else
  {
    v18 = ByteOffset.QuadPart + (unsigned int)*v10;
    v19 = *(_DWORD *)(a1 + 236);
    *v3 = v18;
    if ( v6 <= v18 )
      v6 = v18;
    v20 = (unsigned int)(*(_DWORD *)(a1 + 4) * v19);
    *v5 = v6;
    *(_QWORD *)(a1 + 408) += (unsigned int)*v10;
    v21 = *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408);
    ++*(_DWORD *)(a1 + 424);
    if ( v21 <= v20 && *(int *)(a1 + 16) >= 0 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_BACKING_FILE_FULL) )
        EtwpEventWriteTemplateBackingFile(
          v24,
          v23,
          v25,
          (unsigned __int16 *)(a1 + 136),
          IoStatusBlocka,
          *(_DWORD *)(a1 + 12));
    }
    if ( !v17 )
    {
      if ( a2[27] == 6 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x10000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xEFFFFFFF);
    }
  }
  return (unsigned int)v17;
}

/*
 * XREFs of EtwEventWriteString @ 0x18008D980
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl EtwEventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String)
{
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  UCHAR v12; // al
  bool v13; // r13
  UCHAR v14; // al
  bool v15; // di
  _GUID ActivityId; // xmm0
  __int64 v18; // rax
  ULONG v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rdx
  NTSTATUS v23; // eax
  __int128 v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE Fields[4]; // [rsp+68h] [rbp-98h] BYREF
  int v26; // [rsp+6Ch] [rbp-94h]
  __int128 v27; // [rsp+90h] [rbp-70h] BYREF
  _GUID v28; // [rsp+A8h] [rbp-58h] BYREF
  char v29; // [rsp+B8h] [rbp-48h]
  __int16 v30; // [rsp+BAh] [rbp-46h]
  int v31; // [rsp+BCh] [rbp-44h]
  __int128 *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+D8h] [rbp-28h]
  _QWORD v34[16]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+160h] [rbp+60h]

  memset_thunk_772440563353939046(Fields, 0, 0x78uLL);
  memset_thunk_772440563353939046(v34, 0, 0x88uLL);
  v24 = 0LL;
  v8 = 0;
  v10 = ProviderHandleLookup(v9, RegHandle);
  v11 = v10;
  if ( !v10 || WORD2(RegHandle) != *(_WORD *)(v10 + 84) )
    return 6;
  if ( !String )
    return 87;
  v13 = *(_BYTE *)(v10 + 116)
     && ((v12 = *(_BYTE *)(v10 + 117), Level <= v12) || !v12)
     && ((*(_BYTE *)(v11 + 112) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v11 + 104)) != 0 && (Keyword & *(_QWORD *)(v11 + 96)) == *(_QWORD *)(v11 + 96));
  v15 = *(_BYTE *)(v11 + 236)
     && ((v14 = *(_BYTE *)(v11 + 237), Level <= v14) || !v14)
     && ((*(_BYTE *)(v11 + 232) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v11 + 224)) != 0 && (Keyword & *(_QWORD *)(v11 + 216)) == *(_QWORD *)(v11 + 216));
  if ( !v13 && !v15 )
    return 0;
  *(_QWORD *)&v27 = 0LL;
  BYTE4(v27) = Level;
  v32 = &v24;
  v26 = 4;
  *((_QWORD *)&v27 + 1) = Keyword;
  v31 = 1;
  ActivityId = NtCurrentTeb()->ActivityId;
  v29 = 0;
  v18 = -1LL;
  v30 = 0;
  v28 = ActivityId;
  v33 = 0;
  *(_QWORD *)&v24 = String;
  while ( String[++v18] != 0 )
    ;
  *((_QWORD *)&v24 + 1) = (unsigned int)(2 * v18 + 2);
  if ( !v15 )
  {
    v20 = 0;
LABEL_37:
    if ( v13 )
    {
      v23 = NtTraceEvent(*(HANDLE *)(v11 + 88), 0x300u, 0x78u, Fields);
      if ( v23 )
        v20 = RtlNtStatusToDosError(v23);
      else
        v20 = 0;
    }
    if ( !v15 )
      return v20;
    goto LABEL_31;
  }
  v20 = EtwpWriteToPrivateBuffers(v11, &v27, 0, 0, 4, &v28, 0LL, 1u, (__int64)&v24, (__int64)v34);
  if ( !v20 )
    goto LABEL_37;
LABEL_31:
  if ( v35 )
  {
    do
    {
      v21 = 4LL * v8;
      v22 = v34[v21];
      if ( v20 )
        *(_WORD *)(v34[4 * v8 + 1] + 2LL) = -16371;
      ++v8;
      _InterlockedDecrement((volatile signed __int32 *)(v34[v21 + 2] + 12LL));
      _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v22 + 20) + EtwpLoggerArray + 8));
    }
    while ( v8 < v35 );
  }
  return v20;
}

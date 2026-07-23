/*
 * XREFs of EtwWriteString @ 0x1406C9E70
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  int v8; // r9d
  REGHANDLE v9; // rbx
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  __int16 v14; // r10
  __int16 v15; // r10
  __int64 v16; // rcx
  unsigned __int64 v17; // [rsp+90h] [rbp-21h] BYREF
  PCWSTR v18; // [rsp+98h] [rbp-19h] BYREF
  int v19; // [rsp+A0h] [rbp-11h]
  int v20; // [rsp+A4h] [rbp-Dh]
  _QWORD v21[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v22; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v23; // [rsp+C8h] [rbp+17h]

  v17 = 0LL;
  v8 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v9 = RegHandle & -(__int64)(RegHandle != 0);
  if ( !v9 )
    return -1073741816;
  v11 = *(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x70);
  v21[0] = 0LL;
  BYTE4(v21[0]) = Level;
  v21[1] = Keyword;
  v12 = (void *)((v11 + 28) & -(__int64)(v11 != 0));
  v18 = String;
  v13 = -1LL;
  do
    ++v13;
  while ( String[v13] );
  v20 = 0;
  v19 = 2 * v13 + 2;
  if ( *(_WORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x64)
    && EtwpLevelKeywordEnabled(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x20) + 96LL, Level, Keyword) )
  {
    v8 = EtwpEventWriteFull(
           *(_QWORD *)(v9 + 32),
           *(_WORD *)(v9 + 100),
           0,
           v8,
           (unsigned __int16 *)v21,
           v14,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v18,
           0LL,
           (__int64)&v22,
           0LL,
           *(_WORD *)(v9 + 98),
           v12,
           &v17);
  }
  if ( *(_WORD *)(v9 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, Level, Keyword) )
    v8 = EtwpEventWriteFull(
           *(_QWORD *)(v9 + 32),
           *(_WORD *)(v9 + 102),
           0,
           0,
           (unsigned __int16 *)v21,
           v15,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v18,
           0LL,
           (__int64)&v22,
           *(_QWORD *)(v9 + 40),
           *(_WORD *)(v9 + 98),
           v12,
           &v17);
  v16 = *(_QWORD *)(v9 + 32);
  if ( *(_QWORD *)(v16 + 656) )
  {
    v22 = 0LL;
    v23 = 0LL;
    if ( *(_WORD *)(v9 + 104) && EtwpLevelKeywordEnabled(*(_QWORD *)(v16 + 656) + 96LL, Level, Keyword) )
      v8 = EtwpEventWriteFull(
             *(_QWORD *)(*(_QWORD *)(v9 + 32) + 656LL),
             *(_WORD *)(v9 + 104),
             0,
             0,
             (unsigned __int16 *)v21,
             4,
             0,
             (GUID *)ActivityId,
             0LL,
             1u,
             (__int64)&v18,
             0LL,
             (__int64)&v22,
             0LL,
             *(_WORD *)(v9 + 98),
             v12,
             &v17);
    if ( *(_WORD *)(v9 + 106) )
    {
      if ( EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 656LL) + 96LL, Level, Keyword) )
        return EtwpEventWriteFull(
                 *(_QWORD *)(*(_QWORD *)(v9 + 32) + 656LL),
                 *(_WORD *)(v9 + 102),
                 0,
                 0,
                 (unsigned __int16 *)v21,
                 4,
                 0,
                 (GUID *)ActivityId,
                 0LL,
                 1u,
                 (__int64)&v18,
                 0LL,
                 (__int64)&v22,
                 *(_QWORD *)(*(_QWORD *)(v9 + 40) + 656LL),
                 *(_WORD *)(v9 + 98),
                 v12,
                 &v17);
    }
  }
  return v8;
}

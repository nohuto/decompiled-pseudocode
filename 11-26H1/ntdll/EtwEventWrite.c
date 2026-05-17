/*
 * XREFs of EtwEventWrite @ 0x18000ED60
 * Callers:
 *     <none>
 * Callees:
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwEventWrite(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v7; // r14d
  ULONG v8; // r8d
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r11
  unsigned __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int8 v16; // cl
  char v17; // si
  unsigned __int8 v18; // al
  _GUID ActivityId; // xmm0
  NTSTATUS v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  _OWORD v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  _GUID v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v29[7]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+150h] [rbp+50h]

  v4 = 0;
  v27 = 0LL;
  v30 = 0LL;
  v7 = (int)a2;
  v8 = 0;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( a2 )
  {
    v9 = *a2;
    v10 = ((unsigned int)a1 >> 1) & 7;
    *(_OWORD *)((char *)&v23[2] + 8) = v9;
    v11 = qword_1801C72A0[v10];
    if ( ((v11 != 0 && (unsigned int)a1 >> 4 < dword_180193038[v10]) & (unsigned __int8)a1) == 0 )
      return 6LL;
    v13 = (unsigned __int64)(unsigned int)a1 >> 4;
    v14 = 0LL;
    if ( (*(_QWORD *)(v11 + 8 * v13) & 1) == 0 )
      v14 = *(_QWORD *)(v11 + 8 * v13);
    if ( !v14 || WORD2(a1) != *(_WORD *)(v14 + 84) )
      return 6LL;
    v15 = *(_QWORD *)&v23[3];
    if ( *(_BYTE *)(v14 + 236)
      && ((v16 = *(_BYTE *)(v14 + 237), BYTE12(v23[2]) <= v16) || !v16)
      && ((*(_BYTE *)(v14 + 232) & 0x40) != 0 && !*(_QWORD *)&v23[3]
       || (*(_QWORD *)&v23[3] & *(_QWORD *)(v14 + 224)) != 0LL
       && (*(_QWORD *)&v23[3] & *(_QWORD *)(v14 + 216)) == *(_QWORD *)(v14 + 216)) )
    {
      v17 = 1;
      v8 = EtwpWriteToPrivateBuffers(v14, v7, 0, 0, 0, 0LL, 0LL, a3, a4, (__int64)&v28);
      if ( v8 )
      {
LABEL_24:
        if ( (_DWORD)v30 )
        {
          do
          {
            v21 = 2LL * v4;
            v22 = *(_QWORD *)&v29[v21 - 1];
            if ( v8 )
              *(_WORD *)(*((_QWORD *)&v28 + 4 * v4 + 1) + 2LL) = -16371;
            ++v4;
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)&v29[v21] + 12LL));
            _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v22 + 20) + EtwpLoggerArray + 8));
          }
          while ( v4 < (unsigned int)v30 );
        }
        return v8;
      }
      v15 = *(_QWORD *)&v23[3];
    }
    else
    {
      v17 = 0;
    }
    if ( *(_BYTE *)(v14 + 116) )
    {
      v18 = *(_BYTE *)(v14 + 117);
      if ( (BYTE12(v23[2]) <= v18 || !v18)
        && ((*(_BYTE *)(v14 + 112) & 0x40) != 0 && !v15
         || (v15 & *(_QWORD *)(v14 + 104)) != 0 && (v15 & *(_QWORD *)(v14 + 96)) == *(_QWORD *)(v14 + 96)) )
      {
        DWORD1(v23[0]) = 0;
        DWORD1(v25) = a3;
        *((_QWORD *)&v25 + 1) = a4;
        ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v25) = 0;
        WORD1(v25) = 0;
        v24 = ActivityId;
        LODWORD(v27) = 0;
        v20 = NtTraceEvent(*(_QWORD *)(v14 + 88), 768LL, 120LL, v23);
        if ( v20 )
          v8 = RtlNtStatusToDosError(v20);
        else
          v8 = 0;
      }
    }
    if ( !v17 )
      return v8;
    goto LABEL_24;
  }
  return 87LL;
}

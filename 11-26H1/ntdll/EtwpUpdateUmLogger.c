/*
 * XREFs of EtwpUpdateUmLogger @ 0x1800654B8
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180065050 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     EtwpQueryUmLogger @ 0x180065274 (EtwpQueryUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180065D1C (EtwpSynchronizeWithLogger.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180066468 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGetPrivateLoggerContext @ 0x180066730 (EtwpGetPrivateLoggerContext.c)
 */

__int64 __fastcall EtwpUpdateUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  ULONG v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  __m128i v14; // xmm6
  NTSTATUS v15; // eax
  void *v16; // rcx
  int v17; // eax
  int v18; // r8d
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 176;
  v19 = 0LL;
  if ( a1 < 0xB0 )
    return 234LL;
  result = EtwpGetPrivateLoggerContext(a4, &v19);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v19;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v19 + 308) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v19 + 308) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v11 = *(_DWORD *)(v19 + 308), (v11 & 0x400) != 0)
      || (v11 & 0x10000) != 0
      || *(_DWORD *)(a4 + 76) && *(_DWORD *)(a4 + 68) )
    {
      v9 = 87;
      goto LABEL_22;
    }
    v12 = *(unsigned __int16 *)(a4 + 146) + 176LL;
    *(_QWORD *)(a4 + 152) = a4 + 176;
    *(_QWORD *)(a4 + 136) = a4 + v12;
    if ( *(_DWORD *)(a4 + 68) )
      *(_QWORD *)(v10 + 328) = EtwpOneSecond * *(unsigned int *)(a4 + 68);
    v13 = *(_DWORD *)(a4 + 76);
    if ( v13 )
    {
      v17 = *(_DWORD *)(a4 + 76);
      v18 = *(_DWORD *)(v10 + 200) + ~*(_DWORD *)(v10 + 188);
      if ( v13 > v18 )
      {
        *(_DWORD *)(a4 + 76) = v18;
        v17 = v18;
      }
      v13 = v17;
      if ( v17 < 0 )
      {
        *(_DWORD *)(a4 + 76) = 0;
        v13 = 0;
      }
    }
    *(_DWORD *)(v10 + 352) = v13;
    if ( *(_WORD *)(a4 + 128) )
    {
      v14 = *(__m128i *)(v10 + 152);
      v9 = EtwpAddInstanceIdToLogFileName(a4, *(unsigned int *)(v10 + 60), v10 + 152);
      if ( v9 )
      {
LABEL_17:
        *(__m128i *)(v10 + 152) = v14;
LABEL_22:
        _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v10 + 20) + EtwpLoggerArray + 8));
        return v9;
      }
      EtwpSynchronizeWithLogger(v10, 2LL);
      v15 = EtwpSynchronizeWithLogger(v10, 4LL);
      if ( v15 )
      {
        v9 = RtlNtStatusToDosError(v15);
        if ( v9 )
        {
          RtlFreeAnsiString((PUNICODE_STRING)(v10 + 152));
          goto LABEL_17;
        }
      }
      else
      {
        v9 = 0;
      }
      v16 = (void *)_mm_srli_si128(v14, 8).m128i_u64[0];
      if ( v16 )
        RtlpSysVolFree(v16);
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
    goto LABEL_22;
  }
  return result;
}

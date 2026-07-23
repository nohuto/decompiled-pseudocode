/*
 * XREFs of PfSnLogPageFaultCommon @ 0x1402650C0
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 * Callees:
 *     PfSnGetFileInformation @ 0x140265260 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnLogPageFaultCommon(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  int v10; // ebp
  int v11; // eax
  __int64 result; // rax
  unsigned __int64 *v13; // rdx
  __int64 *v14; // rdx
  unsigned __int64 *v15; // rcx
  __int64 *v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  PfSnGetFileInformation();
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1210LL) == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 1u);
  if ( a4 >= 0x20000000000LL )
    return 3221227780LL;
  v8 = a4 >> 9;
  if ( (a5 & 1) != 0 )
    v9 = 1;
  else
    v9 = (a5 & 2) != 0 ? 3 : 0;
  v10 = xmmword_140F13528;
  v11 = *(_DWORD *)(a1 + 404);
  v17 = 0LL;
  if ( (_DWORD)xmmword_140F13528 != v11 && (int)PfSnTraceGetLogEntry(a1, 1LL, &v17) >= 0 )
  {
    v15 = v17;
    *v17 = *v17 & 0xFFFFFFFFFFFFFFF0uLL | 2;
    *((_DWORD *)v15 + 2) = v10;
    *(_DWORD *)(a1 + 404) = v10;
    *(_QWORD *)(a1 + 408) = a1 + 416;
  }
  if ( v9 || (v14 = *(__int64 **)(a1 + 408), v16 = v14, (unsigned __int64)*v14 >> 4 != v8) || v14[1] != a3 )
  {
    result = PfSnTraceGetLogEntry(a1, 1LL, &v16);
    if ( (int)result < 0 )
      return result;
    v13 = (unsigned __int64 *)v16;
    *v16 = (16 * v8) | *(_DWORD *)v16 & 0xF;
    v13[1] = a3;
    *v13 = v9 | *v13 & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 332));
    if ( !v9 )
      *(_QWORD *)(a1 + 408) = v13;
  }
  return 0LL;
}

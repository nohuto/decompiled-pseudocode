/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180055000
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x180012B44 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     EtwpTrackBinaryForSession @ 0x180055550 (EtwpTrackBinaryForSession.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     EtwpTrackDebugIdForSession @ 0x180115DD8 (EtwpTrackDebugIdForSession.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

ULONG __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  __int16 v9; // cx
  NTSTATUS LoadedDllByHandle; // eax
  __int64 v11; // r14
  NTSTATUS v12; // ebp
  _WORD *v13; // r15
  unsigned int v14; // eax
  const void *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  unsigned int v19; // r15d
  bool v20; // r14
  unsigned __int64 v21; // rsi
  __int64 v22; // rbp
  int v23; // edx
  __int16 v24; // ax
  __int64 v25; // rax
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // [rsp+20h] [rbp-288h] BYREF
  __int128 v29; // [rsp+28h] [rbp-280h] BYREF
  __int64 v30; // [rsp+38h] [rbp-270h]
  __int64 v31; // [rsp+40h] [rbp-268h] BYREF
  _WORD v32[264]; // [rsp+50h] [rbp-258h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  v7 = 0;
  v30 = 0LL;
  v29 = 0LL;
  if ( v5 < *((_QWORD *)&xmmword_1801E0450 + 1)
    || v5 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
  {
    RtlpxLookupFunctionTable(v5, (__int64)&v29);
  }
  else
  {
    v29 = xmmword_1801E0450;
    v30 = qword_1801E0460;
  }
  v8 = *((_QWORD *)&v29 + 1);
  if ( !*((_QWORD *)&v29 + 1) )
    return 87;
  v9 = *(_WORD *)(a2 + 86);
  if ( (v9 & 0x3FFF) == 2 )
  {
    v28 = 0LL;
    v19 = 0;
    v20 = 1;
    v21 = *((_QWORD *)&v29 + 1);
    v22 = 0LL;
    if ( (BYTE8(v29) & 2) != 0 || (BYTE8(v29) & 1) != 0 )
    {
      v21 = *((_QWORD *)&v29 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
      v20 = !(BYTE8(v29) & 1);
    }
    v23 = RtlImageNtHeaderEx(1, v21, 0LL, &v28);
    if ( !v28 )
      goto LABEL_29;
    v24 = *(_WORD *)(v28 + 24);
    if ( v24 == 267 )
    {
      if ( *(_DWORD *)(v28 + 116) <= 6u )
      {
        v23 = -1073741811;
        goto LABEL_29;
      }
      v25 = *(unsigned int *)(v28 + 168);
      if ( !(_DWORD)v25 )
      {
        v23 = -1073741822;
        goto LABEL_29;
      }
      v19 = *(_DWORD *)(v28 + 172);
      if ( v20 )
        goto LABEL_28;
    }
    else
    {
      if ( v24 != 523 )
        return 87;
      if ( *(_DWORD *)(v28 + 132) <= 6u )
      {
        v23 = -1073741811;
        goto LABEL_29;
      }
      v25 = *(unsigned int *)(v28 + 184);
      if ( !(_DWORD)v25 )
      {
        v23 = -1073741822;
        goto LABEL_29;
      }
      v19 = *(_DWORD *)(v28 + 188);
      if ( v20 )
      {
LABEL_28:
        v23 = 0;
        v22 = v21 + v25;
LABEL_29:
        v26 = 0LL;
        if ( v23 >= 0 )
          v26 = (_DWORD *)v22;
        if ( v26 && v19 >= 0x1C )
        {
          while ( 1 )
          {
            if ( v7 >= v19 / 0x1C )
              return 232;
            if ( v26[3] == 2 && *(_DWORD *)(v8 + (unsigned int)v26[5]) == 1396986706 )
              break;
            v26 += 7;
            ++v7;
          }
          if ( v26[4] >= 0x1Cu )
            return EtwpTrackDebugIdForSession(a1);
        }
        return 87;
      }
    }
    if ( (unsigned int)v25 >= *(_DWORD *)(v28 + 84) )
    {
      v22 = RtlAddressInSectionTable(v28, v21, (unsigned int)v25);
      v27 = 0;
      if ( !v22 )
        v27 = -1073741811;
      v23 = v27;
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( v9 >= 0 )
    return 0;
  *(_QWORD *)&v29 = 17039360LL;
  v31 = 0LL;
  *((_QWORD *)&v29 + 1) = v32;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(v8, &v31, &v28, a4);
  v11 = v31;
  v12 = LoadedDllByHandle;
  if ( v31 )
  {
    v13 = (_WORD *)(v31 + 72);
    if ( v31 == -72 )
    {
      LOWORD(v29) = 0;
    }
    else
    {
      v14 = (unsigned __int16)*v13;
      v15 = *(const void **)(v31 + 80);
      if ( (unsigned __int16)v14 > 0x104u )
        v14 = 260;
      v16 = (unsigned __int16)v14;
      LOWORD(v29) = v14;
      v17 = v14;
      memmove(v32, v15, v14);
      if ( (unsigned __int64)(v16 + 2) <= 0x104 )
        v32[v17 >> 1] = 0;
    }
    if ( *v13 > 0x104u )
      v12 = -1073741789;
    if ( v11 != LdrpImageEntry )
      LdrpDereferenceModule(v11);
  }
  if ( v12 < 0 )
    return RtlNtStatusToDosError(v12);
  else
    return EtwpTrackBinaryForSession(a1, &v29, a2 + 32);
}

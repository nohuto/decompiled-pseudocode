/*
 * XREFs of CsrpConnectToServer @ 0x1800CAD04
 * Callers:
 *     CsrClientConnectToServer @ 0x1800CA4C0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtOpenSection @ 0x18015F620 (NtOpenSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     ZwConnectPort @ 0x1801603B0 (ZwConnectPort.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CsrpConnectToServer(_WORD *Src, int a2, _QWORD *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rbx
  char *Heap_0; // rax
  char *v12; // rdi
  size_t v13; // rbx
  char *v14; // rbx
  int v15; // edi
  int v16; // ebx
  HANDLE v17; // rcx
  struct _PEB *v18; // rcx
  HANDLE v19; // rcx
  HANDLE v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  char *v25; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+88h] [rbp-78h]
  __int128 v28; // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v32[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-30h]
  __int16 *v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E4h] [rbp-1Ch]
  __int128 v37; // [rsp+E8h] [rbp-18h]
  __int128 v38; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v39; // [rsp+108h] [rbp+8h]
  __int128 v40; // [rsp+118h] [rbp+18h]
  _DWORD v41[14]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v42; // [rsp+168h] [rbp+68h]
  __int64 v43; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v44)(); // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+190h] [rbp+90h] BYREF
  int v46; // [rsp+198h] [rbp+98h]

  LODWORD(v30) = 0;
  v45 = 0LL;
  v22 = 0;
  v21 = 0;
  v46 = 0;
  Handle = 0LL;
  *(_QWORD *)&v28 = 0LL;
  DWORD2(v28) = 0;
  v41[1] = 0;
  v29 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  memset_thunk_772440563353939046(v41, 0, 0x5CuLL);
  v20 = 0LL;
  v32[1] = 0;
  v36 = 0;
  v25 = 0LL;
  v31 = 0LL;
  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  if ( (unsigned __int64)(2 * v9 + 28) > 0xFFFF )
    return 3221225734LL;
  word_1801CDE02 = 2 * v9 + 28;
  Heap_0 = (char *)RtlAllocateHeap_0();
  qword_1801CDE08 = (__int64)Heap_0;
  v12 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  v13 = 2 * v9;
  memmove(Heap_0, Src, v13);
  *(_WORD *)&v12[v13] = 92;
  v14 = &v12[v13 + 2];
  *(_OWORD *)v14 = *(_OWORD *)L"SharedSection";
  *((_QWORD *)v14 + 2) = *(_QWORD *)L"ction";
  *((_WORD *)v14 + 12) = aSharedsection[12];
  v32[0] = 48;
  CsrPortName = (_WORD)v14 - qword_1801CDE08 + 26;
  v34 = &CsrPortName;
  v33 = 0LL;
  v35 = 64;
  v37 = 0LL;
  v15 = NtOpenSection(&v20, 4LL, v32);
  if ( v15 >= 0 )
  {
    *(_QWORD *)v14 = *(_QWORD *)L"ApiPort";
    *((_DWORD *)v14 + 2) = *(_DWORD *)L"ort";
    *((_WORD *)v14 + 6) = aApiport[6];
    CsrPortName = (_WORD)v14 - qword_1801CDE08 + 14;
    HIDWORD(v45) = 2;
    LOWORD(v46) = 257;
    v23 = 0x10000LL;
    v16 = NtCreateSection(&Handle, 983071LL, 0LL, &v23, 4, 0x8000000, 0LL);
    if ( v16 < 0 )
      goto LABEL_24;
    *((_QWORD *)&v26 + 1) = Handle;
    *((_QWORD *)&v27 + 1) = (unsigned int)v23;
    LODWORD(v26) = 48;
    LODWORD(v27) = 0;
    LODWORD(v29) = 24;
    *((_QWORD *)&v29 + 1) = 0LL;
    v30 = 0LL;
    v21 = 48;
    v28 = 0LL;
    if ( a4 != 8 )
      goto LABEL_16;
    if ( a2 == 1 )
    {
      *((_QWORD *)&v40 + 1) = *a3;
      LODWORD(v40) = 1;
    }
    else
    {
LABEL_16:
      DWORD1(v40) = -1073741811;
    }
    v16 = ZwConnectPort(&CsrPortHandle, &CsrPortName, &v45, &v26, &v29, &v22, &v38, &v21);
    NtClose(Handle);
    if ( v16 < 0 )
    {
LABEL_24:
      v19 = v20;
    }
    else
    {
      v17 = v20;
      *a5 = DWORD1(v40);
      v16 = ZwMapViewOfSection(v17, -1LL, &v25, 0LL, 0LL, 0LL, &v31, 2, 5242880, 2);
      NtClose(v20);
      v20 = 0LL;
      if ( v16 >= 0 )
      {
        v18 = NtCurrentPeb();
        v18->CsrServerReadOnlySharedMemoryBase = v38;
        v18->ReadOnlySharedMemoryBase = v25;
        v18->ReadOnlyStaticServerData = (void **)&v25[*((_QWORD *)&v38 + 1) - v38];
        CsrProcessId = v39;
        CsrPortMemoryRemoteDelta = *((_QWORD *)&v28 + 1) - v28;
        memset_thunk_772440563353939046(v41, 0, 0x60uLL);
        v44 = WinSqmCheckEscalationSetString;
        v41[0] = 96;
        v42 = 4096LL;
        v43 = *((_QWORD *)&v27 + 1);
        CsrPortHeap = RtlpCreateHeap(
                        0x8000,
                        (void *)v28,
                        *((unsigned __int64 *)&v27 + 1),
                        (char *)1,
                        0LL,
                        (__int64)v41,
                        0);
        if ( CsrPortHeap )
        {
          CsrPortBaseTag = 0;
          return 0LL;
        }
        v16 = -1073741801;
      }
      NtClose(CsrPortHandle);
      v19 = v20;
      CsrPortHandle = 0LL;
      if ( !v20 )
        goto LABEL_21;
    }
    NtClose(v19);
LABEL_21:
    RtlFreeHeap_0();
    return (unsigned int)v16;
  }
  RtlFreeHeap_0();
  return (unsigned int)v15;
}

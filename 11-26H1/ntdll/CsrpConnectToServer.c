/*
 * XREFs of CsrpConnectToServer @ 0x1800C8474
 * Callers:
 *     CsrClientConnectToServer @ 0x1800C7C30 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtOpenSection @ 0x18015F520 (NtOpenSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     ZwConnectPort @ 0x1801602B0 (ZwConnectPort.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CsrpConnectToServer(_WORD *Src, int a2, _QWORD *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rbx
  SIZE_T v10; // r8
  wchar_t *Heap_0; // rax
  wchar_t *v13; // rdi
  size_t v14; // rbx
  wchar_t *v15; // rbx
  NTSTATUS v16; // edi
  NTSTATUS v17; // ebx
  HANDLE v18; // rcx
  struct _PEB *v19; // rcx
  HANDLE v20; // rcx
  HANDLE SectionHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ConnectionInformationLength; // [rsp+58h] [rbp-A8h] BYREF
  ULONG MaxMessageLength; // [rsp+5Ch] [rbp-A4h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  _PORT_VIEW ClientView; // [rsp+78h] [rbp-88h] BYREF
  _REMOTE_PORT_VIEW ServerView; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int128 ConnectionInformation; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v32; // [rsp+108h] [rbp+8h]
  __int128 v33; // [rsp+118h] [rbp+18h]
  _DWORD v34[14]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v35; // [rsp+168h] [rbp+68h]
  SIZE_T v36; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v37)(); // [rsp+178h] [rbp+78h]
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&SecurityQos.Length = 0LL;
  MaxMessageLength = 0;
  ConnectionInformationLength = 0;
  *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
  Handle = 0LL;
  v34[1] = 0;
  memset(&ServerView, 0, 20);
  ConnectionInformation = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(&ClientView, 0, 44);
  memset_thunk_772440563353939046(v34, 0, 0x5CuLL);
  SectionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9 + 28;
  if ( v10 > 0xFFFF )
    return 3221225734LL;
  CsrPortName.MaximumLength = 2 * v9 + 28;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(CsrHeap, NtdllBaseTag, v10);
  CsrPortName.Buffer = Heap_0;
  v13 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  v14 = v9;
  memmove(Heap_0, Src, v14 * 2);
  v13[v14] = 92;
  v15 = &v13[v14 + 1];
  *(_OWORD *)v15 = *(_OWORD *)L"SharedSection";
  *((_QWORD *)v15 + 2) = *(_QWORD *)L"ction";
  v15[12] = aSharedsection[12];
  ObjectAttributes.Length = 48;
  CsrPortName.Length = (_WORD)v15 - LOWORD(CsrPortName.Buffer) + 26;
  ObjectAttributes.ObjectName = &CsrPortName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = NtOpenSection(&SectionHandle, 4u, &ObjectAttributes);
  if ( v16 >= 0 )
  {
    *(_QWORD *)v15 = *(_QWORD *)L"ApiPort";
    *((_DWORD *)v15 + 2) = *(_DWORD *)L"ort";
    v15[6] = aApiport[6];
    CsrPortName.Length = (_WORD)v15 - LOWORD(CsrPortName.Buffer) + 14;
    SecurityQos.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
    MaximumSize.QuadPart = 0x10000LL;
    v17 = NtCreateSection(&Handle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v17 < 0 )
      goto LABEL_24;
    ClientView.SectionHandle = Handle;
    ClientView.ViewSize = MaximumSize.LowPart;
    ClientView.Length = 48;
    ClientView.SectionOffset = 0;
    ServerView.Length = 24;
    ServerView.ViewSize = 0LL;
    ServerView.ViewBase = 0LL;
    ConnectionInformationLength = 48;
    *(_OWORD *)&ClientView.ViewBase = 0LL;
    if ( a4 != 8 )
      goto LABEL_16;
    if ( a2 == 1 )
    {
      *((_QWORD *)&v33 + 1) = *a3;
      LODWORD(v33) = 1;
    }
    else
    {
LABEL_16:
      DWORD1(v33) = -1073741811;
    }
    v17 = ZwConnectPort(
            &CsrPortHandle,
            &CsrPortName,
            &SecurityQos,
            &ClientView,
            &ServerView,
            &MaxMessageLength,
            &ConnectionInformation,
            &ConnectionInformationLength);
    NtClose(Handle);
    if ( v17 < 0 )
    {
LABEL_24:
      v20 = SectionHandle;
    }
    else
    {
      v18 = SectionHandle;
      *a5 = DWORD1(v33);
      v17 = ZwMapViewOfSection(
              v18,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseAddress,
              0LL,
              0LL,
              0LL,
              &ViewSize,
              ViewUnmap,
              0x500000u,
              2u);
      NtClose(SectionHandle);
      SectionHandle = 0LL;
      if ( v17 >= 0 )
      {
        v19 = NtCurrentPeb();
        v19->CsrServerReadOnlySharedMemoryBase = ConnectionInformation;
        v19->ReadOnlySharedMemoryBase = BaseAddress;
        v19->ReadOnlyStaticServerData = (void **)((char *)BaseAddress
                                                + *((_QWORD *)&ConnectionInformation + 1)
                                                - ConnectionInformation);
        CsrProcessId = v32;
        CsrPortMemoryRemoteDelta = (char *)ClientView.ViewRemoteBase - (char *)ClientView.ViewBase;
        memset_thunk_772440563353939046(v34, 0, 0x60uLL);
        v37 = WinSqmCheckEscalationSetString;
        v34[0] = 96;
        v35 = 4096LL;
        v36 = ClientView.ViewSize;
        CsrPortHeap = (PVOID)RtlpCreateHeap(
                               0x8000,
                               ClientView.ViewBase,
                               ClientView.ViewSize,
                               (void *)1,
                               0LL,
                               (__int64)v34,
                               0);
        if ( CsrPortHeap )
        {
          CsrPortBaseTag = 0;
          return 0LL;
        }
        v17 = -1073741801;
      }
      NtClose(CsrPortHandle);
      v20 = SectionHandle;
      CsrPortHandle = 0LL;
      if ( !SectionHandle )
        goto LABEL_21;
    }
    NtClose(v20);
LABEL_21:
    RtlFreeHeap_0(CsrHeap, 0, CsrPortName.Buffer);
    return (unsigned int)v17;
  }
  RtlFreeHeap_0(CsrHeap, 0, CsrPortName.Buffer);
  return (unsigned int)v16;
}

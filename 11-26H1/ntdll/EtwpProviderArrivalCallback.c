/*
 * XREFs of EtwpProviderArrivalCallback @ 0x18003F580
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x18005E274 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     EtwpTrackBinaryForSession @ 0x18003FAD0 (EtwpTrackBinaryForSession.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     EtwpTrackDebugIdForSession @ 0x1801155B8 (EtwpTrackDebugIdForSession.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

ULONG __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  void *v5; // rcx
  unsigned int v7; // ebx
  char *v8; // rdi
  __int16 v9; // cx
  NTSTATUS LoadedDllByHandle; // eax
  char *v11; // r14
  NTSTATUS v12; // ebp
  _WORD *v13; // r15
  unsigned int v14; // eax
  const void *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  unsigned int Size; // r15d
  bool v20; // r14
  char *v21; // rsi
  char *v22; // rbp
  NTSTATUS v23; // edx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  char *v26; // rcx
  int v27; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-288h] BYREF
  PVOID BaseOfImage[2]; // [rsp+28h] [rbp-280h] BYREF
  __int64 v30; // [rsp+38h] [rbp-270h]
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-268h] BYREF
  _WORD v32[264]; // [rsp+50h] [rbp-258h] BYREF

  v5 = *(void **)(a2 + 48);
  v7 = 0;
  v30 = 0LL;
  *(_OWORD *)BaseOfImage = 0LL;
  if ( (unsigned __int64)v5 < *((_QWORD *)&xmmword_1801DF450 + 1)
    || (unsigned __int64)v5 >= *((_QWORD *)&xmmword_1801DF450 + 1) + (unsigned __int64)(unsigned int)qword_1801DF460 )
  {
    RtlpxLookupFunctionTable(v5, (char **)BaseOfImage);
  }
  else
  {
    *(_OWORD *)BaseOfImage = xmmword_1801DF450;
    v30 = qword_1801DF460;
  }
  v8 = (char *)BaseOfImage[1];
  if ( !BaseOfImage[1] )
    return 87;
  v9 = *(_WORD *)(a2 + 86);
  if ( (v9 & 0x3FFF) == 2 )
  {
    OutHeaders = 0LL;
    Size = 0;
    v20 = 1;
    v21 = (char *)BaseOfImage[1];
    v22 = 0LL;
    if ( ((__int64)BaseOfImage[1] & 2) != 0 || ((__int64)BaseOfImage[1] & 1) != 0 )
    {
      v21 = (char *)((unsigned __int64)BaseOfImage[1] & 0xFFFFFFFFFFFFFFFCuLL);
      v20 = !((__int64)BaseOfImage[1] & 1);
    }
    v23 = RtlImageNtHeaderEx(1u, v21, 0LL, &OutHeaders);
    if ( !OutHeaders )
      goto LABEL_29;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) <= 6 )
      {
        v23 = -1073741811;
        goto LABEL_29;
      }
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
      {
        v23 = -1073741822;
        goto LABEL_29;
      }
      Size = OutHeaders->OptionalHeader.DataDirectory[4].Size;
      if ( v20 )
        goto LABEL_28;
    }
    else
    {
      if ( Magic != 523 )
        return 87;
      if ( OutHeaders->OptionalHeader.NumberOfRvaAndSizes <= 6 )
      {
        v23 = -1073741811;
        goto LABEL_29;
      }
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
      {
        v23 = -1073741822;
        goto LABEL_29;
      }
      Size = OutHeaders->OptionalHeader.DataDirectory[6].Size;
      if ( v20 )
      {
LABEL_28:
        v23 = 0;
        v22 = &v21[VirtualAddress];
LABEL_29:
        v26 = 0LL;
        if ( v23 >= 0 )
          v26 = v22;
        if ( v26 && Size >= 0x1C )
        {
          while ( 1 )
          {
            if ( v7 >= Size / 0x1C )
              return 232;
            if ( *((_DWORD *)v26 + 3) == 2 && *(_DWORD *)&v8[*((unsigned int *)v26 + 5)] == 1396986706 )
              break;
            v26 += 28;
            ++v7;
          }
          if ( *((_DWORD *)v26 + 4) >= 0x1Cu )
            return EtwpTrackDebugIdForSession(a1);
        }
        return 87;
      }
    }
    if ( (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v22 = (char *)RtlAddressInSectionTable(OutHeaders, v21, VirtualAddress);
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
  BaseOfImage[0] = (PVOID)17039360;
  BaseAddress[0] = 0LL;
  BaseOfImage[1] = v32;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(v8, (__int64 *)BaseAddress, &OutHeaders, a4);
  v11 = (char *)BaseAddress[0];
  v12 = LoadedDllByHandle;
  if ( BaseAddress[0] )
  {
    v13 = (char *)BaseAddress[0] + 72;
    if ( BaseAddress[0] == (PVOID)-72LL )
    {
      LOWORD(BaseOfImage[0]) = 0;
    }
    else
    {
      v14 = (unsigned __int16)*v13;
      v15 = (const void *)*((_QWORD *)BaseAddress[0] + 10);
      if ( (unsigned __int16)v14 > 0x104u )
        v14 = 260;
      v16 = (unsigned __int16)v14;
      LOWORD(BaseOfImage[0]) = v14;
      v17 = v14;
      memmove(v32, v15, v14);
      if ( (unsigned __int64)(v16 + 2) <= 0x104 )
        v32[v17 >> 1] = 0;
    }
    if ( *v13 > 0x104u )
      v12 = -1073741789;
    if ( v11 != (char *)LdrpImageEntry )
      LdrpDereferenceModule(v11);
  }
  if ( v12 < 0 )
    return RtlNtStatusToDosError(v12);
  else
    return EtwpTrackBinaryForSession(a1, BaseOfImage, a2 + 32);
}

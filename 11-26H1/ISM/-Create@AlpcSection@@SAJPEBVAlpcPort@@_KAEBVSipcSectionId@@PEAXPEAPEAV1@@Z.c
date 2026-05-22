/*
 * XREFs of ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x180110540
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x1801113C0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 * Callees:
 *     ?ProtectExtraMemory@SipcSection@@IEBAXXZ @ 0x1800821B4 (-ProtectExtraMemory@SipcSection@@IEBAXXZ.c)
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x1800952F8 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x180098FA4 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Unmap@AlpcSection@@CAJPEAX00@Z @ 0x1801133EC (-Unmap@AlpcSection@@CAJPEAX00@Z.c)
 */

__int64 __fastcall AlpcSection::Create(
        const struct AlpcPort *a1,
        unsigned __int64 a2,
        const struct SipcSectionId *a3,
        void *a4,
        struct AlpcSection **a5)
{
  PWSTR Buffer; // r15
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  signed int LastError; // eax
  int v12; // ebx
  void *v13; // rbx
  unsigned __int64 v14; // rdi
  HANDLE FileW; // rax
  signed int v16; // eax
  int PortSection; // eax
  int v18; // eax
  int SectionView; // edi
  unsigned __int64 i; // rcx
  char *v21; // rbx
  char *v22; // r9
  HANDLE v23; // rdx
  void *v24; // rcx
  void *v25; // rax
  void *v26; // r8
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  void *v30; // [rsp+48h] [rbp-31h] BYREF
  DWORD BytesReturned; // [rsp+50h] [rbp-29h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-21h] BYREF
  HANDLE v33; // [rsp+60h] [rbp-19h] BYREF
  void *v34[2]; // [rsp+68h] [rbp-11h] BYREF
  void *v35[2]; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 InBuffer; // [rsp+98h] [rbp+1Fh] BYREF

  Buffer = 0LL;
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v10 = GetCurrentProcess();
  if ( !DuplicateHandle(v10, a4, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v12 = -2147418113;
    if ( LastError < 0 )
      v12 = LastError;
    goto LABEL_29;
  }
  v13 = 0LL;
  v30 = 0LL;
  LODWORD(v33) = 0;
  BytesReturned = 0;
  v14 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductInfo");
  if ( (int)NtQueryLicenseValue(&DestinationString, 0LL, &v33, 4LL, &BytesReturned) >= 0 && (_DWORD)v33 == 192 )
  {
    FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
    v33 = FileW;
    if ( FileW == (HANDLE)-1LL
      || (BytesReturned = 0,
          InBuffer = (v14 + 65575) & 0xFFFFFFFFFFFF0000uLL,
          DestinationString = 0LL,
          !DeviceIoControl(FileW, 0x15026Cu, &InBuffer, 8u, &DestinationString, 0x10u, &BytesReturned, 0LL)) )
    {
      v16 = GetLastError();
      if ( v16 > 0 )
        v16 = (unsigned __int16)v16 | 0x80070000;
      v12 = -2147418113;
      if ( v16 < 0 )
        v12 = v16;
      SipcFileHandle::Reset(&v33);
      goto LABEL_28;
    }
    SipcWin32Handle::Attach(&v30, *(void **)&DestinationString.Length);
    Buffer = DestinationString.Buffer;
    SipcFileHandle::Reset(&v33);
    v13 = v30;
  }
  *(_OWORD *)v34 = 0LL;
  *(_OWORD *)v35 = 0LL;
  PortSection = NtAlpcCreatePortSection(TargetHandle, 0LL, v13, v14 + 40, &v34[1], &v35[1]);
  if ( PortSection < 0 )
  {
    v18 = PortSection | 0x10000000;
    v12 = -2147418113;
    if ( v18 < 0 )
      v12 = v18;
    goto LABEL_28;
  }
  SectionView = NtAlpcCreateSectionView(TargetHandle, 0LL, v34);
  if ( SectionView >= 0 )
  {
    for ( i = 0LL; i < a2; i += 4096LL )
      *((_BYTE *)v35[0] + i) = 0;
    memset_0((char *)v35[0] + a2, 204, (size_t)v35[1] - a2);
    v21 = (char *)v35[0] + (((unsigned __int64)v35[1] - 40) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v21 = a2;
    *(_OWORD *)(v21 + 8) = *(_OWORD *)a3;
    *(_OWORD *)(v21 + 24) = *((_OWORD *)a3 + 1);
    v22 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v22 )
    {
      v23 = TargetHandle;
      v24 = v35[1];
      v25 = v35[0];
      v26 = v34[1];
      *(_QWORD *)v22 = &SipcSection::`vftable';
      *((_QWORD *)v22 + 4) = v25;
      *((_QWORD *)v22 + 5) = v24;
      *((_QWORD *)v22 + 3) = a1;
      *((_QWORD *)v22 + 6) = *(_QWORD *)v21;
      v27 = *(_OWORD *)(v21 + 8);
      *a5 = (struct AlpcSection *)v22;
      *(_OWORD *)(v22 + 56) = v27;
      v28 = *(_OWORD *)(v21 + 24);
      *((_DWORD *)v22 + 22) = 0;
      *(_QWORD *)v22 = &AlpcSection::`vftable';
      *(_OWORD *)(v22 + 72) = v28;
      *((_QWORD *)v22 + 12) = v23;
      *((_QWORD *)v22 + 13) = v26;
      *((_QWORD *)v22 + 14) = Buffer;
      TargetHandle = 0LL;
      SipcSection::ProtectExtraMemory((SipcSection *)v22);
      SipcWin32Handle::Reset(&v30);
      v12 = 0;
LABEL_29:
      SipcWin32Handle::Reset(&TargetHandle);
      return (unsigned int)v12;
    }
    *a5 = 0LL;
    SectionView = -1073741801;
  }
  v12 = AlpcSection::Unmap(v35[0], a4, v34[1]);
  if ( v12 < 0 )
  {
LABEL_28:
    SipcWin32Handle::Reset(&v30);
    goto LABEL_29;
  }
  SipcWin32Handle::Reset(&v30);
  SipcWin32Handle::Reset(&TargetHandle);
  return SectionView | 0x10000000u;
}

/*
 * XREFs of DpiAgpAllocatePool @ 0x140253AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // rsi
  SIZE_T v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // r15d
  int v9; // eax
  unsigned int v10; // edi
  PMDL Mdl; // rbp
  int v12; // eax
  __int64 v13; // r8
  PVOID v14; // rax
  __int64 Pool2; // rax
  _QWORD *v16; // rsi
  int v17; // eax
  struct _KMUTANT *v18; // rbp
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = (int)a3;
  v6 = a2;
  v22 = 0LL;
  v23[0] = 0LL;
  if ( !a1 || !a2 || !BaseAddress )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_QWORD *)(v7 + 16) != 0x274727044LL || !*(_QWORD *)(v7 + 712) || !*(_QWORD *)(v7 + 728) )
  {
    v10 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 91;
    return v10;
  }
  *BaseAddress = 0LL;
  v8 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v7 + 712))(
         *(_QWORD *)(v7 + 680),
         v8,
         a3,
         &v22,
         a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 712), v9);
    WdLogGlobalForLineNumber = 125;
    return v10;
  }
  Mdl = IoAllocateMdl(0LL, v6, 0, 0, 0LL);
  if ( !Mdl )
  {
    v10 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 149;
LABEL_32:
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 720))(*(_QWORD *)(v7 + 680), v22);
    return v10;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v7 + 728))(
          *(_QWORD *)(v7 + 680),
          v22,
          v8,
          0LL,
          Mdl,
          v23);
  v10 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v7 + 728), v12);
    WdLogGlobalForLineNumber = 165;
LABEL_31:
    IoFreeMdl(Mdl);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v7 + 704) & 1) != 0 )
  {
    if ( !(_DWORD)v5 )
    {
      v13 = 516LL;
      goto LABEL_20;
    }
    if ( (_DWORD)v5 != 1 )
    {
      if ( (_DWORD)v5 == 2 )
      {
        v13 = 1028LL;
        goto LABEL_20;
      }
      WdLogSingleEntry2(2LL, v5, v7);
      WdLogGlobalForLineNumber = 201;
    }
    v13 = 4LL;
LABEL_20:
    v14 = (PVOID)MmMapIoSpaceEx(*a4, v6, v13);
    goto LABEL_24;
  }
  Mdl->MdlFlags |= 0x2002u;
  v14 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
LABEL_24:
  *BaseAddress = v14;
  if ( !v14 )
  {
    v10 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 234;
LABEL_30:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v7 + 736))(*(_QWORD *)(v7 + 680), v22, v8, 0LL);
    goto LABEL_31;
  }
  Pool2 = ExAllocatePool2(256LL, 80LL, 1953656900LL);
  v16 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741801;
    WdLogSingleEntry1(6LL);
    v17 = *(_DWORD *)(v7 + 704);
    WdLogGlobalForLineNumber = 255;
    if ( (v17 & 1) != 0 )
      MmUnmapIoSpace(BaseAddress, v6);
    else
      MmUnmapLockedPages(BaseAddress, Mdl);
    goto LABEL_30;
  }
  *(_DWORD *)(Pool2 + 16) = 1953656900;
  *(_DWORD *)(Pool2 + 20) = 9;
  *(_QWORD *)(Pool2 + 24) = v22;
  *(_QWORD *)(Pool2 + 48) = Mdl;
  v18 = (struct _KMUTANT *)(v7 + 2624);
  *(_DWORD *)(Pool2 + 56) = v6;
  *(_QWORD *)(Pool2 + 32) = *a4;
  *(_QWORD *)(Pool2 + 40) = v23[0];
  *(_BYTE *)(Pool2 + 60) = *(_BYTE *)(v7 + 704) & 1;
  *(_DWORD *)(Pool2 + 64) = a3;
  *(_QWORD *)(Pool2 + 72) = *BaseAddress;
  KeWaitForSingleObject((PVOID)(v7 + 2624), Executive, 0, 0, 0LL);
  v19 = (__int64 *)(v7 + 2608);
  v20 = *v19;
  if ( *(__int64 **)(*v19 + 8) != v19 )
    __fastfail(3u);
  *(_QWORD *)(v20 + 8) = v16;
  *v19 = (__int64)v16;
  *v16 = v20;
  v16[1] = v19;
  KeReleaseMutex(v18, 0);
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 286;
  return v10;
}

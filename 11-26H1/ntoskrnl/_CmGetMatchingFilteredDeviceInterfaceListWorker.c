/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C
 * Callers:
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceListWorker(
        __int64 a1,
        const WCHAR *a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        unsigned int a8,
        unsigned int *a9,
        __int16 a10)
{
  __int64 v11; // rdi
  int CachedContextBaseKey; // ebx
  char v13; // bp
  int v14; // r13d
  int v15; // eax
  __int64 Pool2; // rax
  int v17; // eax
  void *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  HANDLE Handle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int128 v25; // [rsp+40h] [rbp-48h]

  v24 = 0LL;
  *a9 = 0;
  v11 = 0LL;
  Handle = 0LL;
  v25 = 0LL;
  if ( a8 )
    *a7 = 0;
  if ( (a4 & 0xFFFFFFFE) != 0 || a10 )
    goto LABEL_4;
  v13 = a4 & 1;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v24);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_24;
  if ( a2 )
  {
    if ( PnpIsValidGuidString(a2) )
    {
      v14 = 2;
      goto LABEL_11;
    }
LABEL_4:
    CachedContextBaseKey = -1073741811;
    goto LABEL_24;
  }
  a2 = 0LL;
  v14 = 1;
LABEL_11:
  v15 = PnpCtxRegOpenKey(a1, v24, (__int64)a2, 0, 8u, (__int64)&Handle);
  CachedContextBaseKey = v15;
  if ( v15 == -1073741444 )
  {
    CachedContextBaseKey = -1073741595;
  }
  else if ( v15 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = v14;
      RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(Pool2 + 1012), 0xC8uLL, a3, 0LL, 0LL, 0x900u);
      *(_QWORD *)(v11 + 1432) = a5;
      *(_QWORD *)(v11 + 1440) = a6;
      *(_QWORD *)(v11 + 1416) = 0LL;
      *(_DWORD *)(v11 + 1424) = 0;
      *(_BYTE *)(v11 + 1428) = v13;
      *(_QWORD *)(v11 + 1448) = a7;
      *(_DWORD *)(v11 + 1456) = a8;
      *(_DWORD *)(v11 + 1460) = 0;
      v17 = PnpCtxRegEnumKeyWithCallback(a1, Handle, CmDeviceClassesSubkeyCallback, v11);
      v18 = *(void **)(v11 + 1416);
      CachedContextBaseKey = v17;
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      if ( CachedContextBaseKey >= 0 )
      {
        v19 = *(_DWORD *)(v11 + 1460);
        *a9 = v19;
        v20 = v19;
        if ( v19 )
        {
          v21 = v19 + 1;
          *a9 = v21;
          if ( a7 && a8 >= v21 )
            a7[v20] = 0;
          else
            CachedContextBaseKey = -1073741789;
        }
      }
    }
    else
    {
      CachedContextBaseKey = -1073741801;
    }
  }
LABEL_24:
  if ( *((_QWORD *)&v25 + 1) )
    ExFreePool(*((PVOID *)&v25 + 1));
  if ( v11 )
    ExFreePoolWithTag((PVOID)v11, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}

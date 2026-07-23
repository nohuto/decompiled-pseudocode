/*
 * XREFs of _CmGetMatchingDeviceListForSubkey @ 0x14089F8C0
 * Callers:
 *     _CmGetMatchingDeviceList @ 0x1409B75FC (_CmGetMatchingDeviceList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140AA24B4 (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingDeviceListForSubkey(
        __int64 a1,
        const wchar_t *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int CachedContextBaseKey; // ebx
  const wchar_t *v11; // rax
  unsigned int v12; // ebp
  wchar_t *v13; // rax
  int v14; // eax
  wchar_t *Pool2; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v21[8]; // [rsp+38h] [rbp-40h] BYREF

  v21[0] = 0LL;
  *a8 = 0;
  Handle = 0LL;
  if ( a7 )
    *a6 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 5LL, v21);
  if ( CachedContextBaseKey >= 0 )
  {
    v11 = a2;
    v12 = 0;
    while ( v11 )
    {
      if ( !*v11 || *v11 == 92 || (++v12, v12 > 2) )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_24;
      }
      v13 = wcschr(v11, 0x5Cu);
      if ( !v13 )
        break;
      v11 = v13 + 1;
    }
    v14 = PnpCtxRegOpenKey(a1, v21[0], (_DWORD)a2, 0, 8, (__int64)&Handle);
    CachedContextBaseKey = v14;
    if ( v14 == -1073741444 )
    {
      CachedContextBaseKey = -1073741595;
    }
    else if ( v14 >= 0 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = v12 + 1;
        RtlStringCchCopyExW(Pool2 + 2, 0xC8uLL, a2, 0LL, 0LL, 0x900u);
        *((_BYTE *)Pool2 + 404) = a3;
        *((_QWORD *)Pool2 + 51) = a4;
        *((_QWORD *)Pool2 + 52) = a5;
        *((_QWORD *)Pool2 + 53) = a6;
        *((_DWORD *)Pool2 + 108) = a7;
        *((_DWORD *)Pool2 + 109) = 0;
        CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, Handle, CmEnumSubkeyCallback, Pool2);
        if ( CachedContextBaseKey >= 0 )
        {
          v16 = *((_DWORD *)Pool2 + 109);
          *a8 = v16;
          v17 = v16;
          if ( v16 )
          {
            v18 = v16 + 1;
            *a8 = v18;
            if ( a6 && a7 >= v18 )
              a6[v17] = 0;
            else
              CachedContextBaseKey = -1073741789;
          }
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        CachedContextBaseKey = -1073741801;
      }
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}

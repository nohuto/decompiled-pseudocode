/*
 * XREFs of _CmGetMatchingCommonClassListWorker @ 0x14089F5AC
 * Callers:
 *     _CmGetMatchingCommonClassList @ 0x14089F440 (_CmGetMatchingCommonClassList.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingCommonClassListWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v10; // rdx
  int CachedContextBaseKey; // ebx
  __int64 Pool2; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v19[0] = 0LL;
  *a7 = 0;
  if ( a6 )
    *a5 = 0;
  if ( a2 == 2 )
  {
    v10 = 7LL;
  }
  else
  {
    if ( a2 != 4 )
      return (unsigned int)-1073741811;
    v10 = 8LL;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, v10, v19);
  if ( CachedContextBaseKey >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = a4;
      v14 = v19[0];
      *(_DWORD *)Pool2 = a2;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = a3;
      *(_QWORD *)(Pool2 + 32) = a5;
      *(_DWORD *)(Pool2 + 40) = a6;
      *(_DWORD *)(Pool2 + 44) = 0;
      CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v14, CmClassSubkeyCallback, Pool2);
      if ( CachedContextBaseKey >= 0 )
      {
        if ( a2 != 4
          || !*(_BYTE *)(a1 + 4)
          || (*(_QWORD *)(v13 + 8) = v14,
              CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9LL, v19),
              CachedContextBaseKey >= 0)
          && (v19[0] == *(_QWORD *)(v13 + 8)
           || (CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v19[0], CmClassSubkeyCallback, v13),
               CachedContextBaseKey >= 0)) )
        {
          v15 = *(_DWORD *)(v13 + 44);
          *a7 = v15;
          v16 = v15;
          if ( v15 )
          {
            v17 = v15 + 1;
            *a7 = v17;
            if ( a5 && a6 >= v17 )
              a5[v16] = 0;
            else
              CachedContextBaseKey = -1073741789;
          }
        }
      }
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}

/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x14089DF7C
 * Callers:
 *     _CmMoveBaseContainer @ 0x14089E370 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 a1, int a2, int a3, __int64 *a4)
{
  int v7; // r14d
  _WORD *v8; // rsi
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  int v11; // r14d
  _WORD *Pool2; // rax
  __int64 v13; // rcx
  unsigned int i; // r15d
  int v15; // eax
  __int64 v16; // rax
  int v18; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  v7 = a1;
  v18 = 0;
  v8 = 0LL;
  v23 = 0;
  *a4 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10LL, &v22);
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = PnpCtxRegOpenKey(v7, v22, a2, 0, 1, (__int64)&v21);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(v7, (_DWORD)v21, (unsigned int)L"BaseContainers", 0, 1, (__int64)&v20);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PnpCtxRegOpenKey(v7, (_DWORD)v20, a3, 0, 3, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v10, Handle, 0LL, 0LL, &v18, &v23, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            v11 = v18 * (v23 + 1) + 1;
            Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
            *a4 = (__int64)Pool2;
            v8 = Pool2;
            if ( !Pool2 )
            {
              CachedContextBaseKey = -1073741801;
LABEL_15:
              if ( !Pool2 )
                goto LABEL_23;
              ExFreePoolWithTag(Pool2, 0);
LABEL_21:
              *a4 = 0LL;
              goto LABEL_23;
            }
            for ( i = 0; ; ++i )
            {
              v23 = v11 - 1;
              v15 = PnpCtxRegEnumValue(v13, Handle, i, v8, &v23, 0LL, 0LL, 0LL);
              CachedContextBaseKey = v15;
              if ( v15 == -2147483622 )
                break;
              if ( v15 < 0 )
                goto LABEL_12;
              v13 = (unsigned int)(v23 + 1);
              v11 -= v13;
              v8 += v13;
            }
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_12:
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
  {
LABEL_17:
    Pool2 = (_WORD *)*a4;
    CachedContextBaseKey = 0;
    goto LABEL_18;
  }
  Pool2 = (_WORD *)*a4;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_15;
LABEL_18:
  if ( Pool2 )
  {
    *v8 = 0;
    goto LABEL_23;
  }
  v16 = ExAllocatePool2(0x100uLL);
  *a4 = v16;
  if ( v16 )
    goto LABEL_21;
  CachedContextBaseKey = -1073741801;
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  if ( v20 )
    ZwClose(v20);
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)CachedContextBaseKey;
}

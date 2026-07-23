/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x140A3EE58
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpDeletePropertyWorker @ 0x1409AD164 (_PnpDeletePropertyWorker.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, char *a2, const WCHAR *a3, unsigned int a4)
{
  __int64 v4; // rax
  void *Pool2; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int GenericStorePropertyKeys; // eax
  int v14; // ebx
  unsigned int v15; // r14d
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  size_t v19; // rbx
  wchar_t *v20; // rax
  WCHAR *v21; // rdi
  HANDLE i; // rax
  wchar_t *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 dwFlags; // [rsp+28h] [rbp-38h]
  unsigned int v37; // [rsp+40h] [rbp-20h] BYREF
  int v38; // [rsp+48h] [rbp-18h] BYREF
  int v39; // [rsp+4Ch] [rbp-14h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF
  int v41; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *a1;
  Handle[0] = 0LL;
  v37 = 0;
  v38 = 0;
  v41 = 0;
  Pool2 = 0LL;
  v39 = 0;
  v9 = 0;
  if ( a4 <= 1 )
  {
    v12 = PnpCtxRegDeleteTree(v4, a2, a3);
    goto LABEL_41;
  }
  if ( v4 && (v10 = *(_QWORD *)(v4 + 224)) != 0 )
    v11 = *(_QWORD *)(v10 + 8);
  else
    v11 = 0LL;
  v12 = RegRtlOpenKeyTransacted(a2, a3, 0, 0x3001Fu, Handle, v11);
  if ( v12 < 0 )
  {
LABEL_41:
    v14 = 0;
    if ( v12 != -1073741444 )
      v14 = v12;
    goto LABEL_35;
  }
  while ( 1 )
  {
    GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle[0], 0LL, 0, (__int64)Pool2, v9, &v37);
    v14 = GenericStorePropertyKeys;
    if ( GenericStorePropertyKeys != -1073741789 )
      break;
    if ( v37 <= v9 )
    {
      v14 = -1073741595;
      goto LABEL_33;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v9 = v37;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v14 = -1073741801;
      goto LABEL_35;
    }
  }
  v15 = 0;
  if ( GenericStorePropertyKeys == -1073741275 || GenericStorePropertyKeys >= 0 )
  {
    if ( GenericStorePropertyKeys != -1073741275 )
      v15 = v9;
    v16 = 0;
    v17 = 0LL;
    if ( v14 != -1073741275 )
      v16 = v14;
    v14 = v16;
    if ( v15 )
    {
      do
      {
        v29 = PnpDeletePropertyWorker(*a1, (__int64)Handle[0], 0LL, (__int64)Pool2 + 20 * v17, 0, dwFlags, 0);
        v14 = v29;
        if ( v29 == -1073741275 || v29 == -1073741790 )
        {
          v14 = 0;
        }
        else if ( v29 < 0 )
        {
          goto LABEL_33;
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < v15 );
    }
    if ( v14 >= 0 )
    {
      if ( wcschr(a3, 0x5Cu) )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a3[v18] );
        v19 = v18 + 1;
        v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v21 = v20;
        if ( v20 )
        {
          RtlStringCchCopyExW(v20, v19, a3, 0LL, 0LL, 0x900u);
          for ( i = Handle[0]; ; i = 0LL )
          {
            if ( !i )
            {
              if ( *a1 && (v24 = *(_QWORD *)(*a1 + 224)) != 0 )
                v25 = *(_QWORD *)(v24 + 8);
              else
                v25 = 0LL;
              v26 = RegRtlOpenKeyTransacted(a2, v21, 0, 0x3001Fu, Handle, v25);
              if ( v26 < 0 )
              {
                v14 = 0;
                if ( v26 != -1073741444 )
                  v14 = v26;
                goto LABEL_32;
              }
              v14 = PnpCtxRegQueryInfoKey(v27, Handle[0], &v38, 0LL, &v41, 0LL, 0LL);
              if ( v14 < 0 || v38 || v41 )
                goto LABEL_32;
              i = Handle[0];
            }
            v14 = PnpCtxRegDeleteKey(*a1, i, 0LL);
            if ( v14 == -1073741444 )
            {
              v14 = 0;
            }
            else if ( v14 < 0 )
            {
              v30 = v14 == -1073741535;
              goto LABEL_75;
            }
            v23 = wcsrchr(v21, 0x5Cu);
            if ( !v23 )
              goto LABEL_32;
            *v23 = 0;
            ZwClose(Handle[0]);
            Handle[0] = 0LL;
          }
        }
        goto LABEL_51;
      }
      v31 = PnpCtxRegDeleteKey(*a1, Handle[0], 0LL);
      v14 = v31;
      if ( v31 == -1073741444 )
      {
        v14 = 0;
      }
      else
      {
        if ( v31 != -1073741535 )
          goto LABEL_33;
        v14 = PnpCtxRegQueryInfoKey(v32, Handle[0], 0LL, 0LL, &v41, &v39, 0LL);
        if ( v14 < 0 )
          goto LABEL_33;
        v33 = v39 + 1;
        if ( !v41 )
          goto LABEL_33;
        v21 = (WCHAR *)ExAllocatePool2(0x100uLL);
        if ( !v21 )
        {
LABEL_51:
          v14 = -1073741801;
          goto LABEL_33;
        }
        while ( 1 )
        {
          v41 = v33;
          v14 = PnpCtxRegEnumValue(v34, Handle[0], 0, v21, (__int64)&v41, 0LL, 0LL, 0LL);
          if ( v14 < 0 )
            break;
          v14 = PnpCtxRegDeleteValue(v35, Handle[0], v21);
          if ( ((v14 + 0x80000000) & 0x80000000) == 0 && v14 != -1073741772 )
            goto LABEL_32;
        }
        v30 = v14 == -2147483622;
LABEL_75:
        if ( v30 )
          v14 = 0;
LABEL_32:
        ExFreePoolWithTag(v21, 0);
      }
    }
  }
LABEL_33:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_35:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v14;
}

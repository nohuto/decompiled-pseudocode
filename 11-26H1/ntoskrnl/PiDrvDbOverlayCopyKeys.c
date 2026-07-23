/*
 * XREFs of PiDrvDbOverlayCopyKeys @ 0x1407B898C
 * Callers:
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1407B8F20 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B898C (PiDrvDbOverlayCopyKeys.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x140974BF4 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbOverlayCopyKeys(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  BOOL v10; // esi
  void *Pool2; // rdi
  unsigned int v12; // r13d
  void *v13; // r15
  int v14; // ebx
  int Key; // eax
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int i; // r12d
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // rsi
  unsigned int j; // r14d
  __int64 v26; // rdx
  __int16 v27; // ax
  __int64 v28; // rax
  HANDLE v29; // rdx
  int v30; // eax
  unsigned int v31; // r12d
  unsigned int v33; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-6Dh] BYREF
  int v35; // [rsp+48h] [rbp-69h]
  unsigned int v36; // [rsp+4Ch] [rbp-65h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-49h]
  int v41; // [rsp+6Ch] [rbp-45h] BYREF
  int v42; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v43; // [rsp+74h] [rbp-3Dh] BYREF
  HANDLE v44; // [rsp+78h] [rbp-39h] BYREF
  __int64 v45; // [rsp+80h] [rbp-31h]
  PVOID P; // [rsp+88h] [rbp-29h]
  __int64 v47; // [rsp+90h] [rbp-21h]
  __int64 KeyInformation; // [rsp+98h] [rbp-19h] BYREF
  int v49; // [rsp+A0h] [rbp-11h]

  v45 = a6;
  v40 = a7;
  v10 = 0;
  Pool2 = 0LL;
  v47 = a8;
  KeyHandle = 0LL;
  KeyInformation = 0LL;
  v12 = 0;
  v49 = 0;
  v13 = 0LL;
  v44 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v41 = 0;
  v42 = 0;
  v33 = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v43 = 0;
  ResultLength = 0;
  v14 = PnpCtxRegOpenKey(0, a1, a2, 8, 131097, (__int64)&KeyHandle);
  if ( v14 >= 0 )
  {
    if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) >= 0 )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v14 = -2147483603;
        goto LABEL_81;
      }
      v10 = (KeyInformation & 0x100000000LL) != 0;
    }
    Key = PnpCtxRegCreateKey(0, a3, a4, v10, 393247, 0LL, (__int64)&v44, (__int64)&v42);
    v17 = 0;
    v14 = Key;
    if ( Key >= 0 )
    {
      if ( (int)PnpCtxRegQueryInfoKey(v16, KeyHandle, 0LL, &v33, 0LL, &v36, &v34) >= 0 )
      {
        v19 = v36;
        if ( v33 > v36 )
          v19 = v33;
        v12 = 2 * v19 + 2;
        v35 = v12;
        if ( 2 * v19 != -2 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
          {
            v14 = -1073741670;
            goto LABEL_81;
          }
        }
      }
      if ( (!v34 || (v13 = (void *)ExAllocatePool2(0x100uLL)) != 0LL)
        && (!v45 || !v40 || (P = (PVOID)ExAllocatePool2(0x100uLL)) != 0LL) )
      {
        for ( i = 0; ; ++i )
        {
          v33 = v12 >> 1;
          v36 = i;
          v21 = PnpCtxRegEnumKey(v18, KeyHandle, i, Pool2, &v33);
          if ( v21 == -2147483622 )
          {
            if ( v14 >= 0 )
            {
              v31 = v34;
              while ( 1 )
              {
                v33 = v12 >> 1;
                v34 = v31;
                v21 = PnpCtxRegEnumValue(v22, KeyHandle, v17, Pool2, &v33, &v43, v13, &v34);
                if ( v21 == -2147483622 )
                  break;
                if ( v21 == -1073741789 )
                {
                  if ( v33 > v12 >> 1 )
                  {
                    v12 = 2 * v33;
                    if ( Pool2 )
                      ExFreePoolWithTag(Pool2, 0);
                    Pool2 = (void *)ExAllocatePool2(0x100uLL);
                    if ( !Pool2 )
                      goto LABEL_55;
                  }
                  if ( v34 > v31 )
                  {
                    v31 = v34;
                    if ( v13 )
                      ExFreePoolWithTag(v13, 0);
                    v13 = (void *)ExAllocatePool2(0x100uLL);
                    if ( !v13 )
                      goto LABEL_15;
                  }
                  --v17;
                }
                else
                {
                  if ( v21 < 0 )
                    goto LABEL_74;
                  if ( v42 != 2
                    || (ResultLength = 0,
                        (unsigned int)PnpCtxRegQueryValue(v22, v44, Pool2, 0LL, 0LL, &ResultLength) != -1073741789) )
                  {
                    v14 = PnpCtxRegSetValue(v22, v44, Pool2, v43, v13, v34);
                    if ( v14 < 0 )
                      goto LABEL_75;
                  }
                }
                ++v17;
              }
            }
            goto LABEL_75;
          }
          if ( v21 != -1073741789 )
            break;
          v12 = 2 * v33;
          v35 = 2 * v33;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
          {
LABEL_55:
            v14 = -1073741670;
            goto LABEL_77;
          }
          --i;
LABEL_54:
          ;
        }
        if ( v21 < 0 )
          goto LABEL_74;
        v18 = v45;
        v23 = 0;
        if ( v45 )
        {
          v24 = v33;
          if ( v33 )
          {
            for ( j = 0; j < v40; ++j )
            {
              if ( !wcsnicmp(*(const wchar_t **)(v18 + 8LL * j), (const wchar_t *)Pool2, (unsigned int)(v24 - 1)) )
              {
                v26 = *(_QWORD *)(v45 + 8LL * j) + 2 * v24;
                v27 = *(_WORD *)(v26 - 2);
                if ( !v27 )
                {
                  LODWORD(v24) = 0;
                  break;
                }
                if ( v27 == 92 && P )
                {
                  v28 = v23++;
                  *((_QWORD *)P + v28) = v26;
                }
              }
              v18 = v45;
            }
            i = v36;
            if ( !(_DWORD)v24 )
            {
              v17 = 0;
              goto LABEL_53;
            }
          }
          v17 = 0;
        }
        if ( !v47 )
          goto LABEL_47;
        v21 = PnpCtxRegOpenKey(0, v47, (_DWORD)Pool2, 0, 131097, (__int64)&Handle);
        if ( v21 == -1073741772 )
        {
          Handle = 0LL;
LABEL_53:
          v12 = v35;
          goto LABEL_54;
        }
        if ( v21 < 0 )
        {
LABEL_74:
          v14 = v21;
          goto LABEL_75;
        }
        v14 = PnpCtxRegQueryInfoKey(v18, Handle, &v41, 0LL, 0LL, 0LL, 0LL);
        if ( v14 < 0 )
          goto LABEL_75;
        if ( v41 )
        {
LABEL_47:
          v29 = Handle;
        }
        else
        {
          ZwClose(Handle);
          v29 = 0LL;
          Handle = 0LL;
        }
        v30 = PiDrvDbOverlayCopyKeys(
                (_DWORD)KeyHandle,
                (_DWORD)Pool2,
                (_DWORD)v44,
                (_DWORD)Pool2,
                0,
                (unsigned __int64)P & -(__int64)(v23 != 0),
                v23,
                (__int64)v29);
        v14 = v30;
        if ( v30 == -2147483603 )
        {
          v14 = 0;
        }
        else if ( v30 < 0 )
        {
          goto LABEL_75;
        }
        goto LABEL_53;
      }
LABEL_15:
      v14 = -1073741670;
LABEL_75:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_77:
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
LABEL_81:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v44 )
    ZwClose(v44);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v14;
}

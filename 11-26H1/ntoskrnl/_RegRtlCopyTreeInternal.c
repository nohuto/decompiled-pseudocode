/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x1408A3800
 * Callers:
 *     _PnpCtxRegCopyTree @ 0x14089C328 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402631F0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlGetKeySecurity @ 0x1408A3D08 (_RegRtlGetKeySecurity.c)
 *     _RegRtlSetKeySecurity @ 0x1408A3F2C (_RegRtlSetKeySecurity.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140974C20 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x140974E10 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumValue @ 0x140975A14 (_RegRtlEnumValue.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlSetValue @ 0x1409AD100 (_RegRtlSetValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, char a7)
{
  __int64 Pool2; // r15
  BOOL v9; // edi
  void *v10; // rsi
  int v13; // ebx
  int v14; // eax
  ULONG v15; // r14d
  ULONG v16; // eax
  unsigned __int64 v17; // rdi
  int v18; // r12d
  int v19; // eax
  ULONG v20; // r12d
  int v21; // eax
  int v23; // [rsp+28h] [rbp-A9h]
  ULONG v24; // [rsp+50h] [rbp-81h] BYREF
  ULONG v25; // [rsp+54h] [rbp-7Dh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-71h] BYREF
  PVOID P; // [rsp+68h] [rbp-69h]
  int v29; // [rsp+70h] [rbp-61h] BYREF
  int v30; // [rsp+74h] [rbp-5Dh] BYREF
  __int64 v31; // [rsp+78h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-39h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-31h]
  __int64 v37; // [rsp+A8h] [rbp-29h]
  __int64 KeyInformation; // [rsp+B0h] [rbp-21h] BYREF
  int v39; // [rsp+B8h] [rbp-19h]

  v37 = a3;
  KeyHandle = 0LL;
  Handle = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  v9 = 0;
  v29 = 0;
  v10 = 0LL;
  v30 = 0;
  v25 = 0;
  v24 = 0;
  v26 = 0;
  LODWORD(v31) = 0;
  P = 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  v36 = a6;
  KeyInformation = 0LL;
  v39 = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v13 = -1073741670;
    goto LABEL_68;
  }
  v14 = RegRtlOpenKeyTransacted(a1, a2, 8LL, 131097LL, &KeyHandle, a6);
  v15 = 0;
  v13 = v14;
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v13 = -2147483603;
        goto LABEL_68;
      }
      v9 = (KeyInformation & 0x100000000LL) != 0;
    }
    if ( a5 )
    {
      while ( (unsigned int)RegRtlGetKeySecurity(KeyHandle, 4LL, Pool2, &v29) == -1073741789 )
      {
        if ( Pool2 )
          ExFreePoolWithTag((PVOID)Pool2, 0);
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          goto LABEL_13;
      }
    }
    LOBYTE(v23) = 0;
    v13 = RegRtlCreateKeyTransacted(v37, a4, v9, 393247LL, Pool2 & -(__int64)(a5 != 0), v23, &Handle, &v30, v36);
    if ( v13 >= 0 )
    {
      if ( a5 && Pool2 && v30 == 2 )
        RegRtlSetKeySecurity(Handle, 4LL, Pool2);
      if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)KeyHandle, 0, (unsigned int)&v25, 0, (__int64)&v24, (__int64)&v26) )
      {
        LODWORD(v17) = 0;
        v18 = 0;
        goto LABEL_33;
      }
      v16 = v25;
      if ( v25 <= v24 )
        v16 = v24;
      if ( v16 )
      {
        if ( v16 + 1 < v16 )
          goto LABEL_31;
        ++v16;
      }
      v17 = 2LL * v16;
      if ( v17 <= 0xFFFFFFFF )
      {
        v15 = v26;
        v18 = 0;
        v13 = 0;
        if ( (_DWORD)v17 && (v10 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
        {
LABEL_13:
          v13 = -1073741801;
        }
        else
        {
          if ( !v15 || (P = (PVOID)ExAllocatePool2(0x100uLL)) != 0LL )
          {
LABEL_33:
            while ( 1 )
            {
              v26 = (unsigned int)v17 >> 1;
              v19 = RegRtlEnumKey(KeyHandle);
              if ( v19 == -2147483622 )
                break;
              if ( v19 == -1073741789 )
              {
                v17 = 2LL * v26;
                if ( v17 > 0xFFFFFFFF )
                {
LABEL_44:
                  v13 = -1073741675;
                  goto LABEL_64;
                }
                v13 = 0;
                if ( v10 )
                  ExFreePoolWithTag(v10, 0);
                v10 = (void *)ExAllocatePool2(0x100uLL);
                if ( !v10 )
                {
LABEL_39:
                  v13 = -1073741801;
                  goto LABEL_64;
                }
              }
              else
              {
                if ( v19
                  || (*((_WORD *)v10 + ((unsigned __int64)(unsigned int)v17 >> 1) - 1) = 0,
                      (v19 = RegRtlCopyTreeInternal(
                               (_DWORD)KeyHandle,
                               (_DWORD)v10,
                               (_DWORD)Handle,
                               (_DWORD)v10,
                               a5,
                               v36,
                               a7)) != 0)
                  && v19 != -2147483603 )
                {
                  v13 = v19;
                  break;
                }
                ++v18;
              }
            }
            if ( v13 >= 0 )
            {
              v20 = 0;
              while ( 1 )
              {
                v25 = (unsigned int)v17 >> 1;
                v24 = v15;
                v21 = RegRtlEnumValue(KeyHandle, v20, v10, (__int64)&v31, P, (__int64)&v24);
                if ( v21 == -2147483622 )
                  break;
                if ( v21 == -1073741789 )
                {
                  if ( v25 > (unsigned int)v17 >> 1 )
                  {
                    v17 = 2LL * v25;
                    if ( v17 > 0xFFFFFFFF )
                      goto LABEL_44;
                    v13 = 0;
                    if ( v10 )
                      ExFreePoolWithTag(v10, 0);
                    v10 = (void *)ExAllocatePool2(0x100uLL);
                    if ( !v10 )
                      goto LABEL_39;
                  }
                  if ( v24 > v15 )
                  {
                    v15 = v24;
                    if ( P )
                      ExFreePoolWithTag(P, 0);
                    P = (PVOID)ExAllocatePool2(0x100uLL);
                    if ( !P )
                      goto LABEL_30;
                  }
                }
                else
                {
                  if ( v21
                    || (*((_WORD *)v10 + ((unsigned __int64)(unsigned int)v17 >> 1) - 1) = 0,
                        (v21 = RegRtlSetValue(Handle, v24)) != 0) )
                  {
                    v13 = v21;
                    break;
                  }
                  ++v20;
                }
              }
            }
LABEL_64:
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
          else
          {
LABEL_30:
            v13 = -1073741801;
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
        }
        goto LABEL_68;
      }
LABEL_31:
      v13 = -1073741675;
    }
  }
LABEL_68:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v13;
}

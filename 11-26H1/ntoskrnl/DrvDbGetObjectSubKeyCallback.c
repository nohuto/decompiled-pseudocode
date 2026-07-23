/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x140A86E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 a1, char *a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // rsi
  int v5; // edi
  wchar_t *Pool2; // rax
  WCHAR *v11; // rdi
  __int64 v12; // r15
  wchar_t *v13; // rcx
  __int64 v14; // rdx
  wchar_t *v15; // r8
  __int64 v16; // rax
  signed __int64 v17; // r9
  wchar_t v18; // cx
  wchar_t *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  char *v26; // r9
  __int64 v27; // r8
  _WORD *v28; // rcx
  __int16 v29; // r10
  _WORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _OWORD *v33; // rcx
  _OWORD *v34; // rax
  NTSTRSAFE_PWSTR v35; // rcx
  ULONG v36; // r8d
  __int64 v37; // rax
  __int128 v38; // xmm1
  ULONG ResultLength[2]; // [rsp+30h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  __int128 KeyInformation; // [rsp+58h] [rbp-21h] BYREF
  __int128 v44; // [rsp+68h] [rbp-11h]
  __int64 v45; // [rsp+78h] [rbp-1h]

  ppszDestEnd = 0LL;
  v4 = 0LL;
  *(_QWORD *)ResultLength = 0LL;
  v5 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  while ( !v5 )
  {
    if ( !wcsicmp(a3, L"Properties") )
      goto LABEL_21;
    v5 = 1;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( Pool2 )
  {
    v12 = 2147483646LL;
    v13 = Pool2;
    v14 = 256LL;
    if ( *(_WORD *)(a4 + 8) )
    {
      if ( RtlStringCchCopyExW(
             Pool2,
             0x100uLL,
             (NTSTRSAFE_PCWSTR)(a4 + 8),
             &ppszDestEnd,
             (size_t *)ResultLength,
             0x900u) < 0
        || *(_QWORD *)ResultLength < 2uLL )
      {
        goto LABEL_20;
      }
      v35 = ppszDestEnd;
      v36 = ResultLength[0] - 2;
      v14 = ResultLength[0] - 2;
      v37 = v14;
      *ppszDestEnd = 92;
      v13 = v35 + 1;
      *v13 = 0;
      if ( !v36 || (v37 = (unsigned int)v14, v36 > 0x7FFFFFFF) )
      {
        if ( v37 )
          *v13 = 0;
        goto LABEL_20;
      }
      v15 = v13;
      if ( !v14 )
      {
LABEL_12:
        v19 = v15 - 1;
        if ( v14 )
          v19 = v15;
        *v19 = 0;
        if ( !v14 )
          goto LABEL_20;
        if ( a1 && (v20 = *(_QWORD *)(a1 + 224)) != 0 )
          v21 = *(_QWORD *)(v20 + 8);
        else
          v21 = 0LL;
        if ( (int)RegRtlOpenKeyTransacted(a2, a3, 8u, 0x20019u, &KeyHandle, v21) < 0 )
          goto LABEL_20;
        v22 = 4LL;
        ResultLength[0] = 0;
        v45 = 0LL;
        KeyInformation = 0LL;
        v44 = 0LL;
        if ( ZwQueryKey(KeyHandle, KeyCachedInformation, &KeyInformation, 0x28u, ResultLength) < 0 )
          goto LABEL_20;
        if ( !HIDWORD(KeyInformation) || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
        {
LABEL_26:
          if ( !DWORD1(v44)
            || *(_QWORD *)(a4 + 520) && !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, (__int64)v11)
            || RtlInitUnicodeStringEx(&DestinationString, v11) < 0
            || (v24 = *(_DWORD *)(a4 + 544),
                v25 = DestinationString.MaximumLength >> 1,
                *(_DWORD *)(a4 + 548) += v25,
                v24 <= (unsigned int)v25) )
          {
LABEL_41:
            if ( v4 )
              ExFreePoolWithTag((PVOID)v4, 0);
            goto LABEL_20;
          }
          v26 = *(char **)(a4 + 536);
          v27 = v24;
          if ( v26 )
          {
            if ( v24 <= 0x7FFFFFFF )
            {
              if ( !v24 )
                goto LABEL_40;
              v28 = *(_WORD **)(a4 + 536);
              do
              {
                if ( !v12 )
                  break;
                v29 = *(_WORD *)((char *)v28 + (char *)v11 - v26);
                if ( !v29 )
                  break;
                *v28 = v29;
                --v12;
                ++v28;
                --v27;
              }
              while ( v27 );
              v30 = v28 - 1;
              if ( v27 )
                v30 = v28;
              *v30 = 0;
              if ( v27 )
                goto LABEL_40;
            }
          }
          else if ( !v24 )
          {
LABEL_40:
            v31 = *(_QWORD *)(a4 + 536);
            *(_DWORD *)(a4 + 544) -= v25;
            *(_QWORD *)(a4 + 536) = v31 + 2 * v25;
            goto LABEL_41;
          }
          *(_WORD *)v26 = 0;
          goto LABEL_40;
        }
        v32 = ExAllocatePool2(0x100uLL);
        v4 = v32;
        if ( v32 )
        {
          v33 = (_OWORD *)v32;
          v34 = (_OWORD *)a4;
          do
          {
            *v33 = *v34;
            v33[1] = v34[1];
            v33[2] = v34[2];
            v33[3] = v34[3];
            v33[4] = v34[4];
            v33[5] = v34[5];
            v33[6] = v34[6];
            v33 += 8;
            v38 = v34[7];
            v34 += 8;
            *(v33 - 1) = v38;
            --v22;
          }
          while ( v22 );
          *v33 = *v34;
          v33[1] = v34[1];
          *((_QWORD *)v33 + 4) = *((_QWORD *)v34 + 4);
          ++*(_DWORD *)(v4 + 4);
          RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v4 + 8), 0x100uLL, v11, 0LL, 0LL, 0x900u);
          PnpCtxRegEnumKeyWithCallback(a1, KeyHandle, &DrvDbGetObjectSubKeyCallback, v4);
          *(_QWORD *)(a4 + 536) = *(_QWORD *)(v4 + 536);
          *(_DWORD *)(a4 + 544) = *(_DWORD *)(v4 + 544);
          *(_DWORD *)(a4 + 548) = *(_DWORD *)(v4 + 548);
          goto LABEL_26;
        }
LABEL_20:
        ExFreePoolWithTag(v11, 0);
        goto LABEL_21;
      }
    }
    else
    {
      v15 = Pool2;
    }
    v16 = 2147483646LL;
    v17 = (char *)a3 - (char *)v13;
    do
    {
      if ( !v16 )
        break;
      v18 = *(wchar_t *)((char *)v15 + v17);
      if ( !v18 )
        break;
      *v15 = v18;
      --v16;
      ++v15;
      --v14;
    }
    while ( v14 );
    goto LABEL_12;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0LL;
}

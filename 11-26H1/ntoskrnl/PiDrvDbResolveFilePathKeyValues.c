/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x1407BA198
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x1407BA804 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407BA93C (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiDevCfgAppendMultiSz @ 0x1407AB6AC (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B978C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407BAAAC (PiDrvDbResolveSystemFilePath.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x140975750 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(
        int a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        const UNICODE_STRING *a4)
{
  char v4; // si
  unsigned int v6; // r13d
  void *v7; // r15
  unsigned int v8; // r12d
  _WORD *v9; // r14
  UNICODE_STRING *v10; // rdi
  int v11; // eax
  int appended; // ebx
  BOOLEAN v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // esi
  int v18; // eax
  unsigned __int64 v19; // rax
  const wchar_t *v20; // r13
  const WCHAR *v21; // rdi
  unsigned int *v22; // rsi
  __int64 v23; // rcx
  const WCHAR *v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // ax
  int v27; // r12d
  int v28; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  int v31; // eax
  unsigned int v32; // ecx
  const WCHAR *v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-75h]
  unsigned int v39; // [rsp+50h] [rbp-71h]
  const WCHAR *v40; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-59h] BYREF
  int v43; // [rsp+78h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-29h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-21h]
  __int64 Pool2; // [rsp+A8h] [rbp-19h]
  UNICODE_STRING v49; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING v50; // [rsp+C0h] [rbp-1h] BYREF
  PVOID P; // [rsp+D0h] [rbp+Fh]

  v4 = a2;
  Handle = 0LL;
  v37 = 0;
  LODWORD(v40) = 0;
  v39 = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  v6 = 0;
  v38 = 0;
  v7 = 0LL;
  v47 = 0LL;
  v8 = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  P = 0LL;
  v49 = 0LL;
  v43 = 0;
  v10 = a3;
  UnicodeString = 0LL;
  v50 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v50, 0LL);
  v11 = PnpCtxRegOpenKey(0, a1, (unsigned int)L"Setup\\ResolveFilePaths", 0, 131097, (__int64)&Handle);
  appended = v11;
  if ( v11 == -1073741772 )
  {
    LODWORD(v10) = 0;
LABEL_3:
    appended = (int)v10;
    goto LABEL_4;
  }
  if ( v11 >= 0 )
  {
    appended = PiDrvDbQuerySystemPathWin32(v10, &DestinationString);
    if ( appended < 0 )
    {
      appended = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (v4 & 2) != 0 )
    {
      if ( v10 && (v14 = RtlEqualUnicodeString(v10, &PiDrvDbSystemRootNt, 1u), v10 = 0LL, !v14)
        || (UNICODE_STRING *)DestinationString.Buffer != v10
        && !RtlEqualUnicodeString(&DestinationString, &PiDrvDbSystemRootWin32, 1u) )
      {
LABEL_21:
        if ( (int)PnpCtxRegQueryInfoKey(v15, Handle, 0LL, 0LL, v10, &v37, &v40) >= 0 )
        {
          v8 = (unsigned int)v40;
          v38 = (unsigned int)v40;
          v6 = 2 * v37 + 2;
          v39 = v6;
          if ( 2 * v37 != -2 )
          {
            Pool2 = ExAllocatePool2(0x100uLL);
            v7 = (void *)Pool2;
            if ( !Pool2 )
            {
              appended = -1073741670;
              goto LABEL_4;
            }
          }
          if ( v8 )
          {
            v47 = ExAllocatePool2(0x100uLL);
            v9 = (_WORD *)v47;
            if ( !v47 )
            {
LABEL_27:
              appended = -1073741670;
LABEL_87:
              if ( v7 )
                ExFreePoolWithTag(v7, 0);
LABEL_89:
              if ( v9 )
                ExFreePoolWithTag(v9, 0);
              goto LABEL_4;
            }
          }
        }
        v17 = (unsigned int)v10;
LABEL_29:
        v41 = v17;
        LODWORD(v40) = v6 >> 1;
        v37 = v8;
        v18 = PnpCtxRegEnumValue(v16, Handle, v17, v7, &v40, &v43, v9, &v37);
        if ( v18 == -2147483622 )
          goto LABEL_87;
        if ( v18 == -1073741789 )
        {
          if ( (unsigned int)v40 > v6 >> 1 )
          {
            v39 = 2 * (_DWORD)v40;
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            Pool2 = ExAllocatePool2(0x100uLL);
            v7 = (void *)Pool2;
            if ( !Pool2 )
            {
              appended = -1073741670;
              goto LABEL_89;
            }
          }
          if ( v37 <= v8 )
            goto LABEL_39;
          v8 = v37;
          v38 = v37;
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v47 = ExAllocatePool2(0x100uLL);
          v9 = (_WORD *)v47;
          if ( v47 )
          {
LABEL_39:
            --v17;
            goto LABEL_84;
          }
          goto LABEL_27;
        }
        if ( v18 < 0 )
          goto LABEL_86;
        if ( v43 != 7 )
          goto LABEL_84;
        if ( v37 < 4 )
          goto LABEL_84;
        v19 = (unsigned __int64)v37 >> 1;
        if ( v9[v19 - 1] )
          goto LABEL_84;
        if ( v9[v19 - 2] )
          goto LABEL_84;
        v18 = PnpCtxRegOpenKey(0, a1, (_DWORD)v7, 0, 131103, (__int64)&KeyHandle);
        if ( v18 == -1073741772 )
          goto LABEL_84;
        if ( v18 < 0 )
        {
LABEL_86:
          appended = v18;
          goto LABEL_87;
        }
        v20 = v9;
        if ( !*v9 )
          goto LABEL_83;
        while ( 1 )
        {
          v21 = &word_140B8A320;
          if ( wcsicmp(v20, L" ") )
            v21 = v20;
          v40 = v21;
          if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
            break;
LABEL_79:
          v36 = -1LL;
          do
            ++v36;
          while ( v20[v36] );
          v20 += v36 + 1;
          if ( !*v20 )
          {
LABEL_82:
            v9 = (_WORD *)v47;
            v7 = (void *)Pool2;
            v17 = v41;
            v8 = v38;
LABEL_83:
            ZwClose(KeyHandle);
            if ( appended < 0 )
              goto LABEL_87;
LABEL_84:
            v6 = v39;
            ++v17;
            goto LABEL_29;
          }
        }
        v22 = (unsigned int *)P;
        if ( *((_DWORD *)P + 1) == 1 || *((_DWORD *)P + 1) == 2 )
        {
          v32 = *((_DWORD *)P + 3);
          v33 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
          if ( v32 - 3 > 0xFFFB || v33[((unsigned __int64)v32 >> 1) - 1] )
            goto LABEL_78;
          RtlInitUnicodeString(&v49, v33);
          UnicodeString.Length = 0;
          v34 = PiDrvDbResolveSystemFilePath(
                  &v49,
                  a2,
                  a3,
                  (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                  a4,
                  &UnicodeString);
          appended = v34;
          if ( v34 == -1073741275 || v34 == -1073741637 )
          {
            appended = 0;
            goto LABEL_78;
          }
          if ( v34 < 0 )
            goto LABEL_78;
          v31 = PnpCtxRegSetValue(
                  v35,
                  KeyHandle,
                  v21,
                  v22[1],
                  UnicodeString.Buffer,
                  (unsigned int)UnicodeString.Length + 2);
        }
        else
        {
          if ( *((_DWORD *)P + 1) != 7 )
            goto LABEL_78;
          v23 = *((unsigned int *)P + 3);
          v24 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
          if ( (unsigned int)(v23 - 4) > 0xFFFA )
            goto LABEL_78;
          v25 = (unsigned __int64)(unsigned int)v23 >> 1;
          if ( v24[v25 - 1] || v24[v25 - 2] )
            goto LABEL_78;
          v26 = 0;
          v27 = 0;
          v50.Length = 0;
          if ( *v24 )
          {
            while ( 1 )
            {
              RtlInitUnicodeString(&v49, v24);
              UnicodeString.Length = 0;
              v28 = PiDrvDbResolveSystemFilePath(
                      &v49,
                      a2,
                      a3,
                      (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                      a4,
                      &UnicodeString);
              appended = v28;
              if ( v28 == -1073741275 || v28 == -1073741637 )
              {
                Length = 0;
                UnicodeString.Length = 0;
              }
              else
              {
                if ( v28 < 0 )
                  break;
                Length = UnicodeString.Length;
                ++v27;
              }
              p_UnicodeString = (const void **)&UnicodeString;
              if ( !Length )
                p_UnicodeString = (const void **)&v49;
              appended = PiDevCfgAppendMultiSz(&v50, p_UnicodeString, 0LL, 1);
              if ( appended < 0 )
                break;
              v24 += ((unsigned __int64)v49.Length >> 1) + 1;
              if ( !*v24 )
              {
                v26 = v50.Length;
                goto LABEL_68;
              }
            }
LABEL_78:
            ExFreePoolWithTag(v22, 0);
            if ( appended < 0 )
              goto LABEL_82;
            goto LABEL_79;
          }
LABEL_68:
          if ( !v27 )
            goto LABEL_78;
          v31 = PnpCtxRegSetValue(v23, KeyHandle, v40, v22[1], v50.Buffer, v26);
        }
        appended = v31;
        goto LABEL_78;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( (v4 & 1) == 0
      || !a4
      || (UNICODE_STRING *)DestinationString.Buffer == v10
      || RtlEqualUnicodeString(a4, &DestinationString, 1u) )
    {
      goto LABEL_3;
    }
    goto LABEL_21;
  }
LABEL_4:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v50);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)appended;
}

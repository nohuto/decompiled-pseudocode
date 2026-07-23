/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x14089EC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140A7D950 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140B226B8 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 a1, int a2, const wchar_t *a3, unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 Pool2; // r15
  int v9; // eax
  char v10; // r12
  wchar_t *v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  wchar_t *v18; // rax
  size_t v19; // rdx
  NTSTATUS v20; // eax
  wchar_t *v21; // r11
  _WORD *v22; // r11
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r8
  unsigned int v26; // esi
  unsigned int v27; // eax
  int v29; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING v36; // [rsp+70h] [rbp-10h] BYREF
  char v37; // [rsp+C8h] [rbp+48h] BYREF

  Handle = 0LL;
  v29 = 0;
  v7 = *a4;
  Pool2 = 0LL;
  v9 = *a4;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v10 = 0;
  v11 = 0LL;
  v37 = 0;
  v36 = 0LL;
  DestinationString = 0LL;
  String2 = 0LL;
  v12 = v9 - 1;
  if ( v12 )
  {
    v13 = -1LL;
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
      if ( !v14 || *a3 != 35 )
        return 0LL;
    }
    if ( (unsigned int)v7 >= 3 && ((_DWORD)v7 != 3 || !*((_BYTE *)a4 + 1428)) )
      goto LABEL_16;
  }
  else
  {
    v13 = -1LL;
    v15 = -1LL;
    do
      ++v15;
    while ( a3[v15] );
    if ( v15 != 38 || *a3 != 123 )
      return 0LL;
  }
  if ( (int)PnpCtxRegOpenKey(a1, a2, (_DWORD)a3, 8, 131097, (__int64)&Handle) < 0 )
    goto LABEL_59;
LABEL_16:
  v16 = *a4;
  if ( *a4 >= 3 )
  {
    if ( v16 == 3 )
    {
      do
        ++v13;
      while ( a3[v13] );
      if ( v13 > 1 && *a3 == 35 )
        v10 = 1;
    }
    goto LABEL_32;
  }
  if ( v16 != 2 || !*((_WORD *)a4 + 506) )
    goto LABEL_32;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_59;
  v30 = 400;
  if ( (int)PnpCtxRegQueryValue(v17, Handle, L"DeviceInstance", &v29, Pool2, &v30) >= 0 && v29 == 1 && v30 >= 2 )
  {
    *(_WORD *)(Pool2 + 398) = 0;
    if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2) >= 0
      && RtlInitUnicodeStringEx(&String2, (PCWSTR)a4 + 506) >= 0
      && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
    {
LABEL_32:
      if ( *a4 >= 2 )
      {
        v18 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v11 = v18;
        if ( !v18 )
          goto LABEL_57;
        v19 = 504LL;
        if ( *((_WORD *)a4 + 2) )
        {
          v20 = RtlStringCchCopyExW(v18, 0x1F8uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &ppszDestEnd, &pcchRemaining, 0x900u);
          v7 = 0LL;
          if ( v20 < 0 )
            goto LABEL_56;
          v21 = ppszDestEnd;
          v19 = pcchRemaining - 1;
          *ppszDestEnd = 0;
        }
        else
        {
          v21 = v18;
        }
        if ( *a4 == 2 || v10 == 1 )
        {
          if ( RtlStringCchCopyW(v21, v19, a3) < 0 )
            goto LABEL_56;
          if ( v10 == 1 )
            *v22 = 92;
        }
      }
      if ( *a4 >= 3 )
      {
        *(_QWORD *)v11 = *(_QWORD *)L"\\\\?\\";
        if ( (int)CmValidateDeviceInterfaceName(v7, v11) >= 0 && RtlInitUnicodeStringEx(&v36, v11) >= 0 )
        {
          v26 = v36.MaximumLength >> 1;
          if ( (!*((_BYTE *)a4 + 1428) || (int)CmIsDeviceInterfaceEnabled(a1, v11, v25, &v37) >= 0 && v37)
            && (!*((_QWORD *)a4 + 179) || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, (__int64)v11)) )
          {
            a4[365] += v26;
            v27 = a4[364];
            if ( v27 > v26 )
            {
              RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 181), v27, v11, 0LL, 0LL, 0x900u);
              *((_QWORD *)a4 + 181) += 2LL * v26;
              a4[364] -= v26;
            }
          }
        }
      }
      else
      {
        v23 = ExAllocatePool2(0x100uLL);
        v24 = v23;
        if ( v23 )
        {
          *(_DWORD *)v23 = *a4 + 1;
          RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v23 + 4), 0x1F8uLL, v11, 0LL, 0LL, 0x900u);
          RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v24 + 1012), 0xC8uLL, (NTSTRSAFE_PCWSTR)a4 + 506, 0LL, 0LL, 0x900u);
          *(_QWORD *)(v24 + 1416) = *((_QWORD *)a4 + 177);
          *(_DWORD *)(v24 + 1424) = a4[356];
          *(_BYTE *)(v24 + 1428) = *((_BYTE *)a4 + 1428);
          *(_QWORD *)(v24 + 1432) = *((_QWORD *)a4 + 179);
          *(_QWORD *)(v24 + 1440) = *((_QWORD *)a4 + 180);
          *(_QWORD *)(v24 + 1448) = *((_QWORD *)a4 + 181);
          *(_DWORD *)(v24 + 1456) = a4[364];
          *(_DWORD *)(v24 + 1460) = a4[365];
          PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v24);
          *((_QWORD *)a4 + 177) = *(_QWORD *)(v24 + 1416);
          a4[356] = *(_DWORD *)(v24 + 1424);
          a4[365] = *(_DWORD *)(v24 + 1460);
          *((_QWORD *)a4 + 181) = *(_QWORD *)(v24 + 1448);
          a4[364] = *(_DWORD *)(v24 + 1456);
          ExFreePoolWithTag((PVOID)v24, 0);
        }
      }
      if ( !v11 )
      {
LABEL_57:
        if ( !Pool2 )
          goto LABEL_59;
        goto LABEL_58;
      }
LABEL_56:
      ExFreePoolWithTag(v11, 0);
      goto LABEL_57;
    }
  }
LABEL_58:
  ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_59:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}

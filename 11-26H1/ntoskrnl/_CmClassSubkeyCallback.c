/*
 * XREFs of _CmClassSubkeyCallback @ 0x14089EB50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _CmValidateInstallerClassName @ 0x140AC4F40 (_CmValidateInstallerClassName.c)
 */

__int64 __fastcall CmClassSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned int v8; // edi
  unsigned int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  DestinationString = 0LL;
  if ( v4 && (int)PnpCtxRegOpenKey(a1, v4, (_DWORD)a3, 0, 131097, (__int64)&Handle) >= 0 )
  {
    ZwClose(0LL);
  }
  else if ( ((unsigned __int8)*(_DWORD *)a4 == 2 || *(_DWORD *)a4 == 4)
         && (int)CmValidateInstallerClassName(a1, a3) >= 0
         && RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
  {
    v8 = DestinationString.MaximumLength >> 1;
    if ( !*(_QWORD *)(a4 + 16) || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, (__int64)a3) )
    {
      *(_DWORD *)(a4 + 44) += v8;
      v9 = *(_DWORD *)(a4 + 40);
      if ( v9 > v8 )
      {
        RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 32), v9, a3, 0LL, 0LL, 0x900u);
        *(_QWORD *)(a4 + 32) += 2LL * v8;
        *(_DWORD *)(a4 + 40) -= v8;
      }
    }
  }
  return 0LL;
}

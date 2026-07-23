/*
 * XREFs of NtDisableLastKnownGood @ 0x1408ACF10
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  int CachedContextBaseKey; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  __int64 v5; // [rsp+70h] [rbp+30h] BYREF

  Data = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v5 = 0LL;
  KeyHandle = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) || PsIsCurrentThreadInServerSilo() )
    return -1073741727;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 4LL, &v5);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
    *(_DWORD *)&ValueName.Length = 1572886;
    CachedContextBaseKey = IopCreateRegistryKeyEx(&KeyHandle, v5, &ValueName, 983103LL, 0, 0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      ValueName.Buffer = L"DisableLKG";
      Data = 1;
      *(_DWORD *)&ValueName.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return CachedContextBaseKey;
}

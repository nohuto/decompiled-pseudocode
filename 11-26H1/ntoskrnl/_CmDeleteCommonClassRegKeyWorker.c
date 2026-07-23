/*
 * XREFs of _CmDeleteCommonClassRegKeyWorker @ 0x14089CA4C
 * Callers:
 *     _CmDeleteCommonClassRegKey @ 0x14089C8F8 (_CmDeleteCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1409620B0 (_CmGetCommonClassRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A3DF40 (_PnpCtxRegOpenCurrentUserKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v7; // rbx
  unsigned int v8; // r12d
  unsigned int i; // edi
  wchar_t *Pool2; // r14
  int CommonClassRegKeyPath; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  wchar_t *v17; // rdi
  HANDLE v18; // rdx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  HANDLE v23; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v23 = 0LL;
  Handle = 0LL;
  v7 = a2;
  v8 = 4;
  DestinationString = 0LL;
  for ( i = (a3 & 0x200) != 0 ? 320 : 200; ; i = 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_41;
    }
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(i >> 1, v7, a3, a4);
    inited = CommonClassRegKeyPath;
    if ( CommonClassRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v7 = a2;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_41;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = Pool2;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v13, v14, &Handle);
    if ( inited < 0 )
      goto LABEL_41;
    v18 = Handle;
    v23 = Handle;
  }
  else
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_41;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= i
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(&`_CmDeleteCommonClassRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
    {
      inited = -1073741811;
      goto LABEL_41;
    }
    v17 = Pool2 + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = Pool2 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v8 = 7;
      v17 = Pool2 + 39;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteCommonClassRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 8;
      v17 = Pool2 + 47;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteCommonClassRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 14;
      v17 = Pool2 + 43;
    }
    inited = PnpCtxGetCachedContextBaseKey(a1, v8, &v23);
    if ( inited < 0 )
      goto LABEL_41;
    v18 = v23;
  }
  if ( a5 )
    v19 = PnpCtxRegDeleteTree(a1, v18, v17);
  else
    v19 = PnpCtxRegDeleteKey(a1, v18, v17);
  v20 = v19;
  if ( v19 && v19 != -1073741444 && v19 != -1073741772 )
    goto LABEL_38;
  if ( v8 == 8 && *(_BYTE *)(a1 + 4) )
  {
    inited = PnpCtxGetCachedContextBaseKey(a1, 9LL, &v23);
    if ( inited < 0 )
      goto LABEL_41;
    if ( a5 )
      v21 = PnpCtxRegDeleteTree(a1, v23, v17);
    else
      v21 = PnpCtxRegDeleteKey(a1, v23, v17);
    if ( v20 == -1073741772 || v21 != -1073741772 )
      v20 = v21;
  }
  if ( v20 != -1073741444 )
  {
LABEL_38:
    if ( v20 < 0 )
      inited = v20;
  }
LABEL_41:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}

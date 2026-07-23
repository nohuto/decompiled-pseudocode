/*
 * XREFs of _CmIsDeviceInContainer @ 0x1409AC314
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x1409AC150 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmIsDeviceInContainer(
        __int64 a1,
        char *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        const WCHAR *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r15
  _BYTE *v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  const WCHAR *v18; // r8
  HANDLE v19; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v22; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+30h] BYREF

  v7 = a6;
  v9 = a7;
  v22 = 0LL;
  v21 = 0LL;
  *a6 = 0;
  v11 = a1 + 224;
  *v9 = 0;
  Handle = 0LL;
  v23 = 0;
  if ( a1 && *(_QWORD *)v11 )
    v12 = *(_QWORD *)(*(_QWORD *)v11 + 8LL);
  else
    v12 = 0LL;
  v13 = RegRtlOpenKeyTransacted(a2, a3, 0, 1u, &v22, v12);
  if ( v13 < 0 )
    goto LABEL_14;
  v14 = a1 && *(_QWORD *)v11 ? *(_QWORD *)(*(_QWORD *)v11 + 8LL) : 0LL;
  v13 = RegRtlOpenKeyTransacted((char *)v22, L"BaseContainers", 0, 1u, &v21, v14);
  if ( v13 < 0
    || (!a1 || !*(_QWORD *)v11 ? (v15 = 0LL) : (v15 = *(_QWORD *)(*(_QWORD *)v11 + 8LL)),
        (v13 = RegRtlOpenKeyTransacted((char *)v21, a4, 0, 1u, &Handle, v15), v13 < 0)
     || (v18 = a5, v19 = Handle, *v7 = 1, v13 = PnpCtxRegQueryValue(v16, v19, v18, 0LL, 0LL, &v23), v13 < 0)) )
  {
LABEL_14:
    if ( v13 == -1073741772 || v13 == -1073741444 )
      v13 = 0;
  }
  else
  {
    *v9 = 1;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)v13;
}

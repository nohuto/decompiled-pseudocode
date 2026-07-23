/*
 * XREFs of PiDevCfgInitResolveContext @ 0x140A434A0
 * Callers:
 *     PiDevCfgVerifyDeviceAllowed @ 0x140A42DFC (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407BA804 (PiDrvDbResolveKeyFilePaths.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgFreeResolveContext @ 0x140A43410 (PiDevCfgFreeResolveContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgInitResolveContext(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // eax
  int v6; // ebx
  NTSTATUS v7; // eax
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _DWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v14; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v13[1] = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)a3 = a1;
  v14 = L"Variables";
  ObjectAttributes.RootDirectory = a2;
  *(_QWORD *)(a3 + 16) = 0LL;
  v13[0] = 1310738;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
  v6 = v5;
  if ( v5 != -1073741772 )
  {
    if ( v5 < 0 )
      goto LABEL_4;
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a3 + 24) = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_4;
    }
    v10 = 0LL;
    v11 = 127LL;
    do
    {
      v12 = (_QWORD *)(v10 + *(_QWORD *)(a3 + 24));
      v10 += 16LL;
      v12[1] = v12;
      *v12 = v12;
      --v11;
    }
    while ( v11 );
  }
  v13[0] = 3014700;
  v14 = L"Setup\\ResolveFilePaths";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v7;
  if ( v7 == -1073741772 || v7 == -1073741444 )
    goto LABEL_3;
  if ( v7 < 0 )
    goto LABEL_4;
  v6 = PiDrvDbResolveKeyFilePaths(a2);
  if ( v6 < 0 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)KeyHandle, 0LL);
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 < 0 )
    PiDevCfgFreeResolveContext(a3);
  return (unsigned int)v6;
}

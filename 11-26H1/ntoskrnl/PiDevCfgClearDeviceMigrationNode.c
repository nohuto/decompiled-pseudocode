/*
 * XREFs of PiDevCfgClearDeviceMigrationNode @ 0x140A4661C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1404EE954 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeletePath @ 0x140A46B38 (_PnpCtxRegDeletePath.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgClearDeviceMigrationNode(__int64 *a1, const WCHAR *a2)
{
  char *v2; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int RegistryValues; // esi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdx
  char *v14; // r10
  const WCHAR *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v20; // rdi
  int v21; // eax
  _WORD *i; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  ULONG v25; // [rsp+20h] [rbp-E0h]
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v30; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v31; // [rsp+68h] [rbp-98h] BYREF
  int v32[4]; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v33; // [rsp+80h] [rbp-80h]
  PVOID *v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+B0h] [rbp-50h]
  const wchar_t *v37; // [rsp+B8h] [rbp-48h]
  PVOID *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+E8h] [rbp-18h]
  const wchar_t *v41; // [rsp+F0h] [rbp-10h]
  int *v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+100h] [rbp+0h]

  v2 = (char *)a1[1];
  Handle = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  v29[0] = 0LL;
  v29[1] = 0LL;
  v27 = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx && (v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  v7 = RegRtlOpenKeyTransacted(v2, a2, 0, 0x20019u, &Handle, v6);
  RegistryValues = v7;
  if ( v7 == -1073741772 )
    goto LABEL_31;
  if ( v7 < 0 )
    goto LABEL_24;
  memset_0(v32, 0, 0xE0uLL);
  v33 = L"ClassGuid";
  v35 = 0x1000000;
  v32[2] = 288;
  v34 = P;
  v40 = 288;
  v37 = L"LocationPaths";
  v39 = 117440512;
  v38 = v29;
  v41 = L"Persist";
  v42 = &v27;
  v36 = 304;
  v43 = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v32, 0LL, v25, 1);
  if ( RegistryValues < 0 )
    goto LABEL_24;
  if ( !LOWORD(P[0]) && P[1] )
    RtlFreeAnsiString((PUNICODE_STRING)P);
  if ( v29[1] && !PnpValidateMultiSzData((_WORD *)v29[1], LOWORD(v29[0])) )
    RtlFreeAnsiString((PUNICODE_STRING)v29);
  if ( v27 )
  {
LABEL_31:
    RegistryValues = 0;
    goto LABEL_24;
  }
  ZwClose(Handle);
  v9 = a1[1];
  LOBYTE(v10) = 1;
  Handle = 0LL;
  PnpCtxRegDeletePath(v11, v9, a2, v10);
  v13 = (void *)a1[3];
  if ( v13 )
    PnpCtxRegDeleteValue(v12, v13, a2);
  v14 = (char *)a1[2];
  if ( v14 )
  {
    v15 = (const WCHAR *)P[1];
    if ( P[1] )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && (v16 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( *(_BYTE *)(v16 + 16) )
          goto LABEL_20;
      }
      else
      {
        v17 = 0LL;
      }
      v15 = (const WCHAR *)P[1];
LABEL_20:
      if ( (int)RegRtlOpenKeyTransacted(v14, v15, 0, 0xF003Fu, &v30, v17) >= 0 )
      {
        PnpCtxRegDeleteValue(v18, v30, a2);
        ZwClose(v30);
      }
      PnpCtxRegDeletePath(v18, a1[2], P[1], 0LL);
    }
  }
  if ( !v29[1] )
    goto LABEL_24;
  v20 = a1 + 4;
  if ( a1[4] )
    goto LABEL_43;
  v21 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, *a1, (__int64)L"Locations", 0, 0xF003Fu, (__int64)(a1 + 4));
  if ( v21 == -1073741772 )
  {
    *v20 = 0LL;
  }
  else if ( v21 < 0 )
  {
    RegistryValues = v21;
    goto LABEL_24;
  }
  if ( *v20 )
  {
LABEL_43:
    for ( i = v29[1]; *i; i += v24 + 1 )
    {
      if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, *v20, (__int64)i, 0, 0xF003Fu, (__int64)&v31) >= 0 )
      {
        PnpCtxRegDeleteValue(v23, v31, a2);
        ZwClose(v31);
      }
      PnpCtxRegDeletePath(v23, *v20, i, 0LL);
      v24 = -1LL;
      do
        ++v24;
      while ( i[v24] );
    }
  }
LABEL_24:
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v29[1] )
  {
    ExFreePool(v29[1]);
    *(_OWORD *)v29 = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValues;
}

/*
 * XREFs of _CmServiceFilterCallback @ 0x14080BF80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     _CmGetInstallerClassRegProp @ 0x1409AC648 (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall CmServiceFilterCallback(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r15d
  __int64 v6; // r14
  char v7; // di
  const WCHAR *v8; // rdx
  int DeviceRegProp; // edi
  void *v10; // rcx
  __int64 Pool2; // rax
  int v12; // esi
  _DWORD *v13; // rax
  unsigned int v14; // r13d
  int v15; // r12d
  unsigned int v16; // r15d
  _DWORD *v17; // r14
  unsigned int v18; // eax
  int InstallerClassRegProp; // eax
  void *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  const WCHAR *i; // rdi
  __int64 v25; // rax
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  _DWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v32[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v33; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v36[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v37; // [rsp+ECh] [rbp-14h]

  v28[1] = a3;
  v30 = a2;
  v29 = a1;
  v27 = 0;
  v28[0] = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( a4 )
  {
    v8 = *(const WCHAR **)a4;
    if ( *(_QWORD *)a4 && *v8 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, v8) < 0 )
        return v7;
      while ( 1 )
      {
        v27 = *(_DWORD *)(a4 + 16);
        DeviceRegProp = CmGetDeviceRegProp(v6, v5, 0, 5, (__int64)v28, *(_QWORD *)(a4 + 8), (__int64)&v27, 0);
        if ( !DeviceRegProp && v27 < 2 )
        {
LABEL_13:
          v12 = -1073741811;
          goto LABEL_18;
        }
        if ( DeviceRegProp != -1073741789 )
          break;
        if ( v27 < 2 )
          goto LABEL_13;
        v10 = *(void **)(a4 + 8);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        Pool2 = ExAllocatePool2(0x100uLL);
        *(_QWORD *)(a4 + 8) = Pool2;
        if ( !Pool2 )
        {
          *(_DWORD *)(a4 + 16) = 0;
          v12 = -1073741801;
          goto LABEL_18;
        }
        *(_DWORD *)(a4 + 16) = v27;
      }
      v12 = DeviceRegProp;
      if ( DeviceRegProp
        || (*(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0,
            RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0)
        || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      {
LABEL_18:
        v31[0] = 1;
        v13 = v31;
        v31[1] = 2;
        v14 = 0;
        while ( 1 )
        {
          v33 = v13;
          v7 = 0;
          if ( v14 >= 2 )
            return v7;
          v15 = *v13;
          v32[0] = 18;
          v32[1] = 19;
          if ( v15 == 2 )
          {
            v27 = 78;
            v12 = CmGetDeviceRegProp(v6, v5, 0, 9, (__int64)v28, (__int64)v36, (__int64)&v27, 0);
            v7 = 0;
            if ( v12 < 0 || v28[0] != 1 || v27 < 2 )
              return v7;
            v37 = 0;
          }
          v16 = 0;
          v17 = v32;
          do
          {
            while ( 1 )
            {
              v18 = *(_DWORD *)(a4 + 16);
              v27 = v18;
              if ( v15 == 1 )
              {
                InstallerClassRegProp = CmGetDeviceRegProp(
                                          v29,
                                          v30,
                                          0,
                                          *v17,
                                          (__int64)v28,
                                          *(_QWORD *)(a4 + 8),
                                          (__int64)&v27,
                                          0);
LABEL_30:
                v12 = InstallerClassRegProp;
                v18 = v27;
                goto LABEL_31;
              }
              if ( v15 == 2 )
              {
                InstallerClassRegProp = CmGetInstallerClassRegProp(
                                          v29,
                                          (unsigned int)v36,
                                          0,
                                          *v17,
                                          (__int64)v28,
                                          *(_QWORD *)(a4 + 8),
                                          (__int64)&v27);
                goto LABEL_30;
              }
LABEL_31:
              if ( !v12 && v18 < 2 )
              {
LABEL_33:
                v12 = -1073741811;
                goto LABEL_34;
              }
              if ( v12 != -1073741789 )
                break;
              if ( v18 < 2 )
                goto LABEL_33;
              v20 = *(void **)(a4 + 8);
              if ( v20 )
                ExFreePoolWithTag(v20, 0);
              v21 = ExAllocatePool2(0x100uLL);
              *(_QWORD *)(a4 + 8) = v21;
              if ( !v21 )
              {
                *(_DWORD *)(a4 + 16) = 0;
                v12 = -1073741801;
                goto LABEL_34;
              }
              *(_DWORD *)(a4 + 16) = v27;
            }
            if ( v12 >= 0 && v28[0] == 7 )
            {
              v22 = *(_DWORD *)(a4 + 16);
              if ( v22 > 2 )
                *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v22 >> 1) - 2) = 0;
              v23 = *(_DWORD *)(a4 + 16);
              if ( v23 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v23 >> 1) - 4) = 0;
              for ( i = *(const WCHAR **)(a4 + 8); *i; i += v25 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&String2, i) >= 0 && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
                {
                  v6 = v29;
                  goto LABEL_57;
                }
                v25 = -1LL;
                do
                  ++v25;
                while ( i[v25] );
              }
            }
LABEL_34:
            ++v16;
            ++v17;
          }
          while ( v16 < 2 );
          ++v14;
          LODWORD(v6) = v29;
          v13 = v33 + 1;
          v5 = v30;
        }
      }
    }
LABEL_57:
    v7 = 1;
    if ( *(_QWORD *)(a4 + 24) )
      return guard_dispatch_icall_no_overrides(v6);
  }
  return v7;
}

/*
 * XREFs of PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C
 * Callers:
 *     PiDevCfgResolveVariableKeyCopy @ 0x1407AE6B0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1407AE7A0 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140A42A2C (_PnpCtxOpenContextBaseKey.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     PnpRegSzToString @ 0x140ADB15C (PnpRegSzToString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyHandle(void *a1, void *a2, _QWORD *a3)
{
  unsigned __int64 v4; // r13
  NTSTATUS RegistryValue; // eax
  unsigned int *v6; // r14
  int DeviceRegProp; // ebx
  unsigned int v8; // esi
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  const WCHAR *v15; // rsi
  wchar_t *v16; // rax
  NTSTATUS v17; // eax
  wchar_t *v18; // rsi
  wchar_t *v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // r12d
  wchar_t *v22; // r15
  wchar_t *v23; // rax
  wchar_t *v24; // rsi
  __int64 v25; // rdi
  int v26; // edi
  UNICODE_STRING **v27; // r12
  int v28; // eax
  UNICODE_STRING *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  void *v32; // rax
  wchar_t *v33; // rsi
  unsigned int v34; // ebx
  _WORD *v35; // r13
  wchar_t *v36; // rax
  wchar_t *v37; // r15
  __int64 v38; // rax
  wchar_t *v39; // r9
  unsigned int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rdi
  wchar_t *v43; // r15
  __int64 v44; // rax
  UNICODE_STRING v45; // xmm0
  unsigned int v46; // edx
  _WORD *v47; // rcx
  HANDLE v48; // rax
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v52; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID Pool2; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v58; // [rsp+90h] [rbp-70h]
  HANDLE v59; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v60; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t *Str; // [rsp+B0h] [rbp-50h]
  _QWORD *v62; // [rsp+B8h] [rbp-48h]
  _BYTE v63[76]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v64; // [rsp+10Ch] [rbp+Ch]

  v62 = a3;
  *a3 = 0LL;
  v54 = a1;
  P = 0LL;
  Handle = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  DestinationString = 0LL;
  v55 = 0;
  v4 = 0LL;
  v56 = 0;
  Pool2 = 0LL;
  *(_QWORD *)&v58.Length = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v6 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_111;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    DeviceRegProp = -1073741823;
    goto LABEL_111;
  }
  v8 = 0;
  v9 = (const wchar_t *)((char *)v6 + v6[2]);
  while ( 1 )
  {
    if ( v8 >= 7 )
      goto LABEL_22;
    v10 = 4LL * v8;
    if ( !wcsicmp((&off_140BE24F0)[v10], v9) )
      break;
    ++v8;
  }
  if ( &(&off_140BE24F0)[v10] )
  {
    v11 = LODWORD((&off_140BE24F0)[v10 + 1]);
    v12 = *(_QWORD *)v54;
    if ( !(_DWORD)v11 )
    {
      v14 = *((_DWORD *)&off_140BE24F0 + 2 * v10 + 3);
      if ( !v14 )
      {
        DeviceRegProp = -1073741595;
        goto LABEL_111;
      }
      if ( v14 == 7 )
      {
        v55 = 78;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(v12 + 48),
                          0LL,
                          9u,
                          (__int64)&v56,
                          (__int64)v63,
                          (__int64)&v55,
                          0);
        if ( DeviceRegProp < 0 )
          goto LABEL_111;
        if ( v56 != 1 )
          goto LABEL_3;
        v64 = 0;
        v15 = (const WCHAR *)v63;
      }
      else
      {
        v15 = *(&off_140BE24F0 + v10 + 3);
      }
      DeviceRegProp = PnpCtxOpenContextBaseKey(
                        (__int64)&off_140BE24F0,
                        *((_DWORD *)&off_140BE24F0 + 2 * v10 + 3),
                        v11,
                        0x20019u,
                        (__int64)&Handle);
      if ( DeviceRegProp < 0 )
        goto LABEL_111;
      if ( v15 )
      {
        RtlInitUnicodeString(&DestinationString, v15);
        DeviceRegProp = IopOpenRegistryKeyEx(&v60, Handle, &DestinationString, 0x20019u);
        if ( DeviceRegProp < 0 )
          goto LABEL_111;
        ZwClose(Handle);
        Handle = v60;
      }
      goto LABEL_31;
    }
    v13 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v12 + 48), v11, 0, 131097, 0, (__int64)&Handle, 0LL);
  }
  else
  {
LABEL_22:
    if ( wcsicmp(v9, L"SYSTEM") )
    {
      if ( wcsicmp(v9, L"SOFTWARE") )
      {
        if ( wcsicmp(v9, L"HARDWARE") )
        {
          DeviceRegProp = -1073741772;
          goto LABEL_107;
        }
        v16 = L"\\Registry\\Machine\\HARDWARE";
      }
      else
      {
        v16 = L"\\Registry\\Machine\\SOFTWARE";
      }
      *(_DWORD *)&DestinationString.Length = 3538996;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 3276848;
      v16 = L"\\Registry\\Machine\\SYSTEM";
    }
    DestinationString.Buffer = v16;
    v13 = IopOpenRegistryKeyEx(&Handle, 0LL, &DestinationString, 0x20019u);
  }
  DeviceRegProp = v13;
  if ( v13 < 0 )
    goto LABEL_111;
LABEL_31:
  ExFreePoolWithTag(v6, 0);
  P = 0LL;
  v17 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
  v6 = (unsigned int *)P;
  DeviceRegProp = v17;
  if ( v17 < 0 )
  {
    if ( v17 != -1073741772 )
      goto LABEL_111;
    v48 = Handle;
    DeviceRegProp = 0;
    v59 = Handle;
    Handle = 0LL;
    goto LABEL_105;
  }
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  Str = (wchar_t *)((char *)v6 + v6[2]);
  v18 = Str;
  v19 = wcschr(Str, 0x24u);
  if ( !v19 )
    goto LABEL_100;
  v20 = 0;
  do
  {
    ++v20;
    v19 = wcschr(v19 + 1, 0x24u);
  }
  while ( v19 );
  v52 = v20;
  if ( v20 )
  {
    Pool2 = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_111;
    }
    LOWORD(v21) = v58.MaximumLength;
    while ( 1 )
    {
      v22 = v18;
      if ( !*v18 || (unsigned int)v4 >= v20 )
        break;
      v23 = wcschr(v18, 0x5Cu);
      v24 = v23;
      if ( v23 )
      {
        *v23 = 0;
        v25 = v23 - v22;
      }
      else
      {
        v25 = -1LL;
        do
          ++v25;
        while ( v22[v25] );
      }
      v26 = 2 * v25;
      if ( *v22 == 36 )
      {
        v27 = (UNICODE_STRING **)((char *)Pool2 + 8 * v4);
        v28 = PiDevCfgResolveVariable((__int64)v54, v22 + 1, v27);
        DeviceRegProp = v28;
        if ( v28 < 0 )
        {
          if ( v28 != -1073741772 )
            goto LABEL_110;
          DeviceRegProp = 0;
        }
        else
        {
          v29 = *v27;
          if ( *(_DWORD *)&(*v27)[2].Length == 1 || *(_DWORD *)&(*v27)[2].Length == 2 )
          {
            v26 = *(_DWORD *)(&v29[2].MaximumLength + 1) - 2;
          }
          else if ( *(_DWORD *)&(*v27)[2].Length == 7 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( v29[2].Buffer[v30] );
            v26 = 2 * v30;
          }
        }
        LOWORD(v21) = v58.MaximumLength;
        v4 = (unsigned int)(v4 + 1);
      }
      if ( (unsigned __int64)(v26 + (unsigned int)(unsigned __int16)v21) + 2 >= 0xFFFE )
      {
        DeviceRegProp = -2147483643;
        goto LABEL_110;
      }
      LOWORD(v21) = v26 + 2 + v21;
      v58.MaximumLength = v21;
      if ( v24 )
      {
        *v24 = 92;
        v18 = v24 + 1;
      }
      else
      {
        v31 = -1LL;
        do
          ++v31;
        while ( v22[v31] );
        v18 = &v22[v31];
      }
      v20 = v52;
    }
    if ( DeviceRegProp < 0 )
      goto LABEL_110;
    v58.Length = v21 - 2;
    v32 = (void *)ExAllocatePool2(0x100uLL);
    v54 = v32;
    v58.Buffer = (wchar_t *)v32;
    if ( !v32 )
    {
      DeviceRegProp = -1073741670;
LABEL_69:
      v4 = (unsigned __int64)v54;
      goto LABEL_107;
    }
    v33 = Str;
    v34 = 0;
    v35 = v32;
    LODWORD(P) = 0;
    v21 = (unsigned __int16)v21;
    while ( *v33 && v34 < v52 )
    {
      v36 = wcschr(v33, 0x5Cu);
      v37 = v36;
      if ( v36 )
      {
        *v36 = 0;
        v38 = v36 - v33;
      }
      else
      {
        v38 = -1LL;
        do
          ++v38;
        while ( v33[v38] );
      }
      v39 = v33;
      if ( v33 != Str )
      {
        if ( v21 <= 2 )
          goto LABEL_96;
        *v35++ = 92;
        v21 -= 2;
      }
      v40 = 2 * v38;
      if ( *v33 == 36 )
      {
        LODWORD(P) = v34 + 1;
        v41 = *((_QWORD *)Pool2 + v34);
        if ( v41 )
        {
          if ( *(_DWORD *)(v41 + 32) == 1 || *(_DWORD *)(v41 + 32) == 2 )
          {
            v39 = *(wchar_t **)(v41 + 40);
            v40 = *(_DWORD *)(v41 + 36) - 2;
          }
          else if ( *(_DWORD *)(v41 + 32) == 7 )
          {
            v39 = *(wchar_t **)(v41 + 40);
            v42 = -1LL;
            do
              ++v42;
            while ( v39[v42] );
            v40 = 2 * v42;
          }
        }
      }
      if ( v21 <= v40 )
      {
LABEL_96:
        v4 = (unsigned __int64)v54;
        DeviceRegProp = -1073741823;
        goto LABEL_107;
      }
      memmove(v35, v39, v40);
      v21 -= v40;
      v35 += (unsigned __int64)v40 >> 1;
      if ( v37 )
      {
        *v37 = 92;
        v43 = v37 + 1;
      }
      else
      {
        v44 = -1LL;
        do
          ++v44;
        while ( v33[v44] );
        v43 = &v33[v44];
      }
      v34 = (unsigned int)P;
      v33 = v43;
    }
    if ( v21 != 2 )
    {
      DeviceRegProp = -1073741823;
      goto LABEL_69;
    }
    v45 = v58;
    *v35 = 0;
    v4 = (unsigned __int64)v54;
    DestinationString = v45;
  }
  else
  {
LABEL_100:
    v46 = v6[3];
    v47 = (_WORD *)((char *)v6 + v6[2]);
    LODWORD(P) = 0;
    PnpRegSzToString(v47, v46, (int *)&P);
    DestinationString.Length = (unsigned __int16)P;
    DestinationString.MaximumLength = *((_WORD *)v6 + 6);
    DestinationString.Buffer = (wchar_t *)((char *)v6 + v6[2]);
  }
  DeviceRegProp = IopOpenRegistryKeyEx(&v59, Handle, &DestinationString, 0x20019u);
  if ( DeviceRegProp >= 0 )
  {
    v48 = v59;
LABEL_105:
    *v62 = v48;
  }
LABEL_107:
  if ( v4 )
    ExFreePool((PVOID)v4);
  if ( Pool2 )
LABEL_110:
    ExFreePoolWithTag(Pool2, 0);
LABEL_111:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}

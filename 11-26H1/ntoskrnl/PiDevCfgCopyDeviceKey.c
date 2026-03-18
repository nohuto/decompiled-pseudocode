/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x140A731C8
 * Callers:
 *     PiDevCfgCopyDeviceProperties @ 0x140779A34 (PiDevCfgCopyDeviceProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14098C464 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x140430990 (PiDevCfgParseVariableName.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1404E414C (PiDevCfgPushCopyKeyEntry.c)
 *     PnpValidateStringData @ 0x1404ED05C (PnpValidateStringData.c)
 *     PnpRegistryValueExists @ 0x14050587C (PnpRegistryValueExists.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405DB2E4 (PiDevCfgParsePropertyKeyName.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140723650 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x140723A30 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x140726B30 (ZwSetSecurityObject.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407A9510 (PiDevCfgConvertPropertyFromValue.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     _PnpCtxRegDeleteTree @ 0x140A2D8F8 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     IopGetRegistryKeyInformation @ 0x140A74810 (IopGetRegistryKeyInformation.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgSetObjectProperty @ 0x140B0DF70 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B442E8 (PiDevCfgResolveMultiSzValue.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        HANDLE *a6,
        __int64 a7)
{
  HANDLE v7; // r14
  __int64 v8; // r12
  int RegistryKeyInformation; // ebx
  ULONG v10; // edx
  ULONG v11; // eax
  ULONG Length; // edi
  void *Pool2; // rax
  WCHAR *v14; // r13
  WCHAR *v15; // rsi
  ULONG i; // r15d
  NTSTATUS v17; // eax
  void *v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rbx
  WCHAR *v21; // xmm0_8
  bool v22; // al
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  char v26; // al
  wchar_t *v27; // r15
  _DWORD *v28; // r13
  unsigned int v29; // r12d
  ULONG MaximumLength; // edi
  wchar_t *Buffer; // rsi
  ULONG v32; // r14d
  _WORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  HANDLE v37; // rdi
  int v38; // eax
  int v39; // edx
  int v40; // eax
  unsigned int v41; // r9d
  int v42; // eax
  wchar_t *v43; // rdi
  unsigned int v44; // eax
  int v45; // ecx
  SECURITY_INFORMATION v46; // esi
  PVOID v47; // r15
  HANDLE v48; // r12
  ULONG v49; // r14d
  NTSTATUS v50; // eax
  __int64 v51; // rbx
  const WCHAR *v52; // rdi
  int v53; // eax
  int v54; // eax
  __int64 v55; // rdx
  NTSTATUS v56; // eax
  HANDLE v57; // rdx
  __int64 v58; // rax
  ULONG ResultLength; // [rsp+28h] [rbp-D8h]
  wchar_t *v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+50h] [rbp-B0h]
  unsigned int v64; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v65; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE KeyHandlea; // [rsp+68h] [rbp-98h]
  unsigned int v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v70; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v71; // [rsp+90h] [rbp-70h]
  PVOID v72; // [rsp+98h] [rbp-68h] BYREF
  PVOID v73; // [rsp+A0h] [rbp-60h] BYREF
  int v74; // [rsp+A8h] [rbp-58h] BYREF
  SECURITY_INFORMATION v75; // [rsp+ACh] [rbp-54h] BYREF
  PVOID v76; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v79; // [rsp+D0h] [rbp-30h] BYREF
  int v80; // [rsp+D4h] [rbp-2Ch]
  ULONG v81; // [rsp+D8h] [rbp-28h]
  ULONG Disposition; // [rsp+DCh] [rbp-24h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-20h]
  WCHAR *v84; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v86; // [rsp+120h] [rbp+20h] BYREF
  __int64 v87; // [rsp+128h] [rbp+28h]
  HANDLE *v88; // [rsp+130h] [rbp+30h]
  UNICODE_STRING v89; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v90; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING v91; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  GUID v93; // [rsp+180h] [rbp+80h] BYREF
  int v94; // [rsp+190h] [rbp+90h]

  v71 = KeyHandle;
  v88 = a6;
  KeyHandlea = a2;
  v7 = KeyHandle;
  v87 = a7;
  v8 = a3;
  v94 = 0;
  v80 = a4;
  v83 = a3;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v70 = 0LL;
  v73 = 0LL;
  v75 = 0;
  v91 = 0LL;
  v65 = 0;
  v90 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  ValueName = 0LL;
  v79 = 1;
  v89 = 0LL;
  v86 = 0LL;
  v93 = 0LL;
  v64 = 0;
  v74 = 0;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_182;
  v10 = 2 * *((_DWORD *)P + 6) + 26;
  v65 = 2 * *((_DWORD *)P + 9) + 18;
  v11 = v65;
  if ( v65 <= v10 )
    v11 = v10;
  Length = v11;
  v68 = v11;
  ExFreePoolWithTag(P, 0);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  v14 = (WCHAR *)Pool2;
  if ( !Pool2 )
  {
LABEL_5:
    RegistryKeyInformation = -1073741670;
    goto LABEL_182;
  }
  v15 = (WCHAR *)Pool2;
  v84 = (WCHAR *)Pool2;
  for ( i = 0; ; ++i )
  {
    v81 = i;
    v17 = ZwEnumerateValueKey(v7, i, KeyValueBasicInformation, v15, Length, &v65);
    RegistryKeyInformation = v17;
    if ( v17 >= 0 )
    {
      v15[((unsigned __int64)*((unsigned int *)v15 + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v15 + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_177;
      v19 = 0;
      v20 = v87;
      ValueName = DestinationString;
      v21 = (WCHAR *)_mm_srli_si128((__m128i)DestinationString, 8).m128i_u64[0];
      v67 = 0;
      if ( !v87 )
        goto LABEL_24;
      if ( !*(_QWORD *)(v87 + 16) )
        goto LABEL_24;
      v22 = PiDevCfgParseVariableName(v21, &v89, &v67);
      v19 = v67;
      if ( !v22 )
        goto LABEL_24;
      if ( (v67 & 0x400000) == 0 )
      {
        v72 = 0LL;
        v23 = PiDevCfgResolveVariable(v20, v89.Buffer, (__int64 *)&v72);
        if ( v23 >= 0 )
        {
          v24 = *((_DWORD *)v72 + 8);
          if ( v24 != 1 && v24 != 2 || *((_DWORD *)v72 + 9) > 0xFFFEu )
            goto LABEL_114;
          ValueName.Buffer = (wchar_t *)*((_QWORD *)v72 + 5);
          ValueName.Length = *((_WORD *)v72 + 18) - 2;
          ValueName.MaximumLength = *((_WORD *)v72 + 18);
LABEL_24:
          v25 = *((_DWORD *)v15 + 1);
          v15[3] = 0;
          if ( (v25 & 0x400000) != 0 || v8 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v93, &v79) )
            goto LABEL_114;
          if ( (a5 & 1) == 0 || ((v19 | v25) & 0x30000) != 0 )
          {
            if ( v8 )
              v26 = (unsigned int)PnpGetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    v8,
                                    v80,
                                    (char *)KeyHandlea,
                                    0LL,
                                    (__int64)&v93,
                                    &v64,
                                    0LL,
                                    0,
                                    (__int64)&v74,
                                    0) == -1073741789;
            else
              v26 = PnpRegistryValueExists(KeyHandlea, &ValueName);
            if ( v26 )
            {
              if ( (a5 & 1) != 0 && ((v19 | v25) & 0x20000) == 0 )
                goto LABEL_37;
            }
            else if ( ((v19 | v25) & 0x10000) == 0 )
            {
              goto LABEL_37;
            }
LABEL_113:
            v15 = v84;
            goto LABEL_114;
          }
LABEL_37:
          v72 = 0LL;
          v27 = 0LL;
          v76 = 0LL;
          RegistryKeyInformation = IopGetRegistryValue(v71, v21, 0, &v72);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_177;
          v28 = v72;
          v29 = *((_DWORD *)v72 + 1) & 0xFFFF0000;
          MaximumLength = *((_DWORD *)v72 + 3);
          Buffer = (wchar_t *)((char *)v72 + *((unsigned int *)v72 + 2));
          v32 = (unsigned __int16)*((_DWORD *)v72 + 1);
          if ( v87 && *(_QWORD *)(v87 + 16) )
          {
            if ( v32 - 1 > 1 )
              goto LABEL_52;
            if ( PnpValidateStringData((__int64)v72 + *((unsigned int *)v72 + 2), MaximumLength)
              && PiDevCfgParseVariableName(v33, &v89, &v67) )
            {
              Buffer = v89.Buffer;
              v72 = 0LL;
              v34 = PiDevCfgResolveVariable(v87, v89.Buffer, (__int64 *)&v72);
              RegistryKeyInformation = v34;
              if ( v34 < 0 )
              {
                RegistryKeyInformation = 0;
                if ( v34 == -1073741772 )
                  MaximumLength = v89.MaximumLength;
                else
                  Buffer = 0LL;
                goto LABEL_60;
              }
              if ( (v67 & 0xC0000) == 0 )
              {
                MaximumLength = *((_DWORD *)v72 + 9);
                Buffer = (wchar_t *)*((_QWORD *)v72 + 5);
                v32 = (unsigned __int16)*((_DWORD *)v72 + 8);
                v29 |= *((_DWORD *)v72 + 8) & 0xFFFF0000;
                goto LABEL_60;
              }
              v35 = PiDevCfgResolveMultiSzValue(
                      *((unsigned int *)v72 + 8),
                      *((unsigned int *)v72 + 9),
                      *((_QWORD *)v72 + 5),
                      v67,
                      KeyHandlea,
                      ValueName.Buffer,
                      &v65,
                      &v76,
                      v61,
                      v62,
                      v63);
              v27 = (wchar_t *)v76;
              RegistryKeyInformation = v35;
              if ( v35 < 0 )
              {
                Buffer = 0LL;
                RegistryKeyInformation = 0;
                goto LABEL_60;
              }
              goto LABEL_56;
            }
          }
          if ( v32 == 1 )
          {
LABEL_54:
            if ( (v29 & 0xC0000) == 0 )
              goto LABEL_60;
            v36 = PiDevCfgResolveMultiSzValue(
                    v32,
                    MaximumLength,
                    Buffer,
                    v29,
                    KeyHandlea,
                    ValueName.Buffer,
                    &v65,
                    &v76,
                    v61,
                    v62,
                    v63);
            v27 = (wchar_t *)v76;
            RegistryKeyInformation = v36;
            if ( v36 < 0 )
            {
              RegistryKeyInformation = 0;
              goto LABEL_104;
            }
LABEL_56:
            MaximumLength = v65;
            Buffer = v27;
            v32 = 7;
            if ( v65 >= 2 && !*v27 )
              v29 |= 0x200000u;
LABEL_60:
            if ( !Buffer )
            {
              v37 = KeyHandlea;
              goto LABEL_105;
            }
            if ( v32 == 0x8000 )
            {
              if ( !v83 )
              {
                v37 = KeyHandlea;
                if ( v88 )
                {
                  v38 = PiDevCfgPushCopyKeyEntry(v88, Buffer, KeyHandlea, ((v29 & 0x20000) == 0) | 0x80000000);
LABEL_98:
                  RegistryKeyInformation = v38;
                }
LABEL_105:
                if ( v27 )
                  ExFreePoolWithTag(v27, 0);
                if ( !v83 && v32 != 0x8000 && (v29 & 0x100000) != 0 )
                  PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v37, (__int64)ValueName.Buffer);
                ExFreePoolWithTag(v28, 0);
                v14 = (WCHAR *)P;
                if ( RegistryKeyInformation < 0 )
                  goto LABEL_177;
                v8 = v83;
                i = v81;
                goto LABEL_113;
              }
LABEL_104:
              v37 = KeyHandlea;
              goto LABEL_105;
            }
            if ( !v32 && (v29 & 0x100000) != 0 )
              goto LABEL_104;
            v39 = v83;
            v40 = v29 & 0x200000;
            if ( !v83 )
            {
              if ( v40 )
              {
                v37 = KeyHandlea;
                RegistryKeyInformation = ZwDeleteValueKey(KeyHandlea, &ValueName);
                if ( RegistryKeyInformation == -1073741772 )
                  RegistryKeyInformation = 0;
                goto LABEL_105;
              }
              ResultLength = MaximumLength;
              v37 = KeyHandlea;
              v38 = ZwSetValueKey(KeyHandlea, &ValueName, *v28, v32, Buffer, ResultLength);
              goto LABEL_98;
            }
            if ( v40 )
            {
              v44 = 0;
              v86 = 0LL;
              v45 = 0;
              v64 = 0;
              v74 = 0;
              v43 = 0LL;
              goto LABEL_85;
            }
            if ( v79 != 1 )
            {
              v41 = v79;
              v64 = v79;
              goto LABEL_83;
            }
            if ( v32 == 1 || v32 == 2 )
            {
              v41 = 18;
              goto LABEL_81;
            }
            if ( v32 != 3 )
            {
              switch ( v32 )
              {
                case 4u:
                  v41 = 7;
                  goto LABEL_81;
                case 7u:
                  v41 = 8210;
                  goto LABEL_81;
                case 0xBu:
                  v41 = 9;
LABEL_81:
                  v64 = v41;
LABEL_83:
                  v42 = PiDevCfgConvertPropertyFromValue(v32, MaximumLength, Buffer, v41, &v74, &v86);
                  v43 = (wchar_t *)v86;
                  RegistryKeyInformation = v42;
                  v44 = v64;
                  v45 = v74;
                  v39 = v83;
LABEL_85:
                  if ( RegistryKeyInformation >= 0 && (v43 || !v44) )
                  {
                    v63 = 0;
                    v62 = v45;
                    v61 = v43;
                    RegistryKeyInformation = PiDevCfgSetObjectProperty(PiPnpRtlCtx, 0, v39, v80, (__int64)KeyHandlea);
                    if ( RegistryKeyInformation == -1073741790 || !v64 && RegistryKeyInformation == -1073741275 )
                      RegistryKeyInformation = 0;
                    if ( v43 )
                    {
                      if ( v43 != Buffer )
                        ExFreePoolWithTag(v43, 0);
                      v86 = 0LL;
                    }
                  }
                  goto LABEL_104;
              }
            }
            v41 = 4099;
            goto LABEL_81;
          }
LABEL_52:
          if ( v32 != 2 && v32 != 7 )
            goto LABEL_60;
          goto LABEL_54;
        }
        if ( v23 == -1073741772 )
        {
          ValueName = v89;
          goto LABEL_24;
        }
      }
LABEL_114:
      v7 = v71;
      Length = v68;
      continue;
    }
    if ( v17 == -2147483622 )
      break;
    if ( v17 != -2147483643 )
      goto LABEL_177;
    ExFreePoolWithTag(v14, 0);
    Length = v65;
    v68 = v65;
    v18 = (void *)ExAllocatePool2(0x100uLL);
    P = v18;
    v14 = (WCHAR *)v18;
    if ( !v18 )
      goto LABEL_5;
    v15 = (WCHAR *)v18;
    v84 = (WCHAR *)v18;
    --i;
  }
  v46 = 0;
  RegistryKeyInformation = 0;
  if ( v8 )
  {
LABEL_177:
    v47 = v73;
    goto LABEL_178;
  }
  v47 = v73;
  if ( !v88 )
    goto LABEL_178;
  v48 = v71;
  v49 = 0;
  while ( 2 )
  {
    v50 = ZwEnumerateKey(v48, v49, KeyBasicInformation, v14, Length, &v65);
    RegistryKeyInformation = v50;
    if ( v50 >= 0 )
    {
      v14[((unsigned __int64)*((unsigned int *)v14 + 3) >> 1) + 8] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&v91, v14 + 8);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_178;
      v90 = v91;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = &v91;
      RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_178;
      v51 = v87;
      v52 = 0LL;
      v67 = 0;
      if ( !v87 || !*(_QWORD *)(v87 + 16) || !PiDevCfgParseVariableName(v91.Buffer, &v89, &v67) )
        goto LABEL_138;
      v72 = 0LL;
      v53 = PiDevCfgResolveVariable(v51, v89.Buffer, (__int64 *)&v72);
      if ( v53 < 0 )
      {
        if ( v53 == -1073741772 )
        {
          v90 = v89;
          goto LABEL_138;
        }
      }
      else
      {
        v54 = *((_DWORD *)v72 + 8);
        if ( v54 == 1 || v54 == 2 )
        {
          v90.Buffer = (wchar_t *)*((_QWORD *)v72 + 5);
          v90.Length = *((_WORD *)v72 + 18) - 2;
          v90.MaximumLength = *((_WORD *)v72 + 18);
          goto LABEL_138;
        }
        if ( v54 == 7 )
        {
          v52 = (const WCHAR *)*((_QWORD *)v72 + 5);
LABEL_138:
          v55 = a5 >> 1;
          LOBYTE(v55) = (a5 & 2) != 0;
          RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle, v55, &v73, &v75);
          if ( RegistryKeyInformation >= 0 )
          {
            v46 = v75;
            v47 = v73;
          }
          else
          {
            RegistryKeyInformation = 0;
            v73 = 0LL;
            v47 = 0LL;
            v75 = 0;
          }
          if ( v52 )
          {
            while ( 1 )
            {
              if ( !*v52 )
                goto LABEL_167;
              RtlInitUnicodeString(&v90, v52);
              ObjectAttributes.RootDirectory = KeyHandlea;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &v90;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              ObjectAttributes.SecurityDescriptor = v47;
              v56 = ZwOpenKey(&v70, 0xF003Fu, &ObjectAttributes);
              RegistryKeyInformation = v56;
              if ( v56 < 0 )
              {
                if ( v56 != -1073741772 )
                  goto LABEL_167;
                if ( (v67 & 0x10000) != 0 )
                {
                  RegistryKeyInformation = 0;
                  goto LABEL_155;
                }
                RegistryKeyInformation = ZwCreateKey(&v70, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
                if ( RegistryKeyInformation < 0 )
                  goto LABEL_167;
              }
              else if ( v47 )
              {
                ZwSetSecurityObject(v70, v46, v47);
              }
              v57 = Handle;
              if ( !Handle )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &v91;
                ObjectAttributes.RootDirectory = v48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
                if ( RegistryKeyInformation < 0 )
                  goto LABEL_158;
                v57 = Handle;
              }
              RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v88, v57, v70, a5 | 0x40000000);
              if ( RegistryKeyInformation < 0 )
              {
LABEL_158:
                ZwClose(v70);
                v46 = 0;
                goto LABEL_159;
              }
              Handle = 0LL;
              v70 = 0LL;
LABEL_155:
              v58 = -1LL;
              do
                ++v58;
              while ( v52[v58] );
              v52 += v58 + 1;
            }
          }
          ObjectAttributes.RootDirectory = KeyHandlea;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.ObjectName = &v90;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = v47;
          RegistryKeyInformation = ZwCreateKey(&v70, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
          if ( RegistryKeyInformation < 0 )
          {
LABEL_167:
            v46 = 0;
          }
          else
          {
            if ( Disposition == 2 && v47 )
              ZwSetSecurityObject(v70, v46, v47);
            v46 = 0;
            RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v88, Handle, v70, a5 | 0x40000000);
            if ( RegistryKeyInformation < 0 )
              ZwClose(v70);
            Handle = 0LL;
LABEL_159:
            v70 = 0LL;
          }
          if ( v47 )
          {
            ExFreePoolWithTag(v47, 0);
            v47 = 0LL;
            v73 = 0LL;
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          if ( RegistryKeyInformation < 0 )
            goto LABEL_178;
LABEL_173:
          Length = v68;
LABEL_174:
          ++v49;
          continue;
        }
      }
      ZwClose(Handle);
      Handle = 0LL;
      goto LABEL_173;
    }
    break;
  }
  if ( v50 != -2147483622 )
  {
    if ( v50 != -2147483643 )
      goto LABEL_178;
    ExFreePoolWithTag(v14, 0);
    Length = v65;
    v68 = v65;
    v14 = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( v14 )
    {
      --v49;
      goto LABEL_174;
    }
    RegistryKeyInformation = -1073741670;
    goto LABEL_180;
  }
  RegistryKeyInformation = 0;
LABEL_178:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
LABEL_180:
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
LABEL_182:
  if ( Handle )
    ZwClose(Handle);
  if ( v70 )
    ZwClose(v70);
  return (unsigned int)RegistryKeyInformation;
}

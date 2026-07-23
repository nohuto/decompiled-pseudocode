/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x140B39A60
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     PnpValidateStringData @ 0x1404E663C (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404EE954 (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  unsigned int v3; // r14d
  wchar_t *Buffer; // r12
  NTSTATUS RegistryValue; // ebx
  unsigned int *v9; // r15
  wchar_t *v10; // rdx
  wchar_t *v11; // rcx
  wchar_t *v12; // r8
  unsigned __int16 v13; // ax
  __int64 v14; // r8
  int v15; // esi
  int ObjectProperty; // eax
  PGUID v17; // rdi
  unsigned int Data1_low; // ecx
  GUID *Pool2; // rax
  __int64 v21; // [rsp+60h] [rbp-39h] BYREF
  PGUID v22; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h] BYREF
  __int64 v24; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING v25; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-9h] BYREF
  GUID Guid; // [rsp+A0h] [rbp+7h] BYREF
  int v28; // [rsp+B0h] [rbp+17h]

  v3 = 0;
  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LODWORD(v24) = 0;
  LODWORD(v21) = 0;
  v22 = 0LL;
  v28 = 0;
  *(_QWORD *)&v25.Length = 0LL;
  v25.Buffer = 0LL;
  Guid = 0LL;
  Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_65;
  v9 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_66;
  }
  v10 = (wchar_t *)((char *)v9 + v9[2]);
  v11 = v10;
  v12 = &v10[(unsigned __int64)v9[3] >> 1];
  if ( v10 < v12 )
  {
    do
    {
      if ( !*v11 )
        break;
      ++v11;
    }
    while ( v11 < v12 );
  }
  v13 = *((_WORD *)v9 + 6);
  GuidString.Length = (_WORD)v11 - (_WORD)v10;
  GuidString.Buffer = v10;
  GuidString.MaximumLength = v13;
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue >= 0 )
  {
    ExFreePoolWithTag(v9, 0);
    P = 0LL;
    RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &P);
    if ( RegistryValue >= 0 )
    {
      v9 = (unsigned int *)P;
      if ( !PnpValidateRegistryDword((__int64)P) )
        goto LABEL_3;
      v14 = *a1;
      v15 = 1;
      v28 = *(unsigned int *)((char *)v9 + v9[2]);
      ObjectProperty = PnpGetObjectProperty(
                         0x47706E50u,
                         0,
                         *(_QWORD *)(v14 + 48),
                         1,
                         0LL,
                         0LL,
                         (__int64)&Guid,
                         &v24,
                         (PVOID *)&v22,
                         (unsigned int *)&v21,
                         0);
      RegistryValue = ObjectProperty;
      if ( ObjectProperty < 0 )
      {
        if ( ObjectProperty != -1073741275 )
        {
LABEL_63:
          if ( v22 )
            ExFreePoolWithTag(v22, 0);
          goto LABEL_66;
        }
        v17 = 0LL;
        RegistryValue = 0;
        goto LABEL_59;
      }
      if ( (unsigned int)v24 <= 0xD )
      {
        if ( (_DWORD)v24 == 13 )
        {
          if ( (_DWORD)v21 != 16 )
            goto LABEL_22;
          RegistryValue = RtlStringFromGUIDEx(v22, &v25, 1u);
          if ( RegistryValue >= 0 )
          {
            v3 = v25.Length + 2;
            Pool2 = (GUID *)ExAllocatePool2(0x100uLL);
            v17 = Pool2;
            if ( Pool2 )
            {
              Buffer = v25.Buffer;
              memmove(Pool2, v25.Buffer, v3);
LABEL_60:
              *(_DWORD *)(a3 + 32) = v15;
              *(_DWORD *)(a3 + 36) = v3;
              *(_QWORD *)(a3 + 40) = v17;
LABEL_61:
              if ( Buffer )
                ExFreePool(Buffer);
              goto LABEL_63;
            }
            RegistryValue = -1073741670;
          }
          Buffer = v25.Buffer;
          goto LABEL_61;
        }
        if ( (unsigned int)v24 <= 5 )
        {
          if ( (_DWORD)v24 == 5 )
          {
LABEL_18:
            if ( (_DWORD)v21 == 2 )
            {
              v15 = 4;
              v3 = 4;
              v17 = (PGUID)ExAllocatePool2(0x100uLL);
              if ( v17 )
              {
                Data1_low = LOWORD(v22->Data1);
LABEL_56:
                v17->Data1 = Data1_low;
                goto LABEL_60;
              }
              goto LABEL_24;
            }
            goto LABEL_22;
          }
          if ( (unsigned int)v24 >= 2 )
          {
            if ( (_DWORD)v24 == 2 || (_DWORD)v24 == 3 )
            {
              if ( (_DWORD)v21 == 1 )
              {
                v15 = 4;
                v3 = 4;
                v17 = (PGUID)ExAllocatePool2(0x100uLL);
                if ( v17 )
                {
                  Data1_low = LOBYTE(v22->Data1);
                  goto LABEL_56;
                }
                goto LABEL_24;
              }
              goto LABEL_22;
            }
            goto LABEL_18;
          }
          v17 = 0LL;
LABEL_59:
          v15 = 0;
          goto LABEL_60;
        }
        if ( (_DWORD)v24 != 6 && (_DWORD)v24 != 7 )
        {
          if ( (unsigned int)(v24 - 8) <= 1 )
          {
            v3 = 8;
            if ( (_DWORD)v21 != 8 )
              goto LABEL_22;
            v15 = 11;
            goto LABEL_52;
          }
LABEL_48:
          v3 = v21;
          v15 = 3;
LABEL_52:
          v17 = v22;
          v22 = 0LL;
          goto LABEL_60;
        }
LABEL_49:
        if ( (_DWORD)v21 != 4 )
          goto LABEL_22;
        v15 = 4;
        v3 = 4;
        goto LABEL_52;
      }
      if ( (_DWORD)v24 == 17 )
      {
        if ( (_DWORD)v21 == 1 )
        {
          v15 = 4;
          v3 = 4;
          v17 = (PGUID)ExAllocatePool2(0x100uLL);
          if ( v17 )
          {
            Data1_low = LOBYTE(v22->Data1) == 0xFF;
            goto LABEL_56;
          }
LABEL_24:
          RegistryValue = -1073741670;
          goto LABEL_63;
        }
LABEL_22:
        RegistryValue = -1073741823;
        goto LABEL_63;
      }
      if ( (_DWORD)v24 != 18 && (_DWORD)v24 != 20 )
      {
        if ( (_DWORD)v24 == 22 || (_DWORD)v24 == 23 || (_DWORD)v24 == 24 )
          goto LABEL_49;
        if ( (_DWORD)v24 != 25 )
        {
          if ( (_DWORD)v24 == 8210 )
          {
            v3 = v21;
            if ( !PnpValidateMultiSzData(v22, v21) )
              goto LABEL_22;
            v15 = 7;
            goto LABEL_52;
          }
          goto LABEL_48;
        }
      }
      v3 = v21;
      if ( !PnpValidateStringData((__int64)v22, v21) )
        goto LABEL_22;
      goto LABEL_52;
    }
LABEL_65:
    v9 = (unsigned int *)P;
  }
LABEL_66:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)RegistryValue;
}

/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x140AE9D80
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407AC524 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AF9D4 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x140AE83CC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AE9900 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgGetDriverPackageId @ 0x140AE9CA0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404E663C (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404EE954 (PnpValidateMultiSzData.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(__int64 a1, __int64 a2, int a3, char *a4, __int64 a5, unsigned int a6)
{
  int v6; // ebx
  void *v7; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  UNICODE_STRING *v13; // rax
  _WORD *Buffer; // rdi
  UNICODE_STRING *v15; // r12
  ULONG MaximumLength; // r13d
  char *v17; // r9
  int ObjectProperty; // eax
  __int16 v19; // r9
  int v20; // eax
  unsigned int v21; // edx
  int v22; // r8d
  wchar_t *v23; // rax
  wchar_t *v24; // rdx
  ULONG v25; // ebx
  __int64 Pool2; // rax
  _WORD *v27; // rax
  int v28; // [rsp+68h] [rbp-29h]
  int v29; // [rsp+6Ch] [rbp-25h] BYREF
  int v30; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+80h] [rbp-11h] BYREF
  __int64 v32; // [rsp+88h] [rbp-9h]
  ULONG Size; // [rsp+E8h] [rbp+57h] BYREF
  int Size_4; // [rsp+ECh] [rbp+5Bh]
  __int64 v35; // [rsp+F0h] [rbp+5Fh]
  int v36; // [rsp+F8h] [rbp+67h]
  char *v37; // [rsp+100h] [rbp+6Fh]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  Size_4 = HIDWORD(a1);
  v32 = *(_QWORD *)&PiPnpRtlCtx;
  v6 = 0;
  Handle = 0LL;
  v7 = 0LL;
  v29 = 1;
  Size = 0;
  v28 = 0;
  if ( !a4 )
  {
    v6 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( v6 < 0 )
      goto LABEL_3;
  }
  v9 = a5;
  v10 = 0LL;
  while ( 2 )
  {
    v30 = v10;
    if ( (unsigned int)v10 >= a6 )
      goto LABEL_49;
    v11 = 5 * v10;
    v12 = *(_DWORD *)(v9 + 40 * v10 + 28);
    v13 = *(UNICODE_STRING **)(v9 + 40 * v10 + 16);
    if ( (v12 & 4) != 0 )
    {
      Buffer = v13->Buffer;
      v15 = v13;
      MaximumLength = v13->MaximumLength;
    }
    else
    {
      MaximumLength = *(_DWORD *)(v9 + 8 * v11 + 24);
      v15 = 0LL;
      Buffer = &v13->Length;
    }
    if ( (v12 & 2) == 0 )
    {
      while ( 1 )
      {
LABEL_13:
        v17 = (char *)Handle;
        if ( v37 )
          v17 = v37;
        ObjectProperty = PnpGetObjectProperty(
                           v32,
                           v35,
                           v36,
                           v17,
                           0LL,
                           *(_QWORD *)(v9 + 8 * v11),
                           &v29,
                           (__int64)Buffer,
                           MaximumLength,
                           (__int64)&Size,
                           0);
        v6 = ObjectProperty;
        if ( ObjectProperty != -1073741789 )
          break;
        if ( (*(_DWORD *)(v9 + 8 * v11 + 28) & 2) == 0 )
          goto LABEL_18;
        if ( Size <= MaximumLength )
        {
          v6 = -1073741595;
          goto LABEL_18;
        }
        ExFreePoolWithTag(v7, 0);
        v25 = Size;
        v28 = Size;
        Pool2 = ExAllocatePool2(0x100uLL);
        v7 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_46;
        Buffer = (_WORD *)Pool2;
        MaximumLength = v25;
      }
      if ( ObjectProperty == -1073741670 )
        goto LABEL_49;
      v19 = 0;
      if ( ObjectProperty < 0 )
        goto LABEL_18;
      v20 = v29;
      v21 = Size;
      if ( !v29 )
      {
        *(_DWORD *)(v9 + 8 * v11 + 8) = 0;
        goto LABEL_27;
      }
      v22 = *(_DWORD *)(v9 + 8 * v11 + 8);
      if ( v29 == v22 )
      {
        if ( v22 != 18 || v29 != 25 )
          goto LABEL_23;
      }
      else if ( v22 != 18 || v29 != 25 )
      {
        goto LABEL_62;
      }
      *(_DWORD *)(v9 + 8 * v11 + 8) = 25;
LABEL_23:
      if ( v20 != 20 && v20 != 18 && v20 != 25 )
      {
        if ( v20 == 8210 )
        {
          if ( !PnpValidateMultiSzData(Buffer, v21) )
            v6 = -1073741823;
          if ( v6 < 0 )
            goto LABEL_18;
        }
LABEL_27:
        if ( v15 && v21 > 0xFFFE )
        {
          v6 = -2147483643;
          goto LABEL_18;
        }
        if ( (*(_DWORD *)(v9 + 8 * v11 + 28) & 2) != 0 )
        {
          if ( v15 )
          {
            v23 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v15->Buffer = v23;
            if ( v23 )
            {
              v15->MaximumLength = Size;
              memmove(v23, v7, Size);
              LOWORD(v21) = Size;
              v19 = 0;
LABEL_32:
              v15->Length = v21;
              if ( v29 != 8210 )
              {
                v24 = v15->Buffer;
                if ( v24 )
                {
                  if ( (unsigned __int16)Size >= 2u && v24[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] == v19 )
                    v15->Length = Size - 2;
                }
              }
LABEL_18:
              *(_DWORD *)(v9 + 8 * v11 + 32) = v6;
              if ( v6 >= 0 )
              {
LABEL_19:
                v10 = (unsigned int)(v30 + 1);
                continue;
              }
              if ( (*(_DWORD *)(v9 + 8 * v11 + 28) & 8) != 0 )
              {
                if ( v15 )
                {
                  RtlInitUnicodeString(v15, 0LL);
                }
                else if ( Buffer )
                {
                  memset_0(Buffer, 0, MaximumLength);
                }
              }
              if ( (*(_DWORD *)(v9 + 8 * v11 + 28) & 1) == 0 )
              {
                v6 = 0;
                goto LABEL_19;
              }
LABEL_49:
              if ( v7 )
                ExFreePoolWithTag(v7, 0);
              goto LABEL_3;
            }
LABEL_72:
            v6 = -1073741670;
            goto LABEL_49;
          }
          v27 = (_WORD *)ExAllocatePool2(0x100uLL);
          Buffer = v27;
          if ( !v27 )
            goto LABEL_72;
          memmove(v27, v7, Size);
          v21 = Size;
        }
        else if ( v15 )
        {
          goto LABEL_32;
        }
        if ( (*(_DWORD *)(v9 + 8 * v11 + 28) & 2) != 0 )
        {
          **(_QWORD **)(v9 + 8 * v11 + 16) = Buffer;
          v21 = Size;
        }
        *(_DWORD *)(v9 + 8 * v11 + 24) = v21;
        goto LABEL_18;
      }
      if ( PnpValidateStringData((__int64)Buffer, v21) )
        goto LABEL_27;
LABEL_62:
      v6 = -1073741823;
      goto LABEL_18;
    }
    break;
  }
  if ( v7 || (v28 = 260, (v7 = (void *)ExAllocatePool2(0x100uLL)) != 0LL) )
  {
    MaximumLength = v28;
    Buffer = v7;
    goto LABEL_13;
  }
LABEL_46:
  v6 = -1073741670;
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}

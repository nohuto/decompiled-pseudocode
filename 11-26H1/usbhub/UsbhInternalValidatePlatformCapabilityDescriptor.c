/*
 * XREFs of UsbhInternalValidatePlatformCapabilityDescriptor @ 0x14005B82C
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x14005B5FC (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

char __fastcall UsbhInternalValidatePlatformCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  __int64 v4; // rsi
  char v5; // r14
  __int64 v7; // r9
  int v8; // r8d
  ULONG v9; // r13d
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // r15d
  ULONG *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx

  *a3 = 0LL;
  v4 = a1;
  v5 = 1;
  FdoExt(a1);
  if ( *a2 < 0x14u )
  {
    Log(v4, 256, 1448100913, *a2, 0LL);
    return 0;
  }
  if ( a2[3] )
    Log(v4, 256, 1448100914, a2[3], 0LL);
  if ( *(_QWORD *)(a2 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a2 + 12) == *(_QWORD *)GUID_NULL.Data4 )
  {
    Log(v4, 256, 1448100915, 0LL, 0LL);
    v5 = 0;
  }
  if ( *(_QWORD *)(a2 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
    && *(_QWORD *)(a2 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
  {
    v7 = *a2;
    if ( (unsigned __int8)v7 >= 0x1Cu )
    {
      if ( (((_BYTE)v7 - 4) & 7) != 0 )
      {
        v8 = 1297105970;
      }
      else
      {
        v9 = 0;
        v10 = 0;
        v11 = ((unsigned __int64)(v7 - 28) >> 3) + 1;
        if ( (unsigned int)((unsigned __int64)(v7 - 28) >> 3) == -1 )
        {
LABEL_20:
          v15 = 0;
          if ( (unsigned int)((unsigned __int64)(v7 - 28) >> 3) == -1 )
            goto LABEL_27;
          v16 = (ULONG *)(a2 + 20);
          do
          {
            if ( *v16 > v9 )
            {
              if ( RtlIsNtDdiVersionAvailable(*v16) )
              {
                v9 = *v16;
                *a3 = &a2[8 * v15 + 20];
              }
            }
            ++v15;
            v16 += 2;
          }
          while ( v15 < v11 );
          v4 = a1;
          if ( !v9 )
LABEL_27:
            Log(v4, 256, 1146308915, 0LL, 0LL);
          return v5;
        }
        while ( 1 )
        {
          v12 = v10 + 1;
          v13 = v10;
          v10 = v12;
          if ( (unsigned int)v12 < v11 )
            break;
LABEL_19:
          if ( v10 >= v11 )
            goto LABEL_20;
        }
        v14 = *(unsigned int *)&a2[8 * v13 + 20];
        while ( *(_DWORD *)&a2[8 * v12 + 20] != (_DWORD)v14 )
        {
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v11 )
            goto LABEL_19;
        }
        v7 = v14;
        v8 = 1146308913;
      }
    }
    else
    {
      v8 = 1297105969;
    }
    goto LABEL_38;
  }
  if ( *(_QWORD *)(a2 + 4) != *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
    || *(_QWORD *)(a2 + 12) != *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
  {
    return v5;
  }
  v17 = *a2;
  v18 = v4;
  if ( (unsigned __int8)v17 < 0x1Au )
  {
    v7 = *a2;
    v8 = 1146242609;
LABEL_39:
    Log(v18, 256, v8, v7, 0LL);
    return 0;
  }
  Log(v4, 256, 1146242608, a2[20], v17);
  if ( a2[20] == 1 )
  {
    if ( *a2 != 26 )
    {
      v7 = *a2;
      v8 = 1146242610;
LABEL_38:
      v18 = v4;
      goto LABEL_39;
    }
  }
  else if ( !a2[20] )
  {
    v7 = *a2;
    v8 = 1146242611;
    goto LABEL_38;
  }
  return v5;
}

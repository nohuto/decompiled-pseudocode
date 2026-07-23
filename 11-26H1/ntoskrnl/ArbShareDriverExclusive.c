/*
 * XREFs of ArbShareDriverExclusive @ 0x14078C39C
 * Callers:
 *     ArbFindSuitableRange @ 0x14078B240 (ArbFindSuitableRange.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     RtlGetNextRange @ 0x140AAF1A0 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x140B01170 (RtlGetFirstRange.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // si
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 i; // r8
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // cf
  unsigned __int8 v16; // dl
  struct _DEVICE_OBJECT *v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  bool v20; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 *v23; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v24[2]; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  ResultLength = 0;
  v23 = 0LL;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = 0;
  memset(v24, 0, sizeof(v24));
  v6 = *(_DWORD *)(v3 + 44);
  if ( (v6 & 2) != 0 )
  {
    v4 = 1;
  }
  else if ( (v6 & 4) == 0
         && IoGetDeviceProperty(
              *(PDEVICE_OBJECT *)(v3 + 32),
              DevicePropertyEnumeratorName,
              0xAu,
              PropertyBuffer,
              &ResultLength) >= 0 )
  {
    v7 = wcsicmp(PropertyBuffer, L"ROOT");
    v8 = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(v8 + 44);
    if ( v7 )
    {
      v10 = v9 | 4;
    }
    else
    {
      v10 = v9 | 2;
      v4 = 1;
    }
    *(_DWORD *)(v8 + 44) = v10;
  }
  RtlGetFirstRange(*(_QWORD *)(a1 + 48), v24, &v23);
  while ( 1 )
  {
    v12 = v23;
    if ( !v23 )
      return 0;
    v13 = *(_QWORD *)(a2 + 16);
    v14 = *v23;
    v15 = v13 < *v23;
    if ( v13 > *v23 )
    {
      if ( v23[1] < v13 )
        goto LABEL_34;
      v15 = v13 < v14;
    }
    if ( !v15 || *(_QWORD *)(a2 + 24) >= v14 )
    {
      v16 = *((_BYTE *)v23 + 32);
      if ( (v16 & *(_BYTE *)(a2 + 67)) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (v16 & 2) != 0) )
      {
        v17 = (struct _DEVICE_OBJECT *)v23[3];
        if ( v17 )
        {
          if ( v4 )
          {
            v18 = *((_BYTE *)v23 + 33);
            if ( (v18 & 0x40) == 0 )
            {
              if ( (v18 & 0x20) != 0
                || IoGetDeviceProperty(v17, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_36;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                *((_BYTE *)v12 + 33) |= 0x20u;
LABEL_36:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_38;
              }
              *((_BYTE *)v12 + 33) |= 0x40u;
            }
            v4 = 0;
          }
          v19 = *(_QWORD *)(v12[3] + 24);
LABEL_28:
          if ( v19 )
            break;
        }
      }
    }
LABEL_34:
    LOBYTE(i) = 1;
    RtlGetNextRange(v24, &v23, i);
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
    {
      v19 = *(_QWORD *)(v19 + 24);
      goto LABEL_28;
    }
    if ( *(_QWORD *)(v19 + 8) == *(_QWORD *)(i + 8) )
      break;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_38:
  if ( v20 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}

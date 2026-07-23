/*
 * XREFs of PiAuditDeviceOperation @ 0x140B15BF8
 * Callers:
 *     PiAuditDeviceEnableDisableAction @ 0x1407B8020 (PiAuditDeviceEnableDisableAction.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1407B8054 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceStart @ 0x1409AD34C (PiAuditDeviceStart.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PnpFindAlternateStringData @ 0x140AA4B50 (PnpFindAlternateStringData.c)
 *     SeAuditPlugAndPlay @ 0x140B35364 (SeAuditPlugAndPlay.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuditDeviceOperation(__int64 a1, int a2, char a3)
{
  void *v4; // r13
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v12; // r14d
  __int64 Pool2; // rax
  void *v14; // r12
  int ObjectProperty; // eax
  __int16 v16; // ax
  __int64 v17; // rax
  void *v18; // r15
  int v19; // eax
  __int16 v20; // ax
  __int64 v21; // rax
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rdx
  __int64 v25; // rax
  void *v26; // rsi
  int v27; // eax
  __int64 v28; // rax
  _WORD *v29; // rdi
  int i; // eax
  __int64 v31; // rax
  int v32; // eax
  bool v33; // zf
  const WCHAR *v34; // rdx
  int v35; // [rsp+68h] [rbp-69h] BYREF
  ULONG v36; // [rsp+6Ch] [rbp-65h] BYREF
  ULONG v37; // [rsp+70h] [rbp-61h] BYREF
  ULONG v38; // [rsp+74h] [rbp-5Dh] BYREF
  char v39; // [rsp+78h] [rbp-59h]
  ULONG v40; // [rsp+7Ch] [rbp-55h] BYREF
  ULONG v41; // [rsp+80h] [rbp-51h] BYREF
  int v42; // [rsp+84h] [rbp-4Dh] BYREF
  const WCHAR *v43; // [rsp+88h] [rbp-49h] BYREF
  __int64 v44; // [rsp+90h] [rbp-41h]
  __int128 v45; // [rsp+98h] [rbp-39h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-19h] BYREF
  int v48; // [rsp+C8h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v50; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v51; // [rsp+F0h] [rbp+1Fh] BYREF

  v39 = a3;
  v44 = a1;
  v38 = 0;
  v43 = 0LL;
  v41 = 0;
  v4 = 0LL;
  v36 = 0;
  v37 = 0;
  v42 = 0;
  v35 = 0;
  v50 = 0LL;
  v51 = 0LL;
  DestinationString = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v12 = 6;
            }
            else
            {
              v12 = 5;
            }
          }
          else
          {
            v12 = 4;
          }
        }
        else
        {
          v12 = 3;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 1;
    }
  }
  else
  {
    v12 = 0;
  }
  v40 = 512;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v14 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 8),
                       1,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       &v35,
                       Pool2,
                       v40,
                       (__int64)&v40,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
  }
  if ( ObjectProperty >= 0 && v35 == 8210 )
  {
    v16 = v40;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    v16 = 0;
    v14 = 0LL;
    v40 = 0;
  }
  LOWORD(v47) = v16;
  WORD1(v47) = v16;
  *((_QWORD *)&v47 + 1) = v14;
  v36 = 512;
  v17 = ExAllocatePool2(0x100uLL);
  v18 = (void *)v17;
  if ( v17 )
  {
    while ( 1 )
    {
      v19 = PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              1,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_CompatibleIds,
              &v35,
              v17,
              v36,
              (__int64)&v36,
              0);
      if ( v19 != -1073741789 )
        break;
      ExFreePoolWithTag(v18, 0);
      v17 = ExAllocatePool2(0x100uLL);
      v18 = (void *)v17;
      if ( !v17 )
        goto LABEL_61;
    }
    if ( v19 >= 0 && v35 == 8210 )
    {
      v20 = v36;
    }
    else
    {
      ExFreePoolWithTag(v18, 0);
      v20 = 0;
      v18 = 0LL;
      v36 = 0;
    }
    LOWORD(v46) = v20;
    v37 = 64;
    WORD1(v46) = v20;
    *((_QWORD *)&v46 + 1) = v18;
    while ( 1 )
    {
      v21 = ExAllocatePool2(0x100uLL);
      v4 = (void *)v21;
      if ( !v21 )
        break;
      v22 = PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              1,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LocationInfo,
              &v35,
              v21,
              v37,
              (__int64)&v37,
              0);
      if ( v22 != -1073741789 )
      {
        if ( v22 >= 0 && v35 == 18 )
        {
          v23 = v37;
        }
        else
        {
          ExFreePoolWithTag(v4, 0);
          v23 = 0;
          v4 = 0LL;
          v37 = 0;
        }
        v24 = *(_QWORD *)(a1 + 8);
        LOWORD(v45) = v23;
        WORD1(v45) = v23;
        *((_QWORD *)&v45 + 1) = v4;
        v42 = 16;
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v24,
                    1,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_ClassGuid,
                    &v35,
                    (__int64)&v51,
                    0x10u,
                    (__int64)&v42,
                    0) < 0
          || v35 != 13
          || v42 != 16 )
        {
          v51 = 0LL;
        }
        v41 = 32;
        while ( 1 )
        {
          v25 = ExAllocatePool2(0x100uLL);
          v26 = (void *)v25;
          if ( !v25 )
            goto LABEL_53;
          v27 = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 8),
                  1,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_Class,
                  &v35,
                  v25,
                  v41,
                  (__int64)&v41,
                  0);
          if ( v27 != -1073741789 )
          {
            if ( v27 < 0 || v35 != 18 )
            {
              ExFreePoolWithTag(v26, 0);
              v26 = 0LL;
              v41 = 0;
            }
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v26);
            v38 = 32;
            v28 = ExAllocatePool2(0x100uLL);
            v29 = (_WORD *)v28;
            if ( v28 )
            {
              for ( i = PnpGetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(a1 + 8),
                          1,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_NAME,
                          &v35,
                          v28,
                          v38,
                          (__int64)&v38,
                          0);
                    ;
                    i = PnpGetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(v44 + 8),
                          1,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_NAME,
                          &v35,
                          v31,
                          v38,
                          (__int64)&v38,
                          0) )
              {
                v10 = i;
                if ( i != -1073741789 )
                  break;
                ExFreePoolWithTag(v29, 0);
                v31 = ExAllocatePool2(0x100uLL);
                v29 = (_WORD *)v31;
                if ( !v31 )
                  goto LABEL_40;
              }
              if ( i < 0 )
                goto LABEL_78;
              v32 = v35;
              if ( v35 == 25 )
              {
                v33 = (unsigned int)PnpFindAlternateStringData(v29, v38, &v43, &v48) == 0;
                v34 = v29;
                v32 = 18;
                if ( !v33 )
                  v34 = v43;
                v35 = 18;
              }
              else
              {
                v34 = 0LL;
                if ( v35 == 18 )
                  v34 = v29;
              }
              if ( v32 != 18 )
              {
LABEL_78:
                v10 = 0;
                ExFreePoolWithTag(v29, 0);
                v29 = 0LL;
                v38 = 0;
                v34 = 0LL;
              }
              RtlInitUnicodeString(&v50, v34);
              SeAuditPlugAndPlay(
                v44,
                (unsigned int)&v50,
                (unsigned int)&v47,
                (unsigned int)&v46,
                (__int64)&v45,
                (__int64)&v51,
                (__int64)&DestinationString,
                v12,
                v39);
              if ( v29 )
                ExFreePoolWithTag(v29, 0);
            }
            else
            {
LABEL_40:
              v10 = -1073741670;
            }
            if ( v26 )
              ExFreePoolWithTag(v26, 0);
            goto LABEL_43;
          }
          ExFreePoolWithTag(v26, 0);
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
LABEL_53:
    v10 = -1073741670;
LABEL_43:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  else
  {
LABEL_61:
    v10 = -1073741670;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}

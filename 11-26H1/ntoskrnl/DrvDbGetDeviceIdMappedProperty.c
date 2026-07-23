/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x140976018
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140975E30 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1409757A0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140976440 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140B270A4 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140B55104 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        void *a6,
        unsigned int a7,
        int *a8)
{
  void *v8; // rbx
  __int64 v10; // r13
  int v11; // r10d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  _QWORD *v17; // r12
  int v18; // eax
  __int64 v19; // rcx
  int RegValueMappedProperty; // ebx
  char v21; // al
  unsigned __int64 v22; // rax
  int v24; // ecx
  unsigned int v25; // edx
  __int64 v26; // rax
  int ObjectDatabaseNodeName; // eax
  HANDLE v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  int i; // edx
  __int64 v32; // rcx
  int v33; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+40h]
  char v37; // [rsp+B8h] [rbp+58h]

  v36 = a1;
  v8 = a3;
  Handle = 0LL;
  v10 = a1;
  v33 = 0;
  *a5 = 0;
  *a8 = 0;
  v11 = *(_DWORD *)(a4 + 16);
  v34 = 0;
  v37 = 0;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      a1 = 0xBADB47CC74A2E194uLL;
      v12 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
        v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v12 )
      {
        v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
          v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        v14 = 1;
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_56;
      }
    }
LABEL_57:
    for ( i = 0; !i; i = 1 )
    {
      if ( *((_DWORD *)&DEVPKEY_DeviceId_DriverInfMatches + 4) == v11 )
      {
        v32 = DEVPKEY_DeviceId_DriverInfMatches - *(_QWORD *)a4;
        if ( DEVPKEY_DeviceId_DriverInfMatches == *(_QWORD *)a4 )
          v32 = *(&DEVPKEY_DeviceId_DriverInfMatches + 1) - *(_QWORD *)(a4 + 8);
        if ( !v32 )
        {
          if ( &off_140004870 )
          {
            if ( !a3 )
            {
              RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v10, a2, 1, 0, (__int64)&Handle, 0LL);
              if ( RegValueMappedProperty < 0 )
                goto LABEL_29;
              LODWORD(v8) = (_DWORD)Handle;
            }
            RegValueMappedProperty = DrvDbGetRegValueMappedProperty(
                                       v32,
                                       (int)v8,
                                       (int)&off_140004870,
                                       (int)a5,
                                       a6,
                                       a7,
                                       (__int64)a8);
            goto LABEL_29;
          }
          break;
        }
      }
    }
    return (unsigned int)-1073741802;
  }
  v26 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v26 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( !v26 )
  {
    *a5 = 18;
    ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 5LL, a2, a6, a7 >> 1, a8);
    RegValueMappedProperty = ObjectDatabaseNodeName;
    if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
      *a8 *= 2;
    goto LABEL_29;
  }
  v30 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v30 )
    goto LABEL_57;
LABEL_56:
  v14 = 0;
LABEL_9:
  if ( (*(_WORD *)a2 != 64
     || (v15 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL
     || (v16 = v15 + 1) == 0LL
     || v16 == (wchar_t *)a2)
    && !*(_QWORD *)(v10 + 48) )
  {
    v17 = *(_QWORD **)(v10 + 16);
    if ( v17 == (_QWORD *)(v10 + 16) )
    {
LABEL_28:
      RegValueMappedProperty = -1073741772;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v18 = DrvDbOpenObjectRegKey(v36, (_DWORD)v17, 5, a2, 1, 0, (__int64)&Handle, 0LL, 0LL);
      RegValueMappedProperty = v18;
      if ( v18 >= 0 )
      {
        v37 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   v19,
                                   Handle,
                                   (__int64)a6 + v34,
                                   (a7 - v34) >> 1,
                                   (__int64)&v33,
                                   v14);
        ZwClose(Handle);
        Handle = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_33;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
            v21 = 1;
            goto LABEL_26;
          }
LABEL_33:
          v24 = 2 * v33 - 2;
          if ( (unsigned int)(2 * v33) <= 2 )
            v24 = 2 * v33;
          if ( a6 )
          {
            v25 = v34;
            if ( v24 + v34 < a7 )
              v25 = v24 + v34;
            v34 = v25;
          }
          *a8 += v24;
          goto LABEL_18;
        }
      }
      else if ( v18 != -1073741772 )
      {
        v21 = v37;
        goto LABEL_26;
      }
      RegValueMappedProperty = 0;
LABEL_18:
      v17 = (_QWORD *)*v17;
      if ( v17 == (_QWORD *)(v36 + 16) )
      {
        v21 = v37;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_20;
LABEL_26:
        if ( RegValueMappedProperty != -1073741789 )
          goto LABEL_29;
LABEL_20:
        if ( !v21 )
          goto LABEL_28;
        if ( *a8 )
        {
          *a5 = 8210;
          v22 = (unsigned int)(*a8 + 2);
          *a8 = v22;
          if ( a6 && (unsigned int)v22 <= a7 )
            *((_WORD *)a6 + (v22 >> 1) - 1) = 0;
          else
            RegValueMappedProperty = -1073741789;
        }
        else
        {
          RegValueMappedProperty = -1073741275;
        }
        goto LABEL_29;
      }
    }
  }
  v28 = 0LL;
  if ( v8 != (void *)-1LL )
    v28 = v8;
  if ( !v28 )
  {
    RegValueMappedProperty = DrvDbOpenObjectRegKey(v10, 0, 5, a2, 1, 0, (__int64)&Handle, 0LL, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_29;
    v28 = Handle;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(a1, v28, (__int64)a6, a7 >> 1, (__int64)&v33, v14);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v29 = 2 * v33;
    *a5 = 8210;
    *a8 = v29;
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}

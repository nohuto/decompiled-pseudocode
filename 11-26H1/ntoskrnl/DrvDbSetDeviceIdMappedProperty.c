/*
 * XREFs of DrvDbSetDeviceIdMappedProperty @ 0x140ADFA38
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140975E30 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077E60C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40 (DrvDbSetDeviceIdDriverInfMatches.c)
 */

__int64 __fastcall DrvDbSetDeviceIdMappedProperty(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        int *a6,
        int a7)
{
  HANDLE v7; // r10
  int v9; // r9d
  __int64 i; // rdx
  __int64 **v14; // r14
  __int64 *v15; // r8
  __int64 v16; // rcx
  int v17; // edi
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0LL;
  v9 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  if ( v9 == 2 )
  {
    v21 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v21 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v21 )
      return (unsigned int)-1073741790;
  }
  for ( i = 0LL; ; i = 1LL )
  {
    if ( (_DWORD)i )
      return (unsigned int)-1073741802;
    v14 = &(&off_140004870)[5 * i];
    v15 = *v14;
    if ( *((_DWORD *)*v14 + 4) == v9 )
    {
      v16 = *v15 - *(_QWORD *)a4;
      if ( *v15 == *(_QWORD *)a4 )
        v16 = v15[1] - *(_QWORD *)(a4 + 8);
      if ( !v16 )
        break;
    }
  }
  if ( !v14 )
    return (unsigned int)-1073741802;
  v17 = a5;
  if ( a5 != *((_DWORD *)v14 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( a3 || (v18 = DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, 3u, 0, &Handle, 0LL, 0LL), v7 = Handle, v19 = v18, v18 >= 0) )
  {
    if ( *(_DWORD *)(a4 + 16) != 3 )
      goto LABEL_32;
    v22 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v22 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v22 )
    {
LABEL_32:
      if ( a3 )
        v7 = a3;
      v23 = DrvDbSetRegValueMappedProperty(v16, (__int64)v7, (__int64)v14, v17, a6, a7);
      goto LABEL_30;
    }
    if ( v17 == 8210 )
    {
      if ( a6 && a7 )
      {
LABEL_27:
        if ( a3 )
          v7 = a3;
        v23 = DrvDbSetDeviceIdDriverInfMatches(v16, v7);
LABEL_30:
        v7 = Handle;
        v19 = v23;
        goto LABEL_13;
      }
    }
    else if ( !v17 && !a6 && !a7 )
    {
      goto LABEL_27;
    }
    v19 = -1073741811;
  }
LABEL_13:
  if ( v7 )
    ZwClose(v7);
  return v19;
}

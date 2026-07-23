/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x1408A543C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1409766E0 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14077E60C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1409768C0 (DrvDbOpenDriverInfFileRegKey.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(int a1, int a2, HANDLE a3, __int64 a4, int a5, int *a6, int a7)
{
  int v7; // r11d
  __int64 v11; // rax
  int v12; // ebx
  __int64 i; // rdx
  __int64 (**v14)[3]; // rsi
  __int64 *v15; // r8
  __int64 v16; // rcx
  int v17; // edi
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  if ( v7 == 2 )
  {
    v11 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v11 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v11 )
      return (unsigned int)-1073741790;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 4 )
      return (unsigned int)-1073741802;
    v14 = &off_140001910 + 5 * i;
    v15 = (__int64 *)*v14;
    if ( LODWORD((**v14)[2]) == v7 )
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
  if ( !a3 )
  {
    v12 = DrvDbOpenDriverInfFileRegKey(a1, a2, 2, 0, (__int64)&Handle, 0LL);
    if ( v12 < 0 )
      goto LABEL_21;
    a3 = Handle;
  }
  v12 = DrvDbSetRegValueMappedProperty(v16, (__int64)a3, (__int64)v14, v17, a6, a7);
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}

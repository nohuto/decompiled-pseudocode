/*
 * XREFs of DrvDbGetDriverInfFileMappedProperty @ 0x14097690C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1409766E0 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140976440 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140B55104 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        void *a6,
        int a7,
        __int64 a8)
{
  _DWORD *v8; // r14
  _DWORD *v10; // rdi
  int v11; // ebx
  int v12; // ebp
  int v13; // r11d
  __int64 i; // rdx
  __int64 (**v15)[3]; // rsi
  __int64 *v16; // r8
  __int64 v17; // rcx
  int RegValueMappedProperty; // ebx
  __int64 v20; // rax
  void *v21; // r9
  unsigned int v22; // [rsp+20h] [rbp-48h]
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v8 = a5;
  v10 = (_DWORD *)a8;
  v11 = a2;
  v12 = a1;
  Handle = 0LL;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 != 2 )
    goto LABEL_2;
  v20 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v20 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( v20 )
  {
LABEL_2:
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 4 )
        return (unsigned int)-1073741802;
      v15 = &off_140001910 + 5 * i;
      v16 = (__int64 *)*v15;
      if ( LODWORD((**v15)[2]) == v13 )
      {
        v17 = *v16 - *(_QWORD *)a4;
        if ( *v16 == *(_QWORD *)a4 )
          v17 = v16[1] - *(_QWORD *)(a4 + 8);
        if ( !v17 )
          break;
      }
    }
    if ( !v15 )
      return (unsigned int)-1073741802;
    if ( !a3 )
    {
      RegValueMappedProperty = DrvDbOpenObjectRegKey(v12, 0, 3, v11, 1, 0, (__int64)&Handle, 0LL, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_14;
      a3 = Handle;
    }
    RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v17, a3, (__int64)v15, v8, (int *)a6, a7, v10);
  }
  else
  {
    v21 = a6;
    v22 = (unsigned int)a7 >> 1;
    *v8 = 18;
    RegValueMappedProperty = DrvDbGetObjectDatabaseNodeName(a1, 3LL, a2, v21, v22, v10);
    if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
      *v10 *= 2;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}

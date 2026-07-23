/*
 * XREFs of DrvDbGetDriverFileMappedProperty @ 0x140B64C8C
 * Callers:
 *     DrvDbDispatchDriverFile @ 0x140B57EB0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     DrvDbOpenDriverFileRegKey @ 0x1408A4CF0 (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140976440 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140B55104 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDriverFileMappedProperty(
        __int64 *a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        void *a6,
        int a7,
        __int64 a8)
{
  _DWORD *v8; // r14
  unsigned int *v10; // rdi
  int v11; // ebx
  int v12; // ebp
  int v13; // r11d
  __int64 v14; // rax
  void *v15; // r9
  int RegValueMappedProperty; // ebx
  __int64 i; // rdx
  __int64 (**v18)[3]; // rsi
  __int64 *v19; // r8
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v8 = a5;
  v10 = (unsigned int *)a8;
  v11 = a2;
  v12 = (int)a1;
  Handle = 0LL;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 != 2 )
    goto LABEL_8;
  v14 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v14 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( v14 )
  {
LABEL_8:
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 2 )
        return (unsigned int)-1073741802;
      v18 = &off_140005A20 + 5 * i;
      v19 = (__int64 *)*v18;
      if ( LODWORD((**v18)[2]) == v13 )
      {
        v20 = *v19 - *(_QWORD *)a4;
        if ( *v19 == *(_QWORD *)a4 )
          v20 = v19[1] - *(_QWORD *)(a4 + 8);
        if ( !v20 )
          break;
      }
    }
    if ( !v18 )
      return (unsigned int)-1073741802;
    if ( !a3 )
    {
      RegValueMappedProperty = DrvDbOpenDriverFileRegKey(v12, v11, 1, 0, (__int64)&Handle, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_20;
      a3 = Handle;
    }
    RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v20, a3, (__int64)v18, v8, (int *)a6, a7, v10);
  }
  else
  {
    v15 = a6;
    v22 = (unsigned int)a7 >> 1;
    *v8 = 18;
    RegValueMappedProperty = DrvDbGetObjectDatabaseNodeName(a1, 4u, a2, v15, v22, v10);
    if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
      *v10 *= 2;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}

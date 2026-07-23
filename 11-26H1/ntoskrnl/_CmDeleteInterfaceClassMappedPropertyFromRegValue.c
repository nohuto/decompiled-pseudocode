/*
 * XREFs of _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408A1A88
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x1408A2814 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140972760 (_CmOpenInterfaceClassRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteInterfaceClassMappedPropertyFromRegValue(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  unsigned int v9; // r8d
  DEVPROPKEY **v10; // rdi
  DEVPROPKEY *v11; // rsi
  DEVPROPKEY **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edi
  int v18; // [rsp+28h] [rbp-40h]
  HANDLE v19[2]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  v19[0] = 0LL;
  Handle = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v9 = 0;
  v10 = &off_140BDFB20;
  do
  {
    v11 = *v10;
    v12 = &off_140BDFB20 + 2 * v9;
    if ( v4 == (*v10)->pid )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !v13 )
        break;
    }
    v12 = 0LL;
    ++v9;
    v10 += 2;
  }
  while ( !v9 );
  if ( !v12 )
    return (unsigned int)-1073741264;
  if ( v4 == 2 )
  {
    v14 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v14 )
    {
      if ( !a3 )
      {
        v5 = CmOpenInterfaceClassRegKey(a1, a2, v9, a4, 1, 0, (__int64)v19, 0LL);
        if ( v5 < 0 )
        {
LABEL_24:
          if ( v19[0] )
            ZwClose(v19[0]);
          return (unsigned int)v5;
        }
        LODWORD(a3) = v19[0];
      }
      v5 = PnpOpenPropertiesKey(a1, a3, 0, 2, 0, v18, (__int64)&Handle);
      if ( v5 == -1073741772 )
      {
        v5 = -1073741275;
      }
      else if ( v5 >= 0 )
      {
        v16 = PnpCtxRegDeleteValue(v15, Handle, L"Default");
        ZwClose(Handle);
        if ( v16 != -1073741772 && v16 != -1073741444 && v16 < 0 )
          v5 = v16;
      }
      goto LABEL_24;
    }
  }
  return (unsigned int)v5;
}

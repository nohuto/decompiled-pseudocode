/*
 * XREFs of _CmGetInterfaceClassMappedPropertyKeys @ 0x1408A2350
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x14089D38C (_CmDeleteInterfaceClassWorker.c)
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140972500 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140B71FC0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyKeys(
        int a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  int i; // edi
  unsigned int InterfaceClassMappedPropertyFromRegValue; // eax
  unsigned int v13; // r10d
  __int64 v14; // rax
  unsigned int v15; // ecx
  int j; // edi
  unsigned int InterfaceClassMappedPropertyFromComposite; // eax
  __int64 v18; // rax
  unsigned int v19; // ecx
  _DWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+80h] [rbp+8h]

  v22 = a1;
  v7 = a7;
  v21[0] = 0;
  *a7 = 0;
  LODWORD(a7) = 0;
  for ( i = 0; !i; i = 1 )
  {
    if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface )
    {
      if ( a4
        || (InterfaceClassMappedPropertyFromRegValue = CmGetInterfaceClassMappedPropertyFromRegValue(
                                                         a1,
                                                         a2,
                                                         a3,
                                                         (_DWORD)off_140BDFB20,
                                                         (__int64)v21,
                                                         0LL,
                                                         0,
                                                         (__int64)&a7),
            v13 = InterfaceClassMappedPropertyFromRegValue,
            InterfaceClassMappedPropertyFromRegValue == -1073741789)
        || !InterfaceClassMappedPropertyFromRegValue )
      {
        if ( a5 )
        {
          v14 = *v7;
          if ( (unsigned int)v14 < a6 )
            *(DEVPROPKEY *)(a5 + 20 * v14) = DEVPKEY_DeviceInterfaceClass_DefaultInterface;
        }
        v15 = *v7 + 1;
        if ( v15 < *v7 )
        {
LABEL_29:
          v13 = -1073741675;
LABEL_8:
          *v7 = 0;
          return v13;
        }
        *v7 = v15;
      }
      else if ( InterfaceClassMappedPropertyFromRegValue == -1073741772 )
      {
        goto LABEL_8;
      }
      a1 = v22;
    }
  }
  for ( j = 0; !j; j = 1 )
  {
    if ( a4
      || (InterfaceClassMappedPropertyFromComposite = CmGetInterfaceClassMappedPropertyFromComposite(
                                                        a1,
                                                        a2,
                                                        a3,
                                                        (_DWORD)off_140BDFBB0,
                                                        (__int64)v21,
                                                        0LL,
                                                        0,
                                                        (__int64)&a7),
          v13 = InterfaceClassMappedPropertyFromComposite,
          InterfaceClassMappedPropertyFromComposite == -1073741789)
      || !InterfaceClassMappedPropertyFromComposite )
    {
      if ( a5 )
      {
        v18 = *v7;
        if ( (unsigned int)v18 < a6 )
          *(DEVPROPKEY *)(a5 + 20 * v18) = DEVPKEY_NAME;
      }
      v19 = *v7 + 1;
      if ( v19 < *v7 )
        goto LABEL_29;
      *v7 = v19;
    }
    else if ( InterfaceClassMappedPropertyFromComposite == -1073741772 )
    {
      goto LABEL_8;
    }
    a1 = v22;
  }
  return a6 < *v7 ? 0xC0000023 : 0;
}

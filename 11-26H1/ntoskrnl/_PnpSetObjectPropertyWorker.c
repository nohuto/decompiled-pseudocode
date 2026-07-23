/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x140A193D0
 * Callers:
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpSetGenericStoreProperty @ 0x1409ACB6C (_PnpSetGenericStoreProperty.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140AF09B0 (_PnpSetMappedPropertyDispatch.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG SecurityDescriptorLength,
        int a10)
{
  const wchar_t *v14; // r15
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  __int64 v18; // r9
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( (_WORD)a10 || !a8 && SecurityDescriptorLength )
    return (unsigned int)-1073741811;
  v14 = (const wchar_t *)(a8 & -(__int64)(SecurityDescriptorLength != 0));
  v15 = PnpValidatePropertyData(v14, SecurityDescriptorLength);
  if ( v15 >= 0 )
  {
    v16 = PnpSetMappedPropertyDispatch(a1, a2, a3, a4, a5, a6, a7, (__int64)v14, SecurityDescriptorLength, a10);
    v15 = v16;
    if ( v16 >= 0 )
    {
      if ( a3 >= 7 )
        PnpObjectRaisePropertyChangeEvent(a1, a2, a3, a4, a5, a6);
      goto LABEL_12;
    }
    if ( v16 == -1073741802 )
    {
      if ( a4 )
      {
        v17 = a4;
        goto LABEL_8;
      }
      v15 = PnpOpenObjectRegKey(a1, a2, a3, 33554439, 0, (__int64)Handle);
      if ( v15 >= 0 )
      {
        v17 = (int)Handle[0];
LABEL_8:
        v15 = PnpSetGenericStoreProperty(a1, v17, a5, a6, a7, (__int64)v14, SecurityDescriptorLength);
        if ( v15 >= 0 )
        {
          v18 = (__int64)Handle[0];
          if ( a4 )
            v18 = a4;
          PnpObjectRaisePropertyChangeEvent(a1, a2, a3, v18, a5, a6);
        }
      }
    }
  }
LABEL_12:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}

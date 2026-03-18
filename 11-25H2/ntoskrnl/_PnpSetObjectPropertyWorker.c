/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x140954B4C
 * Callers:
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140836790 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpSetGenericStoreProperty @ 0x140953DB4 (_PnpSetGenericStoreProperty.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140954310 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpValidatePropertyData @ 0x1409548B4 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        _WORD *a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG SecurityDescriptorLength,
        __int16 a10)
{
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  HANDLE v16; // r9
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( a10 || !a8 && SecurityDescriptorLength )
    return (unsigned int)-1073741811;
  v13 = PnpValidatePropertyData((char *)(a8 & -(__int64)(SecurityDescriptorLength != 0)), SecurityDescriptorLength, a7);
  if ( v13 >= 0 )
  {
    v14 = PnpSetMappedPropertyDispatch(a1, a2, a3);
    v13 = v14;
    if ( v14 >= 0 )
    {
      if ( a3 >= 7 )
      {
        v16 = a4;
LABEL_11:
        PnpObjectRaisePropertyChangeEvent(a1, a2, a3, (__int64)v16, (__int64)a5, a6);
      }
    }
    else
    {
      if ( v14 != -1073741802 )
        goto LABEL_12;
      if ( a4 )
      {
        v15 = (int)a4;
LABEL_8:
        v13 = PnpSetGenericStoreProperty(
                a1,
                v15,
                a5,
                a6,
                a7,
                a8 & -(__int64)(SecurityDescriptorLength != 0),
                SecurityDescriptorLength);
        if ( v13 < 0 )
          goto LABEL_12;
        v16 = Handle[0];
        if ( a4 )
          v16 = a4;
        goto LABEL_11;
      }
      v13 = PnpOpenObjectRegKey(a1, a2, a3, 33554439, 0, (__int64)Handle);
      if ( v13 >= 0 )
      {
        v15 = (int)Handle[0];
        goto LABEL_8;
      }
    }
  }
LABEL_12:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v13;
}

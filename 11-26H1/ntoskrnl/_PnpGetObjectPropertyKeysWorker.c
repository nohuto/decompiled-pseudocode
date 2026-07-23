/*
 * XREFs of _PnpGetObjectPropertyKeysWorker @ 0x140AB56C8
 * Callers:
 *     _PnpGetObjectPropertyKeys @ 0x140AB554C (_PnpGetObjectPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140AB5848 (_PnpGetMappedPropertyKeysDispatch.c)
 */

__int64 __fastcall PnpGetObjectPropertyKeysWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        const WCHAR *a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  int v13; // r12d
  signed int MappedPropertyKeysDispatch; // ebx
  __int64 v15; // r8
  unsigned int v16; // eax
  HANDLE v17; // rdx
  unsigned int v18; // edx
  unsigned int v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v20 = 0;
  v13 = a2;
  v21 = 0;
  if ( a10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a9 = 0;
    if ( a4
      || (MappedPropertyKeysDispatch = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle),
          MappedPropertyKeysDispatch >= 0) )
    {
      MappedPropertyKeysDispatch = PnpGetMappedPropertyKeysDispatch(
                                     a1,
                                     v13,
                                     a3,
                                     (_DWORD)a4,
                                     (__int64)a5,
                                     a6,
                                     a7,
                                     a8,
                                     (__int64)&v20);
      if ( (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 || !MappedPropertyKeysDispatch )
      {
        if ( v20 >= a8 )
        {
          v15 = 0LL;
          v16 = 0;
        }
        else
        {
          v15 = a7 + 20LL * v20;
          v16 = a8 - v20;
        }
        v17 = Handle;
        if ( a4 )
          v17 = a4;
        MappedPropertyKeysDispatch = PnpGetGenericStorePropertyKeys(a1, (__int64)v17, a5, a6, v15, v16, &v21);
        if ( (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 || !MappedPropertyKeysDispatch )
        {
          v18 = v20 + v21;
          *a9 = v20 + v21;
          MappedPropertyKeysDispatch = a8 < v18 ? 0xC0000023 : 0;
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)MappedPropertyKeysDispatch;
}

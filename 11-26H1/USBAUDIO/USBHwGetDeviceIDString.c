/*
 * XREFs of USBHwGetDeviceIDString @ 0x14002D400
 * Callers:
 *     USBDeviceStart @ 0x140040220 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     USBHwSyncGetStringDescriptor @ 0x14002D008 (USBHwSyncGetStringDescriptor.c)
 *     RegistryReadPnPKeyValue @ 0x14002D584 (RegistryReadPnPKeyValue.c)
 */

__int64 __fastcall USBHwGetDeviceIDString(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  int StringDescriptor; // edi
  __int64 v8; // rbp
  int v9; // ebx
  _BYTE *Pool2; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rbp
  void *v13; // rax
  void *v14; // rbx
  int v16; // [rsp+20h] [rbp-38h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  P = 0LL;
  StringDescriptor = -1073741822;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 32LL);
  *a2 = 0LL;
  *a3 = 0;
  if ( (int)RegistryReadPnPKeyValue(*(_QWORD *)(a1 + 32), L"IgnoreHwString", a3, &P) < 0
    || (v9 = *(_DWORD *)P, ExFreePool(P), v9 != 1) )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 255LL, 1096972357LL);
    LODWORD(P) = 0;
    v11 = Pool2;
    if ( Pool2 )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, *(_BYTE *)(v8 + 15), 0x409u, Pool2, v16, (unsigned int *)&P);
      if ( StringDescriptor >= 0 )
      {
        v12 = (unsigned int)((_DWORD)P - 2);
        if ( (_DWORD)P != 2 )
        {
          v13 = (void *)ExAllocatePool2(256LL, v12 + 2, 1096972357LL);
          v14 = v13;
          if ( v13 )
          {
            memmove(v13, v11 + 2, (unsigned int)v12);
            StringDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v14, ExFreePool);
            if ( StringDescriptor < 0 )
            {
              ExFreePool(v14);
            }
            else
            {
              *a2 = v14;
              *a3 = v12 + 2;
            }
          }
          else
          {
            StringDescriptor = -1073741670;
          }
        }
      }
      ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}

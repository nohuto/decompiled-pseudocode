/*
 * XREFs of RIMGetDevicePreparsedDataLockfree @ 0x140198040
 * Callers:
 *     RIMGetDevicePreparsedData @ 0x140183A90 (RIMGetDevicePreparsedData.c)
 *     NtRIMGetDevicePreparsedDataLockfree @ 0x1401FF160 (NtRIMGetDevicePreparsedDataLockfree.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall RIMGetDevicePreparsedDataLockfree(char *a1, void *a2, unsigned int *a3, int a4)
{
  int v7; // esi
  PVOID v8; // rbx
  char *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  void *v12; // r13
  unsigned int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+28h] [rbp-20h] BYREF

  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 1u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( Object )
      v9 = (char *)Object + 72;
    else
      v9 = 0LL;
    if ( *((_DWORD *)v9 + 12) == 2 )
    {
      v10 = *((_QWORD *)v9 + 55);
      v11 = *(_DWORD *)(v10 + 104);
      v12 = *(void **)(v10 + 16);
      if ( a2 )
      {
        v15 = 0;
        if ( a4 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          RtlCopyVolatileMemory(&v15, a3, 4uLL);
          v13 = v15;
          if ( v11 < v15 )
            v13 = v11;
          v15 = v13;
          RtlCopyToUser(a2, v12, v13);
        }
        else
        {
          if ( v11 >= *a3 )
            v11 = *a3;
          memmove(a2, v12, v11);
        }
      }
      else if ( a4 )
      {
        RtlWriteULongToUser(a3, v11);
      }
      else
      {
        *a3 = v11;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}

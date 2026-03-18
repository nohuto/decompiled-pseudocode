/*
 * XREFs of RIMGetDevicePreparsedDataLockfree @ 0x140158BD0
 * Callers:
 *     RIMGetDevicePreparsedData @ 0x140155BB0 (RIMGetDevicePreparsedData.c)
 *     NtRIMGetDevicePreparsedDataLockfree @ 0x1401D8010 (NtRIMGetDevicePreparsedDataLockfree.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RIMGetDevicePreparsedDataLockfree(char *a1, void *a2, unsigned int *a3, int a4)
{
  int v7; // esi
  PVOID v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r14d
  const void *v12; // r13
  unsigned int v13; // eax
  __int64 v14; // rax
  size_t v15; // r8
  ULONG64 v16; // rax
  unsigned int v18; // [rsp+20h] [rbp-28h] BYREF
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
      v12 = *(const void **)(v10 + 16);
      if ( a2 )
      {
        v18 = 0;
        if ( a4 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          RtlCopyVolatileMemory(&v18, a3, 4uLL);
          v14 = v18;
          if ( v11 < v18 )
            v14 = v11;
          v15 = (unsigned int)v14;
          v18 = v14;
          v16 = (ULONG64)a2 + v14;
          if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a2 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a2, v12, v15);
        }
        else
        {
          v13 = *a3;
          if ( v11 < *a3 )
            v13 = v11;
          memmove(a2, v12, v13);
        }
      }
      else if ( a4 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned int *)MmUserProbeAddress;
        *a3 = v11;
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

/*
 * XREFs of IommuMapDevice @ 0x14059ED30
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 */

__int64 __fastcall IommuMapDevice(_QWORD *a1, __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rsi
  int v8; // ebx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  _DWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = (_QWORD *)a5;
  a5 = 0LL;
  v16 = 0LL;
  *v5 = 0LL;
  if ( *(_DWORD *)a2 != 4 && (*(_DWORD *)a2 != 1 || (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 10) & 3) != 0) )
    return (unsigned int)-1073741637;
  v8 = HalpIommuCreateDevice(a2, a3, 0LL, (struct _KLOCK_ENTRIES *)1, &a5);
  if ( v8 >= 0 )
  {
    v11 = (__int64 *)a5;
    if ( !HalpHvIommu && (*(_DWORD *)(*(_QWORD *)(a5 + 32) + 464LL) & 0x20) == 0
      || (v12 = *(_QWORD *)(a5 + 24)) != 0 && v12 != HalpIommuBypassDomain )
    {
      v8 = -1073741637;
      goto LABEL_19;
    }
    v8 = IommupMapDeviceInternal(*a1, a5, a4);
    if ( v8 >= 0 )
    {
      if ( HalpHvIommu || *(_QWORD *)(a1[1] + 24LL) )
        goto LABEL_17;
      v8 = ExtEnvAllocateMemory(v13, 0x70u, &v16);
      if ( v8 >= 0 )
      {
        v14 = v16;
        *v16 = 1;
        v14[12] = *(_DWORD *)(*a1 + 16LL);
        v14[1] = 0;
        *(_QWORD *)(a1[1] + 24LL) = v14;
LABEL_17:
        v11 = 0LL;
        *v5 = a5;
        a5 = 0LL;
        goto LABEL_19;
      }
    }
  }
  v11 = (__int64 *)a5;
LABEL_19:
  if ( v11 )
    HalpIommuDeleteDevice(v11, (__int64)v11, v9, v10);
  return (unsigned int)v8;
}

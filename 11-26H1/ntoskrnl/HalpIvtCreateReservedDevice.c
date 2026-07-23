/*
 * XREFs of HalpIvtCreateReservedDevice @ 0x1405B1E70
 * Callers:
 *     IvtEnumerateRmrrDevices @ 0x1405B1FC0 (IvtEnumerateRmrrDevices.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     IvtDeleteDevice @ 0x1405B1D40 (IvtDeleteDevice.c)
 *     DmrConvertDeviceScope @ 0x1405B2698 (DmrConvertDeviceScope.c)
 */

unsigned __int64 __fastcall HalpIvtCreateReservedDevice(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rsi
  _QWORD *v4; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v2 = (_QWORD **)(a2 + 16);
  v4 = *(_QWORD **)(a2 + 16);
  v5 = 0;
  while ( v4 != v2 )
  {
    v4 = (_QWORD *)*v4;
    ++v5;
  }
  v15 = 0LL;
  v6 = ExtEnvAllocateMemory(a1, 24 * v5 + 40, &v15);
  v8 = v15;
  if ( v6 >= 0 )
    *(_DWORD *)(v15 + 32) = v5;
  if ( v8 )
  {
    v9 = *v2;
    v10 = 0LL;
    while ( v9 != v2 )
    {
      v11 = v9;
      v9 = (_QWORD *)*v9;
      if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 32) )
        goto LABEL_12;
      *(_QWORD *)(v8 + 24 * v10 + 40) = v11[2];
      v7 = 3 * v10;
      v10 = (unsigned int)(v10 + 1);
      *(_QWORD *)(v8 + 8 * v7 + 48) = v11[3];
    }
    v12 = DmrConvertDeviceScope(*(unsigned __int16 *)(a2 + 32), a2 + 34, v9, v10);
    *(_QWORD *)v8 = v12;
    if ( v12 )
      return v8;
LABEL_12:
    v13 = *(_QWORD *)(v8 + 24);
    if ( v13 )
      IvtDeleteDevice(0LL, v13);
    if ( *(_QWORD *)v8 )
    {
      ExtEnvFreeMemory(v7, *(_QWORD *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    ExtEnvFreeMemory(v7, v8);
    return 0LL;
  }
  return v8;
}

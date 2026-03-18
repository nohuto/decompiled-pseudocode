/*
 * XREFs of ACPIIoctlEvalPostProcessingV2 @ 0x140038BA0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x140044940 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x140038C78 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x140038D80 (ACPIIoctlCalculateOutputBufferV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV2(_QWORD *a1, __int64 a2, char a3)
{
  _DWORD *v3; // rdi
  __int64 v7; // r9
  unsigned int v8; // r11d
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !*(_DWORD *)(a1[23] + 8LL)
    || (v14 = 0,
        v15 = 0,
        (int)ACPIIoctlCalculateOutputBufferSizeV2(a2, (unsigned int)&v14, (unsigned int)&v15, a3, 1) < 0) )
  {
    a1[7] = 0LL;
    return 0LL;
  }
  v9 = 24LL;
  v10 = v14 + 12;
  v11 = v14 + 12;
  if ( (unsigned int)(v14 + 12) < 0x18 )
  {
    v10 = 24;
    v11 = 24;
  }
  if ( v8 >= 0x18 )
  {
    v12 = (_DWORD *)a1[3];
    v12[1] = v10;
    v3 = v12 + 3;
    v12[2] = v15;
    *v12 = 1265591617;
  }
  if ( v11 <= v8 )
  {
    LOBYTE(v7) = 1;
    a1[7] = v11;
    LOBYTE(v9) = a3;
    if ( (int)ACPIIoctlCalculateOutputBufferV2(a2, v3, v9, v7) < 0 )
      a1[7] = 0LL;
    return 0LL;
  }
  a1[7] = 24LL;
  return 2147483653LL;
}

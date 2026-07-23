/*
 * XREFs of PiDevCfgConfigureDeviceDriver @ 0x140A47AD0
 * Callers:
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140A46978 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriver(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rsi
  void *v8; // r8
  __int64 result; // rax
  __int64 *v10; // r14
  __int64 i; // rbx
  int v12; // ebp
  void *v13; // r13
  int v14; // r12d
  unsigned int v15; // [rsp+20h] [rbp-88h]
  _DWORD v16[18]; // [rsp+60h] [rbp-48h] BYREF
  int v19; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a5;
  v8 = *(void **)(a3 + 32);
  v19 = 0;
  v16[0] = 0;
  result = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, v8, -1, 0LL, 0LL, a4, a5);
  if ( (int)result >= 0 )
  {
    v10 = (__int64 *)(a3 + 384);
    for ( i = *v10; (__int64 *)i != v10; i = *(_QWORD *)i )
    {
      v12 = *(_DWORD *)(i + 104);
      v13 = *(void **)(i + 32);
      if ( (v12 & 1) != 0 )
      {
        result = PiDevCfgCopyObjectProperties(
                   *(__int64 *)&PiPnpRtlCtx,
                   0LL,
                   0,
                   *(char **)(i + 32),
                   v15,
                   *(const WCHAR **)(a1 + 48),
                   1,
                   *(char **)(a2 + 16),
                   (__int64)PiDevCfgConfigurePropertyMatchCallback,
                   i,
                   (*(_DWORD *)a2 & 1u) << 17);
        if ( (int)result < 0 )
          break;
      }
      result = PiDevCfgConfigureDeviceKeys(a1, a2, v13, v12, &v19, v16);
      v14 = v16[0];
      if ( (int)result < 0 )
        break;
      if ( a4 )
        *a4 |= v19;
      if ( v5 )
        *v5 |= v14;
    }
  }
  return result;
}

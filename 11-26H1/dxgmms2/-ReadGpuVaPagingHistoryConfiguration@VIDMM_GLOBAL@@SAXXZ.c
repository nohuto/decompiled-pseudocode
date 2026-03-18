/*
 * XREFs of ?ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140120818
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011FA24 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void VIDMM_GLOBAL::ReadGpuVaPagingHistoryConfiguration(void)
{
  unsigned int v0; // eax
  unsigned int v1; // ebx
  int v2; // r9d
  unsigned int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+38h] [rbp-11h]
  const wchar_t *v10; // [rsp+40h] [rbp-9h]
  unsigned int *v11; // [rsp+48h] [rbp-1h]
  int v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  int v14; // [rsp+60h] [rbp+17h]
  __int128 v15; // [rsp+68h] [rbp+1Fh]
  __int128 v16; // [rsp+78h] [rbp+2Fh]
  __int128 v17; // [rsp+88h] [rbp+3Fh]
  __int64 v18; // [rsp+98h] [rbp+4Fh]
  int v19; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+6Fh] BYREF

  v19 = 391190;
  v8 = 0LL;
  v9 = 292;
  v12 = 0x4000000;
  v13 = 0LL;
  v20 = (unsigned __int64)qword_14008A318 > 0x53333333 ? 0x400 : 0;
  v14 = 0;
  v10 = L"GpuVaPagingHistorySize";
  v11 = &v20;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v0 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v8, 0LL, 0LL);
  v8 = 0LL;
  v9 = 292;
  v1 = v0 >> 31;
  v10 = L"GpuVaPagingHistoryMask";
  v12 = 0x4000000;
  v11 = (unsigned int *)&v19;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v8, 0LL, 0LL) >= 0 || (_BYTE)v1 )
    v2 = v19;
  else
    v2 = -1;
  v3 = v20;
  if ( v20 )
  {
    v4 = v20 >= 0x1FFFFFF ? 0x7FFFFFFF : v20 << 6;
    v5 = v4 | (v4 >> 1) | ((v4 | (v4 >> 1)) >> 2);
    v6 = v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8);
    v3 = (v6 | HIWORD(v6)) - ((v6 | HIWORD(v6)) >> 1);
    if ( v3 <= 0x1000 )
      v3 = 4096;
  }
  dword_14008A4EC = v3;
  dword_14008A4F0 = v2;
  v7 = (_BYTE)v1 != 0 ? 2 : 32;
  if ( v20 >= 0x7FFFFFFF / v7 )
    dword_14008A4F4 = 0x7FFFFFFF;
  else
    dword_14008A4F4 = v20 * v7;
}

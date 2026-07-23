/*
 * XREFs of RtlDecompressBufferDeflateInternal @ 0x140627D38
 * Callers:
 *     RtlDecompressBufferDeflateRaw @ 0x140627E40 (RtlDecompressBufferDeflateRaw.c)
 *     RtlDecompressBufferDeflateZlib @ 0x140627E80 (RtlDecompressBufferDeflateZlib.c)
 * Callees:
 *     inflate @ 0x14062969C (inflate.c)
 *     inflateReset2 @ 0x14062A674 (inflateReset2.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlDecompressBufferDeflateInternal(
        char a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v12; // rdx
  int v13; // eax
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  int v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+38h] [rbp-48h]
  int v20; // [rsp+3Ch] [rbp-44h]
  _QWORD *v21; // [rsp+48h] [rbp-38h]
  __int64 (*v22)(); // [rsp+50h] [rbp-30h]
  void (*v23)(); // [rsp+58h] [rbp-28h]

  memset_0(&v16, 0, 0x58uLL);
  memset_0(a8, 0, 0x2370uLL);
  v17 = a5;
  v12 = 15LL;
  v16 = a4;
  v22 = HalSystemVectorDispatchEntry;
  v18 = a2;
  v23 = xHalTimerWatchdogStop;
  *a8 = &v16;
  if ( a1 != 1 )
    v12 = 4294967281LL;
  v19 = a3;
  v21 = a8;
  *((_DWORD *)a8 + 2) = 16180;
  inflateReset2(&v16, v12);
  v13 = inflate(&v16, 4LL);
  v14 = v13;
  if ( v13 == 1 )
  {
    *a7 = v20;
    return 0LL;
  }
  else if ( (unsigned int)(v13 + 5) <= 1 )
  {
    return 3221225507LL;
  }
  else
  {
    result = 3221225701LL;
    if ( v14 == -3 )
      return 3221225485LL;
  }
  return result;
}

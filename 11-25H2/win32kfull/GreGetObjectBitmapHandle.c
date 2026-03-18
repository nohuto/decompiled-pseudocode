/*
 * XREFs of GreGetObjectBitmapHandle @ 0x1400E43A0
 * Callers:
 *     NtGdiGetObjectBitmapHandle @ 0x140339D40 (NtGdiGetObjectBitmapHandle.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3CF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E3D80 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetObjectBitmapHandle(HBRUSH a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v8, a1, a3, a4);
  v5 = 0LL;
  if ( v8[0] )
  {
    v5 = *(_QWORD *)(v8[0] + 24LL);
    v6 = *(_DWORD *)(v8[0] + 40LL);
    if ( (v6 & 0x1000) != 0 )
      *a2 = 1;
    else
      *a2 = (v6 >> 12) & 2;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v8);
  return v5;
}

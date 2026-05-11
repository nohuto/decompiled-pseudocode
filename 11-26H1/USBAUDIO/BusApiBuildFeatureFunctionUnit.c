/*
 * XREFs of BusApiBuildFeatureFunctionUnit @ 0x140034620
 * Callers:
 *     USBParseFeatureUnit @ 0x1400375B0 (USBParseFeatureUnit.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x14002D1E0 (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildFeatureFunctionUnit(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int *a5,
        const WCHAR *a6,
        _DWORD *a7)
{
  int v8; // r10d
  __int64 v9; // r8
  _DWORD *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v15[3]; // [rsp+50h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v8 = BusApiBuildFunctionUnit(a1, a2, 2, a3, a4, 1u, a5, a6, 4 * a3 + 4, v15);
  if ( v8 >= 0 )
  {
    v9 = v15[0];
    if ( v15[0] )
    {
      v10 = a7;
      v11 = v15[0] + 108;
      *(_QWORD *)(v15[0] + 72) = v15[0] + 108;
      *(_BYTE *)(v9 + 64) = *a7 != 0;
      if ( a3 != -1 )
      {
        v12 = v11 - (_QWORD)a7;
        v13 = (unsigned int)(a3 + 1);
        do
        {
          *(_DWORD *)(v9 + 68) |= *v10;
          *(_DWORD *)((char *)v10 + v12) = *v10;
          ++v10;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  return (unsigned int)v8;
}

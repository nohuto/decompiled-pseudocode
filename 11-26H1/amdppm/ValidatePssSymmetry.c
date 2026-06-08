/*
 * XREFs of ValidatePssSymmetry @ 0x140031F5C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140031908 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_SSsdd @ 0x14000A468 (WPP_RECORDER_SF_SSsdd.c)
 *     WPP_RECORDER_SF_SSsddd @ 0x14000A6F0 (WPP_RECORDER_SF_SSsddd.c)
 */

__int64 __fastcall ValidatePssSymmetry(
        const wchar_t *a1,
        unsigned int *a2,
        const wchar_t *a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 i; // rdx
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-48h]

  v8 = -1073741823;
  if ( a2 && a4 )
  {
    v9 = *a4;
    v10 = *a2;
    if ( (_DWORD)v10 == (_DWORD)v9 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= (unsigned int)v10 )
          return 0;
        v12 = a2[12 * i + 2];
        if ( (_DWORD)v12 != a4[12 * i + 2] )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SSsddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, v10, v12, v14, a1, a3, a5);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_SSsdd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, v10, v9, v14, a1, a3, a5);
    }
  }
  return v8;
}

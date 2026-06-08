/*
 * XREFs of ValidateTssSymmetry @ 0x1400320A0
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140031908 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_SSdd @ 0x140009C5C (WPP_RECORDER_SF_SSdd.c)
 *     WPP_RECORDER_SF_SSddd @ 0x140009E48 (WPP_RECORDER_SF_SSddd.c)
 */

__int64 __fastcall ValidateTssSymmetry(const wchar_t *a1, unsigned int *a2, const wchar_t *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 i; // rdx
  int v10; // [rsp+20h] [rbp-38h]

  v6 = -1073741823;
  if ( a2 && a4 )
  {
    v7 = *a2;
    if ( (_DWORD)v7 == *a4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= (unsigned int)v7 )
          return 0;
        if ( a2[5 * i + 1] != a4[5 * i + 1] )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SSddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, v7, (__int64)a4, v10, a1, a3);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_SSdd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, v7, 0x49u, v10, a1, a3);
    }
  }
  return v6;
}

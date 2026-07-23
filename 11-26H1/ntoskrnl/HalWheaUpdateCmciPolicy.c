/*
 * XREFs of HalWheaUpdateCmciPolicy @ 0x14057CD30
 * Callers:
 *     WheapPropagatePolicyToHal @ 0x140B52A30 (WheapPropagatePolicyToHal.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

LONGLONG __fastcall HalWheaUpdateCmciPolicy(int a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  LONGLONG result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  PerformanceFrequency.QuadPart = 0LL;
  v3 = a1 - 7;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 == 8 )
                HalpDisablePrmAddressTranslation = a2;
            }
            else
            {
              HalpCmcPollCount = a2;
            }
          }
          else
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            result = PerformanceFrequency.QuadPart * v2;
            HalpCmciThresholdTime = PerformanceFrequency.QuadPart * v2;
          }
        }
        else
        {
          result = 2LL;
          if ( a2 <= 2 )
            LODWORD(v2) = 2;
          HalpCmciThresholdCount = v2;
        }
      }
      else
      {
        dword_140E10940 = a2;
      }
    }
    else
    {
      dword_140E10944 = a2;
    }
  }
  else
  {
    byte_140E1093C = a2;
  }
  return result;
}

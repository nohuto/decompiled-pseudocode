/*
 * XREFs of ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z @ 0x1403456B0
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14028AC7C (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(
        CPhysicalMonitorHandle *this,
        char *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int i; // edx
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  v5 = 0;
  if ( a3 < a5 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    for ( i = 0; i < a5; ++i )
    {
      v8 = a4[i];
      if ( (unsigned __int16)v8 < 0x61u )
      {
        if ( (_WORD)v8 )
        {
          LOWORD(v8) = v8 - 32;
          if ( (unsigned __int16)v8 > 0x3Fu )
            return (unsigned int)-1073741823;
          v10 = 0x87FFFFFE03FF4301uLL;
          if ( !_bittest64((const __int64 *)&v10, v8) )
            return (unsigned int)-1073741823;
        }
      }
      else if ( (unsigned __int16)v8 > 0x7Au )
      {
        return (unsigned int)-1073741823;
      }
      v11 = i;
      v12 = i;
      a2[v12] = a4[v11];
    }
  }
  return v5;
}

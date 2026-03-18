/*
 * XREFs of ?bValid@FHOBJ@@QEBAHXZ @ 0x14017EEC4
 * Callers:
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x140101BF8 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FHOBJ::bValid(FHOBJ *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( **(_QWORD **)this )
      return 1LL;
  }
  return result;
}

/*
 * XREFs of ?AddResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802ACA20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

char *__fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>>::AddResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  char *result; // rax
  char **v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (_QWORD *)(a1 + 32);
  result = (char *)a2;
  v4 = (char **)v2[1];
  if ( v4 == (char **)v2[2] )
    return std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
             v2,
             (__int64)v4,
             &v5);
  *v4 = result;
  v2[1] += 8LL;
  return result;
}

/*
 * XREFs of ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18021C1AC
 * Callers:
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180161E00 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?Thunk_ClearPrincipalReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180240E60 (-Thunk_ClearPrincipalReady_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovid.c)
 *     ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180240F70 (-Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBam.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180242030 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(
        Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  return (struct Microsoft::BamoImpl::BamoStubImpl *)i;
}

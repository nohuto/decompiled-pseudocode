/*
 * XREFs of ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180241350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180162B84 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::BamoImpl::BamoImplObject **__fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::`scalar deleting destructor'(
        Microsoft::BamoImpl::BamoImplObject **this,
        char a2)
{
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

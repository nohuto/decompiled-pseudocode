/*
 * XREFs of ?SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800AFB80
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1800AEE4C (--4-$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?LogSetTopLevelActivatedEntity@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800AF658 (-LogSetTopLevelActivatedEntity@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoActivat.c)
 *     ?UpdateTopLevelActivatedEntityRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800AFD14 (-UpdateTopLevelActivatedEntityRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJ.c)
 */

void __fastcall BamoActivationWatcherPrincipal::SetTopLevelActivatedEntity(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoActivatableEntityPrincipal *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rdi
  int updated; // eax
  int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
    v3 + 7,
    (void (__fastcall ***)(_QWORD))a2);
  BamoImpl::BamoActivationWatcherPrincipalImpl::LogSetTopLevelActivatedEntity(
    (BamoImpl::BamoActivationWatcherPrincipalImpl *)v3,
    a2);
  for ( i = v3[4]; i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateTopLevelActivatedEntityRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (struct BamoImpl::BamoActivationWatcherPrincipalImpl *)v3);
      v8 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        goto LABEL_8;
      }
    }
  }
  v8 = 0;
LABEL_8:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7698,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v4, v5);
}

/*
 * XREFs of ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018AF90
 * Callers:
 *     ??0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z @ 0x18018863C (--0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z.c)
 *     ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018BFD8 (--0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18018CA68 (--0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV-$basic_string@GU-$char_t.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetIsIntensitySupported@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z @ 0x180189C60 (-LogSetIsIntensitySupported@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?UpdateIsIntensitySupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018B714 (-UpdateIsIntensitySupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@.c)
 */

void __fastcall BamoSimpleHapticsControllerPrincipal::SetIsIntensitySupported(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        char a2)
{
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 i; // rbx
  int IsIntensitySupportedRemoteCacheStatic; // eax
  int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  *((_BYTE *)v3 + 64) = a2;
  BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogSetIsIntensitySupported(v3);
  for ( i = *((_QWORD *)v3 + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      IsIntensitySupportedRemoteCacheStatic = BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsIntensitySupportedRemoteCacheStatic(
                                                (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                                                v3);
      v8 = IsIntensitySupportedRemoteCacheStatic;
      if ( IsIntensitySupportedRemoteCacheStatic < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)IsIntensitySupportedRemoteCacheStatic);
        goto LABEL_8;
      }
    }
  }
  v8 = 0;
LABEL_8:
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x889F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v4, v5);
}

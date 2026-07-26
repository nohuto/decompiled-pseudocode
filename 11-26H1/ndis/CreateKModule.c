/*
 * XREFs of CreateKModule @ 0x14014810C
 * Callers:
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x14016B9E0 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x14008FC80 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     GetModuleParameters @ 0x14014829C (GetModuleParameters.c)
 *     ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140148CF0 (--0KModule@@QEAA@AEBU_GUID@@$$QEAV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     BuildServicePath @ 0x1401691D0 (BuildServicePath.c)
 */

__int64 __fastcall CreateKModule(__int64 a1, __int64 *a2)
{
  unsigned int ModuleParameters; // ebx
  PVOID PoolWithTag; // rax
  int v6; // edx
  __int64 v7; // rax
  PCUNICODE_STRING Source; // [rsp+30h] [rbp-18h] BYREF
  void *v10[2]; // [rsp+38h] [rbp-10h] BYREF

  Source = 0LL;
  ModuleParameters = GetModuleParameters(a1);
  if ( !ModuleParameters )
  {
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(v10);
    ModuleParameters = BuildServicePath(Source);
    if ( !ModuleParameters )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x62694C4Eu);
      if ( PoolWithTag && (v7 = KModule::KModule(PoolWithTag, a1, v10)) != 0 )
      {
        *a2 = v7;
        ModuleParameters = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            1,
            22,
            (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
        }
        ModuleParameters = -1073741670;
      }
    }
    wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(v10, 0LL);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&Source, 0LL);
  return ModuleParameters;
}

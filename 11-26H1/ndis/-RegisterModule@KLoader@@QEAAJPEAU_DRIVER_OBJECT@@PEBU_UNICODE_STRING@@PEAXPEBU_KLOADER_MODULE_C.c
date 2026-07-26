/*
 * XREFs of ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514
 * Callers:
 *     KLoaderRegisterModule @ 0x1400DF0F0 (KLoaderRegisterModule.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x14006AAA0 (WPP_RECORDER_SF__guid_d.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931CC (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x1401386B0 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 *     CreateKModule @ 0x14014810C (CreateKModule.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1401489F0 (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x14016A9D0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x14016ABE0 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 __fastcall KLoader::RegisterModule(
        KLoader *this,
        struct _DRIVER_OBJECT *a2,
        struct _UNICODE_STRING *a3,
        void *a4,
        const struct _KLOADER_MODULE_CHARACTERISTICS *a5)
{
  const struct _KLOADER_MODULE_CHARACTERISTICS *v5; // rbx
  struct KPushLockBase *v6; // r13
  int v8; // r9d
  __int128 *v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  struct KModule *ModuleByGuidLocked; // rax
  struct KModule *v13; // r14
  void **v14; // r15
  unsigned int v15; // r14d
  unsigned int KModule; // eax
  struct KPushLockBase **Value; // rcx
  void **v18; // rax
  unsigned int v19; // esi
  int v20; // eax
  struct _UNICODE_STRING *v21; // [rsp+48h] [rbp-41h]
  struct KModule *v22; // [rsp+50h] [rbp-39h]
  struct KModule *v23; // [rsp+58h] [rbp-31h]
  struct KModule *v24; // [rsp+60h] [rbp-29h]
  struct KModule *v25; // [rsp+68h] [rbp-21h]
  __int128 v26; // [rsp+78h] [rbp-11h] BYREF
  KLockThisExclusive v27; // [rsp+88h] [rbp-1h] BYREF
  struct KModule *v28; // [rsp+E8h] [rbp+5Fh]
  struct _DRIVER_OBJECT *v29; // [rsp+F0h] [rbp+67h]
  struct KModule *v30; // [rsp+F8h] [rbp+6Fh] BYREF
  void *v31; // [rsp+100h] [rbp+77h]

  v31 = a4;
  v30 = (struct KModule *)a3;
  v29 = a2;
  v5 = a5;
  v6 = qword_14011EA40;
  if ( *(_DWORD *)a5 < 0x30u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        *(_DWORD *)a5);
    return 3221225476LL;
  }
  v21 = (struct _UNICODE_STRING *)((char *)a5 + 24);
  if ( !*((_WORD *)a5 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
LABEL_11:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        v8,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( !*((_QWORD *)a5 + 5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 12;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
  KLockThisExclusive::KLockThisExclusive(&v27, qword_14011EA40);
  v9 = (__int128 *)((char *)v5 + 4);
  ModuleByGuidLocked = KLoader::FindModuleByGuidLocked((KLoader *)v6, (const struct _GUID *)((char *)v5 + 4), v10, v11);
  v30 = ModuleByGuidLocked;
  v13 = ModuleByGuidLocked;
  *(_QWORD *)&v26 = ModuleByGuidLocked;
  v14 = (void **)ModuleByGuidLocked;
  v28 = ModuleByGuidLocked;
  v22 = ModuleByGuidLocked;
  v23 = ModuleByGuidLocked;
  v24 = ModuleByGuidLocked;
  v25 = ModuleByGuidLocked;
  if ( !ModuleByGuidLocked )
  {
    if ( ndisKLoaderAreBootDriversLoaded )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
          (__int64)v9);
      v15 = -1073741637;
LABEL_23:
      KLockHolder::~KLockHolder(&v27);
      return v15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        (__int64)v9);
    v26 = *v9;
    KModule = CreateKModule((__int64)&v26, (__int64 *)&v30);
    v15 = KModule;
    if ( KModule )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
          (__int64)v9,
          KModule);
      goto LABEL_23;
    }
    Value = (struct KPushLockBase **)v6[2].m_Lock.Value;
    if ( *Value != &v6[1] )
      __fastfail(3u);
    v13 = v30;
    v14 = (void **)v30;
    v28 = v30;
    v22 = v30;
    v23 = v30;
    *(_QWORD *)v30 = v6 + 1;
    v14[1] = Value;
    *Value = (struct KPushLockBase *)v14;
    v6[2].m_Lock.Value = (unsigned __int64)v14;
    ModuleByGuidLocked = (struct KModule *)v14;
    *(_QWORD *)&v26 = v14;
    *((_BYTE *)v14 + 136) = 1;
    v24 = (struct KModule *)v14;
    v25 = (struct KModule *)v14;
  }
  ++*((_DWORD *)ModuleByGuidLocked + 4);
  KLockHolder::~KLockHolder(&v27);
  v18 = (void **)Rtl::DuplicateUnicodeString(&v30, v21, 1651067982LL);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(v14 + 5, v18);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset((void **)&v30, 0LL);
  if ( *((_QWORD *)v28 + 5) )
  {
    v19 = DriverService::Open((DriverService *)(v14 + 6), v29, v21);
    if ( v19 )
    {
      KLoader::DereferenceKModule((KLoader *)v6, v13);
      return v19;
    }
    else
    {
      *((_QWORD *)v22 + 12) = v31;
      *((_QWORD *)v23 + 13) = *((_QWORD *)a5 + 5);
      if ( *((_BYTE *)v24 + 136) )
      {
        KLockThisExclusive::KLockThisExclusive(&v27, (struct KPushLockBase *)v25 + 7);
        v20 = *((_DWORD *)v25 + 16) + 1;
        *((_DWORD *)v25 + 16) = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            1u,
            0xEu,
            (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
            (_BYTE)v25 + 48,
            v20);
        KLockHolder::~KLockHolder(&v27);
        KLockThisExclusive::KLockThisExclusive(&v27, v6);
        ++*(_DWORD *)(v26 + 16);
        KLockHolder::~KLockHolder(&v27);
      }
      KLoader::DereferenceKModule((KLoader *)v6, v13);
      return 0LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x10u,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        (__int64)v9);
    return 3221225626LL;
  }
}

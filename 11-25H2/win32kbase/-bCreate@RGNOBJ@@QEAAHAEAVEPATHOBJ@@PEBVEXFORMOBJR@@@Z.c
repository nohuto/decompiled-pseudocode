/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000EB2C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z @ 0x140098E60 (-RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bCreate(
        RGNOBJ *this,
        struct EPATHOBJ *a2,
        const struct EXFORMOBJR *a3,
        const struct EXFORMOBJ *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  unsigned int v9; // edx
  const struct REGION_CORE *v10; // r8
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v7 = *(_QWORD *)this;
  if ( qword_1402A10B0 )
    return Win32kRS::RegionCore_fill_path_with_outline((Win32kRS *)((v7 + 24) & -(__int64)(v7 != 0)), a2, a3, a4);
  REGION_CORE::get_sizeScan((REGION_CORE *)(v7 + 24));
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v12);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, v9);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
  if ( v12 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v12, this, v10);
    v4 = RGNOBJ::bOutline((RGNOBJ *)&v12, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
  return v4;
}

/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000EB2C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140016730 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  unsigned int sizeScan; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(
    &v12,
    sizeScan);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, v9);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
  if ( v12
    && (RGNOBJ::vCopy((RGNOBJ *)&v12, this), (v10 = RGNOBJ::iCombine((RGNOBJ *)&v12, a2, a3, a4)) != 0)
    && (unsigned int)RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v12) )
  {
    if ( v12 )
      PopThreadGuardedObject(v12 + 80);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
    return v10;
  }
  else
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
    return 0LL;
  }
}

/*
 * XREFs of ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x1401386B0
 * Callers:
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x14016B9E0 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_q @ 0x1400DF4A0 (WPP_RECORDER_SF__guid_q.c)
 */

struct KModule *__fastcall KLoader::FindModuleByGuidLocked(
        KLoader *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rax
  char *i; // rbx
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x17u,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      (__int64)a2);
  v6 = (char *)this + 8;
  for ( i = (char *)*((_QWORD *)this + 1); i != v6; i = *(char **)i )
  {
    v8 = *(_QWORD *)(i + 20) - *(_QWORD *)&a2->Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(i + 28) - *(_QWORD *)a2->Data4;
    if ( !v8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_q(*((_QWORD *)WPP_GLOBAL_Control + 8), 0LL, a3, a4, v10, (__int64)a2);
      return (struct KModule *)i;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x19u,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      (__int64)a2);
  return 0LL;
}

/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetBegin@@YAXPEAU_RM_ACTIVITY_HOST@@KPEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180062EF0
 * Callers:
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083AC0 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008A1B0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostEnumerateResourceSetBegin(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a3)
{
  struct _RM_ACTIVITY_HOST **v3; // r11
  signed int i; // r9d
  __int64 v7; // rcx

  v3 = (struct _RM_ACTIVITY_HOST **)((char *)a1 + 1120);
  *(_OWORD *)a3 = 0LL;
  *((_DWORD *)a3 + 2) = a2;
  for ( i = 0; i < 2; ++i )
  {
    if ( _bittest(&a2, i) )
    {
      v7 = 0LL;
      if ( *v3 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 16 * i + 8 * i + 1120) )
        v7 = (__int64)*v3 - 1296;
      if ( v7 )
        goto LABEL_9;
    }
    v3 += 3;
  }
  v7 = 0LL;
LABEL_9:
  *(_QWORD *)a3 = v7;
}

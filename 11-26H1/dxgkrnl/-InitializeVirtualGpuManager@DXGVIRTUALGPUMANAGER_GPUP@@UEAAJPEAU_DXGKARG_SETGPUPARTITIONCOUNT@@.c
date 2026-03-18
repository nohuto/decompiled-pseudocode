/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x14021EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x14021B2FC (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2)
{
  __int64 result; // rax
  void **v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  int v8; // esi

  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1307;
    return result;
  }
  v5 = (void **)((char *)this + 24);
  if ( a2->PartitionCount != *((_DWORD *)this + 3) )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v5);
    v6 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v6 = -1LL;
    v7 = operator new[](v6, 0x4B677844u, 256LL);
    *v5 = (void *)v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1317;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for virtual GPUs",
        1317LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  v8 = ADAPTER_RENDER::DdiSetGpuPartitionCount(*((ADAPTER_RENDER **)this + 4), a2);
  if ( v8 < 0 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v5);
    *((_DWORD *)this + 3) = 0;
    *v5 = 0LL;
  }
  return (unsigned int)v8;
}

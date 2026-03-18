/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18022DED0
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18022DE24 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18002F760 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007962C (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x180186840 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801A825C (-RemoveElement@-$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CL.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(void **this)
{
  int i; // edi
  struct _RTL_GENERIC_TABLE *j; // rbx
  __int64 *v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems((CLegacySurfaceManager *)this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    operator delete(*((void **)this[13] + 2 * (unsigned int)(i - 1) + 1));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 13), 0x10u);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy(this + 29);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 22));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 18));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(this + 13));
  *this = &CLogicalSurfaceHandleMap::`vftable';
  for ( j = (struct _RTL_GENERIC_TABLE *)(this + 1);
        ;
        CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(j, v4) )
  {
    RestartKey = 0LL;
    v4 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(j, &RestartKey);
    if ( !v4 )
      break;
  }
}

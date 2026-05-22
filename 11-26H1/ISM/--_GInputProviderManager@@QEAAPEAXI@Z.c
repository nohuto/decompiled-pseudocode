/*
 * XREFs of ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x1800A1AB0
 * Callers:
 *     ??1?$_Optional_destruct_base@VInputProviderManager@@$0A@@std@@QEAA@XZ @ 0x1800A18B0 (--1-$_Optional_destruct_base@VInputProviderManager@@$0A@@std@@QEAA@XZ.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A18EC (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A1874 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 */

InputProviderManager *__fastcall InputProviderManager::`scalar deleting destructor'(InputProviderManager *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<InputProvider>>(v2, *((_QWORD *)this + 1));
    std::_Deallocate<16>(
      *(void **)this,
      (struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 3)));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  return this;
}

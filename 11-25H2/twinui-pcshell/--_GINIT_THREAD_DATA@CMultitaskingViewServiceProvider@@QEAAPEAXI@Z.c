/*
 * XREFs of ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x18020DB28
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x18020D2D0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802597FC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ??1?$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ @ 0x1802CCB20 (--1-$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ.c)
 * Callees:
 *     ??1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18020DB54 (--1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMultitaskingViewServiceProvider::INIT_THREAD_DATA *__fastcall CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA::~INIT_THREAD_DATA(this);
  operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}

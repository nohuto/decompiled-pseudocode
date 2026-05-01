/*
 * XREFs of ??1?$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ @ 0x1802CCB20
 * Callers:
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802597FC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     _CMultitaskingViewServiceProvider::_StartMTVThread_::_1_::dtor$0 @ 0x1806C7962 (_CMultitaskingViewServiceProvider--_StartMTVThread_--_1_--dtor$0.c)
 * Callees:
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x18020DB28 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 */

CMultitaskingViewServiceProvider::INIT_THREAD_DATA *__fastcall CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>::~CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>(
        CMultitaskingViewServiceProvider::INIT_THREAD_DATA **a1)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(result);
  return result;
}

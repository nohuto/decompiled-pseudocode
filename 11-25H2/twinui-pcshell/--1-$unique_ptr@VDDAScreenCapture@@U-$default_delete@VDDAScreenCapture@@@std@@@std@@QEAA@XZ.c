/*
 * XREFs of ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1803E0080
 * Callers:
 *     ??$reset@VDDAScreenCapture@@$0A@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1803DFFD4 (--$reset@VDDAScreenCapture@@$0A@@-$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1803E498C (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     _std::shared_ptr_DDAScreenCapture_::reset_DDAScreenCapture_0__::_1_::dtor$1 @ 0x1806C0DD2 (_std--shared_ptr_DDAScreenCapture_--reset_DDAScreenCapture_0__--_1_--dtor$1.c)
 *     _DDAScreenCapture::CreateInstance_::_1_::dtor$1 @ 0x1806C1115 (_DDAScreenCapture--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1803E0138 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<DDAScreenCapture>::~unique_ptr<DDAScreenCapture>(
        DDAScreenCapture **a1,
        unsigned int a2)
{
  DDAScreenCapture *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return DDAScreenCapture::`scalar deleting destructor'(v2, a2);
  return result;
}

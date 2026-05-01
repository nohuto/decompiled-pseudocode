/*
 * XREFs of ??1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ @ 0x1803C5CEC
 * Callers:
 *     ??_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x1803C5D50 (--_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x18018C4E0 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositioner::~SearchBoxOnTaskbarSearchAppPositioner(
        SearchBoxOnTaskbarSearchAppPositioner *this)
{
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 1,
    0LL);
  *(_QWORD *)this = &ISearchAppPositioner::`vftable';
}

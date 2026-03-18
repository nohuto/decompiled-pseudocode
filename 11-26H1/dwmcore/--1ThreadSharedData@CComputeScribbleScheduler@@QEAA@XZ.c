/*
 * XREFs of ??1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ @ 0x18025C948
 * Callers:
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x18025C824 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CComputeScribbleScheduler::ThreadSharedData::~ThreadSharedData(
        CComputeScribbleScheduler::ThreadSharedData *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 5) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}

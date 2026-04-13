/*
 * XREFs of ?Get@ThreadLocalFailureInfo@details_abi@wil@@QEBAXAEAUFailureInfo@3@@Z @ 0x180030150
 * Callers:
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x180031E00 (-GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Get(
        wil::details_abi::ThreadLocalFailureInfo *this,
        struct wil::FailureInfo *a2)
{
  memset_0(a2, 0, 0x98uLL);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 2);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)a2 + 16) = *((unsigned __int16 *)this + 12);
  *(_DWORD *)a2 = *((unsigned __int8 *)this + 26);
  *((_QWORD *)a2 + 16) = *((_QWORD *)this + 4);
  *((_QWORD *)a2 + 17) = *((_QWORD *)this + 5);
  *((_QWORD *)a2 + 18) = *((_QWORD *)this + 6);
  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 7);
}

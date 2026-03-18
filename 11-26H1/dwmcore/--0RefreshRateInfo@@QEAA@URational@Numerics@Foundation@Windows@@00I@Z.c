/*
 * XREFs of ??0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z @ 0x18029CAC4
 * Callers:
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x1801DFBAC (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RefreshRateInfo::RefreshRateInfo(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  LONGLONG v5; // rbx
  LONGLONG v7; // r9
  LONGLONG v8; // rax
  bool v9; // zf
  LONGLONG v10; // rcx
  _QWORD *result; // rax

  *a1 = a2;
  v5 = 0LL;
  a1[1] = 0LL;
  a1[3] = 1LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v7 = (__int64)(g_qpcFrequency.QuadPart * HIDWORD(a4)) / (unsigned int)a4;
  v8 = (__int64)(g_qpcFrequency.QuadPart * HIDWORD(a3)) / (unsigned int)a3;
  v9 = v7 == v8;
  if ( v7 == v8 )
  {
    v10 = 0LL;
  }
  else
  {
    v5 = (__int64)(g_qpcFrequency.QuadPart * HIDWORD(a3)) / (unsigned int)a3;
    v10 = v7;
  }
  if ( v9 )
    a5 = 1;
  a1[2] = v5;
  *((_DWORD *)a1 + 6) = a5;
  result = a1;
  a1[1] = v10;
  return result;
}

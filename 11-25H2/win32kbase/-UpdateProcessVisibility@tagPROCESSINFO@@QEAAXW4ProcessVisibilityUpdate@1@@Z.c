/*
 * XREFs of ?UpdateProcessVisibility@tagPROCESSINFO@@QEAAXW4ProcessVisibilityUpdate@1@@Z @ 0x14011C710
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkSetProcessStatus @ 0x14011C7A0 (GreDxgkSetProcessStatus.c)
 */

unsigned __int64 __fastcall tagPROCESSINFO::UpdateProcessVisibility(__int64 a1, int a2)
{
  bool v3; // si
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r8

  v3 = a2 == 0;
  result = (*(_DWORD *)(a1 + 808) >> 14) & 1;
  v5 = a2 == 0;
  if ( result != v5 )
  {
    PsUpdateComponentPower(*(_QWORD *)a1, 5LL);
    LOBYTE(v6) = v3;
    GreDxgkSetProcessStatus(a1, 2LL, v6);
    result = (v5 << 14) | *(_QWORD *)(a1 + 808) & 0xFFFFFFFFFFFFBFFFuLL;
    *(_QWORD *)(a1 + 808) = result;
  }
  return result;
}

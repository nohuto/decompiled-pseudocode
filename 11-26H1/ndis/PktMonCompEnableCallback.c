/*
 * XREFs of PktMonCompEnableCallback @ 0x1400685A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PktMonCompEnableCallback(__int64 a1))(_QWORD)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( (_QWORD)xmmword_14011F760 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = *(unsigned __int8 *)(a1 + 16) ^ (*(_DWORD *)(v1 + 56) ^ *(unsigned __int8 *)(a1 + 16)) & 0xFFFFFFFE;
    *(_DWORD *)(v1 + 56) = v2;
    *(_DWORD *)(v1 + 56) = (2 * *(unsigned __int8 *)(a1 + 17)) ^ ((2 * *(unsigned __int8 *)(a1 + 17)) ^ v2) & 0xFFFFFFFD;
    result = qword_14011F758;
    if ( qword_14011F758 )
      return (__int64 (__fastcall *)(_QWORD))qword_14011F758(v1);
  }
  return result;
}

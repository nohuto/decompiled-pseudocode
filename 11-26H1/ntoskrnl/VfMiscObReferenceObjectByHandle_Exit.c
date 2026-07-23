/*
 * XREFs of VfMiscObReferenceObjectByHandle_Exit @ 0x140C434C0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfMiscObReferenceObjectByHandle_Exit(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  ULONG_PTR v3; // r8
  __int64 v4; // rdx

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result == -1073741816 || (_DWORD)result == -1073741788 )
  {
    v2 = *(char *)(a1 + 24);
    if ( !(_BYTE)v2 || (result = (__int64)KeGetCurrentThread(), (*(_DWORD *)(result + 116) & 0x400) != 0) )
    {
      v3 = *(_QWORD *)(a1 + 48);
      if ( v3 )
      {
        if ( (_BYTE)v2 && (v3 & 0xFFFFFFFF80000000uLL) != 0 && v3 <= 0xFFFFFFFFFFFFFFFDuLL )
          return CarReportRuleViolationFromNt(196, 247LL, v3, *(_QWORD *)(a1 + 32), v2, 0xBu, *(_QWORD *)a1);
        v4 = 60LL;
      }
      else
      {
        v4 = 245LL;
      }
      return CarReportRuleViolationFromNt(196, v4, v3, *(_QWORD *)(a1 + 32), 0LL, 0xBu, *(_QWORD *)a1);
    }
  }
  return result;
}

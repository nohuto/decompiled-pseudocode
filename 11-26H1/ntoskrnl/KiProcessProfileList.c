/*
 * XREFs of KiProcessProfileList @ 0x1404B146C
 * Callers:
 *     KeProfileInterruptWithSource @ 0x1404B1420 (KeProfileInterruptWithSource.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall KiProcessProfileList(__int64 a1, int a2, unsigned __int16 *a3)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int16 *i; // rbx
  unsigned __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  for ( i = *(unsigned __int16 **)a3; i != a3; i = *(unsigned __int16 **)i )
  {
    result = (unsigned int)(__int16)i[300];
    if ( (_DWORD)result == a2 )
    {
      if ( *(i - 4) == 17 )
      {
        result = guard_dispatch_icall_no_overrides(a1, *((_QWORD *)i + 4));
      }
      else
      {
        result = KeCheckProcessorAffinityEx(i + 32, CurrentPrcb->Number);
        if ( (_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 360);
          v9 = *((_QWORD *)i + 3);
          if ( result >= v9 && result < *((_QWORD *)i + 4) )
          {
            result = *((_QWORD *)i + 6) + (((result - v9) >> *((_DWORD *)i + 10)) & 0xFFFFFFFC);
            _InterlockedIncrement((volatile signed __int32 *)result);
          }
        }
      }
    }
  }
  return result;
}

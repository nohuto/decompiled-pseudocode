/*
 * XREFs of sub_140553AA0 @ 0x140553AA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall sub_140553AA0(__int64 a1)
{
  unsigned int *v2; // rdi
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  KeExitRetpoline();
  KxAcquireSpinLock(&KiHardwareTriggerLock);
  KxReleaseSpinLock(&KiHardwareTriggerLock);
  v2 = *(unsigned int **)(a1 + 32);
  result = *v2;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *v2 = result;
    if ( !(_DWORD)result )
    {
      memset_0(v2 + 2, 0, 0x40uLL);
      v4 = (_QWORD *)*((_QWORD *)v2 + 9);
      guard_check_icall_no_overrides(v4[3]);
      result = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD))v4[3])(v4, v4[4], v4[5], v4[6]);
    }
  }
  v5 = *((_QWORD *)v2 + 4);
  if ( v5 )
  {
    guard_check_icall_no_overrides(v5);
    return (*((__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))v2 + 4))(
             v2 + 2,
             *((_QWORD *)v2 + 5),
             *((_QWORD *)v2 + 6),
             *((_QWORD *)v2 + 7));
  }
  return result;
}

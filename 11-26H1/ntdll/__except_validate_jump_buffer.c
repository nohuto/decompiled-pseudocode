/*
 * XREFs of __except_validate_jump_buffer @ 0x18012E4B8
 * Callers:
 *     longjmp @ 0x18012AEC0 (longjmp.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall _except_validate_jump_buffer(_QWORD *a1)
{
  struct _TEB *result; // rax
  void *v2; // r8

  result = (struct _TEB *)_guard_check_icall_fptr;
  if ( (char *)_guard_check_icall_fptr != (char *)RtlEndStrongEnumerationHashTable )
  {
    result = NtCurrentTeb();
    v2 = (void *)a1[2];
    if ( v2 < result->NtTib.StackLimit || v2 > result->NtTib.StackBase )
      __fastfail(0xDu);
    if ( !*a1 )
      __fastfail(0xDu);
  }
  return result;
}

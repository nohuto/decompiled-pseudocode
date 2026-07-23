/*
 * XREFs of KiFlushCurrentTbOnly @ 0x140469CC0
 * Callers:
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *result; // rax
  unsigned __int64 v5; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v7; // rax

  if ( KiKvaShadow )
  {
    if ( a1 != 3 && !a1 )
      goto LABEL_8;
    if ( !KiFlushPcid )
      goto LABEL_4;
    v5 = __readcr3();
    __writecr3(v5);
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( !Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, a2, a3);
  }
  else
  {
    if ( a1 == 1 )
      goto LABEL_8;
    if ( !KiFlushPcid )
    {
LABEL_4:
      v3 = __readcr4();
      if ( (v3 & 0x20080) != 0 )
      {
        result = (struct _KTHREAD *)(v3 ^ 0x80);
        __writecr4(v3 ^ 0x80);
        __writecr4(v3);
        return result;
      }
LABEL_8:
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
      return result;
    }
    v7 = __readcr3();
    __writecr3(v7);
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( !Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, a2, a3);
  }
  return result;
}

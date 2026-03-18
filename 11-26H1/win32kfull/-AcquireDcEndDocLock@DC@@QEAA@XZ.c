/*
 * XREFs of ?AcquireDcEndDocLock@DC@@QEAA@XZ @ 0x140310668
 * Callers:
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 *     GreCancelDC @ 0x140326374 (GreCancelDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::AcquireDcEndDocLock(DC *this, __int64 a2)
{
  __int64 result; // rax

  GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)this + 2096));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}

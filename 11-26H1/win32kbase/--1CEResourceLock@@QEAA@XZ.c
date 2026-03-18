/*
 * XREFs of ??1CEResourceLock@@QEAA@XZ @ 0x1401BB8FC
 * Callers:
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1401BB8A0 (--1CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CEResourceLock::~CEResourceLock(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}

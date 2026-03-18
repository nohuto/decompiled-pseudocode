/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14001C9D0
 * Callers:
 *     GreMarkDCUnreadable @ 0x140157AF4 (GreMarkDCUnreadable.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v1; // rcx
  HDC v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *(HDC *)v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    GrepDeleteDC(v2);
}

/*
 * XREFs of sub_1400581FC @ 0x1400581FC
 * Callers:
 *     pfnti @ 0x140055E20 (pfnti.c)
 *     sub_140055E30 @ 0x140055E30 (sub_140055E30.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400583C0 @ 0x1400583C0 (sub_1400583C0.c)
 */

void __fastcall sub_1400581FC(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rbx
  int Ptr; // eax
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( LODWORD(a1->Ptr) )
  {
    v2 = a1 + 1;
    AcquireSRWLockExclusive(a1 + 1);
    Ptr = (int)a1->Ptr;
    v4 = v2;
    if ( Ptr )
    {
      sub_1400583C0(a1);
      LOBYTE(a1[3].Ptr) = 0;
    }
    sub_14003A998(&v4);
  }
}

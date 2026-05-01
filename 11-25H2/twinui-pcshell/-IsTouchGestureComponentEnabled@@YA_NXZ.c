/*
 * XREFs of ?IsTouchGestureComponentEnabled@@YA_NXZ @ 0x1802D1A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char IsTouchGestureComponentEnabled(void)
{
  char v0; // cl
  void (__fastcall *v1)(void *, char *); // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 1;
  v3 = 1;
  if ( *(_QWORD *)shellComponentFilter )
  {
    v1 = (void (__fastcall *)(void *, char *))*((_QWORD *)shellComponentFilter + 1);
    if ( v1 )
    {
      v1(&unk_180779AE0, &v3);
      return v3;
    }
  }
  return v0;
}

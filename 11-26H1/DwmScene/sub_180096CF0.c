/*
 * XREFs of sub_180096CF0 @ 0x180096CF0
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_180042B54 @ 0x180042B54 (sub_180042B54.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180096CF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  _DWORD *v4; // rcx
  unsigned int *v5; // rdx
  char result; // al

  v3 = a2;
  v4 = (_DWORD *)(a1 + 8);
  v5 = (unsigned int *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 56) || (result = sub_180042B54(v4, v5)) == 0 )
  {
    *(_OWORD *)v5 = *(_OWORD *)v4;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v3 + 192LL))(
               v3,
               *v5,
               *(unsigned int *)(a1 + 28),
               *(unsigned int *)(a1 + 32),
               *(_DWORD *)(a1 + 36));
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}

/*
 * XREFs of PopDispatchQuerySetIrp @ 0x140486ECC
 * Callers:
 *     PoHandleIrp @ 0x140486AFC (PoHandleIrp.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 */

LONG __fastcall PopDispatchQuerySetIrp(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rdx

  v2 = a1[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  ObfReferenceObjectWithTag(*(PVOID *)(v2 + 40), 0x72496F50u);
  v3 = a1 + 21;
  if ( a1 == (_QWORD *)qword_140F0FB50 )
  {
    v5 = qword_140F0FB00;
    if ( *(__int64 **)(qword_140F0FB00 + 8) != &qword_140F0FB00 )
LABEL_3:
      __fastfail(3u);
    *v3 = qword_140F0FB00;
    a1[22] = &qword_140F0FB00;
    *(_QWORD *)(v5 + 8) = v3;
    qword_140F0FB00 = (__int64)(a1 + 21);
  }
  else
  {
    v4 = (_QWORD *)qword_140F0FB08;
    if ( *(__int64 **)qword_140F0FB08 != &qword_140F0FB00 )
      goto LABEL_3;
    *v3 = &qword_140F0FB00;
    a1[22] = v4;
    *v4 = v3;
    qword_140F0FB08 = (__int64)(a1 + 21);
  }
  return KeReleaseSemaphore(&byte_140F0FB20, 0, 1, 0);
}

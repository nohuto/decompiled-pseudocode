/*
 * XREFs of RtlIsValidIndexHandle @ 0x1800D9F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsValidIndexHandle(__int64 a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  _BYTE *v4; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = (_BYTE *)(v3 + (unsigned int)(a2 * *(_DWORD *)(a1 + 4)));
  if ( !v4
    || (unsigned __int64)v4 < v3
    || (unsigned __int64)v4 >= *(_QWORD *)(a1 + 32)
    || ((*(_DWORD *)(a1 + 4) - 1) & (unsigned int)v4) != 0
    || (*v4 & 1) == 0 )
  {
    return 0;
  }
  *a3 = v4;
  return 1;
}

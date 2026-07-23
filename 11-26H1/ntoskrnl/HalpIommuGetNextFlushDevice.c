/*
 * XREFs of HalpIommuGetNextFlushDevice @ 0x14053165C
 * Callers:
 *     HsaFlushTbInternal @ 0x140477D50 (HsaFlushTbInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIommuGetNextFlushDevice(
        _QWORD *a1,
        _QWORD **a2,
        _QWORD *a3,
        _DWORD *a4,
        bool *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  _QWORD *i; // r10
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  char result; // al

  for ( i = (_QWORD *)**a2; i != a1; i = (_QWORD *)*i )
  {
    v10 = i[5];
    v11 = *(_DWORD *)(v10 + 48);
    if ( (v11 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 40);
      v13 = *(_QWORD *)(v10 + 72);
      *a3 = v12;
      *a2 = i;
      result = 1;
      *a4 = *(_DWORD *)(v13 + 60);
      *a5 = (v11 & 0x800) != 0;
      *a6 = v13 + 64;
      *a7 = i + 4;
      return result;
    }
  }
  *a3 = 0LL;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0LL;
  *a7 = 0LL;
  return 0;
}

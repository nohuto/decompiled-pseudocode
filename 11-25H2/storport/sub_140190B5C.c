/*
 * XREFs of sub_140190B5C @ 0x140190B5C
 * Callers:
 *     sub_140193A88 @ 0x140193A88 (sub_140193A88.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140190B5C(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *a3;
  if ( *a3 >= 8 )
  {
    *a2 = 12;
    a2[1] = 12;
    if ( v3 < 0xC )
    {
      *a3 = 8;
      return 0LL;
    }
    a2[2] = ((*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0) + 1;
    result = 0LL;
  }
  else
  {
    result = 3221225507LL;
  }
  *a3 = 12;
  return result;
}

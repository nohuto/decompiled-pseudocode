/*
 * XREFs of sub_140063C34 @ 0x140063C34
 * Callers:
 *     sub_14006315C @ 0x14006315C (sub_14006315C.c)
 *     sub_140063E30 @ 0x140063E30 (sub_140063E30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140063C34(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax

  HIDWORD(v6) = 0;
  *a4 = a2;
  LODWORD(v6) = (unsigned int)a2 % *((_DWORD *)a1 + 4);
  v7 = *a1;
  *a3 = v6;
  if ( v7 )
  {
    v8 = 0LL;
    result = *(_QWORD *)(v7 + 8 * v6);
    *a5 = 0LL;
    while ( result )
    {
      if ( *(_DWORD *)(result + 64) == (_DWORD)a2 && *(_QWORD *)result == a2 )
      {
        *a5 = v8;
        return result;
      }
      v8 = result;
      result = *(_QWORD *)(result + 56);
    }
  }
  return 0LL;
}

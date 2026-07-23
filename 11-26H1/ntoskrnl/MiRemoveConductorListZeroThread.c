/*
 * XREFs of MiRemoveConductorListZeroThread @ 0x14077F388
 * Callers:
 *     MiDeleteThreadContext @ 0x1404F1A20 (MiDeleteThreadContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRemoveConductorListZeroThread(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  _QWORD *v3; // r8
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 60);
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
  while ( v2 )
  {
    if ( *v3 == a2 )
    {
      if ( v2 != 1 )
      {
        result = v2 - 1;
        *v3 = v3[v2 - 1];
        v3 += result;
      }
      *v3 = 0LL;
      break;
    }
    ++v3;
    --v2;
  }
  --*(_DWORD *)(a1 + 60);
  return result;
}

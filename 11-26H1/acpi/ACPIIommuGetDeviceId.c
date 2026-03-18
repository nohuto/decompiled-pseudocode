/*
 * XREFs of ACPIIommuGetDeviceId @ 0x1400CD510
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIIommuGetDeviceId(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  _BYTE *v6; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = *(_BYTE **)(a1 + 96);
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( v6[v9] );
  v10 = v9 + 25;
  if ( a2 >= v9 + 25 )
  {
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a3 + 8) = a3 + 24;
    do
      ++v8;
    while ( v6[v8] );
    memmove((void *)(a3 + 24), v6, v8 + 1);
    result = 0LL;
  }
  else
  {
    result = 3221225507LL;
  }
  if ( a4 )
    *a4 = v10;
  return result;
}

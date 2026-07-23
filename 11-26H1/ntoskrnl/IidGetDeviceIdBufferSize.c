/*
 * XREFs of IidGetDeviceIdBufferSize @ 0x140B5F7DC
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x140513FB8 (HalpIommuCloneDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IidGetDeviceIdBufferSize(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = 0LL;
  *a2 = 0LL;
  if ( !a1 || (unsigned int)(*(_DWORD *)a1 - 1) > 4 )
    return 3221225485LL;
  *a2 = 24LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
      *a2 = 2LL * *(unsigned __int16 *)(a1 + 14) + 24;
    return 0LL;
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    if ( (unsigned int)(*(_DWORD *)a1 - 4) >= 2 )
    {
      *a2 = 0LL;
      return 3221225659LL;
    }
    return 0LL;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(v4 + v5) );
    result = 0LL;
    v2 = v5 + 25;
  }
  else
  {
    result = 3221225485LL;
  }
  *a2 = v2;
  return result;
}

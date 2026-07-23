/*
 * XREFs of SshpSessionManagerNormalizeLogHeader @ 0x140B3D710
 * Callers:
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SshpSessionManagerNormalizeLogHeader(_DWORD *a1)
{
  int v1; // r9d
  int *v2; // r8
  unsigned int v3; // edx
  __int64 result; // rax
  int v5; // eax

  v1 = a1[5];
  v2 = a1 + 3;
  v3 = a1[4];
  if ( v3 >= 2 * v1 )
  {
    v5 = *v2;
    do
    {
      v3 -= v1;
      v5 -= v1;
    }
    while ( v3 >= 2 * v1 );
    a1[4] = v3;
    *v2 = v5;
  }
  result = ~(v3 + *a1 + v1 + *v2 + a1[1]);
  a1[2] = result;
  return result;
}

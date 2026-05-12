/*
 * XREFs of NvmeAdapterCacheOperationalPowerRange @ 0x1400E4EF0
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeAdapterCacheOperationalPowerRange(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 i; // r9
  _DWORD *v8; // r8
  unsigned int v9; // r10d
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char result; // al

  v3 = 0LL;
  v4 = -1LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a2 )
      return 0;
    v8 = (_DWORD *)(a3 + 40 * i);
    if ( !v8[5] )
    {
      v9 = v8[6];
      if ( v9 )
      {
        if ( v8[4] == 3 )
          break;
      }
    }
  }
  v10 = 0;
  do
  {
    if ( v9 < v10 + 1 || (v11 = (unsigned int)v8[7], (unsigned int)v11 < 0x28) )
    {
      v12 = 0LL;
      ++v10;
    }
    else
    {
      v12 = (__int64)&v8[6 * v10++] + v11;
    }
    v13 = *(_QWORD *)(v12 + 8);
    v14 = v13;
    if ( v13 <= v3 )
      v14 = v3;
    v3 = v14;
    if ( v13 >= v4 )
      v13 = v4;
    v4 = v13;
  }
  while ( v10 < v9 );
  *(_QWORD *)(a1 + 24) = v14;
  result = 1;
  *(_QWORD *)(a1 + 32) = v13;
  return result;
}

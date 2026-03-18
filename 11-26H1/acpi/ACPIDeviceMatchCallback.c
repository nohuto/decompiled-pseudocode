/*
 * XREFs of ACPIDeviceMatchCallback @ 0x14003D210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDeviceMatchCallback(__int64 **a1, int a2, _QWORD *a3, int a4)
{
  unsigned int v4; // r10d
  __int64 *v5; // rcx
  __int64 v6; // rcx
  unsigned __int8 *v8; // rax
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx

  v4 = 0;
  if ( a2 == 1 && a4 == 1 && (v5 = *a1, *((_DWORD *)v5 + 2) == 8) && (v6 = *v5) != 0 )
  {
    if ( _bittest64((const signed __int64 *)(v6 + 8), 0x2Du) )
    {
      v8 = *(unsigned __int8 **)(v6 + 608);
      v9 = *a3 - (_QWORD)v8;
      do
      {
        v10 = v8[v9];
        v11 = *v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      if ( !v11 )
        return 2;
    }
  }
  else
  {
    return 1;
  }
  return v4;
}

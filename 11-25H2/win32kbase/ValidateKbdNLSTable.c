/*
 * XREFs of ValidateKbdNLSTable @ 0x14015EBF8
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14010D514 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ValidateKbdNLSTable(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r10d
  unsigned int i; // edx
  __int64 v4; // rcx
  __int64 j; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    for ( i = 0; i < v2; ++i )
    {
      v4 = v1 + 132LL * i;
      if ( *(_BYTE *)(v4 + 1) >= 3u )
        return 0;
      for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
      {
        if ( *(_BYTE *)(v4 + 8 * j + 4) >= 0x10u || *(_BYTE *)(v4 + 8 * j + 68) >= 0x10u )
          return 0;
      }
    }
  }
  return 1;
}

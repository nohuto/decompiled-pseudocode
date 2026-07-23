/*
 * XREFs of EtwpCovSampStackHashLookup @ 0x14077E720
 * Callers:
 *     EtwpCovSampStackHashCheck @ 0x140A31DB8 (EtwpCovSampStackHashCheck.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A36480 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampStackHashLookup(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r10d
  unsigned int i; // r9d
  _DWORD *v6; // rcx
  __int64 result; // rax

  v3 = 0;
  for ( i = a2 & (*(_DWORD *)(a1 + 20) - 1); ; i = (*(_DWORD *)(a1 + 20) - 1) & (v3 + i) )
  {
    v6 = (_DWORD *)(a1 + 4 * (i + 6LL));
    if ( *v6 == a2 )
      break;
    if ( !*v6 )
    {
      result = 0LL;
      goto LABEL_10;
    }
    if ( !v3 )
    {
      v3 = -1640531535 * a2 + 1;
      if ( ((-79 * (_BYTE)a2) & 1) != 0 )
        v3 = -1640531535 * a2;
    }
  }
  result = 1LL;
LABEL_10:
  *a3 = v6;
  return result;
}

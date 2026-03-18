/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x140008C00
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x140008B50 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(_OWORD *a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  __int64 v4; // rax

  v2 = a2;
  ProbeForRead(a2, 0x100uLL, 1u);
  v4 = 2LL;
  do
  {
    *a1 = *v2;
    a1[1] = v2[1];
    a1[2] = v2[2];
    a1[3] = v2[3];
    a1[4] = v2[4];
    a1[5] = v2[5];
    a1[6] = v2[6];
    a1 += 8;
    *(a1 - 1) = v2[7];
    v2 += 8;
    --v4;
  }
  while ( v4 );
  return 0LL;
}

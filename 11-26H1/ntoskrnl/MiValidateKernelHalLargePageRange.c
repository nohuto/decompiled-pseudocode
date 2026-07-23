/*
 * XREFs of MiValidateKernelHalLargePageRange @ 0x140D07550
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiValidateKernelHalLargePageRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp

  if ( (a3 & 0x20000000) != 0 )
  {
    v3 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    while ( (unsigned __int64)v3 < v4 )
    {
      v5 = 48 * ((*v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v6 = v5 + 24576;
      while ( v5 < v6 )
      {
        *(_QWORD *)(v5 + 16) = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x60;
        MiMarkPfnVerified(v5, 0);
        v5 += 48LL;
      }
      ++v3;
    }
  }
  return 0LL;
}

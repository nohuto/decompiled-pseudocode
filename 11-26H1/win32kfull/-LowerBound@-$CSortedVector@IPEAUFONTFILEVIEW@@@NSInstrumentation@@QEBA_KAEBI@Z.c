/*
 * XREFs of ?LowerBound@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1400D28AC
 * Callers:
 *     ?Insert@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z @ 0x1400D1570 (-Insert@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1400D2C78 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LowerBound(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v3 = *a2;
  v4 = 0LL;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * ((v2 >> 1) + v4)) < v3 )
    {
      v4 += (v2 >> 1) + 1;
      v2 += -1LL - (v2 >> 1);
    }
    else
    {
      v2 >>= 1;
    }
  }
  while ( v2 );
  return v4;
}

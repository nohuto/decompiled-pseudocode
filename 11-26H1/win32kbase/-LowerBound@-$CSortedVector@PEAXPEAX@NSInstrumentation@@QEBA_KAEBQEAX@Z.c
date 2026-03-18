/*
 * XREFs of ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1401FCE20
 * Callers:
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1401FCCC4 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<void *,void *>::LowerBound(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // r10
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v4 = *a2;
  v5 = 0LL;
  do
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * ((v2 >> 1) + v5)) >= v4 )
    {
      v2 >>= 1;
    }
    else
    {
      v5 += (v2 >> 1) + 1;
      v2 += -1LL - (v2 >> 1);
    }
  }
  while ( v2 );
  return v5;
}

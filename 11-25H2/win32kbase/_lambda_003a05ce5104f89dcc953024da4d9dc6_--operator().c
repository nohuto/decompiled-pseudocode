/*
 * XREFs of _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C
 * Callers:
 *     CleanupKeyboardLayouts @ 0x1402130B4 (CleanupKeyboardLayouts.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     DestroyKL @ 0x1400F6658 (DestroyKL.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 */

int *__fastcall lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int *result; // rax
  __int64 v8; // rdx

  v2 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v2[2] != v2 )
  {
    do
    {
      v4 = (_QWORD *)v2[2];
      DestroyKL(v2, a2);
      v2 = v4;
    }
    while ( (_QWORD *)v4[2] != v4 );
  }
  if ( (*(_BYTE *)(HMPheFromObject((int *)a2, a2) + 25) & 1) == 0 )
    HMMarkObjectDestroy((struct _HEAD *)a2, v5);
  HYDRA_HINT(0x8000LL);
  result = HMUnlockObject((int *)a2, v6);
  if ( result )
    return (int *)DestroyKL(v2, v8);
  return result;
}

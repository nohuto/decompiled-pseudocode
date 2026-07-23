/*
 * XREFs of PsTlsGetValue @ 0x140A4DC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsTlsGetValue(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)&CurrentThread[1].UserAffinityPrimaryGroup & 3) != 0 )
    return 3221225547LL;
  v3 = *(_QWORD *)&CurrentThread[1].UserAffinityPrimaryGroup;
  if ( (unsigned int)(a1 - 1) > 0xEE )
    return 3221225485LL;
  if ( v3 )
  {
    v4 = a1 + 16;
    _BitScanReverse((unsigned int *)&a1, a1 + 16);
    v5 = *(_QWORD *)(v3 + 8LL * (unsigned int)(a1 - 4));
    if ( v5
      && (v6 = (__int64 *)(v5 + 8 * ((v4 ^ (unsigned int)(1 << a1)) + 2LL * (v4 ^ (unsigned int)(1 << a1)) + 1))) != 0LL )
    {
      v7 = *v6;
    }
    else
    {
      v7 = 0LL;
    }
    *a2 = v7;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}

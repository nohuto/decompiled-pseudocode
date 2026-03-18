/*
 * XREFs of VidSchiUpdateNodeRunningTimeAtISR @ 0x14002B310
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x14002B390 (VidSchiUpdateContextRunningTimeAtISR.c)
 */

__int64 __fastcall VidSchiUpdateNodeRunningTimeAtISR(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = *a1;
  v3 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1572) + 1584);
  result = 0LL;
  if ( v3 )
  {
    v6[0] = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v6[1] = v3;
    result = VidSchiUpdateContextRunningTimeAtISR(v6);
    a1[3] = v8;
    v5 = v7;
    a1[1] = v3;
  }
  else
  {
    a1[1] = 0LL;
    a1[3] = 0LL;
    v5 = *(_QWORD *)(v2 + 2776);
  }
  a1[2] = v5;
  return result;
}

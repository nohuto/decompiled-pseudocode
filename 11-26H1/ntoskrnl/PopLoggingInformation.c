/*
 * XREFs of PopLoggingInformation @ 0x140AC32FC
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLoggingInformation(unsigned int **a1, unsigned int *a2)
{
  unsigned int *v2; // r9
  unsigned int v3; // edi
  int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned int v10; // ebx
  unsigned int *Pool2; // rax
  _OWORD *v12; // rbp
  unsigned int *v13; // r14
  size_t v14; // rbx

  v2 = *(unsigned int **)&PpmIdlePolicyLock.SystemCallNumber;
  v3 = 0;
  v6 = 0;
  v7 = 4;
  while ( 1 )
  {
    v8 = v7 + 16;
    if ( v2 == &PpmIdlePolicyLock.SystemCallNumber )
      break;
    ++v6;
    if ( v8 < v7 )
      return (unsigned int)-1073741675;
    v7 = v8 + v2[7];
    if ( v7 < v8 )
      return (unsigned int)-1073741675;
    v2 = *(unsigned int **)v2;
  }
  if ( v6 )
    v8 = v7;
  v10 = v8;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *a2 = v10;
    v12 = Pool2 + 1;
    *a1 = Pool2;
    *Pool2 = v10;
    if ( v6 )
    {
      v13 = *(unsigned int **)&PpmIdlePolicyLock.SystemCallNumber;
      while ( v13 != &PpmIdlePolicyLock.SystemCallNumber && v6 )
      {
        v14 = v13[7] + 16;
        memmove(v12, v13 + 4, v14);
        v13 = *(unsigned int **)v13;
        v12 = (_OWORD *)((char *)v12 + v14);
        --v6;
      }
    }
    else
    {
      *v12 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}

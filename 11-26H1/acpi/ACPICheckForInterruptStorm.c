/*
 * XREFs of ACPICheckForInterruptStorm @ 0x14002124C
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICheckForInterruptStorm(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  char *v3; // rax
  int v4; // r8d
  __int16 v5; // cx
  __int64 result; // rax
  __int64 v7; // r8
  char *v8; // rcx
  char v9; // dl

  v1 = 3LL * a1;
  v2 = MEMORY[0xFFFFF78000000008];
  v3 = (char *)&GpePinCount + 12 * a1;
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == -1 )
    v3[8] |= 8u;
  v5 = *((_WORD *)&GpePinCount + 6 * a1 + 2);
  if ( v5 == -1 )
    v3[8] |= 4u;
  result = (unsigned int)(v4 + 1);
  *((_DWORD *)&GpePinCount + v1) = result;
  *((_WORD *)&GpePinCount + 2 * v1 + 2) = v5 + 1;
  if ( InterruptCaptureEpoch )
  {
    result = v2 - InterruptCaptureEpoch;
    if ( (unsigned __int64)(v2 - InterruptCaptureEpoch) < 0x989680 )
      return result;
    result = (__int64)&unk_14008FE86;
    v7 = 256LL;
    do
    {
      v8 = (char *)(result + 2);
      if ( *(_WORD *)(result - 2) > 0x3E8u || (v9 = *v8, (*v8 & 4) != 0) )
      {
        ++*(_WORD *)result;
        v9 = *v8 | 1;
      }
      else
      {
        *(_WORD *)result = 0;
      }
      *(_WORD *)(result - 2) = 0;
      result += 12LL;
      *v8 = v9 & 0xFB;
      --v7;
    }
    while ( v7 );
  }
  InterruptCaptureEpoch = v2;
  return result;
}

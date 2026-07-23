/*
 * XREFs of PpmHeteroHgsRegisterContainmentGroups @ 0x14060E258
 * Callers:
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x14060E08C (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1406110DC (PpmEventHgsContainmentGroupInfo.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmHeteroHgsRegisterContainmentGroups(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  int v6; // esi
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned int v10; // r15d
  __int64 Prcb; // rax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int16 *v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+32h] [rbp-46h]
  __int16 v17; // [rsp+36h] [rbp-42h]
  unsigned int v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h]

  v16 = 0;
  v17 = 0;
  v19 = 0;
  result = ExAllocatePool2(0x40uLL);
  v4 = result;
  if ( result )
  {
    v5 = a1 + 16;
    v6 = 0;
    v20 = 0LL;
    v7 = 0LL;
    v8 = 8LL;
    do
    {
      v9 = 264LL * (unsigned int)v6;
      *(_QWORD *)(v7 + v4 + 16) = 2097153LL;
      memset_0((void *)(v9 + v4 + 24), 0, 0x100uLL);
      v14[1] = *(unsigned __int16 **)(v5 + 8);
      v15 = 0;
      v14[0] = (unsigned __int16 *)v5;
      if ( !(unsigned int)KeEnumerateNextProcessor(&v19, v14) )
      {
        do
        {
          v10 = v19;
          Prcb = KeGetPrcb(v19);
          if ( v6 )
          {
            if ( v6 == 1 )
              v12 = *(_BYTE *)(Prcb + 35448) == 1;
            else
              v12 = v6 == 2;
          }
          else
          {
            v12 = *(_BYTE *)(Prcb + 35448) == 0;
          }
          if ( v12 )
          {
            ++*(_WORD *)(v8 + v4);
            KeAddProcessorAffinityEx((unsigned __int16 *)(v9 + v4 + 16), v10);
          }
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&v19, v14) );
        v7 = v20;
        v5 = a1 + 16;
      }
      if ( *(_WORD *)(v8 + v4) )
        ++*(_DWORD *)v4;
      v7 += 264LL;
      ++v6;
      v8 += 2LL;
      v20 = v7;
    }
    while ( v6 < 3 );
    *(_DWORD *)(v4 + 4) = 2;
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 1240);
      if ( v13 )
      {
        *(_DWORD *)(v4 + 812) = *(_DWORD *)(v13 + 812);
        *(_BYTE *)(v4 + 808) = *(_BYTE *)(*(_QWORD *)(a2 + 1240) + 808LL);
        *(_BYTE *)(v4 + 827) = *(_BYTE *)(*(_QWORD *)(a2 + 1240) + 827LL);
      }
    }
    PpmHeteroHgsContainmentState |= 4u;
    *(_QWORD *)(a1 + 1240) = v4;
    return PpmEventHgsContainmentGroupInfo(a1, 0LL);
  }
  return result;
}

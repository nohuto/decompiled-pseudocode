/*
 * XREFs of RtlpWnfMarkFailure @ 0x18011E480
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWnfMarkFailure(__int64 a1, int a2, unsigned int a3)
{
  int v4; // eax
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 132) >= a3 )
  {
    v4 = *(_DWORD *)(a1 + 124);
  }
  else
  {
    *(_DWORD *)(a1 + 124) = 0;
    v4 = 0;
    *(_DWORD *)(a1 + 132) = a3;
  }
  if ( a2 == -1073741801 )
  {
    v6 = v4 == 0;
    v7 = qword_1801C6200;
    if ( v6 )
    {
      v5 = *(_DWORD *)(qword_1801C6200 + 56);
      goto LABEL_9;
    }
    v8 = 2 * *(_DWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 128) = v8;
    v9 = *(_DWORD *)(v7 + 64);
    if ( v8 > v9 )
      *(_DWORD *)(a1 + 128) = v9;
  }
  else if ( a2 == -1073741267 )
  {
    v5 = *(_DWORD *)(qword_1801C6200 + 60);
LABEL_9:
    *(_DWORD *)(a1 + 128) = v5;
  }
  v10 = RtlpFreezeTimeBias;
  v11 = MEMORY[0x7FFE0008];
  v12 = MEMORY[0x7FFE03B0];
  result = *(unsigned int *)(a1 + 128);
  ++*(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 120) = 1;
  *(_QWORD *)(a1 + 112) = v11 + 10000 * result - v10 - v12;
  return result;
}

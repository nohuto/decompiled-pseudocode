/*
 * XREFs of EtwpUpdatePmcCounters @ 0x14082D614
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpAllocatePmcData @ 0x14082B3A8 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcCounters(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v9; // r14
  __int64 i; // rbx
  unsigned int *v11; // rcx
  unsigned int ULongFromUser; // ecx
  unsigned int v13; // esi
  __int64 j; // rbx
  __int64 *v15; // rdi
  signed __int32 v16[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-38h]
  __int64 v20; // [rsp+88h] [rbp+10h]

  v20 = a2;
  v7 = KeNumberProcessors_0;
  if ( !a3 || a3 > EtwpMaxPmcCounter || *(_DWORD *)(a1 + 300) == 1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 1064) )
  {
    result = EtwpAllocatePmcData(a1);
    if ( (_DWORD)result )
      return result;
    a2 = v20;
  }
  v9 = *(_QWORD *)(a1 + 1064);
  if ( *(_DWORD *)(v9 + 20) )
    return 3221226243LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v19 = i;
    if ( (unsigned int)i >= a3 )
      break;
    v11 = (unsigned int *)(a2 + 4 * i);
    if ( a4 )
    {
      ULongFromUser = RtlReadULongFromUser(v11);
      a2 = v20;
    }
    else
    {
      ULongFromUser = *v11;
    }
    *(_DWORD *)(*(_QWORD *)v9 + 4 * i) = ULongFromUser;
  }
  v13 = 0;
  for ( j = 0LL; (unsigned int)j < v7; j = (unsigned int)(j + 1) )
  {
    v18 = 0LL;
    v17 = v9 + 8 * ((unsigned int)j + 3LL);
    v13 = guard_dispatch_icall_no_overrides((unsigned int)j, *(_QWORD *)v9);
    if ( v13 )
      break;
  }
  if ( v13 )
  {
    if ( (_DWORD)j )
    {
      v15 = (__int64 *)(v9 + 24);
      do
      {
        guard_dispatch_icall_no_overrides(*v15, a2);
        *v15++ = 0LL;
        --j;
      }
      while ( j );
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = a3;
    _InterlockedOr(v16, 0);
    _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x800u);
  }
  return v13;
}

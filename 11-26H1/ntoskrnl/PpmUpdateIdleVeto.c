/*
 * XREFs of PpmUpdateIdleVeto @ 0x14042CE70
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x14042CC80 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140603860 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14042D038 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  void ***v9; // rsi
  void ***v10; // rdi
  __int64 Pool2; // rdi
  __int64 InterruptTimePrecise; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  void **v16; // rcx
  void **v17; // rax
  __int64 v18; // rcx
  void **v19; // rax
  int v21; // eax
  unsigned __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (void ***)(a3 + 8);
  v10 = *(void ****)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != v9 )
    {
      if ( *((_DWORD *)v10 + 4) == a2 )
      {
        v21 = *((_DWORD *)v10 + 5);
        if ( v21 == -1 )
          return (unsigned int)-1073741675;
        else
          *((_DWORD *)v10 + 5) = v21 + 1;
        return v4;
      }
      v10 = (void ***)*v10;
    }
    if ( !v8 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      goto LABEL_10;
    }
    if ( a2 <= *(_DWORD *)(a3 + 28) )
    {
      Pool2 = v8 + ((unsigned __int64)(a2 - 1) << 6);
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
      *(_QWORD *)(Pool2 + 32) = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        *(_QWORD *)(Pool2 + 48) = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
      {
        LOBYTE(v13) = 1;
        PopUpdateNonAttributedCpuTimeReference(v13);
      }
LABEL_10:
      *(_DWORD *)(Pool2 + 16) = a2;
      *(_DWORD *)(Pool2 + 20) = 1;
      if ( *v9 == (void **)v9 )
      {
        _InterlockedOr((volatile signed __int32 *)a3, 1u);
        *a4 = 1;
      }
      v14 = (__int64 *)v9[1];
      if ( (void ***)*v14 == v9 )
      {
        *(_QWORD *)Pool2 = v9;
        *(_QWORD *)(Pool2 + 8) = v14;
        *v14 = Pool2;
        v9[1] = (void **)Pool2;
        return v4;
      }
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    if ( v10 == v9 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)v10 + 4) == a2 )
      break;
    v10 = (void ***)*v10;
  }
  if ( (*((_DWORD *)v10 + 5))-- != 1 )
    return v4;
  v16 = *v10;
  if ( (*v10)[1] != v10 || (v17 = v10[1], *v17 != v10) )
LABEL_13:
    __fastfail(3u);
  *v17 = v16;
  v16[1] = v17;
  if ( v8 )
  {
    *(_OWORD *)v10 = 0LL;
    v18 = RtlGetInterruptTimePrecise(&v22);
    v10[5] = (void **)((char *)v10[5] + v18 - (_QWORD)v10[4]);
    v19 = v10[6];
    v10[4] = 0LL;
    if ( v19 )
    {
      v10[6] = 0LL;
      v10[7] = (void **)((char *)v10[7] + v18 - (_QWORD)v19);
    }
    if ( *(_BYTE *)(a3 + 25) )
      PopUpdateNonAttributedCpuTimeReference(0LL);
  }
  else
  {
    ExFreePoolWithTag(v10, 0x694D5050u);
  }
  if ( *v9 == (void **)v9 )
  {
    _InterlockedAnd((volatile signed __int32 *)a3, 0xFFFFFFFE);
    *a4 = 1;
  }
  return v4;
}

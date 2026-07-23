/*
 * XREFs of PpmUpdateIdleVeto @ 0x140421540
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140606310 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140421708 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, ULONG a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  LARGE_INTEGER *v9; // rsi
  void ***v10; // rdi
  LARGE_INTEGER *Pool2; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER **QuadPart; // rax
  void **v16; // rcx
  void **v17; // rax
  LARGE_INTEGER v18; // rcx
  void **v19; // rax
  int v21; // eax
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (LARGE_INTEGER *)(a3 + 8);
  v10 = *(void ****)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != (void ***)v9 )
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
      Pool2 = (LARGE_INTEGER *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      goto LABEL_10;
    }
    if ( a2 <= *(_DWORD *)(a3 + 28) )
    {
      Pool2 = (LARGE_INTEGER *)(v8 + ((unsigned __int64)(a2 - 1) << 6));
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      Pool2[4] = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        Pool2[6] = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
      {
        LOBYTE(v13.LowPart) = 1;
        ((void (__fastcall *)(_QWORD))PopUpdateNonAttributedCpuTimeReference)((LARGE_INTEGER)v13.QuadPart);
      }
LABEL_10:
      Pool2[2].LowPart = a2;
      Pool2[2].HighPart = 1;
      if ( (LARGE_INTEGER *)v9->QuadPart == v9 )
      {
        _InterlockedOr((volatile signed __int32 *)a3, 1u);
        *a4 = 1;
      }
      QuadPart = (LARGE_INTEGER **)v9[1].QuadPart;
      if ( *QuadPart == v9 )
      {
        Pool2->QuadPart = (LONGLONG)v9;
        Pool2[1].QuadPart = (LONGLONG)QuadPart;
        *QuadPart = Pool2;
        v9[1].QuadPart = (LONGLONG)Pool2;
        return v4;
      }
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    if ( v10 == (void ***)v9 )
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
    v18 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v10[5] = (void **)((char *)v10[5] + v18.QuadPart - (_QWORD)v10[4]);
    v19 = v10[6];
    v10[4] = 0LL;
    if ( v19 )
    {
      v10[6] = 0LL;
      v10[7] = (void **)((char *)v10[7] + v18.QuadPart - (_QWORD)v19);
    }
    if ( *(_BYTE *)(a3 + 25) )
      PopUpdateNonAttributedCpuTimeReference(0LL);
  }
  else
  {
    ExFreePoolWithTag(v10, 0x694D5050u);
  }
  if ( (LARGE_INTEGER *)v9->QuadPart == v9 )
  {
    _InterlockedAnd((volatile signed __int32 *)a3, 0xFFFFFFFE);
    *a4 = 1;
  }
  return v4;
}

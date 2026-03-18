/*
 * XREFs of RtlCreateUserStack @ 0x1409EA3A8
 * Callers:
 *     PspSetupUserStack @ 0x1409EA234 (PspSetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1407236F0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x140723770 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1407237B0 (ZwFreeVirtualMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 */

__int64 __fastcall RtlCreateUserStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        ULONG_PTR a5,
        PVOID *a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  ULONG_PTR Blink; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rbx
  void *v15; // rax
  __int64 result; // rax
  PVOID *v17; // r14
  char *v18; // rcx
  unsigned __int64 v19; // rbx
  NTSTATUS v20; // edi
  char *v21; // rax
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rsi
  volatile void *v24; // r15
  __int64 ULong64FromUser; // rsi
  __int64 ULongFromUser; // rax
  ULONG_PTR v27; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-80h] BYREF
  PVOID v29[2]; // [rsp+40h] [rbp-78h] BYREF
  int v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+54h] [rbp-64h]
  int v32; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int64 v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h]
  char *v35; // [rsp+70h] [rbp-48h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  v6 = a2;
  v7 = a1;
  a5 = 0LL;
  v35 = 0LL;
  v8 = HIBYTE(a4);
  v9 = a4 & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(a4) > 0x40u )
    return 3221225485LL;
  v10 = 3 * v9;
  Blink = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  v27 = Blink;
  if ( !a1 || !a2 )
  {
    v22 = (unsigned __int16 *)RtlImageNtHeader(KeGetCurrentThread()->ApcState.Process[1].Padding[5]);
    v23 = v22;
    if ( !v22 )
      return 3221225595LL;
    v24 = v22 + 48;
    if ( (unsigned __int16)RtlReadUShortFromUser(v22 + 12) == 523 )
    {
      ULong64FromUser = RtlReadULong64FromUser(v23 + 52);
      ULongFromUser = RtlReadULong64FromUser(v24);
    }
    else
    {
      ULong64FromUser = (unsigned int)RtlReadULongFromUser((unsigned int *)v23 + 25);
      ULongFromUser = (unsigned int)RtlReadULongFromUser((unsigned int *)v24);
    }
    if ( !v7 )
      v7 = ULong64FromUser;
    if ( !v6 )
      v6 = ULongFromUser;
    Blink = v27;
  }
  if ( !v7 )
    v7 = 0x4000LL;
  if ( v7 >= v6 )
    v6 = (v7 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v12 = ~(v9 - 1);
  v13 = v12 & (v7 + v9 - 1);
  v14 = (v6 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v15 = (void *)RtlReadULong64FromUser((volatile void *)(Blink + 792));
  v29[1] = v15;
  if ( v15 && v13 < (unsigned __int64)v15 )
  {
    v13 = v12 & ((unsigned __int64)v15 + v9 - 1);
    if ( v13 >= v14 )
      v14 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v14 = (v14 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  v30 = v8;
  v31 = 0LL;
  v32 = 0;
  v33 = v14;
  v34 = a3;
  result = ZwSetInformationProcess(-1LL, 41LL);
  if ( (int)result >= 0 )
  {
    v17 = a6;
    *a6 = 0LL;
    v17[1] = 0LL;
    v18 = v35;
    v17[4] = v35;
    v17[2] = &v18[v14];
    BaseAddress = &v18[v14 - v13];
    v19 = v14 - v13;
    RegionSize = v13;
    v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v20 < 0
      || (v21 = (char *)BaseAddress, v17[3] = BaseAddress, v19 >= v10)
      && (BaseAddress = &v21[-v10],
          a5 = v10,
          v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &a5, 0x1000u, 0x104u),
          v20 < 0) )
    {
      v29[0] = v17[4];
      v27 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &v27, 0x8000u);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}

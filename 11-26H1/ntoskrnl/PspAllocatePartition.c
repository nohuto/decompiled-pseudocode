/*
 * XREFs of PspAllocatePartition @ 0x140803608
 * Callers:
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     PspAddPartitionToGlobalList @ 0x14061997C (PspAddPartitionToGlobalList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspClosePartitionHandle @ 0x1408038B0 (PspClosePartitionHandle.c)
 *     PspCreatePartitionSystemProcess @ 0x1408038E8 (PspCreatePartitionSystemProcess.c)
 *     ExpPartitionInitialize @ 0x140845EE4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x140846088 (ExpPartitionStart.c)
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

__int64 __fastcall PspAllocatePartition(int a1, unsigned int a2, char a3, __int64 a4, char a5, _QWORD *a6, __int64 a7)
{
  int v8; // r8d
  __int64 v9; // r14
  int Object; // edi
  char v11; // si
  unsigned int v12; // r14d
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v17; // [rsp+60h] [rbp-41h] BYREF
  __int64 v18; // [rsp+68h] [rbp-39h]
  _OWORD v19[3]; // [rsp+70h] [rbp-31h] BYREF

  v8 = a1;
  v9 = a4;
  v18 = a7;
  LOBYTE(a1) = a3;
  LOBYTE(a4) = a3;
  memset(v19, 0, sizeof(v19));
  v17 = 0LL;
  Object = ObCreateObjectEx(a1, (_DWORD)PsPartitionType, v8, a4);
  if ( Object < 0 )
    return (unsigned int)Object;
  memset_0(0LL, 0, 0x90uLL);
  MEMORY[0x28] = 2LL;
  v11 = a5 & 1;
  ObfReferenceObjectWithTag(0LL, 0x64726148u);
  MEMORY[0x30] = 1LL;
  MEMORY[0x70] = 0LL;
  if ( v9 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 40)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x48] = v9;
    if ( v11 )
      goto LABEL_6;
LABEL_18:
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v19);
    Object = PspCreatePartitionSystemProcess(120LL, 128LL);
    KiUnstackDetachProcess((__int64)v19, 0);
    if ( Object < 0 )
      return (unsigned int)Object;
    v12 = a5 & 2;
    Object = ExpPartitionInitialize(0LL);
    if ( Object < 0 )
      return (unsigned int)Object;
    goto LABEL_7;
  }
  if ( !v11 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 5) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x48] = PspSystemPartition;
    goto LABEL_18;
  }
LABEL_6:
  v12 = 1;
LABEL_7:
  Object = MmCreatePartition(0LL, v12);
  if ( Object >= 0 )
  {
    PspAddPartitionToGlobalList(0LL);
    if ( v11 )
    {
      MEMORY[0x88] |= 1u;
      *a6 = 0LL;
      return 0;
    }
    Object = ExpPartitionStart(MEMORY[0x10]);
    if ( Object >= 0 )
    {
      if ( (a5 & 2) != 0 )
        MEMORY[0x88] |= 1u;
      Object = ObInsertObjectEx(0LL, 0LL, a2, 0LL, 0, 0LL, &v17);
      if ( Object >= 0 )
      {
        v13 = (_QWORD *)v18;
        v14 = v17;
        *a6 = 0LL;
        *v13 = v14;
        return 0;
      }
    }
  }
  return (unsigned int)Object;
}

/*
 * XREFs of KiAllocatePrcbThread @ 0x1405EECFC
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405EC528 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405F8EE4 (KiAllocateSmtIsolationThread.c)
 *     KiAllocateIdleThread @ 0x140BFE048 (KiAllocateIdleThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     PsInitializeThreadRngState @ 0x14048D204 (PsInitializeThreadRngState.c)
 *     KeAbComputeThreadEntriesSize @ 0x1404B7230 (KeAbComputeThreadEntriesSize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KiAllocatePrcbThread(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PCUNICODE_STRING SourceString,
        int a7)
{
  unsigned __int64 v9; // r14
  int v10; // edx
  int inited; // edi
  char *v12; // rbx
  PCUNICODE_STRING v13; // rdi
  __int64 Pool2; // rax
  __int64 v15; // rcx
  unsigned __int16 Length; // ax
  _QWORD v18[4]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v19; // [rsp+78h] [rbp-11h]
  void *v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+94h] [rbp+Bh]
  int v23; // [rsp+9Ch] [rbp+13h]
  char *v24; // [rsp+A0h] [rbp+17h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+1Fh]
  PVOID Object; // [rsp+F0h] [rbp+67h] BYREF

  Object = 0LL;
  v9 = ((unsigned int)KeAbComputeThreadEntriesSize((__int64)a1, 0)
      + ((16LL * (unsigned __int16)KiMaximumGroups + 55) & 0xFFFFFFFFFFFFFFF8uLL)
      + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  inited = ObCreateObject(0, (_DWORD)PsThreadType, 0, 0, v10, (int)v9 + 1944, v10, 1944, (__int64)&Object);
  if ( inited < 0 )
  {
    v12 = (char *)Object;
  }
  else
  {
    v12 = (char *)Object;
    memset_0(Object, 0, 0x798uLL);
    *((_DWORD *)v12 + 257) = 32;
    *((_QWORD *)v12 + 191) = v12 + 1520;
    *((_QWORD *)v12 + 190) = v12 + 1520;
    v19 = 0LL;
    *((_QWORD *)v12 + 193) = v12 + 1536;
    *((_QWORD *)v12 + 192) = v12 + 1536;
    *((_QWORD *)v12 + 194) = 0LL;
    *((_QWORD *)v12 + 216) = v12 + 1720;
    *((_QWORD *)v12 + 215) = v12 + 1720;
    *((_QWORD *)v12 + 219) = v12 + 1744;
    *((_QWORD *)v12 + 218) = v12 + 1744;
    v18[0] = 0LL;
    v23 = 0;
    v18[1] = a2;
    v21 = a5 + 1;
    v20 = &unk_140FC9F40;
    v24 = v12 + 1944;
    v18[2] = 0LL;
    v22 = a7 | 2u;
    v18[3] = 0LL;
    v25 = v9;
    inited = KeInitThread(v12, v18);
    if ( inited >= 0 )
    {
      v13 = SourceString;
      Pool2 = ExAllocatePool2(0x40uLL);
      *((_QWORD *)v12 + 212) = Pool2;
      v15 = Pool2;
      if ( Pool2 )
      {
        Length = v13->Length;
        *(_OWORD *)v15 = 0LL;
        *(_WORD *)(v15 + 2) = Length;
        *(_QWORD *)(v15 + 8) = v15 + 16;
        RtlUnicodeStringCopy(*((PUNICODE_STRING *)v12 + 212), v13);
        *((_QWORD *)v12 + 156) = a2;
        *((_QWORD *)v12 + 172) = a2;
        PsInitializeThreadRngState((unsigned __int64)v12);
        v12[1831] = -1;
        if ( KiSchedulerAssistThreadFlagEnabled )
          _interlockedbittestandset((volatile signed __int32 *)v12, 0x16u);
        if ( BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next) )
          _interlockedbittestandset((volatile signed __int32 *)v12, 0x15u);
        *a1 = v12;
        v12 = 0LL;
        inited = 0;
      }
      else
      {
        inited = -1073741801;
      }
    }
  }
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  return (unsigned int)inited;
}

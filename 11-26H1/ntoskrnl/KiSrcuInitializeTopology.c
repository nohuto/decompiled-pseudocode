/*
 * XREFs of KiSrcuInitializeTopology @ 0x1405F7DC0
 * Callers:
 *     KeSrcuAllocate @ 0x1405F7630 (KeSrcuAllocate.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiSrcuProcessorAddToTopologyTree @ 0x1405F8284 (KiSrcuProcessorAddToTopologyTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 KiSrcuInitializeTopology()
{
  __int64 v0; // rdi
  unsigned __int8 v1; // si
  unsigned __int64 v2; // rbx
  void *Pool2; // r14
  KIRQL v4; // r12
  char *v6; // r8
  __int64 *v7; // r9
  char *v8; // r10
  __int64 v9; // r11
  unsigned int v10; // r15d
  __int64 *v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // r13d
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // r9d
  __int64 v19; // r8
  signed __int32 v20[8]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int16 *v21[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v22; // [rsp+30h] [rbp-10h]
  int v23; // [rsp+32h] [rbp-Eh]
  __int16 v24; // [rsp+36h] [rbp-Ah]
  unsigned int v25; // [rsp+70h] [rbp+30h] BYREF

  v0 = (unsigned int)KeMaximumProcessors;
  if ( (unsigned int)KeMaximumProcessors <= 0x40 )
  {
    LOBYTE(v2) = 0;
    v1 = 1;
  }
  else
  {
    v1 = 2;
    v2 = ((unsigned __int64)(unsigned int)KeMaximumProcessors + 63) >> 6;
  }
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F14FB8);
  LOBYTE(v25) = v4;
  if ( !byte_140F14FC0 )
  {
    if ( !Pool2 )
    {
      KeReleaseSpinLock(&qword_140F14FB8, v4);
      return 0LL;
    }
    dword_140F14FC8 = v0;
    byte_140F14FC1[0] = v1;
    byte_140F14FC4 = 1;
    if ( v1 == 1 )
    {
      byte_140F14FC2 = v0;
    }
    else
    {
      byte_140F14FC5 = v2;
      byte_140F14FC2 = v2;
      byte_140F14FC3 = 64;
    }
    qword_140F14FD0 = (__int64)Pool2;
    qword_140F14FD8 = (__int64)Pool2 + 8 * v0;
    Pool2 = 0LL;
    qword_140F14FE0 = qword_140F14FD8 + 16;
    if ( v1 > 1u )
    {
      v6 = &byte_140F14FC5;
      v7 = &qword_140F14FE0;
      v8 = &byte_140F14FC2;
      v9 = (unsigned int)v1 - 1;
      do
      {
        v10 = (unsigned __int8)*v8;
        if ( *v6 )
        {
          v11 = (__int64 *)(*v7 + 8);
          v12 = 0;
          v13 = 0;
          do
          {
            v14 = 1LL << (v12 % v10);
            v12 = v13 + 1;
            *v11 = v14;
            v13 = v12;
            v11 += 2;
          }
          while ( v12 < (unsigned __int8)*v6 );
        }
        ++v8;
        ++v7;
        ++v6;
        --v9;
      }
      while ( v9 );
      v4 = v25;
    }
    v25 = 0;
    v15 = (unsigned __int8)byte_140F14FC1[v1];
    if ( (_DWORD)v0 )
    {
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      do
      {
        *(_QWORD *)(v16 + qword_140F14FD0) = 1LL << (v17 % v15);
        v17 = v18 + 1;
        v16 += 8LL;
        v18 = v17;
      }
      while ( v17 < (unsigned int)v0 );
      v25 = v17;
    }
    v21[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
    v21[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
    v23 = 0;
    v24 = 0;
    v22 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, v21) )
      KiSrcuProcessorAddToTopologyTree(KiProcessorBlock[v25], 1LL, v19);
    _InterlockedOr(v20, 0);
    byte_140F14FC0 = 1;
  }
  KeReleaseSpinLock(&qword_140F14FB8, v4);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x75635253u);
  return 1LL;
}

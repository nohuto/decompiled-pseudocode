/*
 * XREFs of KeSrcuAllocate @ 0x1405F7630
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuInitializeTopology @ 0x1405F7DC0 (KiSrcuInitializeTopology.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeSrcuAllocate(int a1, int a2)
{
  unsigned __int8 v3; // di
  char *v4; // rbp
  int v5; // r8d
  __int64 v6; // rsi
  unsigned __int8 v7; // dl
  char *v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  __int64 Pool2; // rax
  __int64 v16; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // esi
  int v22; // r9d
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  int v30; // r11d
  unsigned int v31; // ebp
  _QWORD *v32; // r9
  __int64 v33; // rsi
  unsigned int v34; // r12d
  __int64 i; // r10
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rax
  KIRQL v41; // al
  __int64 *v42; // rcx
  unsigned int v44; // [rsp+80h] [rbp+18h]
  unsigned __int64 v45; // [rsp+88h] [rbp+20h]

  while ( !byte_140F14FC0 )
  {
    if ( !(unsigned int)KiSrcuInitializeTopology() )
      return 0LL;
  }
  v3 = byte_140F14FC1;
  v4 = &byte_140F14FC4;
  v5 = 0;
  v6 = (unsigned __int8)byte_140F14FC1;
  v7 = byte_140F14FC1 - 1;
  if ( byte_140F14FC1 )
  {
    v8 = &byte_140F14FC4;
    v9 = (unsigned __int8)byte_140F14FC1;
    do
    {
      v10 = (unsigned __int8)*v8++;
      v5 += v10;
      --v9;
    }
    while ( v9 );
  }
  v11 = (unsigned int)dword_140F14FC8;
  v12 = v7;
  v13 = *((unsigned __int8 *)&KiSrcuState[4] + v7 + 2);
  if ( v13 > 0x20 )
    v13 = 32;
  v44 = v13;
  v45 = (unsigned __int64)(unsigned int)dword_140F14FC8 << 6;
  v14 = (v13 + dword_140F14FC8 - 1) / v13;
  Pool2 = ExAllocatePool2(0x40uLL);
  v16 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)(Pool2 + 168) = a2;
  v18 = Pool2 + v45 + 176;
  *(_DWORD *)(Pool2 + 172) = a1;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 176;
  if ( v3 )
  {
    v19 = (unsigned __int64 *)(Pool2 + 16);
    do
    {
      *v19++ = v18;
      v20 = (unsigned __int8)*v4++;
      v18 += 56 * v20;
      --v6;
    }
    while ( v6 );
  }
  v21 = *((unsigned __int8 *)&KiSrcuState[4] + v12 + 2);
  v22 = 0;
  v23 = *(_QWORD *)(v16 + 8 * v12 + 16);
  if ( (_DWORD)v11 )
  {
    v24 = (_QWORD *)(*(_QWORD *)(v16 + 32) + 40LL);
    v25 = 0LL;
    v26 = v11;
    do
    {
      *v24 = v23;
      v27 = v23 + 56;
      v24[2] = v16;
      v24 += 8;
      v28 = v25 + qword_140F14FD0;
      v25 += 8LL;
      *(v24 - 7) = v28;
      if ( v22 + 1 < v21 )
        v27 = v23;
      v22 = v22 + 1 < v21 ? v22 + 1 : 0;
      v23 = v27;
      --v26;
    }
    while ( v26 );
  }
  v29 = 1;
  for ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 8LL) = qword_140F14FD8; v29 < v3; ++v29 )
  {
    v30 = 0;
    v31 = 0;
    v32 = *(_QWORD **)(v16 + 8LL * v29 + 16);
    v33 = KiSrcuState[v29 + 7];
    v34 = *((unsigned __int8 *)&KiSrcuState[4] + v29 + 1);
    for ( i = *(_QWORD *)(v16 + 8LL * v29 + 8);
          v31 < *((unsigned __int8 *)&KiSrcuState[4] + v29 + 4);
          v30 = v30 + 1 < v34 ? v30 + 1 : 0 )
    {
      v32[1] = v33;
      *v32 = i;
      v36 = i + 56;
      v33 += 16LL;
      v32 += 7;
      ++v31;
      if ( v30 + 1 < v34 )
        v36 = i;
      i = v36;
    }
  }
  *(_QWORD *)(v16 + 80) = v16 + 72;
  *(_QWORD *)(v16 + 72) = v16 + 72;
  *(_QWORD *)(v16 + 112) = KiSrcuFlushCompletedDpcRoutine;
  *(_DWORD *)(v16 + 88) = 282;
  *(_QWORD *)(v16 + 120) = v16;
  *(_QWORD *)(v16 + 144) = 0LL;
  *(_QWORD *)(v16 + 104) = 0LL;
  *(_DWORD *)(v16 + 152) = v14;
  *(_DWORD *)(v16 + 156) = v44;
  *(_QWORD *)(v16 + 160) = *(_QWORD *)(v16 + 8 * v12 + 16) + 56LL * *((unsigned __int8 *)&KiSrcuState[4] + v12 + 4);
  if ( v14 )
  {
    v37 = 0LL;
    v38 = v14;
    v39 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(v16 + 160) + v37 + 64) = v39;
      v39 += v44;
      v40 = *(_QWORD *)(v16 + 160);
      *(_DWORD *)(v40 + v37) = 275;
      *(_QWORD *)(v40 + v37 + 24) = &KiSrcuNotifyWorkerDpcRoutine;
      *(_QWORD *)(v40 + v37 + 32) = v16;
      *(_QWORD *)(v40 + v37 + 56) = 0LL;
      *(_QWORD *)(v40 + v37 + 16) = 0LL;
      v37 += 80LL;
      --v38;
    }
    while ( v38 );
  }
  v41 = KeAcquireSpinLockRaiseToDpc(&qword_140F14FB0);
  if ( !KiSrcuState[0] )
  {
    qword_140F14FA8 = (__int64)KiSrcuState;
    KiSrcuState[0] = (__int64)KiSrcuState;
  }
  v42 = (__int64 *)qword_140F14FA8;
  if ( *(__int64 **)qword_140F14FA8 != KiSrcuState )
    __fastfail(3u);
  *(_QWORD *)(v16 + 8) = qword_140F14FA8;
  *(_QWORD *)v16 = KiSrcuState;
  *v42 = v16;
  qword_140F14FA8 = v16;
  KeReleaseSpinLock(&qword_140F14FB0, v41);
  return v16;
}

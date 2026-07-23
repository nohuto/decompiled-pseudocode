/*
 * XREFs of MiDeleteAwePageTables @ 0x140705E80
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

LONG_PTR __fastcall MiDeleteAwePageTables(_KPROCESS *Object)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // r14
  int v3; // r12d
  KIRQL v4; // al
  _QWORD *v5; // rcx
  KIRQL v6; // r15
  unsigned __int64 v7; // r8
  __int64 *v8; // rdx
  unsigned __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 i; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  volatile signed __int32 *v17; // r9
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  volatile LONG *v20; // rcx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD **v23; // rcx
  unsigned __int64 v24; // rax
  _QWORD *j; // rcx
  _QWORD **v26; // rcx
  unsigned __int64 v27; // rax
  _QWORD *k; // rcx
  volatile LONG *v29; // rcx
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  ActiveProcessors = Object[2].ActiveProcessors;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( Object == KeGetCurrentThread()->ApcState.Process )
  {
    v3 = 0;
  }
  else
  {
    KeStackAttachProcess(Object, &ApcState);
    v3 = 1;
  }
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[5].8);
  v5 = (_QWORD *)ActiveProcessors[4].StaticBitmap[30];
  v6 = v4;
  v7 = 0LL;
  while ( v5 )
  {
    v7 = (unsigned __int64)v5;
    v5 = (_QWORD *)*v5;
  }
  while ( v7 )
  {
    if ( *(_QWORD *)(v7 - 16) && *(_BYTE *)(v7 + 56) >= 0x3Fu )
    {
      v8 = *(__int64 **)(v7 - 8);
      v9 = *(_QWORD *)(v7 - 16) - 1LL;
      if ( !*(_QWORD *)(v7 - 16) )
        goto LABEL_33;
      v10 = *(__int64 **)(v7 - 8);
      for ( i = *v8; ; i = *v10 )
      {
        v12 = ~i;
        if ( v12 != -1 )
          break;
        if ( ++v10 > &v8[v9 >> 6] )
          goto LABEL_33;
      }
      _BitScanForward64(&v13, ~v12);
      v14 = ((v10 - v8) << 6) + v13;
      if ( v14 > v9 || v14 == -1LL )
      {
LABEL_33:
        v23 = *(_QWORD ***)(v7 + 8);
        v24 = v7;
        if ( v23 )
        {
          v7 = *(_QWORD *)(v7 + 8);
          for ( j = *v23; j; j = (_QWORD *)*j )
            v7 = (unsigned __int64)j;
        }
        else
        {
          while ( 1 )
          {
            v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v7 || *(_QWORD *)v7 == v24 )
              break;
            v24 = v7;
          }
        }
      }
      else
      {
        v15 = v14 & 0x1F;
        LOBYTE(v16) = 1;
        v17 = (volatile signed __int32 *)v8 + (v14 >> 5);
        if ( v15 + 1 <= 0x20 )
        {
          v18 = ~(1 << v15);
LABEL_25:
          _InterlockedAnd(v17, v18);
          goto LABEL_26;
        }
        if ( (v14 & 0x1F) == 0 )
          goto LABEL_24;
        _InterlockedAnd(v17++, ~(((1 << (32 - (v14 & 0x1F))) - 1) << v15));
        v16 = 1LL - (32 - (unsigned int)(v14 & 0x1F));
        if ( v16 >= 0x20 )
        {
          v19 = v16 >> 5;
          v16 += -32LL * (v16 >> 5);
          do
          {
            *v17++ = 0;
            --v19;
          }
          while ( v19 );
        }
        if ( v16 )
        {
LABEL_24:
          v18 = -1 << v16;
          goto LABEL_25;
        }
LABEL_26:
        v20 = (volatile LONG *)&ActiveProcessors[5].8;
        v21 = (*(unsigned int *)(*(_QWORD *)(v7 + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(v7 + 24) + 32LL) << 32)) << 12;
        if ( v6 == 17 )
          ExReleaseSpinLockSharedFromDpcLevel(v20);
        else
          ExReleaseSpinLockShared(v20, v6);
        MiDeleteEmptyPageTables(
          (v14 << 21) + (v21 & 0xFFFFFFFFFFE00000uLL),
          (v14 << 21) + (v21 & 0xFFFFFFFFFFE00000uLL) + 0x1FFFFF,
          1);
        ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[5].8);
        v22 = (_QWORD *)ActiveProcessors[4].StaticBitmap[30];
        v7 = 0LL;
        while ( v22 )
        {
          v7 = (unsigned __int64)v22;
          v22 = (_QWORD *)*v22;
        }
      }
    }
    else
    {
      v26 = *(_QWORD ***)(v7 + 8);
      v27 = v7;
      if ( v26 )
      {
        v7 = *(_QWORD *)(v7 + 8);
        for ( k = *v26; k; k = (_QWORD *)*k )
          v7 = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == v27 )
            break;
          v27 = v7;
        }
      }
    }
  }
  ActiveProcessors[5].StaticBitmap[3] = 0LL;
  v29 = (volatile LONG *)&ActiveProcessors[5].8;
  if ( v6 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v29);
  else
    ExReleaseSpinLockShared(v29, v6);
  if ( v3 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
}

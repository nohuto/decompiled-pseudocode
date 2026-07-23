/*
 * XREFs of IopGetSetStreamIdentifier @ 0x14044D388
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1405CD660 (IoAllocateSfioStreamIdentifier.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x14044D490 (IopGetSetSpecificExtension.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  __int64 result; // rax
  _QWORD *v10; // rdi
  KSPIN_LOCK *v11; // rbp
  KIRQL v12; // al
  _QWORD *v13; // rdx
  _QWORD *Pool2; // rsi
  KIRQL v15; // al
  _QWORD *v16; // rcx
  _QWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0;
  v6 = a4;
  v17 = 0LL;
  LOBYTE(a4) = a5;
  result = IopGetSetSpecificExtension(a1, 4, 16, (_DWORD)a4, (__int64)&v17, (__int64)&v18);
  if ( (int)result < 0 )
    goto LABEL_8;
  v10 = v17;
  if ( !v17 )
  {
LABEL_7:
    result = 0LL;
LABEL_8:
    *v6 = 0LL;
    return result;
  }
  v11 = (KSPIN_LOCK *)(a1 + 184);
  v12 = KeAcquireSpinLockRaiseToDpc(v11);
  v13 = (_QWORD *)*v10;
  if ( !*v10 )
  {
    v10[1] = v10;
    v13 = v10;
    *v10 = v10;
  }
  while ( v13 != v10 )
  {
    if ( v13[3] == a3 )
    {
      if ( a5 )
      {
        *v6 = 0LL;
        v5 = -1073741791;
      }
      else
      {
        *v6 = v13[2];
      }
      KeReleaseSpinLock(v11, v12);
      return v5;
    }
    v13 = (_QWORD *)*v13;
  }
  KeReleaseSpinLock(v11, v12);
  if ( !a5 )
    goto LABEL_7;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_8;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(v11);
  v16 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v16 != v10 )
    __fastfail(3u);
  Pool2[1] = v16;
  *Pool2 = v10;
  *v16 = Pool2;
  v10[1] = Pool2;
  Pool2[2] = Pool2 + 4;
  Pool2[3] = a3;
  *v6 = Pool2 + 4;
  KeReleaseSpinLock(v11, v15);
  return 0LL;
}

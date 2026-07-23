/*
 * XREFs of RtlpHpAllocVA @ 0x1403660F0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x140351A94 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x1404D88AC (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x14063B058 (RtlpHpHeapAllocate.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     RtlpHpReleaseLockShared @ 0x14034DEC0 (RtlpHpReleaseLockShared.c)
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140504444 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrCtxCommit @ 0x1405259B0 (RtlpHpVaMgrCtxCommit.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int a5,
        _QWORD *a6)
{
  int v6; // edi
  __int64 v10; // r11
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // eax
  _QWORD *v15; // rbx
  __int64 result; // rax
  struct _KTHREAD *v17; // rdi
  __int64 v18; // rcx
  KIRQL v19; // bl
  __int128 v20; // [rsp+50h] [rbp-38h]
  _DWORD v21[3]; // [rsp+60h] [rbp-28h] BYREF
  int v22; // [rsp+6Ch] [rbp-1Ch]
  __int64 v23; // [rsp+70h] [rbp-18h]

  v6 = (int)a4;
  v21[0] = 0;
  v22 = 0;
  v10 = *a6;
  v11 = *a6 >> 24;
  v20 = *(_OWORD *)a6;
  if ( (_BYTE)v11 )
    v12 = (unsigned __int8)v11 - 1;
  else
    v12 = -1;
  v21[0] = v12;
  v21[2] = BYTE2(v10);
  v21[1] = BYTE1(v10);
  if ( (v10 & 8) != 0 )
    v22 = 1;
  v13 = *a2;
  v23 = *((_QWORD *)&v20 + 1);
  v14 = v13 - 1;
  if ( (_DWORD)a4 == 0x2000 )
  {
    a6 = (_QWORD *)(v13 - (v14 & 0xFFFFF) + 0xFFFFF);
    if ( v12 == -1 )
    {
      v19 = ExAcquireSpinLockShared(&dword_140E68F38);
      v17 = (struct _KTHREAD *)RtlpHpVaMgrCtxAllocatorFind(&ExpUuidLock.TrapFrame, v21, 0LL, 0LL);
      RtlpHpReleaseLockShared((struct _KTHREAD *)&dword_140E68F38, 1, v19);
    }
    else
    {
      v17 = (struct _KTHREAD *)((char *)&unk_140E68F48 + 48 * v12);
    }
    v18 = RtlpHpVaMgrAlloc(v17, (unsigned __int64 *)&a6, a3, a4);
    if ( !v18 )
      return 3221225626LL;
    *a2 = (__int64)a6;
    *a1 = v18;
    return 0LL;
  }
  v15 = (_QWORD *)(v13 - (v14 & 0xFFF) + 4095);
  a6 = v15;
  if ( (unsigned __int8)(BYTE1(v20) - 2) > 2u )
  {
    result = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&a6, a3, (_DWORD)a4, a5);
    if ( (int)result < 0 )
      return result;
    v15 = a6;
    goto LABEL_9;
  }
  result = RtlpHpVaMgrCtxCommit(&ExpUuidLock.TrapFrame, *a1, v15, a5);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      RtlHeapZero(*a1, v15);
LABEL_9:
    *a2 = (__int64)v15;
    return 0LL;
  }
  return result;
}

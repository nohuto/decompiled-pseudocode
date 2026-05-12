/*
 * XREFs of sub_14001FE70 @ 0x14001FE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14001FE70(__int64 a1, unsigned int a2, int a3)
{
  signed __int32 v5; // edi
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  int v13; // ecx
  int v14; // r8d
  _QWORD *i; // r14
  _DWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  unsigned int v18; // [rsp+40h] [rbp-28h]
  char v19; // [rsp+44h] [rbp-24h]
  __int16 v20; // [rsp+45h] [rbp-23h]
  char v21; // [rsp+47h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_1400541AC(a1, (unsigned int)&unk_14014B0D0, a3, **(_QWORD **)(a1 + 4960), *(_DWORD *)(a1 + 56), a2);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a1 + 4960) + 20LL), 0);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 988));
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
      sub_140021810(i - 8, 4LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v7 = *(_DWORD *)(a1 + 4932);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 4936);
        if ( v8 )
        {
          v9 = v8 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v7);
          *(_DWORD *)v9 = 6;
          *(_QWORD *)(v9 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v9 + 16) = v5;
          *(_QWORD *)(v9 + 8) = retaddr;
          *(_QWORD *)(v9 + 24) = a1;
          *(_QWORD *)(v9 + 32) = v6;
        }
      }
    }
  }
  if ( (unsigned __int8)sub_140020090(a1 + 376, 8LL) )
  {
    if ( (unsigned __int8)sub_140020090(a1 + 376, 8LL) )
    {
      v16[0] = 1;
      v20 = 0;
      v21 = 0;
      v17 = 0LL;
      v19 = 0;
      v10 = *(_QWORD *)(a1 + 608);
      v16[1] = 24;
      v18 = a2;
      v11 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(v10 + 120);
      if ( v11 )
        v11(*(_QWORD *)(a1 + 616) + 16LL, 8LL, v16);
    }
  }
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 4960), a2);
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      return sub_1400541AC(v13, (unsigned int)&unk_14014A530, v14, **(_QWORD **)(a1 + 4960), *(_DWORD *)(a1 + 56), a2);
  }
  return result;
}

/*
 * XREFs of MiDbgPteWriteInProgress @ 0x140703840
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall MiDbgPteWriteInProgress(__int64 a1)
{
  unsigned __int64 v2; // rbx
  _KPROCESS *Process; // rsi
  _KPROCESS **v4; // rax
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+32h] [rbp-26h]
  __int16 v9; // [rsp+36h] [rbp-22h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  v8 = 0;
  v9 = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 < 0xFFFF800000000000uLL )
    Process = KeGetCurrentThread()->ApcState.Process;
  else
    Process = 0LL;
  v7 = 0;
  v6[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
  v6[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v6) )
  {
    v4 = *(_KPROCESS ***)(KeGetPrcb(v10) + 40008);
    if ( v4 && *v4 == Process && v4[1] == (_KPROCESS *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    {
      *(_QWORD *)(a1 + 56) = ((_QWORD)v4[2] << 12) | v2 & 0xFFF;
      return 0LL;
    }
  }
  return 3221225473LL;
}

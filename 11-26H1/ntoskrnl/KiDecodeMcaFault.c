/*
 * XREFs of KiDecodeMcaFault @ 0x140540440
 * Callers:
 *     KiMachineCheckControl @ 0x140732F70 (KiMachineCheckControl.c)
 *     $$11 @ 0x140732F80 ($$11.c)
 *     $$12 @ 0x140732F90 ($$12.c)
 *     $$13 @ 0x140732FA0 ($$13.c)
 *     $$14 @ 0x140732FB0 ($$14.c)
 *     $$15 @ 0x140732FC0 ($$15.c)
 *     $$16 @ 0x140732FD0 ($$16.c)
 *     $$17 @ 0x140732FE0 ($$17.c)
 *     $$18 @ 0x140732FF0 ($$18.c)
 *     $$19 @ 0x140733000 ($$19.c)
 *     $$1a @ 0x140733010 ($$1a.c)
 *     $$1b @ 0x140733020 ($$1b.c)
 *     $$1c @ 0x140733030 ($$1c.c)
 *     $$1d @ 0x140733040 ($$1d.c)
 *     $$1e @ 0x140733050 ($$1e.c)
 *     $$1f @ 0x140733060 ($$1f.c)
 * Callees:
 *     KeTestSpinLock @ 0x140449B50 (KeTestSpinLock.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140C7B6F0 (KeGuardDispatchICall.c)
 */

__int64 KiDecodeMcaFault()
{
  _BYTE *CompleteDev; // rbx
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, __int64); // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rdx
  bool v12; // zf

  CompleteDev = (_BYTE *)FsRtlMdlReadCompleteDevEx();
  if ( !KeTestSpinLock((PKSPIN_LOCK)CompleteDev + 260) )
    return (*((__int64 (__fastcall **)(_BYTE *, _QWORD))CompleteDev + 81))(CompleteDev + 2080, 0LL);
  v2 = *((unsigned int *)CompleteDev + 513);
  v3 = *((_QWORD *)CompleteDev + 253);
  v4 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))*((_QWORD *)CompleteDev + 33);
  v5 = *((unsigned int *)CompleteDev + 508);
  if ( (unsigned int)v2 >= 8 )
  {
    v6 = (unsigned __int64)(unsigned int)v2 >> 3;
    do
    {
      v7 = __rdtsc();
      v2 = (unsigned int)(v2 - 8);
      v8 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
      *(_QWORD *)CompleteDev = v8 ^ *((_QWORD *)&v8 + 1);
      CompleteDev += 8;
      --v6;
    }
    while ( v6 );
  }
  if ( (_DWORD)v2 )
  {
    v9 = __rdtsc();
    v10 = (__ROR8__(v9, 3) ^ v9) * (unsigned __int128)0x7010008004002001uLL;
    v11 = v10 ^ *((_QWORD *)&v10 + 1);
    do
    {
      *CompleteDev++ = v11;
      v11 >>= 8;
      v12 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v12 );
  }
  return v4(v3, v5, v4, v2);
}

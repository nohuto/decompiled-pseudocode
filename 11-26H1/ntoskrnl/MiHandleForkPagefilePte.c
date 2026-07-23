/*
 * XREFs of MiHandleForkPagefilePte @ 0x1402EEED4
 * Callers:
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiUpdatePageFileBlockOwner @ 0x1402EF100 (MiUpdatePageFileBlockOwner.c)
 *     MiWriteUselessChildPte @ 0x1402EF15C (MiWriteUselessChildPte.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 */

__int64 __fastcall MiHandleForkPagefilePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // rsi
  unsigned __int64 *v6; // r14
  __int64 v7; // rax
  struct _KEVENT *v8; // r15
  int v9; // ecx
  int v10; // r13d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 PrototypePteDirect; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  _KPROCESS *v19; // rax
  __int64 v20; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-18h]
  unsigned __int64 v24; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+50h] BYREF
  unsigned __int64 *v26; // [rsp+A0h] [rbp+58h]
  unsigned __int64 *v27; // [rsp+A8h] [rbp+60h]

  v25 = a2;
  v3 = *(unsigned __int64 **)(a1 + 304);
  v4 = a2;
  v5 = *(unsigned __int64 **)(a1 + 312);
  v6 = *(unsigned __int64 **)(a1 + 320);
  v23 = *(_QWORD *)a1;
  v7 = *(unsigned __int16 *)(*(_QWORD *)a1 + 1198LL);
  v26 = v3;
  v27 = v5;
  v8 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v7);
  v9 = v8 != *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 1198LL))
     ? 5
     : 0;
  v10 = v9 | 2;
  if ( (*(_BYTE *)(a1 + 248) & 1) == 0 )
    v10 = v9;
  if ( v10 )
  {
    if ( !(unsigned int)MiGetCloneCharges(v8) )
      return MiWriteUselessChildPte(a1, v5);
    v3 = v26;
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = v4;
    if ( qword_140E2D8C0 && (v4 & 0x10) == 0 )
      v11 = qword_140E2D8C8 & v4;
    MiUpdatePageFileBlockOwner(
      *((_QWORD *)&v8[929].Header.WaitListHead.Flink + ((unsigned __int16)v4 >> 12)),
      HIDWORD(v11),
      v6,
      v3,
      0);
  }
  v12 = v4 >> 5;
  v13 = (v4 >> 5) & 0x1F;
  if ( (v25 & 0x80u) != 0LL )
  {
    v25 |= 0x20uLL;
    v4 = v25;
  }
  if ( (v4 & 4) != 0 )
  {
    v24 = v4 & 0xFFFFFFFFFFFFFFF7uLL;
    MiReleasePageFileInfo(v8, v4 & 0xFFFFFFFFFFFFFFF7uLL, 1LL);
    v18 = v25;
    if ( (unsigned __int64)&v25 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v25 <= 0xFFFFF6FB7DBED7F8uLL
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      v19 = MiPteHasShadow();
      if ( v19 )
      {
        KernelWaitTime = v19[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v22 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v25 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v20 |= 0x20uLL;
          v18 = v20 | 0x42;
          if ( (v22 & 0x42) == 0 )
            v18 = v20;
        }
      }
    }
    v25 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
    v4 = v18 & 0xFFFFFFFFFFFFFFFBuLL;
  }
  *v6 = v4;
  PrototypePteDirect = MiMakePrototypePteDirect((unsigned __int64)v6);
  *v26 = PrototypePteDirect;
  v15 = v6[2];
  if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
  {
    ++*(_QWORD *)(a1 + 256);
    v15 = v15 & 0xF00000000000001FuLL | 0x20;
    if ( (_DWORD)v13 != 24 )
      PrototypePteDirect |= 8uLL;
  }
  v6[2] = v12 ^ (v15 ^ v12) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( (v10 & 5) != 0 )
    v6[1] = 1LL;
  v16 = *(_QWORD *)(a1 + 328);
  LODWORD(v24) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v24);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *v27 = PrototypePteDirect;
  MiIncreaseUsedPtesInPfn(*(_QWORD *)(a1 + 328), 1);
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 328) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  result = v23;
  _InterlockedDecrement64((volatile signed __int64 *)(v23 + 648));
  *(_QWORD *)(a1 + 320) += 32LL;
  v6[3] = 2LL;
  return result;
}

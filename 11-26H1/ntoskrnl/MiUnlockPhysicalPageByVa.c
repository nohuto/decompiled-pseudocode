/*
 * XREFs of MiUnlockPhysicalPageByVa @ 0x1406EF080
 * Callers:
 *     <none>
 * Callees:
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall MiUnlockPhysicalPageByVa(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r11d
  __int64 v5; // r10
  ULONG_PTR v6; // r12
  unsigned __int64 v7; // rdx
  _KPROCESS *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned __int64 LeafVa; // rbx
  __int64 v15; // r10
  int v16; // r11d
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v23; // r9
  int v24; // r14d
  ULONG_PTR v25; // rbx
  __int64 v26; // r15
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+20h]

  v28 = a2;
  v3 = a3;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 184);
  BugCheckParameter4 = v6;
  v7 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = MiPteHasShadow();
    if ( v8 )
    {
      KernelWaitTime = v8[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v11 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v9 |= 0x20uLL;
        v7 = v9 | 0x42;
        if ( (v11 & 0x42) == 0 )
          v7 = v9;
      }
    }
  }
  v12 = 1LL;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      MiReleaseWalkLocks(v5);
      RtlReadULong64FromUser((__int64)(a2 << 25) >> 16);
      return 2LL;
    }
    v23 = v7;
    if ( qword_140E2D8C0 )
    {
      if ( (v7 & 0x10) != 0 )
        v23 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v23 = v7 & qword_140E2D8C8;
    }
    v13 = (v23 >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_29;
  }
  v13 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  if ( v3 < 1 )
  {
LABEL_29:
    v24 = *(_DWORD *)v6 != 0 ? 0x80 : 0;
    if ( v12 )
    {
      v25 = 48 * v13 - 0x220000000000LL;
      v26 = v12;
      do
      {
        LODWORD(v28) = 1;
        v27 = 0x3FFFFFFFFFLL;
        MiProbeUnlockPage(v25, v24 + 256, &v27, &v28);
        if ( v27 != 0x3FFFFFFFFFLL )
          MiUnlockPageTableCharges(48 * v27 - 0x220000000000LL, v28);
        v25 += 48LL;
        --v26;
      }
      while ( v26 );
      v6 = BugCheckParameter4;
    }
    *(_QWORD *)(v6 + 8) += v12;
    return 0LL;
  }
  if ( (v7 & 0x80u) != 0LL )
  {
    LeafVa = MiGetLeafVa(a2);
    v17 = LeafVa;
    if ( *(_QWORD *)(v15 + 40) > LeafVa )
      v17 = *(_QWORD *)(v15 + 40);
    v18 = 1LL;
    v19 = v17 >> 12;
    do
    {
      v13 += v18 * (v19 & 0x1FF);
      v19 >>= 9;
      v18 <<= 9;
      --v16;
    }
    while ( v16 );
    v20 = (v18 << 12) + LeafVa;
    v21 = *(_QWORD *)(v15 + 48) + 1LL - v17;
    if ( *(_QWORD *)(v15 + 48) + 1LL >= v20 )
      v21 = v20 - v17;
    v12 = v21 >> 12;
    goto LABEL_29;
  }
  return 0LL;
}

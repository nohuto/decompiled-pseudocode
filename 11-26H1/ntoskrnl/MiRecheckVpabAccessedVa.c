/*
 * XREFs of MiRecheckVpabAccessedVa @ 0x14045D51C
 * Callers:
 *     MiProcessVpabAccessedInfo @ 0x14045D47C (MiProcessVpabAccessedInfo.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiRecheckVpabAccessedVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // r9
  char v5; // r11
  __int64 v6; // rdx
  _KPROCESS *v8; // rax
  char v9; // r8^7
  unsigned __int64 v10; // rcx
  _KPROCESS *v11; // rax
  char v12; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v14; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  v4 = 0LL;
  v5 = 1;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v3 & 1) == 0 )
      return 0LL;
    if ( (v3 & 0x20) == 0 || (v3 & 0x42) == 0 )
    {
      v11 = MiPteHasShadow();
      if ( v11 )
      {
        KernelWaitTime = v11[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v14 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v12 |= 0x20u;
          LOBYTE(v3) = v12 | 0x42;
          if ( (v14 & 0x42) == 0 )
            LOBYTE(v3) = v12;
        }
      }
    }
  }
  if ( ((unsigned __int8)v3 & (unsigned __int8)v5) == 0 )
    return 0LL;
  v6 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && ((unsigned __int8)v6 & (unsigned __int8)v5) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v8 = MiPteHasShadow();
    if ( v8 )
    {
      v10 = v8[2].KernelWaitTime;
      if ( v10 )
      {
        HIBYTE(v6) = v9;
        if ( (*(_QWORD *)(v10 + 8 * ((v2 >> 3) & 0x1FF)) & 0x42) == 0 )
          HIBYTE(v6) = v9;
      }
    }
  }
  LOBYTE(v6) = HIBYTE(v6) & 0xF;
  if ( (HIBYTE(v6) & 0xF) == 0xA || (_BYTE)v6 == 9 )
    return 0LL;
  if ( (_BYTE)v6 != 8 )
    return v2;
  return v4;
}

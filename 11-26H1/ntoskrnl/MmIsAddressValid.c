/*
 * XREFs of MmIsAddressValid @ 0x14043D010
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140542C7C (KiMarkBugCheckRegions.c)
 *     sub_140555504 @ 0x140555504 (sub_140555504.c)
 *     PopMarkComponentsBootPhase @ 0x140C00E30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  PVOID v1; // r11
  __int64 v3; // r10
  __int64 *v4; // r9
  __int64 v5; // rdx
  _KPROCESS *v6; // rax
  char v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]
  unsigned __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v1 = VirtualAddress;
  if ( (__int64)VirtualAddress >> 47 != -1 && (__int64)VirtualAddress >> 47 != 0 )
    return 0;
  v12 = (((unsigned __int64)VirtualAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 4LL;
  while ( 1 )
  {
    v4 = (__int64 *)*(&v11 + v3--);
    v5 = *v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v5 & 1) == 0 )
        return 0;
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        v6 = MiPteHasShadow();
        if ( v6 )
        {
          KernelWaitTime = v6[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              v7 |= 0x20u;
            LOBYTE(v5) = v7 | 0x42;
            if ( (v10 & 0x42) == 0 )
              LOBYTE(v5) = v7;
          }
        }
      }
    }
    if ( (v5 & 1) == 0 )
      return 0;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( !v3 )
      return 1;
  }
  return (unsigned __int64)v1 < 0xFFFFF68000000000uLL || (unsigned __int64)v1 > 0xFFFFF6FFFFFFFFFFuLL;
}

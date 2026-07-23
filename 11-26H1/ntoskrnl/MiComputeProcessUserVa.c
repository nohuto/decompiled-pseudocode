/*
 * XREFs of MiComputeProcessUserVa @ 0x140A086A0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 *     MiUpdateChargedWsles @ 0x140526724 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  __int16 v13; // ax

  v4 = *(_QWORD *)(a1 + 1040);
  *a4 = 0LL;
  v9 = 0x7FFFFFFF0000LL;
  *(_QWORD *)(v4 + 1168) = v4 + 1160;
  *(_QWORD *)(v4 + 1160) = v4 + 1160;
  if ( !(unsigned int)MmGetMinWsPagePriority() && (*(_DWORD *)(v10 + 1532) & 1) == 0 )
  {
    result = MiChargeFullProcessCommitment(v10, 4uLL);
    if ( (int)result < 0 )
      return result;
    MiUpdateChargedWsles(a1 + 1024, 4uLL);
  }
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
      {
        v12 = *(_QWORD *)MiSectionControlArea(a3);
        if ( (*(_DWORD *)(a1 + 500) & 0x20000) == 0 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v12 + 56) + 44LL) & 0x20) != 0 || (*(_DWORD *)(a1 + 500) & 0x200) != 0 )
          {
            if ( *(_QWORD *)(a1 + 784) )
            {
              v13 = *(_WORD *)(a1 + 1772);
              if ( v13 == 332 || v13 == 452 )
              {
                v9 = 4294901760LL;
                *a4 = 0x100000000LL;
                _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x200u);
              }
            }
          }
          else
          {
            v9 = 2147418112LL;
            *a4 = 0x100000000LL;
          }
        }
      }
    }
  }
  if ( dword_140FBF220 )
  {
    if ( v9 > 0x80000000 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x200000u);
  }
  *(_QWORD *)(a1 + 872) = v9;
  return 0LL;
}

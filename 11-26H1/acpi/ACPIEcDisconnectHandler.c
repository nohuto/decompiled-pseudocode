/*
 * XREFs of ACPIEcDisconnectHandler @ 0x1400AF810
 * Callers:
 *     ACPIEcInternalControl @ 0x1400AEC08 (ACPIEcInternalControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcDisconnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rbp
  unsigned __int64 v6; // rdi
  int v7; // r14d
  PVOID v8; // r12
  unsigned __int64 v9; // rdi
  unsigned int v10; // esi
  KIRQL v11; // r11
  int v12; // edx
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_BYTE **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = (unsigned __int8)*v4;
  v7 = 1 << *v4;
  v8 = MmLockPagableDataSection(ACPIEcDisconnectHandler);
  v9 = v6 >> 5;
  v10 = -1073741823;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v12 = *(_DWORD *)(a1 + 4 * v9 + 156);
  if ( (v12 & v7) != 0 )
  {
    v10 = 0;
    *(_DWORD *)(a1 + 4 * v9 + 156) = ~v7 & v12;
    v13 = *(unsigned __int8 *)((unsigned __int8)*v4 + a1 + 188);
    v14 = *(_DWORD *)(a1 + 4 * v9 + 124);
    if ( (v14 & v7) != 0 )
    {
      *(_DWORD *)(a1 + 4 * v9 + 124) = ~v7 & v14;
      v15 = *(unsigned __int8 *)(a1 + 446);
      while ( (_DWORD)v15 )
      {
        v16 = *(_QWORD *)(a1 + 456);
        v17 = 3 * v15;
        v15 = *(unsigned __int8 *)(v16 + 24 * v15);
        if ( (_DWORD)v15 == (_DWORD)v13 )
        {
          *(_BYTE *)(v16 + 8 * v17) = *(_BYTE *)(v16 + 24 * v13);
          break;
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 456) + 24 * v13) = *(_BYTE *)(a1 + 447);
    *(_BYTE *)(a1 + 447) = v13;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v11);
  MmUnlockPagableImageSection(v8);
  return v10;
}

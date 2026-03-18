/*
 * XREFs of VfSuspectDriversGetVerifierInformation @ 0x140C463F0
 * Callers:
 *     VfGetVerifierInformation @ 0x14051A5C4 (VfGetVerifierInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     VfTargetDriversGetCounters @ 0x140C29044 (VfTargetDriversGetCounters.c)
 *     VfTargetDriversGetZeroCounters @ 0x140C290B8 (VfTargetDriversGetZeroCounters.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 */

__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // r14d
  int v8; // ebp
  __int64 *v9; // r15
  __int64 v10; // r13
  size_t v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // r8
  char v14; // cl
  __int16 v15; // r9
  void *v16; // rcx

  v6 = a1;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock(a1);
  v9 = (__int64 *)VfSuspectDriversList;
  while ( v9 != &VfSuspectDriversList )
  {
    v10 = (__int64)v9;
    v9 = (__int64 *)*v9;
    v6 += v7;
    v11 = *(unsigned __int16 *)(v10 + 40);
    v7 = (v11 + (a5 != 0 ? 281 : 153)) & 0xFFFFFFF8;
    *a3 += v7;
    if ( *a3 > a2 )
    {
      v8 = -1073741820;
      break;
    }
    *(_DWORD *)v6 = v7;
    v12 = &VfRuleClasses;
    *(_DWORD *)(v6 + 4) = MmVerifierData;
    v13 = 2LL;
    do
    {
      *(_DWORD *)((char *)v12 + v6 - (_QWORD)&VfRuleClasses + 8) = *(_DWORD *)v12;
      v12 = (__int64 *)((char *)v12 + 4);
      --v13;
    }
    while ( v13 );
    v14 = VfClearanceFlag;
    *(_DWORD *)(v6 + 16) = VfTriageContext;
    *(_DWORD *)(v6 + 20) = ViVerifyAllDrivers & 1 | *(_DWORD *)(v6 + 20) & 0xFFFFFFFC | (2 * (v14 & 1));
    *(_DWORD *)(v6 + 40) = dword_140F08684;
    *(_DWORD *)(v6 + 44) = dword_140F08688;
    *(_DWORD *)(v6 + 92) = dword_140F086BC;
    *(_DWORD *)(v6 + 48) = dword_140F0868C;
    *(_DWORD *)(v6 + 52) = dword_140F08690;
    *(_DWORD *)(v6 + 56) = dword_140F08694;
    *(_DWORD *)(v6 + 60) = dword_140F08698;
    *(_DWORD *)(v6 + 64) = dword_140F0869C;
    *(_DWORD *)(v6 + 68) = dword_140F086A0;
    *(_DWORD *)(v6 + 72) = dword_140F086A4;
    *(_DWORD *)(v6 + 76) = dword_140F086A8;
    *(_DWORD *)(v6 + 80) = dword_140F086AC;
    *(_DWORD *)(v6 + 84) = *(_DWORD *)(v10 + 16);
    *(_DWORD *)(v6 + 88) = *(_DWORD *)(v10 + 20);
    if ( *(_DWORD *)(v10 + 16) <= *(_DWORD *)(v10 + 20) )
    {
      VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
    }
    else
    {
      VfTargetDriversGetCounters(v10, v6, a5);
      v15 = 2;
    }
    *(_WORD *)(v6 + 24) = v11;
    *(_WORD *)(v6 + 26) = v15 + v11;
    v16 = (void *)(v6 + (a5 != 0 ? 272 : 144));
    *(_QWORD *)(v6 + 32) = v16;
    memmove(v16, *(const void **)(v10 + 48), v11);
    *(_WORD *)(*(_QWORD *)(v6 + 32) + 2 * (v11 >> 1)) = 0;
    *(_QWORD *)(v6 + 32) += a4 - a1;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 >= 0 )
    *(_DWORD *)v6 = 0;
  return (unsigned int)v8;
}

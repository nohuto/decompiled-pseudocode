/*
 * XREFs of ExtEnvSetVpptTarget @ 0x1404358D0
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x140434048 (HalpVpptUpdatePhysicalTimer.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExtEnvSetVpptTarget(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  signed int v7; // ebx
  int v8; // esi
  unsigned int v9; // r14d
  _DWORD *LinesForGsiRange; // rax
  char v11; // r14
  unsigned __int8 v12; // al
  __int64 *v13; // r8
  __int64 *v14; // rdx
  ULONG_PTR *v15; // rax
  ULONG_PTR *v16; // rdx
  ULONG_PTR *v17; // rax
  ULONG_PTR *v18; // rcx
  signed int v19; // r8d
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // r14d
  _DWORD *v23; // rax
  __int64 result; // rax
  __int64 v25; // [rsp+38h] [rbp-39h] BYREF
  __int128 v26; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-19h] BYREF
  int v28; // [rsp+5Ch] [rbp-15h]
  char v29; // [rsp+60h] [rbp-11h]
  int v30; // [rsp+64h] [rbp-Dh]
  int v31; // [rsp+68h] [rbp-9h]
  __int128 v32; // [rsp+70h] [rbp-1h]
  int v33; // [rsp+80h] [rbp+Fh]
  int v34; // [rsp+90h] [rbp+1Fh]

  v2 = a2;
  v26 = 0LL;
  memset_0(&v27, 0, 0x58uLL);
  v3 = (_DWORD *)HalpAlwaysOnTimer;
  v4 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v2);
  *((_QWORD *)&v26 + 1) = (unsigned __int16)(v4 >> 6);
  *(_QWORD *)&v26 = 1LL << v4;
  if ( HalpAlwaysOnTimer && *(_DWORD *)(HalpAlwaysOnTimer + 228) == 12 )
  {
    v28 = 211;
    v5 = v33 & 0xC0000000 | 4;
  }
  else
  {
    v3 = (_DWORD *)HalpClockTimer;
    if ( *(_DWORD *)(HalpClockTimer + 228) != 12 )
      KeBugCheckEx(0x5Cu, 0x114uLL, 0LL, 0xFFFFFFFFC00000BBuLL, 0LL);
    v5 = v33 & 0xC0000000;
    v28 = 209;
  }
  v29 = 13;
  v33 = v5 | 0x40000000;
  v30 = v3[23];
  v31 = v3[24];
  v6 = v3[56];
  v32 = v26;
  if ( (v6 & 0x200) != 0 )
  {
    v9 = v3[22];
    LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v9, v9 + 1);
    if ( !LinesForGsiRange )
      KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, 0xFFFFFFFFC0000225uLL, 1uLL);
    v8 = LinesForGsiRange[4];
    v7 = v9 + LinesForGsiRange[5] - LinesForGsiRange[7];
  }
  else
  {
    if ( (v6 & 0x100) == 0 )
      KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, 0xFFFFFFFFC00000BBuLL, 2uLL);
    v7 = v3[21];
    if ( (unsigned int)v7 < 8 )
    {
      v8 = 45056;
    }
    else
    {
      v8 = 45057;
      v7 -= 8;
    }
  }
  v11 = 0;
  v12 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v13 = (__int64 *)HalpInterruptOverrides;
  while ( v13 != &HalpInterruptOverrides )
  {
    v14 = v13;
    v13 = (__int64 *)*v13;
    if ( *((_DWORD *)v14 + 4) == v8 && *((_DWORD *)v14 + 5) == v7 )
    {
      v11 = 1;
      v25 = v14[3];
      v7 = HIDWORD(v25);
      v8 = v25;
      v30 = *((_DWORD *)v14 + 9);
      v31 = *((_DWORD *)v14 + 8);
      break;
    }
  }
  HalpReleaseHighLevelLock(&HalpInterruptOverridesLock, v12);
  if ( !v11 && *(_DWORD *)(HalpInterruptController + 240) == 2 && (unsigned int)(v8 - 45056) <= 1 )
  {
    v22 = v7;
    if ( v8 == 45057 )
      v22 = v7 + 8;
    v23 = HalpInterruptFindLinesForGsiRange(v22, v22 + 1);
    if ( v23 )
    {
      v8 = v23[4];
      v7 = v22 + v23[5] - v23[7];
    }
  }
  v15 = HalpInterruptLookupController(v8);
  if ( !v15 )
    goto LABEL_25;
  v16 = v15 + 33;
  v17 = (ULONG_PTR *)v15[33];
  do
  {
    if ( v17 == v16 )
      goto LABEL_25;
    v18 = v17;
    v17 = (ULONG_PTR *)*v17;
    v19 = *((_DWORD *)v18 + 5);
  }
  while ( v19 > v7 || *((_DWORD *)v18 + 6) <= v7 );
  v20 = v7 - v19;
  if ( !v18 || (v21 = *((_DWORD *)v18 + 7), v21 == -1) )
LABEL_25:
    KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, 0xFFFFFFFFC000000DuLL, 3uLL);
  v27 = 0;
  LODWORD(v25) = v20 + v21;
  v34 = v20 + v21;
  result = HalpInterruptSetDestination(&v27, (__int64)&v26, (unsigned int *)&v25);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x114uLL, (ULONG_PTR)v3, (int)result, 4uLL);
  return result;
}

/*
 * XREFs of ObSetRefTraceInformationEx @ 0x1407C7628
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ObpStartRuntimeStackTraceEx @ 0x1407C8434 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ObSetRefTraceInformationEx(void *Src, unsigned int a2)
{
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned int v5; // ebx
  char v6; // dl
  unsigned int started; // eax
  int v8; // ebx
  size_t v9; // rsi
  unsigned __int64 v10; // r8
  void *v11; // rax
  int v12; // esi
  unsigned __int16 v13; // bx
  void *Memory; // rax
  PVOID P[2]; // [rsp+40h] [rbp-78h] BYREF
  PVOID v17[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v18; // [rsp+60h] [rbp-58h] BYREF
  __int128 v19; // [rsp+70h] [rbp-48h]
  __int128 v20; // [rsp+80h] [rbp-38h]
  void *Srca; // [rsp+90h] [rbp-28h]
  int v22; // [rsp+98h] [rbp-20h]
  int v23; // [rsp+9Ch] [rbp-1Ch]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  Srca = 0LL;
  v22 = 0;
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
  {
    v5 = -1073741790;
    goto LABEL_37;
  }
  if ( a2 < 0x40 )
    goto LABEL_4;
  if ( PreviousMode )
    RtlCopyFromUser(&v18, Src, 0x40uLL);
  else
    RtlCopyVolatileMemory(&v18, Src, 0x40uLL);
  if ( (_DWORD)v18 != 2 )
    goto LABEL_4;
  v6 = v19;
  if ( (v19 & 1) == 0 )
  {
    started = ObpStopRuntimeStackTrace();
LABEL_11:
    v5 = started;
    goto LABEL_37;
  }
  v8 = ((((unsigned __int8)v19 >> 1) & 1) << 6) + 2;
  if ( (v19 & 4) == 0 )
    goto LABEL_25;
  if ( !WORD4(v20) )
  {
LABEL_24:
    v8 |= 0x10u;
LABEL_25:
    v12 = v8 | 0x80;
    if ( (v6 & 8) == 0 )
      v12 = v8;
    v13 = WORD4(v19);
    if ( !WORD4(v19) )
      goto LABEL_36;
    if ( (BYTE8(v19) & 1) == 0 )
    {
      if ( WORD4(v19) >= 0x80u )
        v13 = 126;
      LOWORD(P[0]) = v13;
      WORD1(P[0]) = v13 + 2;
      Memory = (void *)ObpTraceAllocateMemory((unsigned __int16)(v13 + 2));
      P[1] = Memory;
      if ( !Memory )
        goto LABEL_19;
      if ( PreviousMode )
        RtlCopyFromUser(Memory, (void *)v20, v13);
      else
        RtlCopyVolatileMemory(Memory, (const void *)v20, v13);
      v12 |= 0x20u;
LABEL_36:
      started = ObpStartRuntimeStackTraceEx(v12, (unsigned int)v17, (unsigned int)P, DWORD2(v18), v22, v23);
      goto LABEL_11;
    }
LABEL_4:
    v5 = -1073741811;
    goto LABEL_37;
  }
  if ( (BYTE8(v20) & 1) != 0 )
    goto LABEL_4;
  v9 = WORD4(v20);
  v10 = ((unsigned __int64)WORD4(v20) >> 1) % 5;
  if ( v10 )
  {
    if ( v10 != 4 )
      goto LABEL_4;
  }
  if ( WORD4(v20) >= 0xFFFEu )
    goto LABEL_4;
  LOWORD(v17[0]) = WORD4(v20);
  WORD1(v17[0]) = WORD4(v20) + 2;
  v11 = (void *)ObpTraceAllocateMemory((unsigned __int16)(WORD4(v20) + 2));
  v17[1] = v11;
  if ( v11 )
  {
    if ( PreviousMode )
      RtlCopyFromUser(v11, Srca, v9);
    else
      RtlCopyVolatileMemory(v11, Srca, v9);
    v6 = v19;
    goto LABEL_24;
  }
LABEL_19:
  v5 = -1073741801;
LABEL_37:
  if ( P[1] )
    ObpTraceFreeMemory(P[1]);
  if ( v17[1] )
    ObpTraceFreeMemory(v17[1]);
  return v5;
}

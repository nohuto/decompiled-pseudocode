/*
 * XREFs of ProcessMultipleCommandsInSpecificQueue @ 0x14002BB9C
 * Callers:
 *     ProcessMultipleCommands @ 0x14002BADC (ProcessMultipleCommands.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x14000EDD0 (IsInternalSrb.c)
 *     ProcessCommandTrace @ 0x14000F260 (ProcessCommandTrace.c)
 *     AssignCommandId @ 0x14000F600 (AssignCommandId.c)
 */

char __fastcall ProcessMultipleCommandsInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned __int16 v6; // bx
  __int64 v7; // r15
  __int64 v9; // rsi
  char v10; // r12
  __int64 SrbExtension; // rbx
  __int16 v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  unsigned __int16 *v15; // rdx
  char v16; // al
  _WORD *v17; // r10
  _WORD *v18; // r9
  _OWORD *v19; // rdx
  int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  signed __int32 v29[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v30; // [rsp+20h] [rbp-50h]
  int *v31; // [rsp+28h] [rbp-48h]
  int *v32; // [rsp+30h] [rbp-40h]
  unsigned __int16 *v33; // [rsp+40h] [rbp-30h]
  _QWORD v34[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v35; // [rsp+58h] [rbp-18h]
  unsigned int v36; // [rsp+B8h] [rbp+48h] BYREF
  _WORD *v37; // [rsp+C0h] [rbp+50h]
  int v38; // [rsp+C8h] [rbp+58h] BYREF

  LOWORD(v38) = a4;
  v34[1] = 0LL;
  v36 = 0;
  v34[0] = 1LL;
  v6 = 0;
  v7 = 0LL;
  v9 = a2;
  v30 = v34;
  v10 = 1;
  v35 = 0LL;
  StorPortExtendedFunction(93LL, a1, 1LL, a3 + 64);
  for ( ; v9; v9 = *(_QWORD *)(v9 + 40) )
  {
    SrbExtension = GetSrbExtension(v9);
    if ( *(_WORD *)(a3 + 48) == v12 )
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 976), 1u);
    v13 = *(_WORD *)(a3 + 48);
    v37 = (_WORD *)(SrbExtension + 4216);
    v33 = (unsigned __int16 *)(SrbExtension + 4214);
    if ( AssignCommandId(a1, v13, (_WORD *)(SrbExtension + 4216), (unsigned __int16 *)(SrbExtension + 4214)) )
    {
      if ( *(_BYTE *)(v9 + 2) == 40 )
        v14 = *(_BYTE *)(*(unsigned int *)(v9 + 52) + v9 + 10);
      else
        v14 = *(_BYTE *)(v9 + 7);
      v36 = v14;
      if ( *(_WORD *)(a3 + 48) )
        v7 = 392LL * *(unsigned __int16 *)(a3 + 58) + *(_QWORD *)(a1 + 944) - 392LL;
      *(_WORD *)(SrbExtension + 4098) = *(_WORD *)(SrbExtension + 4214);
      ProcessCommandTrace(a1, v9, (_DWORD *)(SrbExtension + 4096));
      v15 = v33;
      *(_QWORD *)(32LL * *v33 + *(_QWORD *)(a3 + 32) + 16) = v9;
      *(_WORD *)(32LL * *v15 + *(_QWORD *)(a3 + 32) + 24) = *v37;
      v16 = IsInternalSrb(a1, a2);
      v17 = v37;
      v18 = v33;
      v19 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)*v37);
      *v19 = *(_OWORD *)(SrbExtension + 4096);
      v19[1] = *(_OWORD *)(SrbExtension + 4112);
      v19[2] = *(_OWORD *)(SrbExtension + 4128);
      v19[3] = *(_OWORD *)(SrbExtension + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)*v17 + 8) = *v18;
      *(_DWORD *)(32LL * (unsigned __int16)*v18 + *(_QWORD *)(a3 + 32)) = (16 * ((16 * v36) | v16 & 1)) | 8;
      _InterlockedAdd16((volatile signed __int16 *)(a3 + 136), 1u);
      v6 = *v17 + 1;
      v36 = (unsigned __int16)*v17 + 1;
    }
    else
    {
      v6 = v36;
      v10 = 0;
      *(_BYTE *)(v9 + 3) = 5;
    }
  }
  v20 = 0;
  if ( v6 != (unsigned __int16)v38 )
    v20 = v6;
  **(_DWORD **)(a3 + 16) = v20;
  _InterlockedOr(v29, 0);
  StorPortNotification(4100LL, a1, v34);
  if ( v7 && *(_BYTE *)(v7 + 248) )
  {
    v36 = 0;
    StorPortExtendedFunction(92LL, a1, &v36, v21);
    v22 = *(_QWORD *)(v7 + 256);
    if ( v22 )
    {
      v26 = -10LL * *(unsigned int *)(v7 + 252);
      LOBYTE(v38) = 0;
      v27 = *(_QWORD *)(v22 + 8LL * v36);
      v32 = &v38;
      v31 = 0LL;
      v30 = 0LL;
      StorPortExtendedFunction(89LL, a1, v27, v26);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
      {
        v23 = *(_QWORD *)(a1 + 264);
        v24 = *(_QWORD *)(v23 + 72LL * v36 + 8);
        if ( v24 )
        {
          LODWORD(v37) = 0;
          LOWORD(v37) = *(_WORD *)(v23 + 72LL * v36 + 16);
          _BitScanForward64(&v25, v24);
          *(_DWORD *)((char *)&v37 + 2) = v25;
          StorPortNotification(4107LL, a1, v7 + 264);
        }
      }
      v31 = &v38;
      v30 = 0LL;
      v38 = 0;
      StorPortNotification(4098LL, a1, v7 + 264);
    }
  }
  if ( !*(_WORD *)(a3 + 48) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 976));
  return v10;
}

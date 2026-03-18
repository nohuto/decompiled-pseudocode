/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x14000A910
 * Callers:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x14000EDD0 (IsInternalSrb.c)
 *     ProcessCommandTrace @ 0x14000F260 (ProcessCommandTrace.c)
 *     AssignCommandId @ 0x14000F600 (AssignCommandId.c)
 *     NVMeIceAddressIsExclusionRange @ 0x140031514 (NVMeIceAddressIsExclusionRange.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 */

char __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 SrbExtension; // r13
  __int64 v8; // r8
  int v9; // eax
  _WORD *v10; // rbx
  bool v11; // zf
  __int64 v12; // r12
  unsigned __int8 v13; // cl
  char v14; // al
  int v15; // ebx
  _OWORD *v16; // rdx
  _DWORD *v17; // rsi
  int v18; // ecx
  __int64 v19; // r9
  char result; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  signed __int32 v31[6]; // [rsp+8h] [rbp-49h] BYREF
  __int64 v32; // [rsp+28h] [rbp-29h]
  _BYTE *v33; // [rsp+30h] [rbp-21h]
  _BYTE *v34; // [rsp+38h] [rbp-19h]
  __int64 v35; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-1h] BYREF
  __int128 v37; // [rsp+60h] [rbp+Fh]
  _BYTE v38[6]; // [rsp+B8h] [rbp+67h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp+77h] BYREF
  unsigned __int16 v40; // [rsp+D0h] [rbp+7Fh]

  v40 = a4;
  v36[0] = 1LL;
  SrbExtension = GetSrbExtension(a2);
  v36[1] = 0LL;
  v37 = 0LL;
  if ( !*(_WORD *)(v8 + 48) )
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 976));
  if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 )
  {
    v22 = GetSrbExtension(a2);
    if ( (*(_BYTE *)(v22 + 4225) & 2) != 0 )
    {
      v23 = *(_DWORD *)(v22 + 4096);
      if ( (unsigned __int8)v23 != 1
        && (unsigned __int8)v23 != 2
        && (unsigned __int8)v23 != 5
        && !(unsigned __int8)NVMeIceAddressIsExclusionRange(a1, *(_QWORD *)(SrbExtension + 4120)) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 4476));
        LOBYTE(v24) = 1;
        if ( (unsigned int)NVMeIceConfigureSrbExclusionAddress(a1, a2, v24) )
        {
          *(_BYTE *)(a2 + 3) = 4;
          result = 0;
          goto LABEL_18;
        }
        *(_BYTE *)(SrbExtension + 4225) |= 0x40u;
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 24);
  if ( (v9 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    result = 0;
  }
  else if ( (v9 & 0x100) != 0 && *(_WORD *)(a3 + 48) )
  {
    *(_BYTE *)(a2 + 3) = 2;
    result = 0;
  }
  else
  {
    StorPortExtendedFunction(93LL, a1, 1LL, a3 + 64);
    v10 = (_WORD *)(SrbExtension + 4214);
    if ( (unsigned __int8)AssignCommandId(
                            a1,
                            *(unsigned __int16 *)(a3 + 48),
                            SrbExtension + 4216,
                            SrbExtension + 4214,
                            v36) )
    {
      v11 = *(_BYTE *)(a2 + 2) == 40;
      v12 = 0LL;
      v35 = 0LL;
      if ( v11 )
        v13 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v13 = *(_BYTE *)(a2 + 7);
      *(_DWORD *)v38 = v13;
      if ( *(_WORD *)(a3 + 48) )
        v12 = 392LL * *(unsigned __int16 *)(a3 + 58) + *(_QWORD *)(a1 + 944) - 392LL;
      *(_WORD *)(SrbExtension + 4098) = *v10;
      ProcessCommandTrace(a1, a2, SrbExtension + 4096);
      *(_QWORD *)(32LL * (unsigned __int16)*v10 + *(_QWORD *)(a3 + 32) + 16) = a2;
      *(_WORD *)(32LL * (unsigned __int16)*v10 + *(_QWORD *)(a3 + 32) + 24) = *(_WORD *)(SrbExtension + 4216);
      v14 = IsInternalSrb(a1, a2);
      v15 = (16 * ((16 * *(_DWORD *)v38) | v14 & 1)) | 8;
      v16 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4216));
      *v16 = *(_OWORD *)(SrbExtension + 4096);
      v16[1] = *(_OWORD *)(SrbExtension + 4112);
      v16[2] = *(_OWORD *)(SrbExtension + 4128);
      v17 = (_DWORD *)(a1 + 108);
      v16[3] = *(_OWORD *)(SrbExtension + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4216) + 8) = *(_WORD *)(SrbExtension + 4214);
      if ( ((*(_BYTE *)(a1 + 21) & 1) != 0 || (*v17 & 2) != 0) && !(unsigned __int8)IsInternalSrb(a1, a2) )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v35);
        *(_QWORD *)(32LL * *(unsigned __int16 *)(SrbExtension + 4214) + *(_QWORD *)(a3 + 32) + 8) = v35;
        v21 = *(_QWORD *)(a3 + 40);
        if ( v21 )
        {
          *(_QWORD *)(v21 + 16LL * *(unsigned __int16 *)(SrbExtension + 4214)) = 0LL;
          *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL * *(unsigned __int16 *)(SrbExtension + 4214) + 8) = 0LL;
        }
        v15 |= 0x20u;
      }
      *(_DWORD *)(32LL * *(unsigned __int16 *)(SrbExtension + 4214) + *(_QWORD *)(a3 + 32)) = v15;
      _InterlockedIncrement16((volatile signed __int16 *)(a3 + 136));
      v18 = 0;
      if ( (unsigned __int16)(*(_WORD *)(SrbExtension + 4216) + 1) != v40 )
        v18 = (unsigned __int16)(*(_WORD *)(SrbExtension + 4216) + 1);
      **(_DWORD **)(a3 + 16) = v18;
      _InterlockedOr(v31, 0);
      if ( (v15 & 0x20) != 0 && (*v17 & 2) != 0 && *(_QWORD *)(a3 + 40) )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v35);
        *(_QWORD *)(*(_QWORD *)(a3 + 40) + 16LL * *(unsigned __int16 *)(SrbExtension + 4214)) = v35;
      }
      StorPortNotification(4100LL, a1, v36);
      if ( v12 && *(_BYTE *)(v12 + 248) )
      {
        v39 = 0;
        StorPortExtendedFunction(92LL, a1, &v39, v19);
        v25 = *(_QWORD *)(v12 + 256);
        if ( v25 )
        {
          v29 = -10LL * *(unsigned int *)(v12 + 252);
          v38[0] = 0;
          v30 = *(_QWORD *)(v25 + 8LL * v39);
          v34 = v38;
          v33 = 0LL;
          v32 = 0LL;
          StorPortExtendedFunction(89LL, a1, v30, v29);
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
          {
            v26 = *(_QWORD *)(a1 + 264);
            v27 = *(_QWORD *)(v26 + 72LL * v39 + 8);
            if ( v27 )
            {
              *(_DWORD *)v38 = 0;
              *(_WORD *)v38 = *(_WORD *)(v26 + 72LL * v39 + 16);
              _BitScanForward64(&v28, v27);
              *(_DWORD *)&v38[2] = v28;
              StorPortNotification(4107LL, a1, v12 + 264);
            }
          }
          v33 = v38;
          v32 = 0LL;
          *(_DWORD *)v38 = 0;
          StorPortNotification(4098LL, a1, v12 + 264);
        }
      }
      result = 1;
    }
    else
    {
      StorPortNotification(4100LL, a1, v36);
      result = 0;
      *(_BYTE *)(a2 + 3) = 5;
    }
  }
LABEL_18:
  if ( !*(_WORD *)(a3 + 48) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 976));
  return result;
}

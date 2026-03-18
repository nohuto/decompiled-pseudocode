/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x14002C2B0
 * Callers:
 *     HUBDSM_SettingSEL @ 0x140024990 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SetSelUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // r10
  _BYTE *v2; // r11
  unsigned __int16 v3; // r9
  int v5; // r8d
  unsigned __int16 v6; // dx
  __int16 v7; // dx
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // dx
  int v10; // eax
  unsigned int v11; // edx
  char v12; // al
  __int16 v13; // dx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v2 = (char *)a1 + 2204;
  v3 = *((_WORD *)a1 + 1100);
  v5 = *(unsigned __int8 *)(*a1 + 240);
  if ( v3 <= *(_WORD *)(*a1 + 2490) )
    v3 = *(_WORD *)(*a1 + 2490);
  v6 = *(_WORD *)(v1 + 2494) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2496)) + 500) / 1000;
  if ( v3 <= v6 )
  {
    *((_BYTE *)a1 + 2205) = v6;
  }
  else
  {
    *((_BYTE *)a1 + 2205) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 556, 1u);
  }
  v7 = v3 + *(_WORD *)(v1 + 2502) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1203) + 5) / 0xA;
  v8 = *((_WORD *)a1 + 1101);
  *((_WORD *)a1 + 1105) = v7;
  if ( v8 <= *(_WORD *)(v1 + 2492) )
    v8 = *(_WORD *)(v1 + 2492);
  v9 = *(_WORD *)(v1 + 2498) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2500)) + 500) / 1000;
  if ( v8 <= v9 )
  {
    *((_WORD *)a1 + 1104) = v9;
  }
  else
  {
    *((_WORD *)a1 + 1104) = v8;
    _InterlockedOr((volatile signed __int32 *)a1 + 556, 2u);
  }
  v10 = *((unsigned __int16 *)a1 + 1295);
  *((_WORD *)a1 + 1106) = v8 + *(_WORD *)(v1 + 2504) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1203) + 5) / 0xA;
  v11 = *((unsigned __int16 *)a1 + 1294);
  if ( (_BYTE)v5 )
    v11 = (800 * v5 + 2200 + (v5 + 1) * (v10 + v11)) / 0x3E8;
  else
    LOWORD(v11) = v10 + v11;
  v12 = *((_BYTE *)a1 + 2205) + v11;
  v13 = *((_WORD *)a1 + 1104) + v11;
  *v2 = v12 + 5;
  *((_WORD *)a1 + 1103) = v13 + 5;
  v14 = *((_BYTE *)a1 + 1520);
  *((_BYTE *)a1 + 408) &= 0x1Cu;
  v15 = a1[3];
  v16 = *a1;
  *((_BYTE *)a1 + 409) = 48;
  *((_DWORD *)a1 + 103) = 393216;
  *((_WORD *)a1 + 205) = 0;
  result = HUBMISC_ControlTransfer(
             v16,
             v15,
             (_DWORD)a1,
             (int)a1 + 256,
             (__int64)HUBDTX_ControlTransferComplete,
             (__int64)v2,
             6,
             1,
             v14);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x6Du,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v18);
    }
    return HUBSM_AddEvent((__int64)(a1 + 64), 4004);
  }
  return result;
}

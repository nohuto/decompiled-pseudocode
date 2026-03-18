/*
 * XREFs of PpmParkEvalualteSmtUnparkPolicy @ 0x140259220
 * Callers:
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmParkEvalualteSmtUnparkPolicy(unsigned __int8 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  __int64 SystemCallNumber; // r9
  _WORD *v6; // r8
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+32h] [rbp-26h]
  __int16 v11; // [rsp+36h] [rbp-22h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = a1;
  v10 = 0;
  v11 = 0;
  v13 = 0;
  if ( PpmParkSmtUnparkingPolicy != a1 )
  {
    BYTE2(PopModernStandbyStateNotify.ThreadLock) = 0;
    LOBYTE(v1) = a1 < 2u;
    LOWORD(PopModernStandbyStateNotify.ThreadLock) = 1;
    PopModernStandbyStateNotify.ApcStateFill[16] = a1 < 2u;
    if ( a1 < 2u )
    {
      v3 = 0;
      v8[1] = qword_140E0B638[0];
      v8[0] = &PpmCheckRegistered;
      v9 = 0;
      while ( 1 )
      {
        LODWORD(v1) = KeEnumerateNextProcessor(&v13, v8);
        if ( (_DWORD)v1 )
          break;
        v4 = __popcnt(*(_QWORD *)(KeGetPrcb(v13) + 36512));
        if ( v3 )
        {
          if ( v3 != v4 )
            PopModernStandbyStateNotify.ApcStateFill[16] = 0;
        }
        else
        {
          v3 = v4;
        }
      }
      if ( PopModernStandbyStateNotify.ApcStateFill[16] )
      {
        LOWORD(PopModernStandbyStateNotify.ThreadLock) = v3;
        BYTE2(PopModernStandbyStateNotify.ThreadLock) = (_BYTE)v2 == 1;
      }
    }
    if ( PopModernStandbyStateNotify.SystemCallNumber )
    {
      SystemCallNumber = PopModernStandbyStateNotify.SystemCallNumber;
      v6 = (_WORD *)(*(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1150LL);
      do
      {
        LOWORD(v1) = (unsigned int)*(v6 - 571) / (PpmParkMultiparkGranularity != 0);
        *v6 = (_WORD)v1;
        if ( (unsigned __int16)v1 < LOWORD(PopModernStandbyStateNotify.ThreadLock) )
          *v6 = PopModernStandbyStateNotify.ThreadLock;
        v6 += 632;
        --SystemCallNumber;
      }
      while ( SystemCallNumber );
    }
    PpmParkSmtUnparkingPolicy = v2;
    KeSoftParkSmtPolicy = v2;
  }
  return (char)v1;
}

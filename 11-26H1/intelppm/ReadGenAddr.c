/*
 * XREFs of ReadGenAddr @ 0x140001D90
 * Callers:
 *     SetPerfStateIO @ 0x140001360 (SetPerfStateIO.c)
 *     PctSnapPlatformCtrsEx @ 0x140004C64 (PctSnapPlatformCtrsEx.c)
 *     ReadGenAddrHidden @ 0x140005E88 (ReadGenAddrHidden.c)
 *     C2Idle @ 0x140009B50 (C2Idle.c)
 *     C3Idle @ 0x140009C20 (C3Idle.c)
 *     C3IdleCheck @ 0x140009D20 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x140009E50 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadGenAddr(unsigned __int8 *a1)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned __int8 v4; // dl
  unsigned __int64 result; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl

  if ( !a1 )
    return 0LL;
  v2 = *a1;
  if ( (_BYTE)v2 == 126 )
    return *((unsigned int *)a1 + 1);
  v3 = *(_QWORD *)(a1 + 4);
  v4 = a1[3];
  if ( v2 != 1 )
  {
    if ( v2 == 127 && v4 == 64 )
    {
      result = __readmsr(v3);
      goto LABEL_7;
    }
    return 0LL;
  }
  switch ( v4 )
  {
    case 8u:
      LOBYTE(result) = __inbyte(v3);
      result = (unsigned __int8)result;
      break;
    case 0x10u:
      LOWORD(result) = __inword(v3);
      result = (unsigned __int16)result;
      break;
    case 0x20u:
      LODWORD(result) = __indword(v3);
      result = (unsigned int)result;
      break;
    default:
      return 0LL;
  }
LABEL_7:
  if ( result )
  {
    v6 = a1[2];
    if ( v6 )
      result >>= v6;
    v7 = a1[1];
    if ( v7 < 0x40u )
      result &= (1LL << v7) - 1;
  }
  return result;
}

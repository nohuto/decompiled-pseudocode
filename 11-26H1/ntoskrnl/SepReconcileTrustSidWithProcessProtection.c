/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1402AC7A0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     SeCreateClientSecurity @ 0x140929880 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140929AE0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140929D90 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402AC970 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(
        __int64 a1,
        unsigned __int8 *a2,
        _BYTE *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  int v7; // ecx

  result = *a2;
  v5 = 0LL;
  *a3 = 0;
  v6 = a1;
  *a4 = 0LL;
  if ( (_DWORD)result != 98 )
  {
    a2 = (unsigned __int8 *)0x140000000LL;
    result = (int)result - 18;
    switch ( (int)result )
    {
      case 0:
        v5 = SepRmCapTableLock.Padding[0];
        goto LABEL_3;
      case 31:
        v5 = SepRmCapTableLock.Padding[1];
        goto LABEL_3;
      case 63:
        v5 = SeProcTrustLiteWinSid;
        goto LABEL_3;
      case 64:
        v5 = SepRmCapTableLock.Padding[3];
        goto LABEL_3;
      case 79:
        v5 = SeProcTrustLiteWinTcbSid;
        goto LABEL_3;
      case 96:
        break;
      case 111:
        v5 = SepRmCapTableLock.Padding[4];
        goto LABEL_3;
      default:
        goto LABEL_4;
    }
  }
  v5 = SepRmCapTableLock.Padding[2];
LABEL_3:
  if ( v5 )
  {
    result = RtlIsValidProcessTrustLabelSid(v5, a2, a3);
    if ( !(_BYTE)result )
      goto LABEL_11;
  }
LABEL_4:
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 1) == 2 && *(_BYTE *)v6 == 1 )
    {
      v7 = *(_DWORD *)(v6 + 2);
      if ( !v7 )
      {
        result = 4864LL;
        v7 = *(unsigned __int16 *)(v6 + 6) - 4864;
      }
      if ( !v7 )
      {
        result = *(unsigned int *)(v6 + 8);
        if ( (_DWORD)result || !*(_DWORD *)(v6 + 12) )
        {
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 8) >= (unsigned int)result )
            {
              result = *(unsigned int *)(v6 + 12);
              if ( *(_DWORD *)(v5 + 12) >= (unsigned int)result )
                return result;
            }
          }
          else if ( !(_DWORD)result )
          {
            return result;
          }
        }
      }
    }
LABEL_11:
    *a3 = 1;
    *a4 = v5;
  }
  return result;
}

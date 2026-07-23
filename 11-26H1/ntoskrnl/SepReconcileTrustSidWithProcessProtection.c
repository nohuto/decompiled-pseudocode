/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1403ABEF0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0 (RtlIsValidProcessTrustLabelSid.c)
 */

char __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, unsigned __int8 *a2, _BYTE *a3, _QWORD *a4)
{
  unsigned int v4; // eax
  _DWORD *v5; // r11
  __int64 v6; // r10
  int v7; // ecx

  v4 = *a2;
  v5 = 0LL;
  *a3 = 0;
  v6 = a1;
  *a4 = 0LL;
  if ( v4 != 98 )
  {
    v4 -= 18;
    switch ( v4 )
    {
      case 0u:
        v5 = (_DWORD *)SeProcTrustAuthenticodeSid;
        goto LABEL_3;
      case 0x1Fu:
        v5 = (_DWORD *)SeProcTrustLiteAntimalwareSid;
        goto LABEL_3;
      case 0x3Fu:
        v5 = (_DWORD *)SeProcTrustLiteWinSid;
        goto LABEL_3;
      case 0x40u:
        v5 = (_DWORD *)SeProcTrustWinSid;
        goto LABEL_3;
      case 0x4Fu:
        v5 = (_DWORD *)SeProcTrustLiteWinTcbSid;
        goto LABEL_3;
      case 0x60u:
        break;
      case 0x6Fu:
        v5 = (_DWORD *)SeProcTrustLiteAppSid;
        goto LABEL_3;
      default:
        goto LABEL_4;
    }
  }
  v5 = SeProcTrustWinTcbSid;
LABEL_3:
  if ( v5 )
  {
    LOBYTE(v4) = RtlIsValidProcessTrustLabelSid(v5);
    if ( !(_BYTE)v4 )
      goto LABEL_11;
  }
LABEL_4:
  if ( !v6 )
    return v4;
  if ( *(_BYTE *)(v6 + 1) != 2 || *(_BYTE *)v6 != 1 )
    goto LABEL_11;
  v7 = *(_DWORD *)(v6 + 2);
  if ( !v7 )
  {
    LOBYTE(v4) = 0;
    v7 = *(unsigned __int16 *)(v6 + 6) - 4864;
  }
  if ( v7 )
    goto LABEL_11;
  v4 = *(_DWORD *)(v6 + 8);
  if ( !v4 )
  {
    if ( *(_DWORD *)(v6 + 12) )
      goto LABEL_11;
  }
  if ( !v5 )
  {
    if ( !v4 )
      return v4;
    goto LABEL_11;
  }
  if ( v5[2] < v4 || (v4 = *(_DWORD *)(v6 + 12), v5[3] < v4) )
  {
LABEL_11:
    *a3 = 1;
    *a4 = v5;
  }
  return v4;
}

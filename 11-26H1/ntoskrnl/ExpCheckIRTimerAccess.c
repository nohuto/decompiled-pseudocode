/*
 * XREFs of ExpCheckIRTimerAccess @ 0x140ABF674
 * Callers:
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 *     ExpGetIRTimerDesc @ 0x1404E6C90 (ExpGetIRTimerDesc.c)
 *     ExCheckValidIRTimerId @ 0x1404F2A78 (ExCheckValidIRTimerId.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABF740 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpCheckIRTimerAccess(int a1)
{
  unsigned int v2; // edi
  char v3; // dl
  wchar_t **IRTimerDesc; // r8
  __int64 v5; // rcx
  wchar_t *v6; // rax
  BOOLEAN v7; // al
  unsigned __int16 v9; // [rsp+32h] [rbp+Ah]
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF

  v9 = HIWORD(a1);
  if ( (unsigned __int16)a1 >= 0x14u )
    return 3221225485LL;
  v2 = 0;
  if ( !(_WORD)a1 )
    return 3221225485LL;
  IRTimerDesc = ExpGetIRTimerDesc((unsigned __int16)a1);
  v5 = *((unsigned __int8 *)IRTimerDesc + 16);
  if ( HIWORD(a1) > (unsigned __int16)v5 )
    return 3221225485LL;
  v6 = IRTimerDesc[1];
  if ( v3 )
  {
    IsMember = 0;
    if ( v6 )
    {
      if ( RtlCheckTokenMembership(0LL, v6, &IsMember) < 0 )
        v7 = 0;
      else
        v7 = IsMember;
    }
    else
    {
      LOBYTE(v5) = v3;
      if ( (int)ExpCheckWakeTimerAccess(v5) < 0 || !ExCheckValidIRTimerId(a1, v9) )
        return (unsigned int)-1073741790;
      v7 = 1;
    }
    if ( v7 )
      return v2;
    return (unsigned int)-1073741790;
  }
  if ( v6 || !ExCheckValidIRTimerId(a1, v9) )
    __fastfail(5u);
  return 0LL;
}

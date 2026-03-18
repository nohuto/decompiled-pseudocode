/*
 * XREFs of ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x14017D4C0
 * Callers:
 *     SetProtocolType @ 0x14017D3E0 (SetProtocolType.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgProtocolType<unsigned short>::operator=(int a1, __int16 *a2, int a3)
{
  __int16 v3; // bx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v3 = *a2;
  *(_WORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 68744) = v3;
  return W32GetUserSessionState(v5, v4, v6) + 68744;
}

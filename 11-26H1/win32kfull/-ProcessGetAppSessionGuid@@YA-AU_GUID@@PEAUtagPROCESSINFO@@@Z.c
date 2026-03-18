/*
 * XREFs of ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1402FDC90
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1402556D4 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

struct _GUID *__fastcall ProcessGetAppSessionGuid(struct _GUID *__return_ptr retstr, struct tagPROCESSINFO *a2)
{
  unsigned int v2; // eax
  unsigned __int16 v5; // ax
  struct _KPROCESS *v6; // rcx

  v2 = *((_DWORD *)a2 + 14);
  *retstr = 0LL;
  retstr->Data1 = v2;
  retstr->Data2 = W32GetCurrentWin32kSessionId((__int64)retstr);
  v5 = MEMORY[0xFFFFF780000002C4];
  if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
    v5 = -1;
  v6 = *(struct _KPROCESS **)a2;
  retstr->Data3 = v5;
  *(_QWORD *)retstr->Data4 = PsGetProcessCreateTimeQuadPart(v6);
  return retstr;
}

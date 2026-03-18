/*
 * XREFs of IsDWMGhostHandleGhostMsgPresent @ 0x140005DA4
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE8 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140005F9B (ApiSetQueryApiSetPresence_0.c)
 */

char IsDWMGhostHandleGhostMsgPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140018908 == 1 )
    return 1;
  if ( dword_140018908 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_140018908 = 2 - (v1 != 0);
  return result;
}

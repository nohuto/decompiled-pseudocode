/*
 * XREFs of ??$try_com_query_to@UIDuckingController@@AEAPEAUIAudioStreamInfo@@@wil@@YA_NAEAPEAUIAudioStreamInfo@@PEAPEAUIDuckingController@@@Z @ 0x180028E6C
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180040094 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IDuckingController,IAudioStreamInfo * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_390561ae_7375_4558_aff9_667acfe35ac5, a2) >= 0;
}

/*
 * XREFs of McTemplateU0q_EventWriteTransfer @ 0x18005A854
 * Callers:
 *     _lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator() @ 0x18005A1F0 (_lambda_6b79eb4b576a38d0be641e968c7b0b59_--operator().c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1803C06BC (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0q_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v4[3] = 4LL;
  v4[2] = &v5;
  return McGenEventWrite_EventWriteTransfer(&MICROSOFT_TWINUI_PUBLISHER_Context, a2, a3, 2LL, v4);
}

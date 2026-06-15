/*
 * XREFs of ?ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z @ 0x1800D43C0
 * Callers:
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800C75F0 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::ConnectToNewStreamGroup(CAudioStream *this, struct IStreamGroupProxy *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 560);
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
  {
    v5 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v4 + 72LL))(
           *((_QWORD *)this + 70),
           v5,
           0LL);
    if ( v6 < 0 )
    {
      v7 = 2190LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct IStreamGroupProxy *, __int64))(*(_QWORD *)*v2 + 64LL))(
           *v2,
           v5,
           a2,
           1LL);
    if ( v6 < 0 )
    {
      v7 = 2191LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}

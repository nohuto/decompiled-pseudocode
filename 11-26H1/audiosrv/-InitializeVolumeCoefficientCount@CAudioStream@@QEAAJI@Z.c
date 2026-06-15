/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18003784C
 * Callers:
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@PEBG@Z @ 0x18003E874 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18008C010 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800D49C0 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  unsigned __int64 v3; // rax
  void *v4; // rax
  unsigned int v5; // ebx
  void **v6; // r15
  void *v7; // rcx
  unsigned __int64 v8; // rax
  void *v9; // rax
  void **v10; // rsi
  void *v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rax
  void **v14; // r14
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rdx
  char v19; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+28h] [rbp-30h] BYREF
  char v21; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_DWORD *)this + 20) == a2 )
    return 0LL;
  *((_DWORD *)this + 20) = a2;
  v3 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v3 = -1LL;
  v4 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0;
  v6 = (void **)((char *)this + 512);
  if ( (char *)this + 512 == &v19 )
  {
    if ( !v4 )
      goto LABEL_6;
    v7 = v4;
  }
  else
  {
    v7 = *v6;
    *v6 = v4;
    if ( !v7 )
      goto LABEL_6;
  }
  operator delete(v7);
LABEL_6:
  if ( !*v6 )
  {
    v18 = 198LL;
    goto LABEL_21;
  }
  v8 = 4LL * *((unsigned int *)this + 20);
  if ( !is_mul_ok(*((unsigned int *)this + 20), 4uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (void **)((char *)this + 104);
  if ( (char *)this + 104 == &v20 )
  {
    if ( !v9 )
      goto LABEL_11;
    v11 = v9;
  }
  else
  {
    v11 = *v10;
    *v10 = v9;
    if ( !v11 )
      goto LABEL_11;
  }
  operator delete(v11);
LABEL_11:
  if ( !*v10 )
  {
    v18 = 200LL;
    goto LABEL_21;
  }
  v12 = 4LL * *((unsigned int *)this + 20);
  if ( !is_mul_ok(*((unsigned int *)this + 20), 4uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v14 = (void **)((char *)this + 112);
  if ( (char *)this + 112 == &v21 )
  {
    if ( !v13 )
      goto LABEL_16;
    v15 = v13;
LABEL_32:
    operator delete(v15);
    goto LABEL_16;
  }
  v15 = *v14;
  *v14 = v13;
  if ( v15 )
    goto LABEL_32;
LABEL_16:
  if ( *v14 )
  {
    if ( *((_DWORD *)this + 20) )
    {
      do
      {
        v16 = v5++;
        *((_DWORD *)*v6 + v16) = 1065353216;
        *((_DWORD *)*v10 + v16) = 1065353216;
      }
      while ( v5 < *((_DWORD *)this + 20) );
    }
    return 0LL;
  }
  v18 = 202LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}

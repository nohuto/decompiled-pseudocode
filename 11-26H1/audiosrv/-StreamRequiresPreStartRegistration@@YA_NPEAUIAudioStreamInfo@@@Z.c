/*
 * XREFs of ?StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x180066898
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008DA90 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall StreamRequiresPreStartRegistration(struct IAudioStreamInfo *a1)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v8 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v2 + 24))(a1, &v8) < 0 )
    goto LABEL_5;
  v3 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a1 + 48LL))(a1);
  v4 = v3;
  v5 = v8;
  if ( v3 >= 0x18 )
  {
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8)
    && dword_18018BF10[v4]
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5) )
  {
    LODWORD(v4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 376LL))(v5) != 0 ? v4 : 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 80LL))(
          g_PolicyManager,
          (unsigned int)v4) )
  {
LABEL_5:
    v5 = v8;
    goto LABEL_6;
  }
  v6 = 1;
  v5 = v8;
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}

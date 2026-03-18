/*
 * XREFs of DwmAsyncUpdateSprite @ 0x14017B36C
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x14005CDF0 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14017B158 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     GreProtectSpriteContent @ 0x14022C1CC (GreProtectSpriteContent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int128 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v15; // r15d
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 SessionState; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  _OWORD *v32; // rdx
  unsigned int v33; // eax
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v35; // [rsp+34h] [rbp-CCh]
  __int128 v36; // [rsp+58h] [rbp-A8h]
  _BYTE v37[160]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v38[20]; // [rsp+108h] [rbp+8h]

  v15 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState((_DWORD)Object, a2) + 96) + 4648LL));
  if ( Object )
  {
    memset_0(&v34, 0, 0xECuLL);
    v34 = 15466692;
    LODWORD(v36) = 1073741830;
    v35 = 0x8000;
    *(_QWORD *)((char *)&v36 + 4) = a2;
    *(_QWORD *)&v37[152] = a3;
    HIDWORD(v36) = a4 & 0xFFFFFEFF;
    if ( a5 )
    {
      v18 = *(_DWORD *)(a5 + 8);
      *(_QWORD *)&v37[140] = *(_QWORD *)a5;
      *(_DWORD *)&v37[148] = v18;
    }
    if ( a6 )
    {
      v19 = *a6;
      v20 = *((_QWORD *)a6 + 16);
      v17 = &v37[4];
      v21 = a6[1];
      *(_DWORD *)v37 = 1;
      *(_OWORD *)&v37[4] = v19;
      v22 = a6[2];
      *(_OWORD *)&v37[20] = v21;
      v23 = a6[3];
      *(_OWORD *)&v37[36] = v22;
      v24 = a6[4];
      *(_OWORD *)&v37[52] = v23;
      v25 = a6[5];
      *(_OWORD *)&v37[68] = v24;
      v26 = a6[6];
      *(_OWORD *)&v37[84] = v25;
      v27 = a6[7];
      *(_OWORD *)&v37[100] = v26;
      *(_OWORD *)&v37[116] = v27;
      *(_QWORD *)&v37[132] = v20;
    }
    *(_DWORD *)v38 = a7;
    *(_DWORD *)&v38[4] = a8;
    *(_DWORD *)&v38[8] = a9;
    *(_QWORD *)&v38[12] = a11;
    SessionState = W32GetSessionState((_DWORD)v17, v16);
    if ( a10 && (v30 = *(_QWORD *)(SessionState + 96), v31 = *(unsigned int *)(v30 + 716), (unsigned int)v31 < 0x14) )
    {
      v32 = (_OWORD *)(v30 + 196 * v31 + 720);
      *v32 = v36;
      v32[1] = *(_OWORD *)v37;
      v32[2] = *(_OWORD *)&v37[16];
      v32[3] = *(_OWORD *)&v37[32];
      v32[4] = *(_OWORD *)&v37[48];
      v32[5] = *(_OWORD *)&v37[64];
      v32[6] = *(_OWORD *)&v37[80];
      v32 += 8;
      *(v32 - 1) = *(_OWORD *)&v37[96];
      *v32 = *(_OWORD *)&v37[112];
      v32[1] = *(_OWORD *)&v37[128];
      v32[2] = *(_OWORD *)&v37[144];
      v32[3] = *(_OWORD *)v38;
      *((_DWORD *)v32 + 16) = *(_DWORD *)&v38[16];
      v33 = *(_DWORD *)(v30 + 716) + 1;
      *(_DWORD *)(v30 + 716) = v33;
      if ( v33 > *(_DWORD *)(v30 + 4640) )
        *(_DWORD *)(v30 + 4640) = v33;
    }
    else
    {
      EtwUpdateEvent(a2, 1073741830LL);
      v15 = LpcRequestPort(Object, &v34);
    }
    ObfDereferenceObject(Object);
  }
  return v15;
}

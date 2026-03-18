/*
 * XREFs of ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x1400A6E6C
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400A8164 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall DwmWindowCreate(struct tagWND *a1, const struct tagWND *a2, const struct tagRECT *a3)
{
  struct _KPROCESS *v6; // rbx
  __int64 ProcessSequenceNumber; // r15
  unsigned int ProcessId; // r12d
  __int64 **v9; // rdx
  __int64 v10; // r13
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // xmm0
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+24h] [rbp-DCh]
  int v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+5Ch] [rbp-A4h]
  __int64 v26; // [rsp+64h] [rbp-9Ch]
  int v27; // [rsp+6Ch] [rbp-94h]
  int v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+74h] [rbp-8Ch]
  int v30; // [rsp+84h] [rbp-7Ch]
  __int128 v31; // [rsp+88h] [rbp-78h]
  __int128 v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  unsigned int v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+CCh] [rbp-34h]
  __int128 v38; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-10h]
  __int128 v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+10h]

  v38 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  _GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)&v38);
  DwmUpdateCloseButton(a1, 0);
  v6 = *(struct _KPROCESS **)(**((_QWORD **)a1 + 2) + 544LL);
  ProcessSequenceNumber = PsGetProcessSequenceNumber(v6);
  ProcessId = (unsigned int)PsGetProcessId(v6);
  v9 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
  v10 = **v9;
  v11 = (_DWORD *)*((_QWORD *)a1 + 5);
  v21 = v11[58];
  v20 = v11[6];
  v19 = v11[7];
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  v13 = *(_QWORD *)a1;
  v14 = (void *)ReferenceDwmApiPort(v11, v9);
  IncrementDWMWindowUniqueness(v16, v15, v17);
  if ( v14 )
  {
    memset_0(&v22, 0, 0xA4uLL);
    v23 = 0x8000;
    v31 = v38;
    v27 = v19;
    v32 = v39;
    v28 = v20;
    v33 = v40;
    v22 = 10748028;
    v18 = (__int128)*a3;
    v24 = 1073741841;
    v25 = v13;
    v29 = v18;
    v26 = v12;
    v30 = v21;
    v34 = v41;
    v35 = v10;
    v36 = ProcessId;
    v37 = ProcessSequenceNumber;
    EtwUpdateEvent(v12);
    LpcRequestPort(v14, &v22);
    ObfDereferenceObject(v14);
  }
}

/*
 * XREFs of DwmAsyncChildCreate @ 0x140190150
 * Callers:
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x140190008 (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DwmAsyncChildCreate(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 *a7,
        __int64 a8,
        __int128 *a9,
        int a10,
        __int64 a11)
{
  unsigned int v15; // ebx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  int v21; // [rsp+20h] [rbp-C1h] BYREF
  __int16 v22; // [rsp+24h] [rbp-BDh]
  int v23; // [rsp+48h] [rbp-99h]
  __int64 v24; // [rsp+4Ch] [rbp-95h]
  __int64 v25; // [rsp+54h] [rbp-8Dh]
  int v26; // [rsp+5Ch] [rbp-85h]
  int v27; // [rsp+60h] [rbp-81h]
  __int128 v28; // [rsp+64h] [rbp-7Dh]
  int v29; // [rsp+74h] [rbp-6Dh]
  __int128 v30; // [rsp+78h] [rbp-69h]
  __int128 v31; // [rsp+88h] [rbp-59h]
  __int128 v32; // [rsp+98h] [rbp-49h]
  __int64 v33; // [rsp+A8h] [rbp-39h]
  __int64 v34; // [rsp+B0h] [rbp-31h]
  int v35; // [rsp+B8h] [rbp-29h]
  __int64 v36; // [rsp+BCh] [rbp-25h]

  v15 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset_0(&v21, 0, 0xA4uLL);
    v16 = *a7;
    v17 = a7[1];
    v22 = 0x8000;
    v27 = a5;
    v29 = a6;
    v30 = v16;
    v34 = a8;
    v18 = a7[2];
    v35 = a10;
    v32 = v18;
    v36 = a11;
    v19 = *a9;
    v21 = 10748028;
    v31 = v17;
    v23 = 1073741841;
    *(_QWORD *)&v17 = *((_QWORD *)a7 + 6);
    v28 = v19;
    v24 = a2;
    v25 = a3;
    v26 = a4;
    v33 = v17;
    EtwUpdateEvent(a3, 1073741841LL);
    v15 = LpcRequestPort(Object, &v21);
    ObfDereferenceObject(Object);
  }
  return v15;
}

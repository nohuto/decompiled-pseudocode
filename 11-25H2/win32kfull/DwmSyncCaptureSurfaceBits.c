/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x14011861C
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x140118DBC (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        float a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        unsigned __int64 *a10)
{
  int v13; // ebx
  _DWORD *v14; // rsi
  int v15; // eax
  unsigned __int64 *v16; // rcx
  int v18; // [rsp+38h] [rbp-59h] BYREF
  __int16 v19; // [rsp+3Ch] [rbp-55h]
  int v20; // [rsp+60h] [rbp-31h]
  double v21; // [rsp+64h] [rbp-2Dh]
  unsigned __int64 v22; // [rsp+6Ch] [rbp-25h]
  int v23; // [rsp+74h] [rbp-1Dh]
  int v24; // [rsp+78h] [rbp-19h]
  int v25; // [rsp+7Ch] [rbp-15h]
  __int64 v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  __int64 v28; // [rsp+C8h] [rbp+37h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v13 = DwmSyncLPCAllowed();
    if ( v13 < 0 )
      goto LABEL_10;
    memset_0(&v18, 0, 0x58uLL);
    v22 = __PAIR64__(a5, a4);
    v14 = a9;
    v19 = 0x8000;
    v23 = a6;
    v24 = a7;
    v25 = *a9;
    v26 = a8;
    v18 = 5767216;
    v20 = -2147483641;
    v21 = a3;
    v27 = a2;
    EtwUpdateEvent(0LL, 2147483655LL);
    v28 = 88LL;
    v15 = LpcSendWaitReceivePort(Object, 0x20000LL, &v18, &v18, &v28, 0LL);
    v13 = v15;
    if ( v15 < 0 )
      goto LABEL_10;
    if ( v15 != 192 && v15 != 258 && (unsigned __int8)v19 == 2 )
    {
      if ( (_WORD)v18 != 20 )
      {
LABEL_10:
        ObfDereferenceObject(Object);
        return (unsigned int)v13;
      }
      if ( SLODWORD(v21) >= 0 )
      {
        v16 = a10;
        *v14 = HIDWORD(v21);
        *v16 = v22;
        goto LABEL_10;
      }
    }
    v13 = -1073741823;
    goto LABEL_10;
  }
  return (unsigned int)v13;
}

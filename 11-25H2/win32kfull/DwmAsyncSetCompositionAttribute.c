/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x140024C10
 * Callers:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024BA0 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v12; // [rsp+20h] [rbp-49h] BYREF
  int v13; // [rsp+22h] [rbp-47h]
  int v14; // [rsp+48h] [rbp-21h]
  int v15; // [rsp+4Ch] [rbp-1Dh]
  __int64 v16; // [rsp+50h] [rbp-19h]
  int v17; // [rsp+58h] [rbp-11h]
  int v18; // [rsp+5Ch] [rbp-Dh]
  __int128 v19; // [rsp+60h] [rbp-9h]
  __int64 v20; // [rsp+70h] [rbp+7h]

  v5 = a3;
  v8 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset_0(&v12, 0, 0x58uLL);
    v9 = *a4;
    v15 = 0;
    v10 = *((_QWORD *)a4 + 2);
    v13 = -2147483560;
    v14 = 1073741867;
    v16 = a2;
    v17 = v5;
    v18 = word_140353CA8[8 * v5];
    v19 = v9;
    v20 = v10;
    v12 = v18 + 24;
    v8 = LpcRequestPort(Object, &v12);
    ObfDereferenceObject(Object);
  }
  return v8;
}

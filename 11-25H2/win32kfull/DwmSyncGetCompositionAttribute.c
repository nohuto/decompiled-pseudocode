/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x140118C6C
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x140298E30 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x140118DBC (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-59h] BYREF
  __int16 v14; // [rsp+40h] [rbp-49h] BYREF
  int v15; // [rsp+42h] [rbp-47h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  __int64 v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  __int128 Src; // [rsp+80h] [rbp-9h] BYREF
  __int64 v22; // [rsp+90h] [rbp+7h]

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = DwmSyncLPCAllowed();
    if ( v8 >= 0 )
    {
      memset_0(&v14, 0, 0x58uLL);
      v9 = *(_OWORD *)a4;
      v10 = a4[2];
      v15 = -2147483560;
      v16 = 1073741867;
      v17 = 1;
      v18 = a2;
      v19 = v4;
      v20 = word_140353CA8[8 * v4];
      Src = v9;
      v22 = v10;
      v13 = 88LL;
      v14 = v20 + 24;
      v11 = LpcSendWaitReceivePort(Object, 0x20000LL, &v14, &v14, &v13, 0LL);
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( v11 == 192 || v11 == 258 || BYTE2(v15) != 2 )
          v8 = -1073741823;
        else
          memmove(a4, &Src, *(_QWORD *)&word_140353CA8[8 * v4]);
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}

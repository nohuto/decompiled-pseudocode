/*
 * XREFs of WheapOfflinePage @ 0x14084F0B4
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x14084E5CC (WheaPageOfflineAndPersist.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheapOfflinePage(__int64 a1, __int64 a2)
{
  int v4; // edi
  int MemoryDetails; // ebx
  LARGE_INTEGER v7; // [rsp+40h] [rbp-19h] BYREF
  __int128 v8; // [rsp+48h] [rbp-11h] BYREF
  char v9; // [rsp+58h] [rbp-1h]
  _DWORD Src[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+74h] [rbp+1Bh]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  unsigned __int64 v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]

  v7.QuadPart = -1LL;
  v8 = 0LL;
  v9 = 0;
  v4 = 0;
  MemoryDetails = PshedGetMemoryDetails(&v8);
  if ( MemoryDetails < 0 )
  {
    v4 = 1;
    goto LABEL_14;
  }
  if ( (BYTE2(v8) & 1) == 0 )
  {
    v4 = 7;
LABEL_5:
    MemoryDetails = -1073741823;
    goto LABEL_14;
  }
  if ( WORD3(v8) == 4 && *(_DWORD *)(a1 + 32) || WORD3(v8) == 5 && *(_DWORD *)(a1 + 32) != 2 )
  {
    v4 = 10;
    goto LABEL_5;
  }
  MemoryDetails = PshedTranslateDimmAddress(a1 + 4, &v7);
  if ( MemoryDetails >= 0 )
    WheapAttemptPhysicalPageOffline(v7, v7.QuadPart >> 12, (__int128 *)a1, 1, 0, 0, 0, a2);
  else
    v4 = 2;
LABEL_14:
  v16 = (unsigned __int64)v7.QuadPart >> 12;
  Src[0] = 1733060695;
  Src[1] = 1;
  v11 = 48LL;
  v13 = -2147483547;
  v12 = 1280201291;
  v14 = 2;
  v15 = 16;
  v17 = MemoryDetails;
  v18 = v4;
  WheaLogInternalEvent(Src);
  return (unsigned int)MemoryDetails;
}

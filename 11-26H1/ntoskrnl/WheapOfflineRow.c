/*
 * XREFs of WheapOfflineRow @ 0x14084F20C
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x14084E5CC (WheaPageOfflineAndPersist.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheapOfflineRow(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6; // r15d
  int MemoryDetails; // r14d
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  int v11; // eax
  __int64 v12; // rsi
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  __int64 v15; // [rsp+48h] [rbp-61h] BYREF
  __int128 v16; // [rsp+50h] [rbp-59h] BYREF
  char v17; // [rsp+60h] [rbp-49h]
  __int128 v18; // [rsp+68h] [rbp-41h] BYREF
  __int128 v19; // [rsp+78h] [rbp-31h]
  int v20; // [rsp+88h] [rbp-21h]
  _DWORD Src[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A4h] [rbp-5h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  __int64 v27; // [rsp+B0h] [rbp+7h]
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C4h] [rbp+1Bh]
  int v31; // [rsp+C8h] [rbp+1Fh]

  v20 = 0;
  v3 = -1LL;
  v14 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v4 = -1LL;
  v17 = 0;
  v19 = 0LL;
  v6 = 0;
  v16 = 0LL;
  MemoryDetails = PshedGetMemoryDetails(&v16);
  if ( MemoryDetails < 0 )
  {
    v6 = 1;
    goto LABEL_37;
  }
  if ( ((*(_DWORD *)((char *)&v16 + 2) >> 1) & 1) != 0 && BYTE8(v16) )
  {
    v6 = 5;
LABEL_6:
    MemoryDetails = -1073741637;
    goto LABEL_37;
  }
  if ( (BYTE2(v16) & 4) == 0
    || (BYTE2(v16) & 8) == 0
    || ((*(_DWORD *)((char *)&v16 + 2) >> 1) & 1) == 0
    || (BYTE2(v16) & 1) == 0 )
  {
    v6 = 7;
    goto LABEL_36;
  }
  v8 = *(_OWORD *)a1;
  v9 = *(_DWORD *)(a1 + 32);
  v10 = *(_OWORD *)(a1 + 16);
  v20 = v9;
  v18 = v8;
  v19 = v10;
  if ( WORD3(v16) == 4 )
  {
    if ( v9 != 1 )
    {
LABEL_13:
      v6 = 10;
LABEL_36:
      MemoryDetails = -1073741823;
      goto LABEL_37;
    }
    HIDWORD(v19) |= 0x400u;
  }
  else
  {
    if ( WORD3(v16) != 5 )
      goto LABEL_34;
    if ( v9 != 3 )
      goto LABEL_13;
    HIDWORD(v19) |= 0x800u;
  }
  LODWORD(v19) = 0;
  MemoryDetails = PshedTranslateDimmAddress((char *)&v18 + 4, &v14);
  if ( MemoryDetails < 0 )
  {
    v6 = 3;
    goto LABEL_37;
  }
  if ( WORD3(v16) == 4 )
  {
    v11 = *(unsigned __int16 *)((char *)&v16 + 9) - 1;
    HIDWORD(v19) |= 0x400u;
    goto LABEL_24;
  }
  if ( WORD3(v16) != 5 )
  {
LABEL_34:
    v6 = 9;
    goto LABEL_6;
  }
  v11 = *(unsigned __int16 *)((char *)&v16 + 9) - 1;
  HIDWORD(v19) |= 0x800u;
LABEL_24:
  LODWORD(v19) = v11;
  MemoryDetails = PshedTranslateDimmAddress((char *)&v18 + 4, &v15);
  if ( MemoryDetails < 0 )
  {
    v6 = 4;
    goto LABEL_37;
  }
  v4 = v15 >> 12;
  v3 = v14 >> 12;
  if ( (v15 >> 12) - (v14 >> 12) + 1 > *(unsigned __int16 *)((char *)&v16 + 11) )
  {
    v6 = 6;
    goto LABEL_36;
  }
  if ( *(_BYTE *)off_140E09638 )
  {
    WheaAttemptRowOffline(v14 >> 12, (__int64)&v18, v4 - v3 + 1, a2);
  }
  else if ( v3 <= v4 )
  {
    v12 = v14 >> 12;
    do
    {
      WheapAttemptPhysicalPageOffline((LARGE_INTEGER)(v12 << 12), v12, &v18, 1, 0, 0, 0, a2);
      ++v12;
    }
    while ( v12 <= v4 );
  }
LABEL_37:
  v28 = v4;
  Src[0] = 1733060695;
  v29 = v4 - v3;
  Src[1] = 1;
  v22 = 60LL;
  v24 = -2147483548;
  v23 = 1280201291;
  v25 = 2;
  v26 = 28;
  v27 = v3;
  v30 = MemoryDetails;
  v31 = v6;
  WheaLogInternalEvent(Src);
  return (unsigned int)MemoryDetails;
}

/*
 * XREFs of GetInterruptMessageInformation @ 0x140010A50
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 * Callees:
 *     FreeMsiInfo @ 0x1400115A0 (FreeMsiInfo.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  unsigned __int16 v1; // si
  __int64 v2; // rbx
  int v5; // eax
  unsigned __int16 v6; // bp
  void **v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  FreeMsiInfo(a1);
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 == 2 || v5 == 3 )
  {
    v6 = 0;
    if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v13) )
      goto LABEL_14;
    do
    {
      if ( v6 )
      {
        if ( v2 == *((_QWORD *)&v13[0] + 1) && *(_DWORD *)(a1 + 16) != 3 )
          *(_DWORD *)(a1 + 16) = 2;
      }
      else
      {
        v2 = *((_QWORD *)&v13[0] + 1);
      }
      ++v6;
    }
    while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v6, v13) );
    if ( !v6 )
    {
LABEL_14:
      v6 = 1;
      *(_DWORD *)(a1 + 16) = 1;
    }
  }
  else
  {
    v6 = 1;
  }
  v7 = (void **)(a1 + 280);
  *(_WORD *)(a1 + 272) = v6;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v6, 1701672526LL);
  if ( !*(_QWORD *)(a1 + 280) )
    goto LABEL_24;
  v8 = (24 * (unsigned int)*(unsigned __int16 *)(a1 + 272)) >> 2;
  if ( v8 )
    memset(*v7, 0, 4LL * v8);
  StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 272), 1701672526LL);
  if ( *(_QWORD *)(a1 + 288) )
  {
    v9 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 272)) >> 2;
    if ( v9 )
      memset(*(void **)(a1 + 288), 0, 4LL * v9);
    if ( *(_WORD *)(a1 + 272) )
    {
      do
      {
        v10 = v1;
        v11 = v1++;
        v12 = 24 * v10;
        *(_DWORD *)((char *)*v7 + v12) = v11;
        *(_QWORD *)((char *)*v7 + v12 + 8) = *(_QWORD *)(a1 + 288) + 16 * v10;
      }
      while ( v1 < *(_WORD *)(a1 + 272) );
    }
    return 1;
  }
  else
  {
LABEL_24:
    FreeMsiInfo(a1);
    return 0;
  }
}

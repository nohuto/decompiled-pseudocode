/*
 * XREFs of MiLogProcessWorkingSetsStart @ 0x1404DAE84
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiGenerateCompatibleWorkingSetRequestFlags @ 0x1404DB054 (MiGenerateCompatibleWorkingSetRequestFlags.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogProcessWorkingSetsStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int CompatibleWorkingSetRequestFlags; // eax
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  char v9; // r12
  int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // r8d
  unsigned __int16 *v15; // r10
  __int16 v16; // r11
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D8h]
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30[24]; // [rsp+88h] [rbp-80h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  CompatibleWorkingSetRequestFlags = MiGenerateCompatibleWorkingSetRequestFlags(a3, a2, a3, a3);
  v9 = *(_BYTE *)(v8 + 8);
  v10 = CompatibleWorkingSetRequestFlags;
  if ( !*(_DWORD *)v8 )
  {
    v3 = *(_QWORD *)(v6 + 56);
    v4 = *(_QWORD *)(v6 + 48);
  }
  v11 = *(_QWORD *)(v7 + 23248);
  v12 = *(_QWORD *)(v7 + 23456);
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    LOBYTE(CompatibleWorkingSetRequestFlags) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL);
    if ( (_BYTE)CompatibleWorkingSetRequestFlags )
    {
      v22 = *v15;
      v30[7] = v13;
      v30[4] = (__int64)&v22;
      v30[6] = (__int64)&v20;
      v30[8] = (__int64)&v21;
      v30[10] = (__int64)&v23;
      v30[12] = (__int64)&v24;
      v30[14] = (__int64)&v25;
      v30[16] = (__int64)&v26;
      v27 = *((_QWORD *)v15 + 2808);
      v30[18] = (__int64)&v27;
      v30[20] = (__int64)&v28;
      v30[22] = (__int64)&v29;
      LODWORD(v24) = v13;
      v30[5] = 4LL;
      LOBYTE(v20) = v9;
      LOWORD(v21) = v16;
      v30[9] = 2LL;
      v23 = v10;
      v30[11] = 4LL;
      v30[13] = 4LL;
      v25 = v3;
      v30[15] = 8LL;
      v26 = v4;
      v30[17] = 8LL;
      v30[19] = 8LL;
      v28 = v11;
      v30[21] = 8LL;
      v29 = v12;
      v30[23] = 8LL;
      LOBYTE(CompatibleWorkingSetRequestFlags) = tlgWriteEx_EtwWriteEx(
                                                   v14,
                                                   (int)&word_140058FF6,
                                                   v14,
                                                   v13,
                                                   v18,
                                                   v19,
                                                   0xCu,
                                                   (__int64)v30);
    }
  }
  return CompatibleWorkingSetRequestFlags;
}

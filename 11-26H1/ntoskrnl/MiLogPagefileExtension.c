/*
 * XREFs of MiLogPagefileExtension @ 0x1406FDA1C
 * Callers:
 *     MiAttemptPageFileExtension @ 0x140B318D8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogPagefileExtension(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _UNKNOWN **v6; // rax
  int v7; // ebx
  int v8; // edi
  int v9; // esi
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int16 *v14; // rax
  int v15; // edx
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D8h]
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp-60h]
  _DWORD v31[2]; // [rsp+B0h] [rbp-58h] BYREF
  int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  __int64 *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  __int64 *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  v6 = &retaddr;
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 4096LL);
    if ( (_BYTE)v6 )
    {
      v20 = v11;
      v28 = v31;
      v30 = *(_QWORD *)(v12 + 72);
      v31[0] = *(unsigned __int16 *)(v12 + 64);
      v32 = &v19;
      v34 = &v20;
      v36 = &v21;
      v38 = &v22;
      v40 = &v23;
      v24 = a6;
      v42 = &v24;
      v26 = a5;
      v44 = &v26;
      v14 = *(unsigned __int16 **)(v12 + 224);
      v29 = 2LL;
      v31[1] = 0;
      v19 = v10;
      v33 = 4LL;
      v35 = 4LL;
      v21 = v7;
      v37 = 4LL;
      v22 = v8;
      v39 = 4LL;
      v23 = v9;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 8LL;
      v15 = *v14;
      v46 = &v25;
      LODWORD(v25) = v15;
      v47 = 4LL;
      LOBYTE(v6) = tlgWriteEx_EtwWriteEx(v13, (unsigned __int8 *)&byte_140059143, v10, 1u, v17, v18, 0xCu, &v27);
    }
  }
  return (char)v6;
}

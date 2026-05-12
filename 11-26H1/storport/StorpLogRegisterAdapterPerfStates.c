/*
 * XREFs of StorpLogRegisterAdapterPerfStates @ 0x14005399C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorpLogRegisterAdapterPerfStates(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rbx
  int v4; // r9d
  __int64 v5; // rsi
  void *v6; // r10
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // r11
  char v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  char *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int64 *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v2 = &retaddr;
  v3 = *(_QWORD *)(a1 + 5024);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v8 = a1;
  if ( *(_BYTE *)(v3 + 28) )
  {
    v2 = (_UNKNOWN **)(a2 + 24);
    v9 = *(unsigned __int8 *)(v3 + 28);
    do
    {
      a1 = *((unsigned int *)v2 - 1);
      if ( (_DWORD)a1 )
      {
        if ( (_DWORD)a1 == 1 && !v6 )
        {
          v5 = (__int64)*v2;
          v6 = v2[1];
        }
      }
      else if ( *((_DWORD *)v2 - 2) == 3 && !v4 )
      {
        v4 = *(_DWORD *)v2;
      }
      v2 += 5;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)dword_140172178 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v25 = 16LL;
      v24 = v8 + 5128;
      v16 = v14;
      v26 = &v16;
      v18 = *(_QWORD *)(a2 + 8);
      v28 = &v18;
      v30 = &v17;
      v27 = 1LL;
      v29 = 8LL;
      v17 = v12;
      v31 = 4LL;
      v19 = *(_QWORD *)(v3 + 32);
      v32 = &v19;
      v33 = 8LL;
      v20 = *(_QWORD *)(v3 + 40);
      v34 = &v20;
      v36 = &v21;
      v38 = &v22;
      v35 = 8LL;
      v21 = v5;
      v37 = 8LL;
      v22 = v13;
      v39 = 8LL;
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(v10, (unsigned __int8 *)dword_140162A9B, v11, v12, 0xAu, &v23);
    }
  }
  return (char)v2;
}

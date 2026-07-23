/*
 * XREFs of HvSwapLogFiles @ 0x140AA879C
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140AA8A4C (HvpLogTypeToLogArrayIndex.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140AA8CA4 (HvGetEffectiveLogSizeCapForHive.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // eax
  char v5; // r10
  int v6; // r11d
  int *v7; // rsi
  int v8; // edx
  __int64 v9; // rbx
  int v10; // r9d
  int v11; // eax
  __int64 result; // rax
  bool v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-A0h] BYREF
  bool *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  HvGetEffectiveLogSizeCapForHive();
  v4 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 168), v2, v3);
  v7 = (int *)(a1 + 180);
  v8 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176);
  v9 = MEMORY[0xFFFFF78000000014];
  v10 = *(_DWORD *)(a1 + 8LL * v4 + 1816);
  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    v20 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 200);
    v22 = &v13;
    v14 = *(_DWORD *)(a1 + 280);
    v24 = &v14;
    v13 = v5 == 0;
    v15 = *(_DWORD *)(a1 + 188);
    v26 = &v15;
    v28 = &v16;
    v17 = *v7;
    v30 = &v17;
    v32 = &v18;
    v36 = &v20;
    v34 = &v19;
    v18 = v10;
    v19 = v8;
    v23 = 1LL;
    v25 = 4LL;
    v27 = 4LL;
    v16 = v6;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09EE8,
      (unsigned __int8 *)&word_140058046,
      0LL,
      0LL,
      0xAu,
      &v21);
  }
  v11 = *(_DWORD *)(a1 + 168) - 4;
  *v7 = 0;
  *(_QWORD *)(a1 + 200) = v9;
  *(_DWORD *)(a1 + 168) = 5 - (v11 != 0);
  result = *(unsigned int *)(a1 + 172);
  *(_DWORD *)(a1 + 176) = result;
  return result;
}

/*
 * XREFs of Register_ReadSecureMmio @ 0x14000B66C
 * Callers:
 *     XilRegister_ReadUchar @ 0x140006394 (XilRegister_ReadUchar.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadBufferUlong @ 0x140036C58 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong64 @ 0x14004A0D0 (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x14004A134 (XilRegister_ReadUshort.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, int a3, unsigned int a4, void *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // edi
  unsigned __int64 v13; // rsi
  int *p_P; // rbx
  int v15; // edx
  int v16; // edx
  __int64 v18; // [rsp+38h] [rbp-49h]
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  __int128 v20; // [rsp+48h] [rbp-39h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+70h] [rbp-11h]
  unsigned int v25; // [rsp+74h] [rbp-Dh]
  __int64 P; // [rsp+78h] [rbp-9h] BYREF
  int v27; // [rsp+80h] [rbp-1h]

  v27 = 0;
  P = 0LL;
  v8 = 8LL;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = 2LL;
        break;
      case 2:
        v9 = 4LL;
        break;
      case 3:
        v9 = 8LL;
        break;
      default:
        goto LABEL_6;
    }
  }
  else
  {
    v9 = 1LL;
  }
  v10 = v9 * a4;
  if ( v9 * (unsigned __int64)a4 > 0xFFFFFFFF )
  {
LABEL_6:
    v11 = a4;
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  v11 = a4;
  if ( !v10 )
    goto LABEL_7;
  v12 = v10 + 8;
  if ( v10 + 8 < v10 )
    goto LABEL_7;
  if ( v12 < 0x10 )
    v12 = 16;
LABEL_8:
  switch ( a3 )
  {
    case 0:
      v8 = 1LL;
      goto LABEL_12;
    case 1:
      v8 = 2LL;
      goto LABEL_12;
    case 2:
      v8 = 4LL;
      goto LABEL_12;
    case 3:
LABEL_12:
      v13 = v8 * v11;
      if ( v13 <= 0xFFFFFFFF )
        goto LABEL_14;
      break;
  }
  LODWORD(v13) = 0;
LABEL_14:
  if ( v12 <= 0x10 )
  {
    p_P = (int *)&P;
    v12 = 16;
LABEL_16:
    v21 = *(_QWORD *)(a1 + 128);
    v23 = a2;
    v19 = 0LL;
    v20 = 0LL;
    v22 = 10LL;
    v24 = a3;
    v25 = a4;
    if ( (int)SecureChannel_SendRequestSynchronously(v18, (GUID *)&v19, 56, (__int64)p_P, v12) >= 0 )
    {
      v15 = *p_P;
      if ( *p_P < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v15,
            6,
            76,
            (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
            *p_P);
        }
      }
      else
      {
        memmove(a5, p_P + 2, (unsigned int)v13);
      }
    }
    if ( p_P )
    {
      if ( p_P != (int *)&P )
        ExFreePoolWithTag(p_P, 0x49434858u);
    }
    return;
  }
  p_P = (int *)ExAllocatePool2(64LL, v12, 1229146200LL);
  if ( p_P )
    goto LABEL_16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v16,
      6,
      75,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v12);
  }
}

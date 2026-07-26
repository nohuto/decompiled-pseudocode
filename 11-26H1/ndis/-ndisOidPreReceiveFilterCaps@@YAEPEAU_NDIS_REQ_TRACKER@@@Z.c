/*
 * XREFs of ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AE230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

char __fastcall ndisOidPreReceiveFilterCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r15
  char v5; // di
  __int64 v6; // rax
  char v7; // xmm2_1
  int v8; // eax
  size_t v9; // r8
  unsigned __int16 *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  __int64 v13; // rax
  char v15[4]; // [rsp+40h] [rbp-B8h]
  __m128i v16; // [rsp+50h] [rbp-A8h]
  void *Src[2]; // [rsp+80h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = ndisCaptureIovOidContext(&v18, a1);
  v16 = *(__m128i *)v6;
  *(_OWORD *)Src = *(_OWORD *)(v6 + 48);
  v7 = _mm_srli_si128(*(__m128i *)v6, 8).m128i_u8[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v7,
      v3,
      v1);
  v8 = *(_DWORD *)(v1 + 4);
  if ( v8 == 2 || !v8 )
  {
    *((_DWORD *)a1 + 10) = 0;
    v9 = *(unsigned int *)(v1 + 48);
    if ( (unsigned int)v9 < 0x38 )
    {
      *(_DWORD *)(v1 + 56) = 56;
      v2 = -1073676268;
      v5 = 1;
      goto LABEL_22;
    }
    if ( !v16.m128i_i8[0] )
      goto LABEL_23;
    if ( *(_DWORD *)(v1 + 32) == 66081 )
      v10 = (unsigned __int16 *)Src[0];
    else
      v10 = (unsigned __int16 *)Src[1];
    if ( v10 )
    {
      v11 = v10[1];
      if ( v10[1] >= 0x54u )
        v11 = 84;
      if ( v11 < (unsigned int)v9 )
        v9 = v11;
      v12 = v9;
      memmove(*(void **)(v1 + 40), v10, v9);
      v13 = *(_QWORD *)(v1 + 40);
      v5 = 1;
      if ( v12 < 0x54 )
      {
        if ( v12 >= 0x38 )
        {
          *(_BYTE *)(v13 + 1) = 1;
          *(_WORD *)(v13 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v13 + 1) = 2;
        *(_WORD *)(v13 + 2) = 84;
      }
      *(_DWORD *)(v1 + 52) = v12;
      goto LABEL_22;
    }
  }
  v5 = 1;
  v2 = -1073741637;
LABEL_22:
  *((_DWORD *)a1 + 10) = v2;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v7,
      v3,
      v5,
      *(_DWORD *)v15);
  }
  return v5;
}
